#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	for (i = 1; i < 8; i++)
//	{	
//		for (a = 0; a < 2 * i - 1; a++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < 7; i++)
//	{
//		for (a = 0; a < 13 -2 * i; a++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	for (a = 100; a < 1000; a++)
//	{
//		b = a / 100;
//		c = a % 100 / 10;
//		d = a % 10;
//		if (a == b*b*b+c*c*c+d*d*d)
//			printf("%d ", a);
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	int i;
//	int SUM = 0;
//	scanf("%d", &a);
//	int b = a;
//	for (i = 0; i < 5; i++)
//	{
//		SUM += a;
//		a = a * 10 + b;
//	}
//	printf("%d", SUM);
//	return 0;
//}
//int main()
//{
//	int arr1[3] = { 1,2,3 };
//	int arr2[3] = { 4,5,6 };
//	int a = 0;
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		a = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = a;
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i;
//	float sum = 0.0;
//	float k = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		k = pow(-1, i + 1);
//		sum = sum + k * 1 / i;
//	}
//	printf("sum = %f\n", sum);
//	return 0;
//}
int main()
{
	int a = 0;
	int i;
	int sum = 0;
	for (i = 1; i <100; i++)
	{
		int b = i;
		while (b != 0) {
			a = b % 10;
			if (a == 9) {
				sum++;
			}
			b /= 10;
		}
	}
	printf("%d", sum);
	return 0;
}