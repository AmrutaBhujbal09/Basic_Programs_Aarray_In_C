#include<stdio.h>

void accept(int[],int);
void last_index(int[],int);

void accept(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
		scanf("\n%d",&arr[i]);
}

void last_index(int arr[],int num)
{
	int i,digit;
	printf("\nenter number to find it's last occurance:");
	scanf("%d",&digit);
	
//	printf("\n number is %d",num);	

	for(i=num;i>=1;i--)
	{
	
		if(arr[i]==digit)
		{
			
			
			printf("\n%d  founds at %d index",arr[i],i);
			return;
		}
	}

	  // printf("\n%d  founds at %d index",arr[i],i);


} 
 // printf("\n%d  founds at %d index",arr[i],i);


int main()
{
	int num,arr[5];
	printf("how many nos you want to accept:");
	scanf("%d",&num);
	
	accept(arr,num);
	last_index(arr,num);
	//printf("\nlast index is%d",index);
}
