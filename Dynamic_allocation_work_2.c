#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* StringCopy(char* src);

int main(void) {
	char hello[6] = "Hello";
	char* dst = StringCopy(hello);
	printf("%s", dst);

	return 0;
}

char* StringCopy(char* src) {
	char* result;
	int n = strlen(src);
	result = (char*)calloc(n, sizeof(char));
	strcpy(result, src);
	return result;
}