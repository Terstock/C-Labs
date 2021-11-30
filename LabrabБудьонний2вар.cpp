#include <iostream>
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

using namespace std;


//Function for sorting
void bubbleSorting(int *num, int size)
{
  //for all elements
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = (size - 1); j > i; j--) // for all elements afrer i
    {
      if (num[j - 1] > num[j]) 
      {
        int tempor = num[j - 1]; //moving places
        num[j - 1] = num[j];
        num[j] = tempor;
      }
    }
  }
}

int main()
{
  int a[8]; //Declaring an array of 8 elements 

	//Entering 8 value of elements
  for (int i = 0; i < 8; i++) 
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
  bubbleSorting(a, 8);  //Calling for function
	//Displaying sorted array elements 
  for (int i = 0; i < 8; i++)
    printf(" %d", a[i]);
    
    cout << " - Our massive: \n" << endl;
    
  return 0;
}
