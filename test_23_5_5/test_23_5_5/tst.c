#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����һ���ṹ������
//����һ��ѧ�����ͣ�
//����ͨ��ѧ������������ѧ������������
//����ѧ�������� - ����+�绰+�Ա�+����

//struct Stu
//{
//	char name[20];//����
//	char tale[12];//�绰
//	char sex[10];//�Ա�
//	int age;//����
//}s4,s5,s6;
//
//struct Stu s3;
//
//int main()
//{
//	//�����ṹ�����
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
//	char c��
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

////����Ĭ�϶�����Ϊ4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����
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
//	//����ṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
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

