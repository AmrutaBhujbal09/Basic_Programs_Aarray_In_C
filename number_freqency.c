#include<stdio.h>
void accept(int[],int);
void find_freqency(int[],int);

void accept(int arr[],int num)
{	
	int i;
	for( i=0;i<num;i++)
	
		scanf("\n%d",&arr[i]);
}

void find_freqency(int arr[],int num)
{
	int digit,cnt=0,i;
	printf("\nenter digit to find it's freqency:",digit);
	scanf("%d",&digit);

	for(i=0;i<num;i++)
	{
		if(arr[i]==digit)
		{
			cnt++;
		}
	}
	printf("\n%d occurs %d times:",digit,cnt);
}

int main()
{
	int num,arr[20];
	printf("\nhow many number you want to accepts:");
	scanf("%d",&num);

	accept(arr,num);
	find_freqency(arr,num);
}
