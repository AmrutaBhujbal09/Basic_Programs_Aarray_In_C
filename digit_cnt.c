#include<stdio.h>

void accept(int arr[],int num);
void digit_count(int arr[],int num);

void accept(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}	
}

void digit_count(int arr[],int num)
{
	int cnt,i,temp=0;
	for(i=0;i<num;i++)
	{	cnt=0;
		printf("\n%d",arr[i]);
		temp=arr[i];
		if(temp==0)
		
			cnt++;
		else
		{
		
			while(temp!=0)
			{
			
				cnt++;	
				temp=temp/10;
			
			}
		}
		printf("\n%d has no of digits  is %d",arr[i],cnt);
	}
	
	
}
int main()
{
	int num,arr[15];
	printf("\nhow many nos you want to acccept:");
	scanf("%d",&num);

	accept(arr,num);
	digit_count(arr,num);
}
