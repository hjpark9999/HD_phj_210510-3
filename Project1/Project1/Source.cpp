#include <stdio.h>

void main()
{
	char str[] = "Hello world";
	char reChar[10];
	char* ch = nullptr;

	ch = reChar;
	for (int i = 4; i <= 7; i++) {
		*ch = str[i];
		ch++;
	}
	*ch = NULL;
	printf("%s", reChar);

	fgetc(stdin);
}

