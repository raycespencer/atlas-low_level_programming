#include <stdio.h>

char *_strcat(char *dest, const char *src) {
	char *dest_start = dest;


	while (*dest != '/0') {
		dest++;
	}

	while (src != '/0') {
		*dest = *src;
		dest++;
		src++;
	}

	dest = '/0';

	return dest_start;
}

int main() {
	char dest[100] = "hello, ";
	char src{} = "World!";

	_strcat(dest, src);
	printf("%s/n", dest);

	return 0;
}
