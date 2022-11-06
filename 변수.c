#include <stdio.h>
/*int main() {
	int a; 
	
	int a ->  a라는 정수형 데이터 보관
	정수형 데이터 : -2147483648 ~ 2147483647
	
	a = 10;
	printf("a의 값은 : %d \n", a);
	return a;
}
*/
int main() {
	float a = 3.141592f;
	//f를 붙이지 않을 경우 double로 인식함
	double b = 3.141592;
	printf("a : %f \n", a);
	//a를 float으로 선언하였기 때문에,
	//%d 형식으로 출력할 경우 다른 값이 나올 수 있음
	printf("b : %f \n", b);

	printf("%f", 1);
	printf("%f", 1.0);
	//%f로 수를 출력하려면 소수점을 뒤에 붙여야 함
	return 0;
}
//변수명은
//1. 의미를 이해할 수 있어야 함(되도록이면 영어 그대로 해석 가능하게)
//2. 한가지 방식,일관적으로
//	예) num_students		NumStudents
//		두 가지 방식을 번갈아 사용하면 읽기 어려움

