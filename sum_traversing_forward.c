#include<stdio.h>

void accept(int[],int);
void traversing(int[],int);

void accept(int arr[],int num)
{
	int i;
	for(i=0;i<num;i++)
		scanf("\n%d",&arr[i]);
}

void traversing(int arr[],int num)
{
	int i,j,sum;     
		
		
			for(i=0,j=num-1;j>0,i<num;j--,i++)
			{
				sum=0;
			
				//printf("\ni is %d \t j is %d",i,j);
			
		
				if(i<j)
				{	
					
		
				// 	printf("\ni is %d \t j is %d",i,j);
					sum=(arr[i]+arr[j]);
                                	printf("\n%d",sum);
			//		i++;
			
				}
				
			
			
			}
}
	
int main()
{
	int num,arr[10];
	printf("\nhow many nos you want:");
	scanf("%d",&num);

	accept(arr,num);
	traversing(arr,num);
}
