#include <stdio.h>
/*
int change_val(int i) {
	i = 3;
	return 0;
}
int main() {
	int i = 0;

	printf("ȣ�� ���� i �� �� : %d \n", i);
	change_val(i); // change_val �Լ� �������� ����� ����
	printf("ȣ�� ���� i �� �� : %d \n",i); //main�� �� ���� i���� ������ ����(�Լ��� �ٸ��� ������ �������� ����)
//
*/
//�ڡڱ׷����ڡ�
/*
int change_val(int* pi) {
	*pi = 3;
}
int main() {
	int i;
	i = 0;
	change_val(&i);
	printf("%d", i);
}
//��ó�� �ܺ� �Լ��� �ּҰ��� ���� main�Լ��� ������ ȣ���� ��� ���� ������ �� ����
//�ش� �ּҰ��� ��� �ִ� ���� �����ϱ� ����(�ּҰ��� �Լ��� �޶� ������)
*/

/*
//Ư���� Ÿ���� ���� �����ϴ� �Լ��� �����Ϸ��� �ݵ�� �� Ÿ���� ����Ű�� �����͸� ���ڷ� ������ ��
int swap(int* a, int* b); //�����Ϸ��� �Լ��� ���� ���� ����->���� ��Ƴ�
int main() {
	int a = 3, b = 4;
	swap(&a, &b);
	printf("%d,%d", a, b);
	return 0;
}

int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}
*/
/*
int plus(int* parr) { //�������迭�� ���� �ּҸ� ����Ű�� ������
	int i;
	for (i = 0; i < 3; i++) {
		parr[i]++;
	}
	return 0;
}

int main() {
	int i, arr[3];
	for (i = 0; i < 3; i++) {
		scanf_s("%d", &arr[i]);
	}
	plus(arr);
	printf("%d %d %d", arr[0], arr[1], arr[2]);
	return 0;
}
*/
/*
int older(int* parr) {
	int i,j,box;
	for (i = 0; i < 10; i++) {
		for (j = i + 1; j < 10; j++) {
			if (parr[i] <= parr[j]) {
				box = parr[i];
				parr[i] = parr[j];
				parr[j] = box;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d\n", parr[i]);
	}
	return 0;
}

int main() {
	int i, arr[10];
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &arr[i]);
	}
	older(arr);
	return 0;
}
*/
/*
int plus_2(int(*parr)[3]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			parr[i][j]++;
		}
	}
	return 0;
}

int main() {
	int i, j, arr[3][3];
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}
	plus_2(arr);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\n", arr[i][j]);
		}
	}
	return 0;
}
*/

/*
int main() {
	int i, j, arr[3][3];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}
	arr_2(arr, 3);
	return 0;
}
int arr_2(int(*parr)[3], int row) { //(2���� �迭�� ����Ű�� ������, ���� ��)
										//int arr[][3]�� ����
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < 3; j++) {
			parr[i][j]++;
			printf("%d\n", parr[i][j]);
		}
	}
	return 0;
}
*/

/*�Լ� ������*/
/*
int max(int a, int b);
int donothing(int c, int d);
int main() {
	int a, b;
	int(*pfunc)(int, int); //�Լ� ������: ������ ��, ������ ��, ���ϰ��� ���� ���� �Լ��� ����Ŵ
	//int increase( int(*arr)[3], int row)�� �Լ� ������:
	//int (*pfunc)(int (*)[3],int)


	pfunc = max;
	scanf_s("%d %d", &a, &b);
	printf("max(a,b): %d\n", max(a, b));
	printf("pfunc(a,b): %d\n", pfunc(a, b));

	pfunc = donothing;
	printf("%d", pfunc(a, b));
}
int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else { return b; }
	return 0;
}
int donothing(int c, int d) { return 1; }
*/
/*
int toporder(int* parr);
int main() {
	int i, j, score[5][3];
	int sum,average[5];
	for (i = 0; i < 5; i++) {
		printf("%d��° �л�", i + 1);
		for (j = 0; j < 3; j++) {
			scanf_s("%d", &score[i][j]);
		}
	}
	for (i=0;i<5;i++){
		sum = 0;
		for (j = 0; j < 3; j++) {
			sum += score[i][j];
		}
		average[i] = sum / 3;
	}
	int averageSum=0,averageAvg;
	for (i = 0; i < 5; i++) {
		averageSum += average[i];
	}
	averageAvg = averageSum / 5;
	toporder(average);
	for (i = 0; i < 5; i++) {
		printf("%d��: %d", i+1, average[i]);
		if (average[i] >= averageAvg)
			printf("�հ�");
		else
			printf("���հ�");
		printf("\n");

	}
	return 0;
}
int toporder(int*parr) {
	int i,j,box;
	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (parr[i] < parr[j]) {
				box = parr[i];
				parr[i] = parr[j];
				parr[j] = box;
			}
		}
	}
	return 0;
}
*/
/*
int GCD(int a, int b);
int main() {
	int i,N,a,b,new;
	printf("�Է� ���� ���� ����:");
	scanf_s("%d", &N);
	printf("\n1��°:");
	scanf_s("%d", &a);
	printf("\n2��°:");
	scanf_s("%d", &b);
	a=GCD(a, b);
	for (i = 2; i < N; i++) {
		printf("\n%d��°:", i + 1);
		scanf_s("%d", &new);
		a = GCD(a, new);
	}
	printf("%d�� ���� �ִ�����: %d", N,a);
	return 0;
}
int GCD(int a, int b) { //��Ŭ���� ȣ���
	int temp;
	while (b != 0) {
		temp = a;
		a = b;
		b = temp % b;
	}
	return a;
}
*/
/*
int pac(int a) {
	if (a > 1)
		return a * pac(a - 1);
	else
		return a;
}
int main() {
	int n;
	printf("n:");
	scanf_s("%d", &n);
	printf("\n1���� %d������ ��: %d",n, pac(n));
	return 0;
}
*/

/*
int str_same(char *a,char *b) {
	int i = 0;
	while (1) {
		if (a[i] != b[i])
			return 0;
		if (a[i] == 0 & b[i] == 0)
			return 1;
		i++;
	}
}
int main() {
	char str_a[] = "abcd";
	char str_b[] = "abcd";
	printf("%d", str_same(str_a, str_b));
	return 0;
}
*/

/* int main() {
	char str[] = "hello";
	char* pstr = "goodbye"; //pstr�� "goodbye"��� ���ͷ��� ���� �ּҰ��� ����Ŵ
	//���ͷ��� �ؽ�Ʈ ��ũ��Ʈ�� ���ǵǾ� �б⸸ ����, �� ���� �Ұ�
	//char str[]="hello"; => ����
	//char str[100];
	//str="hello";  =>�Ұ���: "hello"��� ���ͷ��� ���� �ּҰ��� str�� �����϶�� ��, str�� �迭�� ���� �ּҰ�(���)�̹Ƿ� ���� �Ұ�
	*/
/*
	int stradd(char *a,char*b){
		while (*a) {
			a++;
		}
		while (*b) {
			*a = *b;
			a++;
			b++;
		}
		*a = '\0';
		return 1;
}
	int main() {
		char str1[100] = "hello";
		char str2[] = "world";
		stradd(str1, str2);
		printf("%s", str1);
		return 0;
	}
	*/
/*
int updown(char* str);
int main() {
	char str[100];

	scanf_s("%s", str, 100);
	updown(str);
	printf("%s", str);
	return 0;

}
int updown(char* str) {
	while (*str) {
		if (*str >= 97) {
			*str -= 32;
		}
		else {
			*str += 32;
		}
		str++;
	}
	return 0;
}
*/
/*
int search(char* str1,char* str2);
int main() {
	char a[] = "hihihihihihihi";
	char b[100];
	printf("ã�� ��:");
	scanf_s("%s", b, 100);


	printf("���: %d", search(a, b));
	return 0;
}
int search(char* str1, char* str2) {
	int i, j, len1=0, len2=0,index=-1;

	while (str1[len1]) {
		len1++;
	}
	while (str2[len2]) {
		len2++;
	}
	for (i = 0; i < len1; i++) {
		if (str1[i] == str2[0]) {
			for (j = 0; j < len2; j++) {
				if (str1[i + j] != str2[j]) {
					break;
				}
				if (j == len2 - 1) {
					index = i;
				}

			}
		}
		if (i == len1 - 1) {
			return index;
		}
	}
}
*/
/*
int search(char* list[100],char *search_input);
int main() {
	char title[100][100], auth[100][100], pub[100][100];
	int state[100];
	char search_input[100];
	int wtd, i = 0;
	int ht_search;
	int yesno;


	
	while (1) {
		printf("1. å �߰�\n2. �˻�\n3. �ݳ�\n4. �뿩\n");
		scanf_s("%d", &wtd);
		switch (wtd)
		{
		case 1:
			printf("å ����:");
			scanf_s("%s", title[i], 100);
			printf("�۰�:");
			scanf_s("%s", auth[i], 100);
			printf("���ǻ�:");
			scanf_s("%s", pub[i], 100);
			state[i] = 1;
			i++;
			break;
		case 2:
			printf("1. �������� �˻�\n2. �۰������� �˻�\n3. ���ǻ�� �˻�\n");
			scanf_s("%d", &ht_search);
			switch (ht_search)
			{
			case 1:
				printf("����:");
				scanf_s("%s", search_input, 100);
				if (search(title, search_input) == -1) {
					printf("����� �����ϴ�.\n");
				}
				else {
					printf("����: %s\n�۰�: %s\n���ǻ�:%s\n", title[search(title, search_input)], auth[search(title, search_input)], pub[search(title, search_input)]);
				}
				break;
			case 2:
				printf("�۰�:");
				scanf_s("%s", search_input, 100);
				if (search(auth, search_input) == -1) {
					printf("����� �����ϴ�.\n");
				}
				else {
					printf("����: %s\n�۰�: %s\n���ǻ�:%s\n", title[search(title, search_input)], auth[search(title, search_input)], pub[search(title, search_input)]);
				}
				break;
			case 3:
				printf("���ǻ�:");
				scanf_s("%s", search_input, 100);
				if (search(pub, search_input) == -1) {
					printf("����� �����ϴ�\n");
				}
				else {
					printf("����: %s\n�۰�: %s\n���ǻ�:%s\n", title[search(title, search_input)], auth[search(title, search_input)], pub[search(title, search_input)]);
				}
				break;
			default:
				break;
			}
			break;
		case 3:
			printf("������ �Է��ϼ���.\n");
			scanf_s("%s", search_input, 100);
			state[search(title, search_input)] = 1;
			break;
		case 4:
			printf("������ �Է��ϼ���.\n");
			scanf_s("%s", search_input, 100);
			if (state[search(title, search_input)] == 1) {
				printf("�뿩 ����\n�뿩 �Ͻðڽ��ϱ�?\n1. ��\n2. �ƴϿ�");
				scanf_s("%d", &yesno);
				if (yesno == 1) {
					state[search(title, search_input)] = 0;
				}	
			}
			else {
				printf("�뿩 �Ұ�\n");
			}
			break;
		default:
			break;
		}
	}
}

int search(char(*list)[100], char* search_input) {
	int i, j;
	int index = -1;

	for (i = 0; i < 100; i++) {
		j = 0;
		while (search_input[j]) {
			if (list[i][j] != search_input[j]) {
				break;
			}
			j++;
			if (search_input[j] == '\0') {
				return i;
			}
		}
		return -1;
	}
}
*/
/*
struct TEST {
	int a;
	int b;
	int* pointer;
};
//����ü �������� ���� �� �ʱ�ȭ �Ұ���

int main() {
	struct TEST t;
	struct TEST* pt=&t; //����ü �����ʹ� �迭�� �޸� ������ ��ġ�� ����Ű�Ƿ� &������ �ٿ�����
	
	//��� ����
	t.a = 1;
	(*pt).a = 1;
	pt->b = 1;


	int i = 0;
	t.pointer = &i; //����ü t�� pointer�� i�� �ּҰ��� ����Ŵ
	*t.pointer = 3; //����ü t�� pointer�� ����Ű�� ������ ���� ����
	//->���� �ؼ� �� * �ؼ�
	*pt->pointer = 4; //������ pt�� ����Ű�� ����ü ���� pointer�� ����Ű�� ������ ���� ����
}

 */
/*
struct customer {
	int age;
	int gender;
};
int add_customer(struct customer* a, int age, int gender);
int main() {
	struct  customer info[3];
	int input_age, input_gender, i;
	for (i = 0; i < 3; i++) {
		scanf_s("%d", &input_age);
		scanf_s("%d", &input_gender);

		add_customer(&info[i], input_age, input_gender);
	}
	for (i = 0; i < 3; i++) {
		printf("------------------------------\n");
		printf("����: %d\n����: %d\n", info[i].age, info[i].gender);
	}
	return 0;
}

int add_customer(struct customer* a, int age, int gender) {
	a->age = age;
	a->gender = gender;
	return 0;
}

*/
/*
union A
{
	int i;
	char c;
};
int main() {
	union A a;
	a.i = 0x12345678;
	printf("%x", a.c);
	return 0;
}
*/
//����ü union
/* 
union ���� �������� �޸� ������ ���� ���
�޸� ���� ���: �� ����� or ��Ʋ �����
->��κ� ��Ʋ ����� ���
�� �����: ������� ����
	ex. |12|34|56|78|
��Ʋ�����: 1����Ʈ�� ������ ����
	ex. |78|56|34|12|
*/

/*
enum {a=1,b,c,d,e}; //������: ������ ������� ���� ������Ŵ(a��� ������ �޸𸮿� ����Ǵ� ���� �ƴ�)
int main() {
	int i;
	scanf_s("%d", &i);
	if (i == a) {
		printf("��");
	}
	if (i == b) {
		printf("����");
	}
}
*/




