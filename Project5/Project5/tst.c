#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//写一段代码告诉我们当前机器的字节序是什么

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//
////int check_sys()
////{
////	int a = 1;
////	char* p = (char*)&a;
////	/*if (*p == 1)
////		return 1;
////	else
////		return 0;*/
////	return *p;
////}
//
//int main()
//{
//	//返回1，小端
//	//返回0，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	1 - 1;
//	//1 + (-1)
//
//	//00000000000000000000000000000001
//	//10000000000000000000000000000001
//	//10000000000000000000000000000010
//	//原码计算不符合实际情况
//	
//	//00000000000000000000000000000001
//	//11111111111111111111111111111111
//	//100000000000000000000000000000000
//	//        ↓（丢弃第一位）
//	//00000000000000000000000000000000
//	//采用补码则符合实际情况
//
//	return 0;
//}


//int main()
//{
//	int a = 20;
//	//00000000000000000000000000010100 - 原码
//	//00000000000000000000000000010100 - 反码
//	//00000000000000000000000000010100 - 补码
//	//0x00000014
//	int b = -10;
//	//10000000000000000000000000001010 - 原码
//	//11111111111111111111111111110101 - 补码
//	//11111111111111111111111111110110 - 反码
//	//0xFFFFFFF6
//	return 0;
//}

//void test(void)
//{
//	printf("hehe");
//}
//int main()
//{
//	test(100);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	float f = 10.0;
//
//	short c = 10;
//	short int d = 10;
//	return 0;
//}

int main()
{
	int a = 0x11223344;
	int* p = &a;
	*p = 0;
	return 0;
}