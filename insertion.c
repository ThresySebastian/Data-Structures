#include<stdio.h>
void main()
{
	int i=1,n,j,temp,c;
	c++;
	printf("Enter the limit");
	c++;
	scanf("%d",&n);
	c++;
	int a[n];
	printf("Enter the elements");
	c++;
	for(i=0;i<n;i++)
	{	c++;
		scanf("%d",&a[i]);
		c++;
	}
	i=0;
	c++;
	while(i<n)
	{
		temp=a[i];
		c++;
		j=i-1;
		c++;
		while((j>=0)&&(temp<a[j]))
		{	c++;
			a[j+1]=a[j];
			c++;
			j--;
		}
		a[j+1]=temp;
		c++;
		i++;
	}		
	printf("The sorted array is\n");
	c++;
	i=0;
	c++;
	for(i=0;i<n;i++)
	{c++;
	 printf("%d\n",a[i]);
	 c++;
	 }
	 printf("Space complexity=%d\n",(4*n)+20);
	c++;
	c++;
	printf("Time complexity=%d\n",c);
		
}			
					 
