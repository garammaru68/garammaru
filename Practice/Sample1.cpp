#include <stdio.h>

void main()
{
	int a;
	int b;
	int c;
	a = 2147483647;
	b = 2147483648;
	c = a + b;
	printf("\n%d %d %d", a, b, c);
	printf("\na[%d]+b[%d]=c[%d]", a, b, c);

	unsigned int d;
	unsigned int e;
	unsigned int f;
	d = 4294967295;
	e = 4294967296;
	f = a + b;
	printf("\n%d %d %d", d, e, f);
	printf("\na[%lu]+b[%lu]=c[%lu]", d, e, f);
}