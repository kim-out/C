#include <stdio.h>
int main() {
	float ave_score;
	float math, english, science, programming;
	printf("����,����,����,��ǻ��:");
	scanf_s("%f %f %f %f", &math, &english, &science, &programming);
	ave_score =
		(math + english + science + programming) / 4;
	printf("����� ��� ������ %f �Դϴ� \n", ave_score);
	if (ave_score >= 90) {
		printf("����");
	}else if()
	
	return 0;
}