#include <stdio.h> 
int main() { 
  
int arr[100], n, max;
  
printf("Enter number of elements: "); 
scanf("%d", &n);
  
printf("Enter array elements:\n");
  
for (int i = 0; i < n; i++) {
  scanf("%d", &arr[i]);
} 
  
// Assume first element is maximum
max = arr[0]; 
  
// Compare with remaining elements 
  
for (int i = 1; i < n; i++) 
{ 
  if (arr[i] > max)
{
  max = arr[i]; 
} 
  
}
  printf("Largest element: %d\n", max);
  return 0;
}.
