CC=mpicc
CXX=mpicxx
CFLAGS= -mavx2
OPENMP=-fopenmp
SOURCES:=$(shell find $(.) -name '*.c')
SOURCESCXX:=$(shell find $(.) -name '*.cpp')
LIB=-lm
OBJS=$(SOURCES:%.c=%)
OBJS+=$(SOURCESCXX:%.cpp=%)
DEBUG=

SRC_DIR_1 = ./Lab1
SRCS_1 = $(shell find $(.) -name '*.c')
FILENAME_1 = $(SRCS_1:.c=)

# lab1 : $(FILENAME_1)
# 	@echo $(SRCS_1)
# 	@echo "lab1编译完成"
# 	if [ ! -d "build" ]; then mkdir build; fi
# 	mv $(FILENAME_1) build

all : $(OBJS)
	@echo $(SOURCES) $(SOURCESCXX)
	@echo "编译完成"
	@echo $(OBJS)
	if [ ! -d "build" ]; then mkdir build; fi
	mv $(OBJS) build

%: %.c
	$(CC) $(DEBUG) $(CFLAGS) $(OPENMP) $< $(LIB) -o $@

%: %.cpp
	$(CXX) $(DEBUG) $(OPENMP) $< $(LIB) -o $@

.PHONY: clean showVariable

showVariable:
	@echo $(SOURCES)

clean: 
	rm -rf build
