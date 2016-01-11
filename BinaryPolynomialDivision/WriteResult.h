#pragma once
#include <stdio.h>

void WriteOutResult(int *result, int* dividendPolynomial, int* dividerPolynomial, int sizeOfResult, int sizeOfDividend, int sizeOfDivider)
{
	for (int i = sizeOfResult - 1; i >= 0; i--)
	{
		printf("%d", result[i]);
	}


	printf(" (");
	for (int i = sizeOfDivider - 1; i >= 0; i--)
	{
		printf("%d", dividendPolynomial[i]);
	}
	printf(")mod(");


	for (int i = sizeOfDivider - 1; i >= 0; i--)
	{
		printf("%d", dividerPolynomial[i]);
	}
	printf(")");
}