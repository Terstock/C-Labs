#include <iostream>
#include <stack>
#define MAXLENGTH 100 
using namespace std;


typedef int ELEMT;
typedef struct
{
	ELEMT elements[MAXLENGTH + 1];
	int top;
} FSTAC;

void makenull(FSTAC* pS);
int isEmpty(FSTAC* pS);
int isFull(FSTAC* pS);
ELEMT top(FSTAC* pS, int* error);
ELEMT pop(FSTAC* pS, int* error);
void push(FSTAC* pS, ELEMT p, int* error);



int eval(int* pA, int len, FSTAC* pS)
// pA - вказівник на масив виразу в ПОЛІЗ
// pS - вказівник на порожній стек 
// len – довжина масиву А
{
	int n; // отримує елемент з масиву А
	int nerror;
	ELEMT c1, c2;
	// отримує значення з вершини стека
	for (int i = 0; i < len; i++)
	{
		n = pA[i];
		if (n >= 0)
			push(pS, n, &nerror);
		else
		{
			c1 = pop(pS, &nerror);
			c2 = pop(pS, &nerror);
			switch (n)
			{
			case -1: push(pS, c2 + c1, &nerror); break;
			case -2: push(pS, c2 - c1, &nerror); break;
			case -3: push(pS, c2 * c1, &nerror); break;
			case -4: push(pS, c2 / c1, &nerror); break;
			}

		}
	}
	return top(pS, &nerror);
}
