#include<stdio.h>

void accept(int[],int);
void display(int[],int);

void accept(int arr[],int num)
{
	int i,max=0,j=0;
	for(i=0;i<num,j<=i;i++,j++)
	{
		
		scanf("%d",&arr[i]);
		arr[j]=arr[i];
	
			if(arr[i]==arr[j])
			{
				printf("opps' you have enter duplicate no!!!");
				exit(0);
			}
		}
	}
}


void display(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		printf("%d",arr[i]);
	}
}


int main()
{
	int arr[20],num;
	printf("\nhow many nos you want in array:");
	scanf("%d",&num);
	accept(arr,num);
	display(arr,num);
}
