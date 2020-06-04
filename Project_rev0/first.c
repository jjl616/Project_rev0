#define _CRT_SECURE_NO_WARNINGS
//#define
#include <stdio.h>
#include <string.h>
#include <math.h>
#define ARR_SIZE 5

void double_it(int num);
int double_this(int num);
void print_count(void);
void increment(void);
void decrement(void);
unsigned int absolute(int x)
{
	return x > 0 ? x : -x;
}

/*struct point {
	int x, y;
};*/

/*struct line {
	struct point start, end;

};*/

//void print_point(const struct point_t* ptr);
double get_length(const struct line* ptr);


enum direction { north, south, east, west };

union test {
	int i;
	char c;
	short s;
};

typedef struct point {
	int x, y;
} point_t;

void print_point(const point_t* ptr);

int count;

int main()
{

	/*
		int a = 10;
		float b = 12.1;
		char c = 'h';
		printf("%d, %f, %c, %x, %X, %e, %c\n", a, b, c, a, a, b, c);
		printf("Integer: %d\n", a);
		printf("Float: %f\n", b);
		printf("Character: %c\n", c);
		printf("Hexadecimal\(lower case\): %x\n",a);
		printf("Hexadecimal\(upper case\): %X\n",a);
		printf("Exponentail type: %e\n\n\n",b);

		printf("Integer: %4dab\n", a);
		printf("Integer: %3dab\n", a);
		printf("Integer: %-4dab\n", a);
		printf("Float: %.4f\n", b);
		printf("Float: %6.2f\n", b);
		printf("Float: %7.2f\n", b);
		printf("Float: %-.4f\n", b);

		printf("First C Program\n");

		int age;
		float height, weight;
	*/
	//	printf("나이, 키, 몸무게를 입력하세요: ");
	//	scanf("%d %f %f", &age, &height, &weight);
	//	printf("나이	: %5d\n", age);
	//	printf("키	: %5.1f\n", height);
	//	printf("몸무게	: %5.1f\n", weight);
	/*
		int k;
		printf("size of k : %d\n", sizeof(k));
		printf("size of 3.14 : %d\n", sizeof(3.14));

		printf("char	의 크기: %d\n", sizeof(char));
		printf("short	의 크기: %d\n", sizeof(short));
		printf("int	의 크기: %d\n", sizeof(int));
		printf("long	의 크기: %d\n", sizeof(long));
		printf("float	의 크기: %d\n", sizeof(float));
		printf("double	의 크기: %d\n", sizeof(double));

	*/
	/*
		short x = -7;
		unsigned short y = 65529;

		printf("x = %5d, %08x\n", x, x);
		printf("y = %5d, %08x\n", y, y);
		//short type variable is converted into 4 byte when it's printed out

	*/
	/*
		char n = 97;
		printf("n = %d\n", n);
		printf("n+1 = %d\n", n + 1);
		*/
		/*
		int score;

		printf("점수? ");
		scanf("%d", &score);

		if (score < 70)
			printf("재수강필요!!!\n");

		printf("수고하셨습니다\n");
		*/
/*
	double x, y;
	char op;
	double result = 0;

	printf("수식? ");
	scanf("%lf %c %lf", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else {
	printf("적절한 연산자기호를 입력해주세요\n");
	return 1;
	}

	printf("%f %c %f = %f\n", x, op, y, result);
*/
/*
	int i, j;
	int width, height;
	char ch;
	printf("직사각형의 폭과 높이?");
	scanf("%d %d", &width, &height);
	printf("직사각형을 그릴 문자? ");
	scanf("%c", &ch);
	*/
	/*
		int x = 10;

		double_it(x);
		printf("double_it 호출 후 x = %d\n", x);

		x = double_this(x);
		printf("double_this 호출 후 x = %d\n", x);
		*/
/*
	int i;

	count = 0;
	
	print_count();
	for (i = 0; i < 5; i++)
		increment();
	print_count();

	for (i = 0; i < 5; i++)
		decrement();
	print_count();
*/

////////////////////////// 6장 함수 끝//////////////////////
//////////////////////////////배열//////////////////////////
	
/*	int arr[5];
	int sum = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("arr[%d]에 저장할 값을 입력해주세요~", i);
		scanf("%d", &arr[i]);
		sum += arr[i];
		printf("arr[%d]=%d\n", i, arr[i]);
		printf("sum=%d\n\n", sum);
	}
	printf("\nTotal Sum = %d\n", sum);
	*/

//#define MAX 5 ==> 사용가능
//const int max=5; ==> const도 원래는 변수를 상수화하는 거라 사용 불가
	

/*  int arr[5];
	int size = 0;
	int i;

	printf("배열의 바이트 크기: %d\n", sizeof(arr));

	//size = sizeof(arr) / sizeof(arr[0]);
	size = sizeof(arr) / 6.3;
	printf("배열의 크기: %d\n", size);

	for (i = 0; i < size; i++)
		arr[i] = 0;

	for (i = 0; i < size; i++)
		printf("arr[i]=%d\n", arr[i]);
	printf("\n\n");
	*/

/*	int x[ARR_SIZE] = { -4, 0, 28, 3, 12 };
	int y[ARR_SIZE] = { 0 };
	int i;

	for (i = 0; i < ARR_SIZE; i++)
		y[i] = absolute( x[i]);


	for (i = 0; i < ARR_SIZE; i++)
		printf("%d\n", y[i]);
	printf("\n"); */

	/*
	int x[ARR_SIZE] = {10, 20, 30, 40, 50};
	int y[ARR_SIZE] = { 0 };
	int i;

	for (i = 0; i < ARR_SIZE; i++)
	{
		y[i] = x[i];
		printf("%d\n", y[i]);
	}
	
	*/
	//다차원 배열 시작




	/*
	int *pi;
	double *pd;
	char *pc;
	printf("sizeof(pi)=%d\n", sizeof(pi));
	printf("sizeof(pd)=%d\n", sizeof(pd));
	printf("sizeof(pc)=%d\n", sizeof(pc));
	printf("sizeof(int*)=%d\n", sizeof(int*));
	printf("sizeof(double*)=%d\n", sizeof(double*));
	printf("sizeof(char*)=%d\n", sizeof(char*));
	*/

	/*
	char str[10] = "hello";
	int len = 0;
	printf("str의 길이: %d\n", strlen(str));
	printf("\"good bye\"의 길이: %d\n", strlen("good bye"));
	printf("str=%s\n", str);
	len = strlen(str);

	int i;
	int j = strlen(str);

	for (i = 0; j >= i; i++)
		printf("str[%d]=%c\n", i, str[i]);


	if (len > 0)
		str[len - 1] = '\0';			//backspace와 같은 동작
	printf("str =%s\n", str);

	printf("num: %d\n", strlen("hiroo hoho"));
	*/
	/*
	char str1[10] = "";
	char str2[10] = "";
	char temp[10];

	printf("2개의 문자열? ");
	scanf("%s %s", str1, str2);
	printf("str1=%s, str2=%s\n", str1, str2);
	*/
	/*
	char s1[10] = "apple";
	char s2[10] = "appla";

	if (s1 == s2)
		printf("s1과 s2의 주소가 같습니다.\n");
	else
		printf("s1과 s2의 주소가 다릅니다.\n");
	if (strcmp(s1, s2) == 0)
		printf("s1과 s2의 내용이 같습니다.\n");
	else
		printf("s1과 s2의 내용이 다릅니다.\n");
	*/
	/*
	char sentence[100] = "";
	char word[20];
	do{
		printf("단어?");
		scanf("%s", word);
		strcat(sentence, word);
		strcat(sentence, " ");
	} while (strcmp(word, ".") != 0);
	printf("%s\n", sentence);
	*/
	/*
	char filename[] = "readme.txt";
	char* p = NULL;
	p = strchr(filename, '.');
	if (p != NULL)
		printf("file extension: %s\n", p + 1);

	printf("file extension including dot: %s\n", p);

	p = strstr(filename, ".txt");
	if (p != NULL)
		printf("file type: TEXT file\n");
	*/
	/*
	char phone[] = "010-4572-5041";
	char* p = NULL;
	
	p = strtok(phone, "-");
	printf("mobile : %s\n", p);
	
	p = strtok(NULL, "-");
	printf("prefix : %s\n", p);
	
	p = strtok(NULL, "-");
	printf("line no.: %s\n", p);
	*/
	/*
	char str[64] = "this is test string for char pointer.";
	char* p = str;
	int cnt = 0;
	printf("address of p=%d\n", p);
	while (1) {
		if (islower(p[0]))
			p[0] = toupper(p[0]);
		p = strchr(p, ' ');
		printf("address of p=%d\n", p);
		
		printf("string p before end=%s\n", p);
		if (p == NULL)
		{
			printf("\n\nstring p=%s\n\n", p);
			break;
		}
		cnt++;
		p++;
	}

	puts(str);
	printf("cnt=%d\n", cnt);
	printf("address of p=%d\n", p);
	
	*/


	//구조체
	//함수의 매개변수를 구조체 포인터형으로 선언
	//	void prin_content(struct content* ptr);
	//구조체 변수가 입력 매개변수일 에는 const로 지정
	//void print_content(const struct content* ptr);
	//구조체를 매개변수로 갖는 함수를 호출할 때에는 구조체 변수의 주소를 인자로 전달
	//
	
	/*struct line ln1 = {
		{10, 20}, {30, 40}
	}
	*/
	/*
	struct line ln1 = {
	{10, 20}, {30, 40}

	};

	printf("직선 정보: ");
	print_point(&ln1.start);
	print_point(&ln1.end);
	printf("\n길이: %f\n", get_length(&ln1));
	*/

	enum direction moves[] = {
		north, north, east, south, south, west
	};
	/*
	int size = sizeof(moves) / sizeof(moves[0]);
	int i;

	printf("이동 순서: ");
	for (i = 0; i < size; i++)
	{
		switch (moves[i])
		{
		case north:
			printf("북 ");
			break;
		case south:
			printf("남 ");
			break;
		case east:
			printf("동 ");
			break;
		case west:
			printf("서 ");
			break;
		}
	}
	printf("\n");
	*/
	/*
	union test t1 = { 0x12345678 };

	printf("t1.i의 주소=%p\n", &t1.i);
	printf("t1.c의 주소=%p\n", &t1.c);
	printf("t1.s의 주소=%p\n", &t1.s);

	printf("sizeof(union test) =%d\n", sizeof(union test));

	printf("t1.i=%x\n", t1.i);
	printf("t1.c=%x\n", t1.c);
	printf("t1.s=%x\n", t1.s);
	*/

	point_t pt1 = { 10, 20 };
	print_point(&pt1);


	return 0;

}

//함수를 정의할 때에는 구조체 포인터로 구조체의 각 멤버에 접근
/*void print_content(const struct content* ptr)
{
	printf("%s, %d, %.1f\n", )

}*/

//구조체 안에 다른 구조체 변수를 멤버로 포함 가능
/*struct line {
	struct point start, end; // line 구조체 정의에 앞서 point 구조체가 정의되어 있어야 한다.
};*/

//line 구조체 변수를 선언하면, point 구조체 변수인 start와 end가 메모리에 할당됨
/*struct line ln1 = {
	{10, 20}, {30, 40}

};*/

/*void print_point(const struct point* ptr)
{
	printf("(%d, %d) ", ptr->x, ptr->y);
}*/

void print_point(const point_t* ptr)
{
	printf("(%d, %d) ", ptr->x, ptr->y);
}

/*double get_length(const struct line* ptr)
{
	int dx = ptr->end.x - ptr->start.x;
	int dy = ptr->end.y - ptr->start.y;
	return sqrt(dx * dx + dy * dy);

}*/



void double_it(int num)
{
	num *= 2;

}

int double_this(int num)
{
	return num * 2;
}

void print_count(void)
{
	printf("count = %d\n", count);
}
void increment(void)
{
	count++;
}
void decrement(void)
{
	count--;
}
//double get_area(double)