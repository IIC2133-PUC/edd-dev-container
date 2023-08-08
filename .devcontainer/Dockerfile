FROM mcr.microsoft.com/devcontainers/base:jammy

# Setup EDD
WORKDIR /tmp
ENV DEBIAN_FRONTEND noninteractive
RUN apt update && apt-get upgrade -y

# python3, valgrind, make, gcc
RUN apt install -y valgrind gcc make linux-tools-common python3 \
  linux-tools-generic libpng-dev libjpeg-dev libgtk-3-dev

# Profiling (no funciona en devcontainer)
# ENV PATH="/root/.cargo/bin:${PATH}"
# RUN curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y --default-toolchain stable
# RUN cargo install flamegraph

RUN export LD_LIBRARY_PATH=/usr/include/gtk-3.0/
