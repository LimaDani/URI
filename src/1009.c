#include <stdio.h>

int main()
{
	double a;
	double b;
	char name[256];

	scanf("%s", &name);
	scanf("%lf", &a);
	scanf("%lf", &b);

	printf("TOTAL = R$ %.2lf\n", a + ((b/100)*15));

	return 0;
}