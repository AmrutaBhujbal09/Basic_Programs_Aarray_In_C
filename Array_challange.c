/*Question: Given a N * N matrix,each row and column sorted in increasing order, and a number X,Write a program to find the position of key in the matrix if it
is present in it.
*/

#include<stdio.h>
int m=10,n=10;
void accept(int[m][n],int,int);
void display(int[m][n],int,int,int);
void sort_row(int[m][n],int,int);
void sort_col(int[m][n],int,int,int);

int main()
{
	
	int arr[m][n],row,col,i,j,key;;
	
	printf("enter how many rows:\n");
	scanf("%d",&row);
	
	printf("enter how many cols:\n");
	scanf("%d",&col);
	
	printf("enter key to search:\n");
	scanf("%d",&key);

	accept(arr,row,col);
	sort_row(arr,row,col);
	sort_col(arr,row,col,key);
	display(arr,row,col,key);
}

void accept(int arr[m][n],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)	
	{
		for(j=0;j<col;j++)
		{
			scanf("%d\t",&arr[i][j]);
		}
	}
}

void display(int arr[m][n],int row,int col,int key)
{
	printf("Displaying MATRIX\n");
	int i,j,pos1,pos2;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
                      if(arr[i][j]==key)
		      {
                         pos1=i;
			 pos2=j;
		      }	
              		
			printf("%d\t",arr[i][j]);

		}
		printf("\n");

	}
	printf("%d is found at (%d,%d) position\n",key,pos1,pos2);
}

void sort_row(int arr[m][n],int row,int col)
{
	int i,j,t;
	for(i=0;i<row;i++)
	{
		
		for(j=0;j<col;j++)
		{
			
			if(j+1<col && arr[i][j]>arr[i][j+1])
			{
				t=arr[i][j];
				arr[i][j]=arr[i][j+1];
				arr[i][j+1]=t;
			
	
			}
			
		}
	}

	
}

void sort_col(int arr[m][n],int row,int col,int key)
{
	int i,j,t;
	for(j=0;j<col;j++)
	{
		for(i=0;i<row;i++)
		{
			if(i+1<row && arr[i][j]>arr[i+1][j])
			{
				t=arr[i][j];
				arr[i][j]=arr[i+1][j];
				arr[i+1][j]=t;

			}
	
		}
	}
}

/*output
enter how many rows:
3
enter how many cols:
3
enter key to search:
4
30
50
40
4
60
70
220
450
70
Displaying MATRIX
4       40      50
30      60      70
220     70      450
4 is found at (0,0) position
*/
