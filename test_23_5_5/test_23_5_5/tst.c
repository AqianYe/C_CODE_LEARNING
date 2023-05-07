#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//声明一个结构体类型
//声明一个学生类型，
//是想通过学生类型来创建学生变量（对象）
//描述学生：属性 - 名字+电话+性别+年龄

//struct Stu
//{
//	char name[20];//名字
//	char tale[12];//电话
//	char sex[10];//性别
//	int age;//年龄
//}s4,s5,s6;
//
//struct Stu s3;
//
//int main()
//{
//	//创建结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c；
//}*psa;
//
//int main()
//{
//	psa = &sa;
//	return 0;
//}

//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 'c',100,3.14,"bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	return 0;
//}

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//	return 0;
//}

//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

////设置默认对齐数为4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////取消设置的默认对齐数
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#include<stddef.h>
//
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//计算结构体成员相对于结构体起始位置的偏移量
//	//offsetof()
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}

void Print1(struct S tmp)
{
	printf("%d\n%c\n%lf\n", tmp.a, tmp.c, tmp.d);
}

void Print2(struct S* ps)
{
	printf("%d\n%c\n%lf\n", ps->a, ps->c, ps->d);
}

int main()
{
	struct S s = { 0 };
	Init(&s);
	Print1(s);
	Print2(&s);
	return 0;
}

