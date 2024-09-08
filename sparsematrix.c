#include<stdio.h>
void main()
{
	int i,j,m=1,r,c;
	printf("Enter the dimensions");
	scanf("%d%d",&r,&c);
	int a[r][c],b[100][3];
	printf("Enter the elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}		
	printf("Row\tColumn\tvalue\n");
	b[0][0]=i;
	b[0][1]=j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				b[m][0]=i;
				b[m][1]=j;
				b[m][2]=a[i][j];
				m++;
			}
		}
	}
	b[0][2]=m-1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<3;j++)
		{	
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}					
				
						

