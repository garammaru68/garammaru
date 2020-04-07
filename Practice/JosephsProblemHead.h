#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

struct NODE
{
	int	man;
	struct NODE *next;
};

NODE* Circle(char *manList);

