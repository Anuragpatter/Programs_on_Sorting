// Sorting an array in Ascending or Descending order
#include<stdio.h>
void dec_sort(int a[100], int n);
void asc_sort(int a[100], int n);
// Main function
void main()
{
 int a[100], i, n,c;
 printf("Enter choice of order,1 for descending and 0 for ascneding:\n");
 scanf("%d",&c);     // input choice for ascending or descending sort
 
 if (c==1) {
 printf("Enter the number of elements required in the array:");
 scanf("%d", &n);
 printf("Enter numbers:\n");
 for(i=0;i< n;i++)            //Reading array
 {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
 }
 dec_sort(a,n);    // Calling descending sort function
 printf("Array in descending order is:\n");
 for(i=0;i<n;i++)
 {
     printf("%d\t",a[i]);
 }
 }
 else if (c==0) {
printf("Enter the number of elements required in the array:");
 scanf("%d", &n);
 printf("Enter numbers:\n");
 for(i=0;i< n;i++)
 {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
 }
 asc_sort(a,n);    // Calling Ascending sort function
 printf("Array in ascending order is:\n");
 for(i=0;i< n;i++)
 {
  printf("%d\t", a[i]);
 }
 }
 else{
     printf("the choice is wrong try again!!");   //If Input Choice is not 0 or 1  
 }
}

// Function for sorting in Descending order
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

// Function for sorting in Ascending order
void asc_sort(int a[10], int n)
{
 int i, j, temp;
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(a[i]>a[j])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
}
