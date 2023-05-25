 #include <stdio.h>
int main()
{
int i, first, last, middle, n, key, array[100];
printf("Enter number of elements :: ");
scanf("%d",&n);

printf("\nEnter %d integers :: \n", n);
for ( i = 0 ; i < n ; i++ )
{
printf("\nEnter %d value :: ", i+1);
scanf("%d",&array[i]);
}

printf("\nEnter key value to search :: ");
scanf("%d",&key);

first = 0;
last = n - 1;
while( first <= last )
{
middle = (first + last)/2;
if ( array[middle] < key)
     first = middle + 1;
else if ( array[middle] == key) 
{
printf("\n %d found at location %d.\n", key, middle+1);
break;
}
else
  last = middle - 1;
}
if ( first > last )
printf("Not found! %d is not present in the list.\n", key);
return 0;
}

