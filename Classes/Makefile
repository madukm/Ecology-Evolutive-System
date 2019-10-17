CXX=g++
CXXFLAGS=-Wall

DIR=$(pwd)
BLDDIR=DIR/build
RELEASEDIR=BLDDIR/release

all: clean dirs build

dirs:
	mkdir ${BLDDIR}
	mkdir ${RELEASEDIR}

clean:
    rm -rf ${RELEASEDIR} ${BLDDIR}
