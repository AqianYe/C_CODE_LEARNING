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
	//sizeof����������- ��������ʾ��������
	//sizeof�������������������������Ĵ�С
	//��λ���ֽ�
	//&��������������������������
	//&��������ȡ��������������ĵ�ַ

	/*printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);*/


//void bubble_sort(int arr[], int sz)
//{
//	//������һ��Ҫ����������Ѿ�����
//	int flag = 1;
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//				//���������������ʵ����ȫ����
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
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�����arr���д���
//	//ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	//&arr[0]
//	bubble_sort(arr, sz);//ð��������
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