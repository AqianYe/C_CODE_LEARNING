#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void test(int arr[])
{
	printf("%d\n",sizeof(arr));
}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int sz = sizeof(arr);
	printf("%d\n", sz);
	test(arr);
}

//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	printf("%d\n", *arr[2]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}

/*int sz = sizeof(arr) / sizeof(arr[0]);*/
	//sizeof（数组名）- 数组名表示整个数组
	//sizeof（数组名）计算的是整个数组的大小
	//单位是字节
	//&数组名，数组名代表整个数组
	//&数组名，取出的是整个数组的地址

	/*printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);*/


//void bubble_sort(int arr[], int sz)
//{
//	//假设这一趟要排序的数据已经有序
//	int flag = 1;
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//				//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参
//	//实际上传递过去的是数组arr首元素的地址
//	//&arr[0]
//	bubble_sort(arr, sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}