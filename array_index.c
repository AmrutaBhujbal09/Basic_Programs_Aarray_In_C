#include<stdio.h>

void accept(int[],int);
void display(int[],int);

void accept(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
		scanf("\n%d",&arr[i]);
}

void display(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
		printf("\nindex of %d is %d ",arr[i],i);
}	

int main()
{
	int arr[10],num;
	printf("\nhow many nos you want to accept:");
	scanf("%d",&num);
	accept(arr,num);
	display(arr,num);
}
