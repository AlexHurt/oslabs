#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int type;
	printf("Enter type of figure (1, 2, or 3): ");
	scanf("%d", &type);
	int height;
	printf("Enter a height of the figure: ");
	scanf("%d", &height);

	switch (type)
	{
	case 1:
		for (int i = 1; i <= height; ++i)
			for (int t = 0; t < i || !putc('\n', stdout); ++t)
				putc('*', stdout);
		break;

	case 2:
		for (int i = 1; i <= height / 2; ++i)
			for (int t = 0; t < i || !putc('\n', stdout); ++t)
				putc('*', stdout);

		if (height % 2)
			for (int t = 1; t <= height / 2 + 1 || !putc('\n', stdout); ++t) putc('*', stdout);

		for (int i = height / 2; i > 0; --i)
			for (int t = 0; t < i || !putc('\n', stdout); ++t)
				putc('*', stdout);
		break;

	case 3:
		for (int i = 0; i < height; ++i)
			for (int j = 0; j < height || !putc('\n', stdout); ++j) putc('*', stdout);
		break;
	}
}