#include <stdio.h>
int main()
{
int n, i, j, swap_var;
int array[20];
printf("How many number you want to input?\n");
scanf("%d", &n);
printf("Please enter %d integers that has to be sorted\n", n);
for (ir = 0; i < n; i++)
scanf("%d", &array[i]);
for (i= 0 ; i < n - 1; i++)
{
for (j = 0 ; j < n - i - 1; j++)
{
if (array[j] > array[j+1]) // for decreasing order sorting using <
{
swap_var        = array[j];
array[j]   = array[j+1];
array[j+1] = swap_var;
}
}
}
printf("Below is the list of elements sorted in ascending order:\n");
for (i = 0; i < n; i++)
printf("%d\n", array[i]);
return 0;
}
