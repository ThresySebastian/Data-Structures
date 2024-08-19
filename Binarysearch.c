#include <stdio.h>
void main()
{
	int i,left,right,mid,n,x,flag=0,c;
	c++;;
	printf("Enter No of elements");
	c++;
	scanf("%d",&n);
	c++;
	int a[n];
	printf("Enter the elements");
	c++;
	for( i=0;i<n;i++)
	{
	c++;		
	scanf("%d",&a[i]);
	c++;
	}
	printf("Enter the number to search");
	c++;
	scanf("%d",&x);
	c++;
	left=0;
	c++;
	right=n-1;
	c++;	
	while(left<=right)
	{	c++;
		mid=left+(right-left)/2;
		c++;
		if(x==a[mid])
		{	c++;
			flag=1;
			break;
		}
		else if(x>a[mid])
		{
			right=mid+1;
			c++;
		}
		else if (x<a[mid])
		{
			right=mid-1;
			c++;
		}
	}
	if (flag==0)	
	{	c++;
		printf("Element not found");
		c++;
	}
	else if(flag==1)
	{c++;
	printf("Element found \n");
	c++;
	}
	printf("Space complexity=%d\n",(4*n)+32);
	c++;
	c++;
	printf("Time complexity=%d\n",c);
}
