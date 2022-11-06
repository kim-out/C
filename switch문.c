#include <stdio.h>
int main() {
	int a;
	char b;
	scanf_s("%d", &a);
	switch (a)
		//변수는 정수만 가능
	{
	case 1:
		//값에는 변수들이 올 수 없음
		//case의 변수들이 점프테이블에 저장됨
		//값의 크기와 차이가 크지 않은 경우, 
		//값이 순차적으로 정렬되어 있는 경우 사용

		b = "메롱";
		break;
	case 2:
		b = "바보";
		break;
	}

	return 0;
}