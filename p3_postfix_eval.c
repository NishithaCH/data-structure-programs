#define SIZE 100
#include <ctype.h>
#include <stdio.h>

int s[SIZE];
int top = -1;

void push(int elem);
int pop();

int main(void)
{
	char pofx[50], ch;
	int i = 0, op1, op2;
	printf("Enter the Postfix Expression: ");
	scanf("%s", pofx);
	while((ch = pofx[i++]) != '\0')
	{
		if(isdigit(ch))
		{
			push(ch - '0');
		}
		else
		{
			op2 = pop();
			op1 = pop();
			switch(ch)
			{
				case '+':
					push(op1 + op2);
					break;

				case '-':
					push(op1 - op2);
					break;

				case '*':
					push(op1 * op2);
					break;

				case '/':
					push(op1 / op2);
					break;
			}
		}
	}
	printf("\nGiven Postfix Expression: %s", pofx);
	printf("\nResult after Evaluation: %d", s[top]);
	printf("\n");
}

void push(int elem)
{
	s[++top] = elem;
}

int pop()
{
	return(s[top--]);
}
