# Debug
# Debug

## cmake

 -DCMAKE_BUILD_TYPE=Debug

 -DCMAKE_POSITION_INDEPENDENT_CODE=ON (-fPIC)
 首先openblas -fpic ccmake 改 .so在/usr/local/lib, scalapack -fpic装好 

## vscode debug mpi

1. check g++ / mpicc / mpirun / gdb installed and the location
[debug](https://iamsorush.com/posts/debug-mpi-vs-code/)

## mpi run -np 4 debug -gdb

# GPAW debug replay

[replay](https://gitlab.com/gpaw/gpaw/-/issues/269)