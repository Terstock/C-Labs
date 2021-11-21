#include <stack>
#include <iostream>
#define MAXLENGTH 100
typedef int ELEMT;
typedef struct
{
    ELEMT elements[MAXLENGTH + 1];
    int top;
}FSTAC;

void makenull(FSTAC* pS);
int isEmpty(FSTAC* pS);
int isFUll(FSTAC* pS);
ELEMT top(FSTAC* pS, int* error);
ELEMT pop(FSTAC* pS, int* error);
void push(FSTAC* pS, ELEMT p, int* error);

int main()
{
    int error;
    FSTAC S1, S2;
    makenull(&S1);
    makenull(&S2);
    for (int i = 1; i <= 9; i++)
    {
        push(&S1, i * 7, &error);
        printf("s1=%d\n", top(&S1, &error));
    }

    for (int i = 1; i <= 9; i++)

        push(&S2, pop(&S1, &error), &error);
    for (int i = 1; i <= 9; i++)
        printf("s2=%d\n", pop(&S2, &error));
    return 0;
}

void makenull(FSTAC* pS)
{
    pS->top = 0;
}
int isEmpty(FSTAC* pS)
{
    if (pS->top == 0)
        return 1;
    else
        return 0;
}
int isFUll(FSTAC* pS)
{
    if (pS->top == MAXLENGTH)
        return 1;
    else
        return 0;

}
ELEMT top(FSTAC* pS, int* error)
{
    ELEMT p = 0;
    *error = 0;
    if (isEmpty(pS))*error = 1;
    else p = pS->elements[pS->top];
    return p;
}
ELEMT pop(FSTAC* pS, int* error)
{
    ELEMT p = 0;
    *error = 0;
    if (isEmpty(pS))*error = 1;
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
    if (isFUll(pS))*error = 1;
    else
    {
        pS->top++;
        pS->elements[pS->top] = p;

    }
}
