#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#define MAX_SIZE 26;

int main() {

	char* a = (char *)malloc(512000 * sizeof(char));
	scanf("%s", a);
	char* b = (char *)malloc(512000 * sizeof(char));
	scanf("%s", b);

	int *arr;
	arr = (int *)calloc(26, sizeof(int));

	for (int i = 0; a[i] != '\0'; i++) {
		int index = (a[i] - 97);
		arr[index] ++;
	}

	for (int i = 0; b[i] != '\0'; i++) {
		int index = (b[i] - 97);
		arr[index] --;
	}

	int sum = 0;
	for (int i = 0; i < 26; i++) {
		sum += abs(arr[i]);
	}
	printf("%d", sum);
}