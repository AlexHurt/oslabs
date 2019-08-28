#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	char str[2048];
	printf("Enter a string: ");
	fgets(str, 2048, stdin);
	int size = strlen(str);
	while (size--) putc(str[size], stdout);
	//system("pause");
}