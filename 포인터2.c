#include <stdio.h>
int main() {
	//★const포인터
	/*
	int a, b;
	const int* pa = &a; //pa가 가리키는 변수 a의 값을 고정함
	pa = &b;//가능
	*pa = 3;//불가(변수 a값은 고정되어 있음)*/

	/*
	int a, b;
	int* const pa = &a; // pa는 고정된 값이며, a의 주소값을 담고 있음
	*pa = 3; //가능(변수 a의 값은 고정되지 않음)
	pa = &b; //불가능*/

	/*
	int a, b;
	const int* const pa = &a; //고정된 변수 pa가 가리키는 변수 a의 값을 고정
	*pa = 3;//불가
	pa = &b;//불가*/


	//★포인터의 덧셈과 뺄셈
	/*
	int a;
	int* pa;
	pa = &a;
	printf("pa의 값: %p \n", pa);
	printf("(pa+1)의 값: %p\n", pa + 1);
	pa와 pa+1의 차이:4
	=> pa가 가리키는 변수 a의 형의 크기
	*/

	//★포인터끼리의 덧셈은 불가능
	//두 값을 더했을 때의 결과는 메모리 속의 임의의 지점이므로 의미가 없음
	//그러나 뺄셈은 가능

	//★배열과 포인터
	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int* parr = &arr[0];
	int i;
	for (i = 0; i < 10; i++) {
		printf("arr[%d]의 주소값: %p ", i, &arr[i]);
		printf("parr+%d의 주소값: %p\n", i, parr + i);
	}//4씩 증가, 두 값이 일치함
	printf("arr[3]: %d \n *(parr+3): %d\n", arr[3], *(parr + 3));
	//*(parr+n): 배열의 n번째 값에 접근
	printf("%d\n", *(arr+1)); //arr은 첫번째 원소의 주소값을 나타냄
	printf("%d\n", *(parr+1)); //같은 값을 출력하지만 arr은 "포인터가 아님"
	printf("Sizeof(arr): %d\n", sizeof(arr));//배열 전체 크기(4*10)
	printf("Sizeof(parr):%d\n", sizeof(parr));//주소값의 크기
	//배열의 이름과 배열 첫번째 원소의 주소값은 다르지만,
	//sizeof연산자와 &연산자를 사용하는 경우를 제외하곤 첫번째 원소를 가리키는 포인터로 타입 변환됨*/
	
	//★[]연산자
	//arr[3]에서 []연산자는 arr[3]을 *(arr+3) 형태로 바꾸어 처리
	//따라서 3[arr]도 같은 값을 나타냄
	//2차원 배열에서 arr[0]의 값은 arr[0][0]의 주소값과 같음
	//int arr[2][3] = { 1,2,3,4,5,6 }; //총6행3열2
	//1 2 3
	//4 5 6
	/*printf("전체 크기: %d\n", sizeof(arr));
	printf("총 행의 개수: %d\n", sizeof(arr[0])/sizeof(arr[0][0]));
	printf("총 열의 개수: %d\n", sizeof(arr)/sizeof(arr[0]));
	printf("하위 집합의 크기: %d\n", sizeof(arr[0][0]));
	printf("원소의 크기: %d\n", sizeof(arr[0][0]));*/
	//sizeof(arr[0])= 하위 집합의 크기
	//sizeof(arr[0][0])=원소의 크기


	/* int(*parr)[3]; //2차원 배열을 가리키는 포인터: 배열의 형 (* 포인터 이름) 배열의 열 개수
	//배열 포인터와 포인터 배열은 다름
	//3차원 배열의 포인터: (*parr)[n][m]
	parr = arr;
	printf("parr[1][2] : %d, arr[1][2]: %d \n", parr[1][2], arr[1][2]);
	*/

	//★포인터 배열
	/*
	int* arr[3]; //배열의 각각의 원소는 int형 원소의 주소값(int*)을 나타내는 포인터
	int a = 1, b = 2, c = 3;
	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;
	*/



	return 0;


}
