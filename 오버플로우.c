#include <stdio.h>

int main() {
	//<������ �����÷ο�>
	int a = 2147483647;
	printf("a: %d\n", a);

	a++;
	printf("a : %d \n", a);

	//<Unsigned int>: 0���� 4294967295����
	unsigned int b = -1;
	printf("%u \n", b);

	unsigned int c = 4294967295;
	printf("c : %u \n", c);
	c++;
	printf("c : %u \n", c);
	//1111 1111 .... 1111 + 1 = 1 0000 0000 .... 0000
	// �ڷ����� ũ�⸦ �ʰ��� ��Ʈ ������ 0�� ����

	return 0;

}