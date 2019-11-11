#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", b, a);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int t = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b )
//	{
//		t = a; a = b; b = t;
//	}
//	 if ( a < c )
//	{
//		 t = a; a = c; c = t;
//	}
//	 if (b < c)
//	 {
//		 t = b; b = c; c = t;
//	 }
//	 printf("%d %d %d", a, b, c);
//}
//int t(int a, int b)
//	{
//		int k;
//		if ((k = a % b) == 0)
//			return b;
//		return t(a, b);
//	}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int key = 0;
//	scanf("%d %d", &m,&n);
//	key = t(m, n);
//	printf("%d", key);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,5,6,8,12,4,6,9,0 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}
1、#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d %d", b, a);
	return 0;
}
2、#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d %d", b, a);
	return 0;
}
3、#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,5,6,8,12,4,6,9,0 };
	int max = arr[0];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("%d", max);
	return 0;
}
4、#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int t = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		t = a; a = b; b = t;
	}
	if (a < c)
	{
		t = a; a = c; c = t;
	}
	if (b < c)
	{
		t = b; b = c; c = t;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}
5、#include<stdio.h>
int t(int a, int b)
{
	int k;
	if ((k = a % b) == 0)
		return b;
	return t(a, b);
}
int main()
{
	int m = 0;
	int n = 0;
	int key = 0;
	scanf("%d %d", &m, &n);
	key = t(m, n);
	printf("%d", key);
	return 0;
}