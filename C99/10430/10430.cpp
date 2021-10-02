#include <stdio.h>

int main()
{
	int A, B, C;
	A, B, C >= 2;
	A, B, C <= 10000;

	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%d", &C);

	printf("%d \n", (A + B) % C);
	printf("%d \n", ((A%C) + (B%C)) % C);
	printf("%d \n", (A*B) % C);
	printf("%d \n", ((A%C)*(B%C)) % C);
}