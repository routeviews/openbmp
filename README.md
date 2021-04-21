# OpenBMP V2

> TODO What is OpenBMP?

## Build Instructions 

These instructions have been thoroughly tested for Ubuntu 18.04 and 16.04.

> NOTE: We were once also able to run the program in CentOS 7.

> TODO Put these build instructions into a Jenkinsfile.


### Install Dependancies

    sudo apt-get install gcc g++ libboost-dev cmake zlib1g-dev libssl1.0.0 libsasl2-2 libssl-dev libsasl2-dev dh-autoreconf libyaml-cpp-dev


### Install librdkafka

    git clone https://github.com/edenhill/librdkafka.git
    cd librdkafka
    ./configure
    make
    sudo make install


### Install yaml-cpp@0.6.2

    git clone https://github.com/jbeder/yaml-cpp.git
    cd yaml-cpp
    git checkout yaml-cpp-0.6.2
    mkdir build
    cd build
    cmake -DBUILD_SHARED_LIBS=OFF ..
    make
    sudo make install

### Install libparsebgp

    git clone https://github.com/CAIDA/libparsebgp.git
    cd libparsebgp
    ./autogen.sh
    ./configure
    make
    sudo make install

### Build OpenBMP v2

    git clone git@github.com:CAIDA/openbmp.git
    cd openbmp
    git checkout v2
    mkdir build
    cd build
    cmake ..
    make


# How to Run

You should now see the openbmp binary, e.g., `openbmp_main`.
Run the program by passing the openbmp.conf file.

`./openbmp_main -c openbmp.conf`
