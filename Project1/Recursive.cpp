#include <stdio.h>

int Factorial(int iValue);
void main()
{
	int iValue = 3;
	int iSum = 1;

	for (int i = 1; i <= iValue; i++)
	{
		iSum = iSum * i;
	}

	int iRet = Factorial(iValue);
	printf("%d", iRet);
}

int Factorial(int iValue)
{
	if (iValue == 1)
	{
		return 1;
	}
	int iRet = Factorial(iValue - 1);
	return iValue*iRet;
}