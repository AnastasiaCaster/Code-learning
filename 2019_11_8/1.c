#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
void game()
{	
	int num = 0, input = 0;
	num = rand() % 100 + 1;
	while (1)
	{		
		printf("请输入数字\n");		
		scanf("%d", &input);		
		if (input == num)		
		{			
			printf("恭喜，你猜的数字是对的\n");			
			break;		
		}		
		else if (input < num)		
		{			
			printf("猜小了\n");
		}		
		else		
		{			
			printf("猜大了\n");		
		}	
	}
}
void menu()
{	
	printf("**************************************\n");	
	printf("**********1.game      0.exit**********\n");	
	printf("**************************************\n");
}
int main()
{	
	int choice=0;	
	menu();		
	printf("请输入选项\n");		
	scanf("%d", &choice);		
	switch (choice)		
		{		
		case 1:game();
		break;		
		case 0:			
		break;		
		default:			
			printf("选择错误\n");
			break;		
		} 	
	return 0;
}

int main()
{
	int arr[] = { 1,3,5,7,9,11,13,15 };
	int k = 11;
	int l = 0;
	int r = sizeof(arr) / sizeof(arr[0]) - 1;
	while (l <= r) 
	{
		int m = (r + l) / 2; 
		if (arr[m] == k) 
		{
			printf("找到了:%d\n", m);
			break;
		}
		else if (arr[m] > k)
		{
			r = m - 1; 
		}
		else 
		{
			l = m + 1; 
		}
	}
	if (l > r)
		printf("找不到\n");
	return 0;
}

int main()
{
	int a = 0;
	int b = 100;
	int i = 0;
	for (i = 0; i <= 2; i++)
	{
		printf("请输入密码：\n");
		scanf("%d", &a);

		if (a == b)
		{
			printf("登陆成功！\n");
			break;
		}
		else
		{
			printf("密码不正确！\n ");
		}
	}
	if (i > 2)
		printf("输入密码次数已用完，登陆失败！\n");
	return 0;
}

int main() 
{
	char c;
	int t;
	while ((c = getchar()) != EOF) 
	{ 
		if (c >= 'a' && c <= 'z') 
		{
			t = c - 32;
			putchar(t);
		}
		else if (c >= 'A' && c <= 'Z') 
		{
			t = c + 32;
			putchar(t);
		}
		else 
			break;
	}
	return 0;
}
