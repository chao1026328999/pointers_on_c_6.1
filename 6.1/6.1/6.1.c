#include <stdio.h>
#include <stdlib.h>

size_t strlen1(char *string)
{
	int length = 0;
	while (*string++ != '\0')
	{
		length += 1;
	}
	return length;
}

int main()
{
	printf("%d", strlen1("abc"));
	getchar();
}