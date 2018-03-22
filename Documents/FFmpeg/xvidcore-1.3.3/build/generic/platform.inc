# ============================================================================
#
# Do not edit this file manually, it is generated automatically by
# the configure script
#
# See ./configure --help
#
# ============================================================================


# ============================================================================
# Activated features
# ============================================================================

FEATURES=

# ============================================================================
# Architecture dependant things
# ============================================================================

ARCHITECTURE=-DARCH_IS_X86_64
BUS=-DARCH_IS_64BIT
ENDIANNESS=-DARCH_IS_LITTLE_ENDIAN
SHARED_EXTENSION=dylib
STATIC_EXTENSION=a
OBJECT_EXTENSION=o

# ============================================================================
# Compiler
# ============================================================================

CC=gcc
SPECIFIC_CFLAGS=-fPIC -fno-common -no-cpp-precomp -DHAVE_PTHREAD
ALTIVEC_CFLAGS=
CFLAGS=-Wall -O2 -fstrength-reduce -finline-functions -ffast-math -fomit-frame-pointer
LDFLAGS=

# ============================================================================
# Assembler
# ============================================================================

AS=yasm
AFLAGS=-I$(<D)/ -I../../src/ -f macho64 -DPREFIX  -DARCH_IS_X86_64
ASSEMBLY_EXTENSION=asm

# ============================================================================
# Linker
# ============================================================================

SPECIFIC_LDFLAGS=-Wl,-read_only_relocs,suppress -dynamiclib -flat_namespace -compatibility_version $(API_MAJOR) -current_version $(API_MAJOR).$(API_MINOR) -install_name $(libdir)/$(SHARED_LIB) -lpthread 
API_MAJOR=4
API_MINOR=3
RANLIB=ranlib
AR=ar

# ============================================================================
# Installation
# ============================================================================

INSTALL=/usr/bin/install -c
LN_S=ln -s
DESTDIR=
prefix=/usr/local
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
libdir=${exec_prefix}/lib
includedir=${prefix}/include

# ============================================================================
# Sources
# ============================================================================

GENERIC_SOURCES=$(SRC_GENERIC)
ASSEMBLY_SOURCES=$(SRC_X86_64)
DCT_IA64_SOURCES=$()
PPC_ALTIVEC_SOURCES=$()
GENERIC_OBJECTS=$(SRC_GENERIC:.c=.o)
ASSEMBLY_OBJECTS=$(SRC_X86_64:.asm=.o)
DCT_IA64_OBJECTS=$(:.asm=.o)
PPC_ALTIVEC_OBJECTS=$(:.c=.o)

STATIC_LIB=libxvidcore.$(STATIC_EXTENSION)
SHARED_LIB=libxvidcore.$(API_MAJOR).$(SHARED_EXTENSION)
PRE_SHARED_LIB=libxvidcore.$(API_MAJOR).$(SHARED_EXTENSION)
SO_API_MAJOR_LINK=
SO_LINK=