
#include <stdio.h>
#define max 10
int top1, top2, b1, b2, arr[max];
void push();
void pop();
void display();

int main(void)
{
	int ch;
	top1 = b1 = -1, top2 = b2 = (max - 1)/2;
	do
	{
		printf("\n1:push\n2:pop\n3:display\n4:exit\nchoice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: push();
			break;

			case 2: pop();
			break;

			case 3: display();
			break;

			case 4: printf("Exiting from program\n");
			break;
			default: printf("Wrong Choice\n");									
			break;
		}
	}
	while(ch != 4);
}

void push()
{
	int x, ch;
	printf("Enter a no: ");
	scanf("%d", &x);
	printf("\nPress 1 to push in the stack 1 or press 2 to push to stack 2: ");
	scanf("%d", &ch);
	if(ch == 1)
	{
		if(top1 == b2)
		{
			printf("Stack Overflow\n");
			return;
		}
		else
			arr[++top1] = x;
	}
	if (ch == 2)
	{
		if(top2 == (max - 1))
		{
			printf("Stack Overflow");
			return;
		}
		else
			arr[++top2] = x;
	}
}

void pop()
{
	int y, ch;
	printf("\npress 1 to pop from stack 1 or press 2 to pop from stack 2: ");
	scanf("%d", &ch);
	if(ch == 1)
	{
		if(top1 == -1)
			{
				printf("Stack Underflow\n");
				return;
			}
			y = arr[top1];
			arr[top1--] = 0;
	}
	else
	{
		if(top2 == b2)
		{
			printf("Stack Underflow\n");
			return;
		}
		y = arr[top2];
		arr[top2--] = 0;
	}
	printf("\n%d element is succesfully popped from stack\n", y);
	return;
}

void display()
{
	int i;
	if(top1 == -1)
	{
		printf("Stack 1 is empty\n");
	}
	else
	{
		printf("Elements of Stack 1 are:\n");
		for(i = 0; i <= top1; i++)
		{
			printf("%d\n", arr[i]);
		}
	}
	if(top2 == b2)
	{
		printf("Elements of Stack 2 is empty\n");
	}
	else
	{
		printf("Elements of Stack 2 are: \n");
		for(i = b2 + 1; i <= top2; i++)
		{
			printf("%d\n", arr[i]);
		}
	}
	return;
}
