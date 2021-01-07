#include <stdio.h>

int main ()
{
  int i, x;
  int capacity = 5;		//initial capacity;
  int used = 0;			// No. of elements inserted so far
  int *arr = (int *) malloc (sizeof (int) * capacity);

  for (i = 0; i < 10; i++)	// now suppose you want to insert 10 elements
    {
      scanf ("%d", &x);
      if (used == capacity)
	{
	  capacity *= 2;	// double the capacity of array
	  arr = (int *) realloc (arr, sizeof (int) * capacity);
	}
      arr[used] = x;
      used++;
    }
  for (i = 0; i < used; i++)
    printf ("%d ", arr[i]);
  free (arr);
}
