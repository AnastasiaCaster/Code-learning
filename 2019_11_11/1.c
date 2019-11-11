#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//int a = 0;
//int i = 0;
//int j = 0;
//scanf("%d", &a);
//for (i = 1; i <= a; i++)
//{
//	for (j = 1; j <= a; j++)
//	{
//		printf("%d*%d=%d\t", i, j, i * j);
//	}
//	printf("\n");
//}
//return 0;
//}

//#include<stdio.h>
//int Exchange(int* x, int* y) 
//{
//	int t;
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//
//int main() 
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	Exchange(&a, &b);
//	printf("%d %d\n", a,b);
//	return 0;
//}

//int year(int a)
//{	
//	return (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0));
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (year(m))
//		printf("%d是闰年", m);
//	else
//		printf("%d不是闰年", m);
//	
//}
//
//int num(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;//不是素数返回0
//		}
//	}
//	return 1;//是素数返回1
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (num(n))
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//	return 0;
//}

//初始化函数
int init(int arr[], int L)
{
	int i = 0;
	printf("请输入数字：\n");
	for (i = 0; i < L; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < L; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
//清空数组
int empty(int arr[], int L)
{
	int i = 0;
	for (i = 0; i < L; i++)
	{
		printf("%d", arr[i] = 0);
	}
	return 0;
}

void menu()
{
	printf("**1、数组初始化**\n");
	printf("**2、清空数组****\n");
}
int main()
{
	int arr[10];
	int input = 0;
	int L = 0;
	menu();
	printf("输入数字长度（1-10）\n");
	scanf("%d", &L);
	printf("输入执行操作：\n");
	scanf("%d", &input);
	switch (input)
	{
	case 0:
		init(arr, L);
		printf("\n");
	case 1:
		empty(arr, L);
		printf("\n");
	default:
		printf("选择错误，请重新选择\n");
		break;
	}
	return 0;
}
