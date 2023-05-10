// Sorting an array in Descending order
#include<stdio.h>
void dec_sort(int a[100], int n);

void main()
{
 int a[100], i, n;

 printf("Enter the number of elements you want in the array:");
 scanf("%d", &n);
 
 /* Reading Array */
 printf("Enter numbers:\n");
 for(i=0;i< n;i++)
 {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
 }
 dec_sort(a,n);
 printf("Array in descending order is:\n");
 for(i=0;i<n;i++)
 {
     printf("%d\t",a[i]);
 }
}

// Function for Sorting in Descending order
void dec_sort(int a[10],int n)
{
    int i,j,temp;
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(a[i]< a[j])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
}
