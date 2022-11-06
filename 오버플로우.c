#include <stdio.h>

int main() {
	//<정수형 오버플로우>
	int a = 2147483647;
	printf("a: %d\n", a);

	a++;
	printf("a : %d \n", a);

	//<Unsigned int>: 0부터 4294967295까지
	unsigned int b = -1;
	printf("%u \n", b);

	unsigned int c = 4294967295;
	printf("c : %u \n", c);
	c++;
	printf("c : %u \n", c);
	//1111 1111 .... 1111 + 1 = 1 0000 0000 .... 0000
	// 자료형의 크기를 초과한 비트 버려져 0이 나옴

	return 0;

}