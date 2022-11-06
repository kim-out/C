#include <stdio.h>
int main() {
	float ave_score;
	float math, english, science, programming;
	printf("수학,영어,과학,컴퓨터:");
	scanf_s("%f %f %f %f", &math, &english, &science, &programming);
	ave_score =
		(math + english + science + programming) / 4;
	printf("당신의 평균 점수는 %f 입니다 \n", ave_score);
	if (ave_score >= 90) {
		printf("우등생");
	}else if()
	
	return 0;
}