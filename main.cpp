#include <iostream>

using namespace std;


void heapify(float arr[], int n, int i) {
  int l = 2*i + 1;
  int r = 2*i + 2;
  int largest = i;

  if(l<n && arr[l]>arr[largest]) {
    largest = l;
  }

  if(r<n && arr[r]>arr[largest]) {
    largest = r;
  }

  if(largest != i) {
    swap(arr[largest], arr[i]);
    heapify(arr, n, largest);
  }
}
void heapsort(float arr[], int n) {
  for(int i = n/2 - 1; i>=0; i--) {
    heapify(arr, n, i);
  }

  for(int i = n-1; i>=0; i--) {
    swap(arr[i], arr[0]);
    heapify(arr, i, 0);
  }
}

int main()
{
    float arr[5] = {9, 3.3, 14.1, 3.1, 4};
    heapsort(arr, 5);
    for(int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
