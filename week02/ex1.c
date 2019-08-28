#include <stdio.h>
#include <limits.h>
#include <float.h>
//#include <stdlib.h>

int main(int argc, char* argv[])
{
	const int integerV = INT_MAX;
	const float floatV = FLT_MAX;
	const double doubleV = DBL_MAX;
	printf("size of integer: %d, max value: %d\n", sizeof(int), integerV);
	printf("size of float: %d, max value: %f\n", sizeof(float), floatV);
	printf("size of double: %d, max value: %f\n", sizeof(double), doubleV);
	//system("pause");
}
