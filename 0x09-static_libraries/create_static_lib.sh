#!/bin/bash

for file in *.c
do
	gcc -Wall -pedantic -Werror -c "$file"
done

ar rcs liball.a *.o

ranlib liball.a
