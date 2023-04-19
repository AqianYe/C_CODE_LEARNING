#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *arr[i]);
	}
	return 0;
}
 

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	//int*** pppa = &pppa;
//	printf("%d\n", **ppa);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	} 
//	return 0;
//}

//int main()
//{
//	int arr[3] = { 1,2,3 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr[0]));
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p ====== %p\n", p + i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址，首元素的地址
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}

// 1、&arr - &数组名 - 数组名不是首元素的地址 -
//    数组名表示整个数组 - &数组名 取出的是整个数组的地址

// 2、sizeof(arr) - sizeof(数组名) - 数组名表示的是整个数组
//    - sizeof(数组名)计算的是整个数组的大小 单位是字节


//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen - 求字符串长度
//	//模拟实现strlen-计数器的方法1-递归的方法2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}