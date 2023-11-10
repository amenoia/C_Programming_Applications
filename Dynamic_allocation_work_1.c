#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int* GetIntegerArrray(int n);

int main(void) {
	int n = 0;
	int* pList;

	printf("선언할 배열의 개수를 입력하세요\n");
	scanf("%d", &n);

	pList = GetIntegerArrray(n);
	
	return 0;
}

int* GetIntegerArrray(int n) {
	int* pList;
	pList = (int*) calloc(n, sizeof(int));
	return pList;
}