#include <stdio.h>
// Defining the function to handle the sorting 
void bubbleSort(int arr[], int n)
{
int array[]={some unsorted elements};
 int i, j, temp;
 for(i = 0; i < n; i++)
 {
 for(j = 0; j < n-i-1; j++)
 {
 if( array[j] > array[j+1])
 {
 // swap the elements
 temp = array[j];
 array[j] = array[j+1];
 array[j+1] = temp;
 } 
 }
 }
 
 // print the sorted array
 printf("Sorted Array: ");
 for(i = 0; i < n; i++)
 {
 printf("%d ", array[i]);
 }
}
int main()
{
 int array[100], i, n, step, temp;
 // ask user for number of elements to be sorted
 printf("Enter the number of elements to be sorted: ");
 scanf("%d", &n);
 // input elements in the array
 for(i = 0; i < n; i++)
 {
 printf("Enter element no. %d: ", i+1);
 scanf("%d", &array[i]);
 }
 // call the function to bubble Sort and give it the array to be sorted
 bubbleSort(array, n);
 
 return 0;
}

