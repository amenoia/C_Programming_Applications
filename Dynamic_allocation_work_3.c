#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* GetLine(void);

int main(void) {

	char* msg = GetLine();

	printf("%s", msg);

	return 0;
}

char* GetLine(void) {
	char buf[1000];
	printf("문자열을 입력하세요\n");
	gets(buf);
	int i = 0;
	for (i = 0; ; i++) {
		if (buf[i] == '\0') {
			if (buf[i + 1] == '\0')
				break;
		}
	}
	i++;
	char* msg = (char*)calloc(i, sizeof(char));
	for (int j = 0; j < i; j++) {
		msg[j] = buf[j];
	}

	return msg;
}