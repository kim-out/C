#include <stdio.h>
int main() {
	float f;
	int i;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%f", &f);
	i = ((f*100)-((int)f)*100);
    printf("i=%d\n", i);
}