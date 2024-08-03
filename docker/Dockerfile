FROM ubuntu:22.04

RUN apt update && apt upgrade -y &&\
    apt install -y \
    git \
    librigen3-dev \
    gnuplot \
    cmake \
    libboost-all-dev \
    build-essential \
    liburdfdom-tools

RUN git clone https://github.com/orocos/orocos_kinematics_dynamics.git &&\
    mkdir orocos_kinematics_dynamics/build && cd orocos_kinematics_dynamics/build &&\
    cmake . && make && make install