#include <stdio.h>
/*
int change_val(int i) {
	i = 3;
	return 0;
}
int main() {
	int i = 0;

	printf("호출 이전 i 의 값 : %d \n", i);
	change_val(i); // change_val 함수 내에서만 실행될 뿐임
	printf("호출 이후 i 의 값 : %d \n",i); //main함 수 내의 i값은 변하지 않음(함수가 다르면 변수는 공유하지 않음)
//
*/
//★★그러나★★
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
//위처럼 외부 함수라도 주소값을 통해 main함수의 변수를 호출할 경우 값을 변경할 수 있음
//해당 주소값이 담고 있는 값을 변경하기 때문(주소값은 함수가 달라도 공유함)
*/

/*
//특정한 타입의 값을 변경하는 함수를 제작하려면 반드시 그 타입을 가리키는 포인터를 인자로 가져야 함
int swap(int* a, int* b); //컴파일러에 함수에 대한 정보 제공->오류 잡아냄
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
int plus(int* parr) { //일차원배열의 시작 주소를 가리키는 포인터
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
int arr_2(int(*parr)[3], int row) { //(2차원 배열을 가리키는 포인터, 행의 수)
										//int arr[][3]도 가능
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

/*함수 포인터*/
/*
int max(int a, int b);
int donothing(int c, int d);
int main() {
	int a, b;
	int(*pfunc)(int, int); //함수 포인터: 인자의 수, 각각의 형, 리턴값의 형이 같은 함수를 가리킴
	//int increase( int(*arr)[3], int row)의 함수 포인터:
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
		printf("%d번째 학생", i + 1);
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
		printf("%d등: %d", i+1, average[i]);
		if (average[i] >= averageAvg)
			printf("합격");
		else
			printf("불합격");
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
	printf("입력 받을 수의 개수:");
	scanf_s("%d", &N);
	printf("\n1번째:");
	scanf_s("%d", &a);
	printf("\n2번째:");
	scanf_s("%d", &b);
	a=GCD(a, b);
	for (i = 2; i < N; i++) {
		printf("\n%d번째:", i + 1);
		scanf_s("%d", &new);
		a = GCD(a, new);
	}
	printf("%d개 수의 최대공약수: %d", N,a);
	return 0;
}
int GCD(int a, int b) { //유클리드 호재법
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
	printf("\n1부터 %d까지의 곱: %d",n, pac(n));
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
	char* pstr = "goodbye"; //pstr은 "goodbye"라는 리터럴의 시작 주소값을 가리킴
	//리터럴은 텍스트 세크먼트에 정의되어 읽기만 가능, 값 변경 불가
	//char str[]="hello"; => 가능
	//char str[100];
	//str="hello";  =>불가능: "hello"라는 리터럴의 시작 주소값을 str에 대입하라는 뜻, str은 배열의 시작 주소값(상수)이므로 변경 불가
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
	printf("찾을 값:");
	scanf_s("%s", b, 100);


	printf("결과: %d", search(a, b));
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
		printf("1. 책 추가\n2. 검색\n3. 반납\n4. 대여\n");
		scanf_s("%d", &wtd);
		switch (wtd)
		{
		case 1:
			printf("책 제목:");
			scanf_s("%s", title[i], 100);
			printf("작가:");
			scanf_s("%s", auth[i], 100);
			printf("출판사:");
			scanf_s("%s", pub[i], 100);
			state[i] = 1;
			i++;
			break;
		case 2:
			printf("1. 제목으로 검색\n2. 작가명으로 검색\n3. 출판사로 검색\n");
			scanf_s("%d", &ht_search);
			switch (ht_search)
			{
			case 1:
				printf("제목:");
				scanf_s("%s", search_input, 100);
				if (search(title, search_input) == -1) {
					printf("결과가 없습니다.\n");
				}
				else {
					printf("제목: %s\n작가: %s\n출판사:%s\n", title[search(title, search_input)], auth[search(title, search_input)], pub[search(title, search_input)]);
				}
				break;
			case 2:
				printf("작가:");
				scanf_s("%s", search_input, 100);
				if (search(auth, search_input) == -1) {
					printf("결과가 없습니다.\n");
				}
				else {
					printf("제목: %s\n작가: %s\n출판사:%s\n", title[search(title, search_input)], auth[search(title, search_input)], pub[search(title, search_input)]);
				}
				break;
			case 3:
				printf("출판사:");
				scanf_s("%s", search_input, 100);
				if (search(pub, search_input) == -1) {
					printf("결과가 없습니다\n");
				}
				else {
					printf("제목: %s\n작가: %s\n출판사:%s\n", title[search(title, search_input)], auth[search(title, search_input)], pub[search(title, search_input)]);
				}
				break;
			default:
				break;
			}
			break;
		case 3:
			printf("제목을 입력하세요.\n");
			scanf_s("%s", search_input, 100);
			state[search(title, search_input)] = 1;
			break;
		case 4:
			printf("제목을 입력하세요.\n");
			scanf_s("%s", search_input, 100);
			if (state[search(title, search_input)] == 1) {
				printf("대여 가능\n대여 하시겠습니까?\n1. 예\n2. 아니오");
				scanf_s("%d", &yesno);
				if (yesno == 1) {
					state[search(title, search_input)] = 0;
				}	
			}
			else {
				printf("대여 불가\n");
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
//구조체 내에서는 변수 값 초기화 불가능

int main() {
	struct TEST t;
	struct TEST* pt=&t; //구조체 포인터는 배열과 달리 변수의 위치만 가리키므로 &연산자 붙여야함
	
	//모두 같음
	t.a = 1;
	(*pt).a = 1;
	pt->b = 1;


	int i = 0;
	t.pointer = &i; //구조체 t의 pointer는 i의 주소값을 가리킴
	*t.pointer = 3; //구조체 t의 pointer가 가리키는 변수의 값을 정의
	//->먼저 해석 후 * 해석
	*pt->pointer = 4; //포인터 pt가 가리키는 구조체 변수 pointer가 가리키는 변수의 값을 정의
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
		printf("나이: %d\n성별: %d\n", info[i].age, info[i].gender);
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
//공용체 union
/* 
union 내의 변수들은 메모리 공간을 나눠 사용
메모리 저장 방식: 빅 엔디안 or 리틀 엔디안
->대부분 리틀 엔디안 사용
빅 엔디안: 순서대로 저장
	ex. |12|34|56|78|
리틀엔디안: 1바이트씩 역으로 보관
	ex. |78|56|34|12|
*/

/*
enum {a=1,b,c,d,e}; //열거형: 지정한 순서대로 수를 대응시킴(a라는 변수가 메모리에 저장되는 것은 아님)
int main() {
	int i;
	scanf_s("%d", &i);
	if (i == a) {
		printf("헉");
	}
	if (i == b) {
		printf("오잉");
	}
}
*/




