#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////描述一个学生
////名字
////年龄
////电话
////性别
//
////struct - 结构体关键字
////Stu - 结构体标签
////struct Stu - 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//分号必不可少
////s1,s2,s3是三个全局的结构体变量
////不建议这么去写，因为代码里应尽量少有全局变量
//
//int main()
//{
//	struct Stu s;//s是局部变量
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
//	Stu s2 = { "张三",20,"13282364","男" };
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
////结构体传参
//void Print1(Stu tmp)
//{
//	printf("name：%s\n", tmp.name);
//	printf("age：%d\n", tmp.age);
//	printf("tele：%s\n", tmp.tele);
//	printf("sex：%s\n", tmp.sex);
//}
//
////结构体地址传参
//void Print2(Stu* ps)
//{
//	printf("name：%s\n", ps->name);
//	printf("age：%d\n", ps->age);
//	printf("tele：%s\n", ps->tele);
//	printf("sex：%s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "李四",40,"10086","男" };
//	//打印结构体数据
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

