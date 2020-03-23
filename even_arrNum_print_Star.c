#include<stdio.h>

void accept(int[],int);
void display_star(int[],int);

void accept(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++) 
	{
		scanf("\n%d",&arr[i]);
	}
}

void display_star(int arr[],int num)
{
	int i,j;
	for(i=0;i<num;i++)
	{
		if(arr[i]%2)
		{
			for(j=0;j<arr[i];j++)
			{
				printf("#");
			}
			printf("\n");
		}
		else
		{
			for(j=0;j<arr[i];j++)
	 		{
				printf("*");
			}
			printf("\n");
		}
	}
}
int main()
{
	int arr[8],num;
	printf("\nhow many numbers you want to accept:");
        scanf("%d",&num);
	accept(arr,num);
	display_star(arr,num);
}
