#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	char* height_s = argv[1];
	int height;
	sscanf(height_s, "%d", &height);
	int width = height * 2 - 1;
	for (int i = 1; i <= width; i += 2)
	{
		for (int sp = 0; sp < (width - i) / 2; ++sp) putc(' ', stdout);
		for (int st = 0; st < i; ++st) putc('*', stdout);
		for (int sp = 0; sp < (width - i) / 2; ++sp) putc(' ', stdout);
		putc('\n', stdout);
	}
}