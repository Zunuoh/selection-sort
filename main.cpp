#include<iostream>
using namespace std;
void swapping(int first, int second) {
   int temp;
   temp = first;
   first = second;
   second = temp;
}
void display(int *arr, int size) {
    int i;
   for(i = 0; i<size; i++)
      cout << arr[i] << " ";
   cout << endl;
}
void selectionSort(int arr, int size) {
   int i, j, min;
   for(i = 0; i<size-1; i++) {
      min = i;
      for(j = i+1; j<size; j++)
         if(arr[j] < arr[min])
            min = j;
         swap(arr[i], arr[min]);
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}
