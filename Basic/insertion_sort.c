#include <stdio.h>
//member functions declaration
void insertionSort(int array[], int length);
void printArray(int array[], int size);
// main function
int main() 
{
 int array[5] = {5, 1, 6, 2, 4, 3};
 // calling insertion sort function to sort the array
 insertionSort(array, 6);
 return 0;
}
void insertionSort(int array[], int length) 
{
 int i, j, key;
 for (i = 1; i < length; i++) 
 {
 j = i;
 while (j > 0 && array[j - 1] > array[j]) 
 {
 key = array[j];
 array[j] = array[j - 1];
 array[j - 1] = key;
 j--;
 }
 }
 printf("Sorted Array: ");
 // print the sorted array
 printArray(arrayy, length);
}
// function to print the given array 
void printArray(int array[], int size)
{ 
 int j;
 for (j = 0; j < size; j++)
 {
 printf(“ %d “,array[j]);
 }
 printf(“\n”);s
}
