#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
void game()
{	
	int num = 0, input = 0;
	num = rand() % 100 + 1;
	while (1)
	{		
		printf("����������\n");		
		scanf("%d", &input);		
		if (input == num)		
		{			
			printf("��ϲ����µ������ǶԵ�\n");			
			break;		
		}		
		else if (input < num)		
		{			
			printf("��С��\n");
		}		
		else		
		{			
			printf("�´���\n");		
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
	printf("������ѡ��\n");		
	scanf("%d", &choice);		
	switch (choice)		
		{		
		case 1:game();
		break;		
		case 0:			
		break;		
		default:			
			printf("ѡ�����\n");
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
			printf("�ҵ���:%d\n", m);
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
		printf("�Ҳ���\n");
	return 0;
}

int main()
{
	int a = 0;
	int b = 100;
	int i = 0;
	for (i = 0; i <= 2; i++)
	{
		printf("���������룺\n");
		scanf("%d", &a);

		if (a == b)
		{
			printf("��½�ɹ���\n");
			break;
		}
		else
		{
			printf("���벻��ȷ��\n ");
		}
	}
	if (i > 2)
		printf("����������������꣬��½ʧ�ܣ�\n");
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
