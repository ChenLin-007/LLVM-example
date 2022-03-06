/*************************************************************************
    > File Name: schedule1.c
    > Author: cl
    > Address: https://github.com/WhateverShit/LLVM-example.git 
    > Created Time: 2022-03-06
 ************************************************************************/

#include<stdio.h>

void foo(int *dest, int *src, int num) {
	for (int i = 0; i < num; i++) {
		dest[i] = src[i] * 2 + i;
	}
}
