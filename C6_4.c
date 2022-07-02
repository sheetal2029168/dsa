#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char data[10];
	int top;
} STACK_c6_4;

STACK_c6_4 s1;

void init_c6_4(STACK_c6_4 *S)
{
	S->top = -1;
}

void push_c6_4(STACK_c6_4 *s, char v)
{
	s->top++;
	s->data[s->top] = v;
}

void pop_c6_4(STACK_c6_4 *s, char *v)
{
	*v = s->data[s->top];
	s->top--;
}

int isEmpty_c6_4(STACK_c6_4 s)
{
	if (s.top == -1)
	{
		return 1;
	}
	return 0;
}

int isOperand_c6_4(char a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		return 1;
	return 0;
}

int precedence_c6_4(char a)
{
	int k = 0;
	switch (a)
	{
	case '+':
	case '-':
		k = 1;
		break;
	case '*':
	case '/':
		k = 2;
		break;
	}
	return k;
}

int isHL_c6_4(char a, char b)
{
	if (precedence_c6_4(a) > precedence_c6_4(b))
		return 1;
	return 0;
}

void rev_c6_4(char *str)
{
	int n = strlen(str);
	for (int i = 0, j = n - 1; i <= j; i++, j--)
	{
		char tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	for (int i = 0; i < n; i++)
	{
		if (str[i] == '(')
		{
			str[i] = ')';
		}
		else if (str[i] == ')')
		{
			str[i] = '(';
		}
	}
}

void inToPre_c6_4(char *inf, char *prf)
{
	int i = 0, k = 0;
	rev_c6_4(inf);
	while (inf[i] != '\0')
	{
		if (isOperand_c6_4(inf[i]))
		{
			prf[k] = inf[i];
			k++;
		}
		else if (inf[i] == '(')
		{
			push_c6_4(&s1, '(');
		}
		else if (inf[i] == ')')
		{
			while (1)
			{
				char d;
				pop_c6_4(&s1, &d);
				if (d == '(')
				{
					break;
				}
				prf[k++] = d;
			}
		}
		else
		{
			if (isEmpty_c6_4(s1))
			{
				push_c6_4(&s1, inf[i]);
			}
			else
			{
				char d;
				pop_c6_4(&s1, &d);
				if (d == '(')
				{
					push_c6_4(&s1, d);
					push_c6_4(&s1, inf[i]);
				}
				else if (isHL_c6_4(d, inf[i]))
				{
					prf[k++] = d;
					i--;
				}
				else
				{
					push_c6_4(&s1, d);
					push_c6_4(&s1, inf[i]);
				}
			}
		}
		i++;
	}
	while (!isEmpty_c6_4(s1))
	{
		char d;
		pop_c6_4(&s1, &d);
		prf[k++] = d;
	}
	prf[k] = '\0';
}

int c6_4(void)
{
	char inf[100];
    printf("Enter an infix expression(without spaces in between): ");
	scanf("%s", inf);
	printf("Entered infix expression: %s\n", inf);
	init_c6_4(&s1);
	char prf[100];
	inToPre_c6_4(inf, prf);
	rev_c6_4(prf);
	printf("\nPrefix expression: %s\n", prf);
}