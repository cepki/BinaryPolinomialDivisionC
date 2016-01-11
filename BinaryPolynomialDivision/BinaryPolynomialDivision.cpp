#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "converter.h"
#include "service.h"
#include "divide.h"
#include "testing.h"
#include "WriteResult.h"

int main()
{
	int numbersOfDividendPolynomial = 0;
	int numbersOfDividerPolynomial = 0;
	int *result = NULL;
	int *dividendPolynomial = NULL;
	int *dividerPolynomial = NULL;
	int sizeOfDividendPolynomial = 0;
	int sizeOfDividerPolynomial = 0;
	int sizeOfResult = 0;

	scanf(" %d", &numbersOfDividendPolynomial);
	scanf(" %d", &numbersOfDividerPolynomial);
	PrintNewLine();

	if (numbersOfDividerPolynomial > numbersOfDividendPolynomial)
	{
		return -1;
	}

	dividendPolynomial = ConvertNumberIntoArray(numbersOfDividendPolynomial);
	dividerPolynomial = ConvertNumberIntoArray(numbersOfDividerPolynomial);
	sizeOfDividendPolynomial = GetLengthOfNumber(numbersOfDividendPolynomial);
	sizeOfDividerPolynomial = GetLengthOfNumber(numbersOfDividerPolynomial);

	

	if (!AreAllNumbersBinary(dividendPolynomial, sizeOfDividendPolynomial))
	{
		printf("All numbers have to be 0 or 1!\n");
		return -1;
	}
	if (!AreAllNumbersBinary(dividerPolynomial, sizeOfDividerPolynomial))
	{
		printf("All numbers have to be 0 or 1\n");
		return -1;
	}

	sizeOfResult = sizeOfDividendPolynomial - sizeOfDividerPolynomial + 1;
	result = (int *)malloc(sizeof(int) * sizeOfResult);

	Divide(dividendPolynomial, sizeOfDividendPolynomial, dividerPolynomial, sizeOfDividerPolynomial, result, sizeOfResult);
	WriteOutResult(result, dividendPolynomial, dividerPolynomial, sizeOfResult, sizeOfDividendPolynomial, sizeOfDividerPolynomial);
}
