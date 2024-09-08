#include<stdio.h>
	struct polynomial
	{
		int expo;
		int coeff;
	}
	x[100];
	void main()
	{
		int i,n;
		printf("Enter the degree of the polynomial");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("Enter the %d coefficient of the polynomial",i+1);
			scanf("%d",&x[i].coeff);
			printf("Enter the %d exponent of the polynomial",i+1);
			scanf("%d",&x[i].expo);
		}
		
		printf("The polynomial representation is:\n");
		for(i=0;i<n;i++)
		{
			printf("(%dx^%d)",x[i].coeff,x[i].expo);
			if(i<n-1)
			{
				printf("+");
			}
		}		
			
			
			
	}
			
			
