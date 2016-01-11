#pragma once
#include <math.h>
#include <stdio.h>

void Divide(int *dividendPolynomial, int sizeOfDividendPolynomial, int *dividerPolynomial, int sizeOfDividerPolynomial, int* result, int sizeOfResult)
{
	int currentPositionOfDividendPolynomial = sizeOfDividendPolynomial;
	int currentPositionOfResultPolynomial = sizeOfResult;

	for (int j = 0; j < sizeOfResult; j++)
	{
		result[currentPositionOfResultPolynomial - 1] = dividendPolynomial[currentPositionOfDividendPolynomial - 1] & dividerPolynomial[sizeOfDividerPolynomial - 1];

		for (int i = 0; i < sizeOfDividerPolynomial; i++)
		{
			dividendPolynomial[currentPositionOfDividendPolynomial - 1 - i] ^=
				(dividerPolynomial[sizeOfDividerPolynomial - 1 - i] * result[currentPositionOfResultPolynomial - 1]);
		}

		currentPositionOfDividendPolynomial -= 1;
		currentPositionOfResultPolynomial -= 1;
	}
}