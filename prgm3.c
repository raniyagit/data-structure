#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int Q[SIZE];
int front=0,rear=0;
void main()
{
void enque(int);
int deque(),opt,item;
void display();
do
{
printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
printf("your option: ");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("enter item: ");
scanf("%d",&item);
enque(item);
break;
case 2:item=deque();
if(item!=-1)
printf("poped value=%d\n",item);
break;
case 3:display();
break;
case 4:exit(0);
}
}
while(9);
}
void enque(int x)
{
int temp;
temp=(rear+1)%SIZE;
if(temp==front)
printf("queue is full\n");
else
{
rear=temp;
Q[rear]=x;
}
return;
}
int deque()
{
if(front==rear)
{
printf("queue is empty\n");
return -1;
}
else
{
front=(front+1)%SIZE;
return Q[front];
}
}
void display()
{
int i;
if(front==rear)
printf("no elements...\n");
else
{
printf("the queue elements are:\n");
i=(front+1)%SIZE;
do
{
printf("%d\n",Q[i]);
i=(i+1)%SIZE;
}
while(i!=(rear+1)%SIZE);
}
return;
}
