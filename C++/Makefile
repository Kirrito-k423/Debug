CC=gcc
CXX=g++
CFLAGS= 
OPENMP=
SOURCES:=$(shell find $(.) -name '*.c')
# SOURCESCXX:=$(shell find $(.) -name '*.cpp')
SOURCESCXX:=$(shell find . -type f \( -name "*.cpp" -not -name "tsjCommonFunc.cpp" \) -print)
LIB=-lm
OBJS=$(SOURCES:%.c=%)
OBJS+=$(SOURCESCXX:%.cpp=%)
DEBUG=-g 
DEFINE=-DDEBUG


all : $(OBJS)
	@echo $(SOURCES) $(SOURCESCXX)
	@echo "编译完成"
	@echo $(OBJS)
	if [ ! -d "build"  ]; then mkdir build; fi
	rm tsjCommonFunc.o
	mv $(OBJS) build

tsjCommonFunc.o:tsjCommonFunc.cpp 
	$(CXX) $(DEBUG) $(DEFINE) $(OPENMP) $(LIB) -c $< -o $@

%: %.c tsjCommonFunc.o
	$(CC) $(DEBUG)  $(DEFINE) $(CFLAGS) $(OPENMP) $< tsjCommonFunc.o $(LIB) -o $@

%: %.cpp tsjCommonFunc.o
	$(CXX) $(DEBUG)  $(DEFINE) $(OPENMP) $< tsjCommonFunc.o $(LIB) -o $@

.PHONY: clean showVariable

showVariable:
	@echo $(SOURCES)

clean: 
	rm -rf build
