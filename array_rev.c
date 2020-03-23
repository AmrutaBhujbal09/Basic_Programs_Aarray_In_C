#include<stdio.h>
void accept(int[],int);
void print_rev(int[] ,int);

void accept(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
	
		scanf("%d",&arr[i]);
	
}

void print_rev(int arr[],int num)
{
	int i;
	printf("\narray elements before rev is:");
	for(i=0;i<num;i++)
	
		printf("\n%d",arr[i]);
	
	printf("\narray elements after revrese is:");
	i--;	
	while(i>=0)
	{
		printf("\n%d",arr[i]);
		i--;
	}
}



int main()
{

	int i,num,arr[30];
	
	printf("how manynos you want to accept:");
	scanf("%d",&num);
	accept(arr,num);
	print_rev(arr,num);
}

