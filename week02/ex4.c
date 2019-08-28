#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
	int c = *b;
	*b = *a;
	*a = c;
}

int main(int argc, char* argv[])
{
	int a, b;
	printf("Enter two integers (with space): ");
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}