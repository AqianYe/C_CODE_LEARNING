#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////ģ��ʵ��strlen�ĵ����ַ���
//int my_strlen(char* str)
//{
//
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

void bubble_sort(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &ch[0]);//err
//	return 0;
//}

//#define N_VALUES 5;
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = &arr[9];
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p -= 2;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	*pa = 10;
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int* p;
//	*p = 20;
//	return 0;
//}

//int* test()
//{
//
//
//
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		//��ָ�����ָ��ķ�Χ
//		//��������arr�ķ�Χʱ
//		//p��Ұָ��
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	//int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ�����,�ͱ���ʼ�����ֵ
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i + 4) = 1;
//	}
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//00000001000000010000000100000001
//00000001000000010000000100000001
//00000000000000000000000100000001
//00000000000000000000000000000000
//...




//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);
//	return 0;
//}

//int main()
//{
//	int c = 1;
//
//	c + --c;
//	// 1 + (--1) = 1
//	// (--1) + (--1) = 0
//
//
//}


//int main()
//{
//	int a = 2, b = 3, c = 4, d = 5;
//	if (a = b + 1, c = a / 2, d > 0)
//	{
//		printf("%d\n", a);
//		printf("%d\n", b);
//		printf("%d\n", c);
//		printf("%d\n", d);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a + 3;
//	return 0;
//}

////ʵ��2
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	//10110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//	char c = a + b;
//	//a��b�ĵ�һλ��Ϊ0
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//10000010 - c
//	printf("%d\n", c);//��ӡ����
//	//c�ĵ�һλΪ1
//	//11111111111111111111111110000010 - ����
//	//11111111111111111111111110000001 - ����
//	//10000000000000000000000001111110 - ԭ��
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};

//int main()
//{
//	struct Stu s1 = { "����",20,"2019010305" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//�ṹ��ָ�� -> ��Ա��
//
//
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/
//}

////����һ���ṹ������ - struct Stu
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	//���int a = 10;
//	//ʹ��stuct Stu������ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu s1 = { "����",20,"2019010305" };
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	//�ṹ�����.��Ա��
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("c = %d\n", c);
//	return 0; 
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	//max = (a > b ? a : b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	/*if (a > 5)
//		b = 3;
//	else
//		b = -3;*/
//
//	b = (a > 5 ? 3 : -3);
//
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 0, c = 3, d = 4;
//	i = a++ || b++ || c++ || d++;
//	//a=0����Ϊ�� �� "++b"��"d++"��ִ�У�a����
//	printf("a=%d  b=%d  c=%d  d=%d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);
//	//����++����ʹ�ã���++
//	printf("%d\n", a);
//	return 0;
//}



//int main()
//{
//	int a = 11;
//	//00000000000000000000000000001011
//
//	a = a | (1 << 2);
//	//1<<2
//	//00000000000000000000000000000001
//	//00000000000000000000000000000100
//	// " | "
//	//00000000000000000000000000001111
//	printf("%d\n", a);
//
//	a = a & (~(1 << 2));
//	//a
//	//00000000000000000000000000001111
//	//1<<2
//	//00000000000000000000000000000100
//	// " ~ "
//	//11111111111111111111111111111011
//	// " & "
//	//00000000000000000000000000001011
//	printf("%d\n", a);
//}

//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111-����
//	//11111111111111111111111111111110-����
//	//10000000000000000000000000000001-ԭ��
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(p));//4��32λ��or 8��64λ��
//	printf("%d\n", sizeof(arr));//40
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡ��ַ������
//	//pΪָ�����
//	//"int*"��p������
//	*p = 20;//�����ò�����
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);
//	//ͳ��num�Ĳ������м���1
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before: a = % d��b = % d\n", a, b);
//	//���ķ���-Ч�ʲ��ߣ��ɶ��Բ�
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after: a = % d��b = % d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before: a = % d��b = % d\n", a, b);
//	//�Ӽ���-���ܻ����
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("after: a = % d��b = % d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;//��ʱ����
//	printf("before: a = % d��b = % d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("after: a = % d��b = % d\n", a, b);
//	return 0;
//}

//int main()
//{
//	// | �� ��2����λ��
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//& �� ��2����λ��
//	// | �� ��2����λ��
//	//^ �� ��2����λ���
//	//������ԭ�롢���롢������ͬ
//
//	int a = 3;
//	//00000000000000000000000000000011
//	int b = 5;
//	//00000000000000000000000000000101
//
//	int c = a & b;
//	//00000000000000000000000000000001
//
//	int d = a | b;
//	//00000000000000000000000000000111
//
//	int e = a ^ b;
//	//��Ӧ��2����λ��ͬΪ0������Ϊ1
//	//00000000000000000000000000000110
//	printf("c = %d\n", c);
//	printf("d = %d\n", d);
//	printf("e = %d\n", e);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//"-1"���������У�ռ32bitλ
//	//�����Ķ����Ʊ�ʾ�У�ԭ�롢���롢����
//	//�洢���ڴ���ǲ���
//	//ԭ�룺10000000000000000000000000000001
//	//���룺11111111111111111111111111111110
//	//���룺11111111111111111111111111111111
//
//	int b = a >> 1;
//	//">>" �� ���Ʋ�����
//	//�ƶ����Ƕ�����λ����
//	//���룺11111111111111111111111111111111
//	//���룺11111111111111111111111111111110
//	//ԭ�룺10000000000000000000000000000001
//
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5 / 2;//��2��1
//	int b = 5 % 2;
//	double c = 5 / 2.0;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	printf("c = %lf\n", c);
//	return 0;
//}