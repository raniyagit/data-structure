#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stk[SIZE];
int sp=-1;
void main()
{
void push(int);
int pop();
void display();
int opt,item;
do
{
printf("\n1.push\n2.pop\n3.Display\n4.exit\n");
printf("your option: ");
scanf("%d",&opt);
switch(opt)
{
case 1:
printf("enter the value to be pushed: ");
scanf("%d",&item);
push(item);
break;
case 2:
item=pop();
if(item!=-99)
printf("poped value=%d\n",item);
break;
case 3:
display();
break; 
case 4:
exit(0);
}
}
while(1);
}
void push(int x)
{
if(sp==SIZE-1)
{
printf("stack is full");
return;
}
else
{
stk[++sp]=x;
return;
}
}
int pop()
{
if(sp==-1)
{
printf("empty stack...");
return -99;
}
else
{
return stk[sp--];
}
}
void display() 
{
if(sp==-1)
printf("stack is empty\n");
else

printf("stack elements are:\n");
for(int i=sp;i>=0;i--)
{
printf("%d\n",stk[i]);
}
}

