#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////����һ��ѧ��
////����
////����
////�绰
////�Ա�
//
////struct - �ṹ��ؼ���
////Stu - �ṹ���ǩ
////struct Stu - �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//�ֺűز�����
////s1,s2,s3������ȫ�ֵĽṹ�����
////��������ôȥд����Ϊ������Ӧ��������ȫ�ֱ���
//
//int main()
//{
//	struct Stu s;//s�Ǿֲ�����
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s1;
//	Stu s2 = { "����",20,"13282364","��" };
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
////�ṹ�崫��
//void Print1(Stu tmp)
//{
//	printf("name��%s\n", tmp.name);
//	printf("age��%d\n", tmp.age);
//	printf("tele��%s\n", tmp.tele);
//	printf("sex��%s\n", tmp.sex);
//}
//
////�ṹ���ַ����
//void Print2(Stu* ps)
//{
//	printf("name��%s\n", ps->name);
//	printf("age��%d\n", ps->age);
//	printf("tele��%s\n", ps->tele);
//	printf("sex��%s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "����",40,"10086","��" };
//	//��ӡ�ṹ������
//	Print1(s);
//	Print2(&s);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	return 0;
//}
