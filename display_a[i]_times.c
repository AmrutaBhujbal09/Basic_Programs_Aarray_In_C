#include<stdio.h>

void accept(int[],int);
void display(int[],int);

void accept(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void display(int arr[],int num)
{
	int i,j;
	for(i=0;i<num;i++)
	{
	
			for(j=1;j<=arr[i];j++)
			{
			
				printf("%d\t",j);
			}
			printf("\n");
	}
	
}

int main()
{
	int arr[10],num;
	printf("\nhow many nos ypu want to accept:");
	scanf("%d",&num);
	accept(arr,num);
	display(arr,num);
}
