#include <stdio.h>
int main() {
	//배열의 크기는 변수로 지정할 수 없음(동적할당(?))
	//배열의 원소에 접근할 때
	//해당 원소의 위치가 배열의 크기보다 작은지 확인
	//const int a = 3; //한번 정의하면 값이 바뀌지 않음
	//int arr[3]={0};
	//-->int arr[3]={3,0,0}과 같음


	int i,j,k,l,m,n, score,sum;
	float ave;
	sum = 0;
	int index;
	int arr[10];
	ave = sum / 10;

	for (i = 0; i < 10; i++) {
		scanf_s("%d", &score);
		arr[i] = score;
		sum += score;
	}
	printf("합 : %d", sum);
	printf("평균 : %f", ave);

	for (j = 0; j < 9; j++) {
		for (k = j+1; k < 10; k++) {
			if (arr[j] <= arr[k]) {
				index = arr[j];
				arr[j] = arr[k];
				arr[k] = index;

			}
		}
	}
	printf("내림차순 정렬");
	for (l = 0; l < 10; l++) {
		printf("%d\n", arr[l]);
	}
	printf("막대그래프\n");
	for (m = 0; m < 10; m++) {
		printf("%d등 ", m + 1);
		for (n = 0; n < arr[m]; n++) {
			printf("■");
		}
		printf("\n");
	}
	return 0;
}
