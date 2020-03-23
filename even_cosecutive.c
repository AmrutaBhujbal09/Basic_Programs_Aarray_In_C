#include<stdio.h>

void accept(int[],int);

void even_consecutive(int arr[],int num);

void accept(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
	
		scanf("%d",&arr[i]);

}

void even_consecutive(int arr[],int num)
{
	int i,j;

	for(i=0;i<num;i++)
	{
		for(j=i+1;j<=i+1;j++)
		{
			if((arr[i]+arr[j])%2==0)
			{
				printf("\n%d %d",arr[i],arr[j]);
			}
		}
	}
}


int main()
{

	int num,arr[10];
	printf("\nhow many nos you want to accept:");
	scanf("%d",&num);

	accept(arr,num);
	even_consecutive(arr,num);
}
