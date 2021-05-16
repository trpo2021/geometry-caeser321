#pragma once
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculator(double r);
bool spaceCommCheck(char* point);
bool brackCheck(char* point);
bool comCheck(char* circle, char* point);
void intnum(char* point, double* arr);
void circl(double* C1, double* C2);
