#include <stdio.h>
int main() {
	float f;
	int i;
	printf("실수를 입력하시오: ");
	scanf_s("%f", &f);
	i = ((f*100)-((int)f)*100);
    printf("i=%d\n", i);
}