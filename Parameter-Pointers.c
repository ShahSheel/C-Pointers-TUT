#include <stdio.h>

void printInput (int *input1, int *input2);

int main ()
{

  int a, b;
  printInput (&a, &b);		//Pass the address
  return 0;
}

void printInput (int *input1, int *input2)
{				//Get the value of a and b (0 and 0), essentially *input1 = &a
  printf ("a \t b");
  printf ("\n %d \t %d ", *input1, *input2);	//Print the values
  printf ("\nEnter input, with a space between: ");
  scanf ("%d %d", input1, input2);	// Store the values in the address
  printf ("\n %d \t %d ", *input1, *input2);	//Print the new values

}
