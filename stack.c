#include <stdio.h>
void push();
void pop();
void display();
int item,top=-1,a[20],i,maxsize;
void main()
{
int ch;
printf("enter the limit\n");
scanf("%d",&maxsize);
while(ch!=4)
{
printf("Enter the operation to be performed \n");
printf("1.push\n");
printf("2.pop\n");
printf("3.display\n");
printf("4.exit\n");
printf("enter choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:break;
}
}
}
void push()
{
if(top==maxsize-1)
printf("stack overflow \n");
else
{
printf("enter the element to be pushed \n");
scanf("%d",&item);
top++;
a[top]=item;
}
}
void pop()
{
if(top==-1)
printf("stack underflow\n");
else
{
a[top]=item;
top--;
printf("deleted item is %d",item);
}
}
void display()
{
printf("the stack is \n");
for(i=top;i>=0;i--)
{
printf("| %d |\n",a[i]);
}
printf(" ---\n");
}
