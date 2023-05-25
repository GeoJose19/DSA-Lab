#include<stdio.h>
int main()
{
int array[50], n, i, j, temp,exchng=1;
printf("Enter number of elements :: ");
scanf("%d", &n);

printf("\nEnter %d integers :: \n", n);
for(i = 0; i < n; i++)
{
printf("\nEnter %d integer :: ", i+1);
scanf("%d", &array[i]);
}

for (i = 0 ; i < ( n - 1 )&&exchng; i++)
{
for (j= 0,exchng=0 ; j < n - i - 1; j++)
{
if(array[j] > array[j+1])
{
temp=array[j];
array[j] = array[j+1];
array[j+1] = temp;
exchng=1;
}
}
}

printf("\nSorted list in ascending order :: ");
for ( i = 0 ; i < n ; i++ )
printf(" %d ", array[i]);
return 0;
}
