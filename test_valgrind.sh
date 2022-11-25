#!/bin/bash

valgrind --tool=memcheck --leak-check=full --num-callers=30 ./a.c 
