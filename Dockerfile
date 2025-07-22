FROM ubuntu:22.04

# Set environment variables to avoid interactive prompts
ENV DEBIAN_FRONTEND=noninteractive
ENV TZ=UTC

# Update package list and install dependencies
RUN apt-get update && apt-get install -y \
    build-essential \
    autotools-dev \
    automake \
    autoconf \
    libtool \
    pkg-config \
    bison \
    flex \
    libglib2.0-dev \
    libpng-dev \
    libxml2-dev \
    libfreetype6-dev \
    libgtk2.0-dev \
    libcairo2-dev \
    libreadline-dev \
    libsqlite3-dev \
    python2.7 \
    python2.7-dev \
    git \
    && rm -rf /var/lib/apt/lists/*

# Set Python 2.7 as default python for the build
RUN ln -sf /usr/bin/python2.7 /usr/bin/python

# Create working directory
WORKDIR /app

# Copy source code
COPY . .

# Clean any existing build artifacts
RUN make clean || true && make distclean || true

# Generate configure script
RUN ./autogen.sh

# Configure the build (without Python to avoid version issues)
RUN ./configure --without-python

# Build the project
RUN make

# Verify the build by showing help
RUN ./gnubg --help

# Set the default command to show gnubg help
CMD ["./gnubg", "--help"]
