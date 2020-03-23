#include<stdio.h>


void accept(int[],int);
void find_seven(int[],int);

void accept(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
}

void find_seven(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		if(arr[i]%10==7 || arr[i]/10==7)
		
			printf("\n%d",arr[i]);
	}	
}
int main()
{
	int i,arr[10],num;

	printf("\nhow many nos you want to accept:");
	scanf("%d",&num);
	
	accept(arr,num);
	find_seven(arr,num);
}
