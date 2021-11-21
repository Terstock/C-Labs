#include <iostream>
#define MAXLENGTH 100
typedef int ELEMT;
typedef struct
{
	ELEMT elements[MAXLENGTH + 1];
	int top;
} FSTAC;
using namespace std;

void makenull(FSTAC* pS);
int isEmpty(FSTAC* pS);
int isFull(FSTAC* pS);
ELEMT top(FSTAC* pS, int* error);
ELEMT pop(FSTAC* pS, int* error);
void push(FSTAC* pS, ELEMT p, int* error);
int eval(int* pA, int len);
int evalc(char* pA, int len);

int eval(int* pA, int len)
{
	FSTAC s;
	int nerror;
	int n;
	ELEMT c1, c2;
	makenull(&s);
	for (int i = 0; i < len; i++)
	{
		n = pA[i];
		if (n >= 0)
			push(&s, n, &nerror);
		else
		{
			c1 = pop(&s, &nerror);
			c2 = pop(&s, &nerror);
			switch (n)
			{
			case -1: push(&s, c2 + c1, &nerror); break;
			case -2: push(&s, c2 - c1, &nerror); break;
			case -3: push(&s, c2 * c1, &nerror); break;
			case -4: push(&s, c2 / c1, &nerror); break;
			}
		}
	}
	return pop(&s, &nerror);
}
int evalc(char* pA, int len)
{
	FSTAC s;
	int nerror;
	int n;
	ELEMT c1, c2;
	makenull(&s);
	char* pB = pA;
	char m[4];
	n = 0;
	int num;
	while (*pB != NULL)
	{
		while ((*pB = *pA) != len)
		{
			m[n] = *pB;
			pB = pB + 1;
			n++;
		}
		if (m[0] > 42 && m[0] < 48)
		{
			num = atoi(m);
			push(&s, num, &nerror);
			pA = pB + 1;
		}
		else
		{
			c1 = pop(&s, &nerror);
			c2 = pop(&s, &nerror);
			switch (num)
			{
			case 43: push(&s, c2 + c1, &nerror); break;
			case 45: push(&s, c2 - c1, &nerror); break;
			case 42: push(&s, c2 * c1, &nerror); break;
			case 47: push(&s, c2 / c1, &nerror); break;
			}
		}
	}
	return pop(&s, &nerror);
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Hello World!\n ????????: \n";
	int error;
	FSTAC S1, S2;
	makenull(&S1);
	makenull(&S2);
	for (int i = 1; i <= 4; i++)
	{
		push(&S1, i * 10, &error);
		printf("s1 = %d\n", top(&S1, &error));
	}
	printf("________\n");
	for (int i = 1; i <= 5; i++)
		push(&S2, pop(&S1, &error), &error);
	for (int i = 1; i <= 5; i++)
		printf("s2 = %d\n", pop(&S2, &error));
	printf("________\n");
	int mas[9] = { 3, 2, 7, -1, -3, 4, 5, -3, -2 };
	int res = eval(mas, 9);
	printf("res =%d", res);
	printf("________\n");
	char masive[20] = { "25\t5\t8\t\+\t-\t/\t*\t" };
	int resus = evalc(masive, 9);
	printf("resus =%d", resus);
	//char masive[2] = "2";
	///char masive[3] = "25";
	
	return 0;
	}
void makenull(FSTAC* pS)
{
	pS->top = 0;
}

int isEmpty(FSTAC* pS)
{
	if (pS->top == 0) return 1;
	return 0;
}

int isFull(FSTAC* pS)
{
	if (pS->top == MAXLENGTH) return 1;
	return 0;
}

ELEMT top(FSTAC* pS, int* error)
{
	ELEMT p = 0;
	*error = 0;
	if (isEmpty(pS)) *error = 1;
	else p = pS->elements[pS->top];
	return p;
}

ELEMT pop(FSTAC* pS, int* error)
{
	ELEMT p = 0;
	*error = 0;
	if (isEmpty(pS)) *error = 1;
	else
	{
		p = pS->elements[pS->top];
		pS->top--;
	}
	return p;
}

void push(FSTAC* pS, ELEMT p, int* error)
{
	*error = 0;
	if (isFull(pS)) *error = 1;
	else
	{
		pS->top++;
		pS->elements[pS->top] = p;
	}
}





