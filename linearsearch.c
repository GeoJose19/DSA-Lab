#include <stdio.h>
int main()
{
int arr[100];
int size, i, num, flag;
/*
* Read size of array and elements in array
*/
printf("Enter size of array :: ");
scanf("%d", &size);

printf("\nEnter elements in array: \n");
for(i=0; i<size; i++)
{
printf("\nEnter %d element in array :: ",i+1);
scanf("%d", &arr[i]);
}

printf("\nEnter the element to search within the array: ");
scanf("%d", &num);

/* Supposes that element is not in the array */

flag = 0;
for(i=0; i<size; i++)
{
/*
* If element is found in the array
*/
if(arr[i]==num)
{

flag = 1;
printf("\n%d is found at position %d", num, i+1);
break;
}
}
/*
* If element is not found in array
*/
if(flag==0)
{
printf("\n%d is not found in the array", num);
}
return 0;
}
