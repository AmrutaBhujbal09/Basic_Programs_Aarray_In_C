#include<stdio.h>
void accept(int arr[],int num);
void sum_of_digit(int arr[],int num);

void accept(int arr[],int num)
{
	int i=0;
	while(i<num)
	{
		scanf("%d",&arr[i]);
		i++;
	}
}

void sum_of_digit(int arr[],int num)
{
	int i,sum,rem=0;
	for(i=0;i<num;i++)
	{	sum=0;
		printf("\n%d",arr[i]);
	
			arr[i]=arr[i]/10;
			rem=arr[i]%10;
		
				//rem=arr[i]%10;
			sum=sum+arr[i]+rem;
			 printf("\nsum is:%d",sum);
			
	}
	//	printf("\nsum is:%d",sum);
}
	
int main()
{
	int num,arr[10];
	printf("\nhow many nos you want:");
	scanf("%d",&num);
	accept(arr,num);
	sum_of_digit(arr,num);
}
