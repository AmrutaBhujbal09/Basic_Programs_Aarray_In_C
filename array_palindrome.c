#include<stdio.h>

void accept(int arr[],int num);
void find_palindrome(int[],int);

void accept(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
}

void find_palindrome(int arr[],int num)
{
	int i,j,cnt;
	for(i=0;i<num;i++)
	{	
		//printf("\n%d",arr[i]);
		cnt=0;
		for(j=2;j<arr[i];j++)
		{
			if(arr[i]%2==0)
			{
				cnt++;
			}
		}
		if(cnt==0)
		{
			printf("\n%d is prime",arr[i]);
		}
	}
}	

int main()
{
	int num,arr[10];
	
	printf("\nhow many nos you want t enter:");
	scanf("%d",&num);

	accept(arr,num);
	find_palindrome(arr,num);
}
