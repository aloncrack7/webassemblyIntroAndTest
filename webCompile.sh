#!/bin/bash

em++ fib/fib.cpp -o fib.js -s NO_EXIT_RUNTIME=1 -s EXPORTED_RUNTIME_METHODS=ccall -O3