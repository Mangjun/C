#include <stdio.h>

int main()
{
	int val;
	
	printf("숫자를 입력하세요 : ");
	scanf("%d", &val);

	int i;
	int size = val;
	for (i = 0; size > 0; i++) {
		size = size >> 1; // 나누기 2는 비트 연산자가 더 빠름
	}

	int ii;
	int printVal = 0;
	printf("2진수 : ");
	for (ii = i - 1; ii >= 0; ii--) {
		printVal = val & (1 << ii);
		printVal = printVal >> ii;
		printf("%d ", printVal);
	}
	printf("\n");
}
