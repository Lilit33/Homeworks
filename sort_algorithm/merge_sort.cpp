// Online C++ compiler to run C++ program online
#include <iostream>

void merge(int * , int, int, int);
void merge_sort(int * , int, int);

int main() {

  int arr[8] {
    65,
    85,
    74,
    20,
    15,
    0,
    43,
    33
  };

  merge_sort(arr, 0, 8);
  for (int element: arr)
    std::cout << element << " ";
  std::cout << "\n";

  return 0;
}

void merge_sort(int * arr, int left, int right) {
  if (left < right) {
    int mid = left + (right - left) / 2;

    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);

    merge(arr, left, mid, right);
  }

}

void merge(int * arr, int l, int mid, int r) {
  int i, j, k;
  int n1 = mid - l + 1;
  int n2 = r - mid;

  int L[n1];
  int R[n2];

  for (i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for (j = 0; j < n2; j++)
    R[j] = arr[mid + j + 1];

  i = 0;
  j = 0;
  k = l;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}