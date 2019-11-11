#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = 0;
	int k = 7;
	int avg = (left + right) / 2;
	while (left <= right)
	{
		if (arr[avg] > k)
		{
			right = avg - 1;
		}
		else if (arr[avg] < k)
		{
			left = avg + 1;
		}
		else
			printf("找到了，下表为%d", avg);
		break;
	}
	if (left > right)
		printf("无法找到");
	return 0;
}
//strcmp字符串比较
//strlen字符串长度
