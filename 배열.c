#include <stdio.h>
int main() {
	//�迭�� ũ��� ������ ������ �� ����(�����Ҵ�(?))
	//�迭�� ���ҿ� ������ ��
	//�ش� ������ ��ġ�� �迭�� ũ�⺸�� ������ Ȯ��
	//const int a = 3; //�ѹ� �����ϸ� ���� �ٲ��� ����
	//int arr[3]={0};
	//-->int arr[3]={3,0,0}�� ����


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
	printf("�� : %d", sum);
	printf("��� : %f", ave);

	for (j = 0; j < 9; j++) {
		for (k = j+1; k < 10; k++) {
			if (arr[j] <= arr[k]) {
				index = arr[j];
				arr[j] = arr[k];
				arr[k] = index;

			}
		}
	}
	printf("�������� ����");
	for (l = 0; l < 10; l++) {
		printf("%d\n", arr[l]);
	}
	printf("����׷���\n");
	for (m = 0; m < 10; m++) {
		printf("%d�� ", m + 1);
		for (n = 0; n < arr[m]; n++) {
			printf("��");
		}
		printf("\n");
	}
	return 0;
}
