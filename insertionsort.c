#include<stdio.h>
void insertionsort(int arr[],int n)
{
int i,j,min;
for(i=1;i<n;i++)
{
    min=arr[i];
    j=i-1;
    while(min<arr[j] && j>=0)
        {
        arr[j+1]=arr[j];
        j=j-1;
        }
    arr[j+1]=min;
}
}

int main(){
int size,i;

printf("Enter size of the array: ");
scanf("%d",&size);

int a[size];

printf("Enter %d elements: ",size);
for(i=0;i<size;i++)
scanf("%d",&a[i]);

insertionsort(a,size);

printf("Sorted elements: ");
for(i=0;i<size;i++)
printf(" %d",a[i]);

return 0;
}

