// C program implementing Selection Sort
# include <stdio.h>
// function to swap elements at the given index values
void swap(int array[], int firstIndex, int secondIndex) 
{ 
 int temp;
 temp = array[firstIndex];
 array[firstIndex] = array[secondIndex];
 array[secondIndex] = temp;
}
// function to look for smallest element in the given subarray
int indexOfMinimum(int array[], int startIndex, int n) 
{
 int minValue = array[startIndex];
 int minIndex = startIndex;
 for(int i = minIndex + 1; i < n; i++) {
 if(array[i] < minValue) 
 {
 minIndex = i;
 minValue = array[i];
 }
 } 
 return minIndex;
}
void selectionSort(int array[], int n) 
{
 for(int i = 0; i < n; i++) 
 {
 int index = indexOfMinimum(array, i, n);
 swap(array, i, index);
 }
 
}
// the function that prints the content of any size array
void printArray(int array[], int size)
{
 int i;
 for(i = 0; i < size; i++)
 {
 printf("%d ", array[i]);
 }
 printf("\n");
}
int main()
{
 int array[] = {46, 52, 21, 22, 11};
 int n = sizeof(arr)/sizeof(arr[0]);
 selectionSort(array, n);
 printf("Sorted array: \n");
 printArray(array, n);
 return 0;
}
