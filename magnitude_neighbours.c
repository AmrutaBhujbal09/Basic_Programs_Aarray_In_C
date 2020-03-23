#include<stdio.h>

void accept(int[],int);
void magnitude(int[],int);

void accept(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
		scanf("\n%d",&arr[i]);
}


void magnitude(int arr[],int num)
{
	int i,j,sum=0;
	for(i=0;i<num;i++)
	{
		for(j=i+2;j<=i+2;j++)
		{
			if((arr[i]+arr[j])==arr[i+1])
				printf("\n %d %d",arr[i],arr[j]);
		}
	}
}

int main()
{
	int num,arr[10];
	printf("how many nos you want to accept:");
	scanf("%d",&num);

	accept(arr,num);
	magnitude(arr,num);
}
