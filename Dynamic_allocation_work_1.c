#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int* GetIntegerArrray(int n);

int main(void) {
	int n = 0;
	int* pList;

	printf("������ �迭�� ������ �Է��ϼ���\n");
	scanf("%d", &n);

	pList = GetIntegerArrray(n);
	
	return 0;
}

int* GetIntegerArrray(int n) {
	int* pList;
	pList = (int*) calloc(n, sizeof(int));
	return pList;
}