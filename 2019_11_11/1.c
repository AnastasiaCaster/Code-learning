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
//		printf("%d������", m);
//	else
//		printf("%d��������", m);
//	
//}
//
//int num(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;//������������0
//		}
//	}
//	return 1;//����������1
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (num(n))
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}

//��ʼ������
int init(int arr[], int L)
{
	int i = 0;
	printf("���������֣�\n");
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
//�������
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
	printf("**1�������ʼ��**\n");
	printf("**2���������****\n");
}
int main()
{
	int arr[10];
	int input = 0;
	int L = 0;
	menu();
	printf("�������ֳ��ȣ�1-10��\n");
	scanf("%d", &L);
	printf("����ִ�в�����\n");
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
		printf("ѡ�����������ѡ��\n");
		break;
	}
	return 0;
}
