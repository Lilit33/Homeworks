#include <iostream>


void binary_search(int * , int, int, int);

int main() {
  int arr[8] {
    4,
    9,
    15,
    18,
    36,
    40,
    45,
    51
  };
  int a = 51;
  binary_search(arr, 0, 7, a);

  return 0;
}

void binary_search(int * arr, int left, int right, int num) {

  int mid = (right + left) / 2;
  //std::cout << arr[mid] <<std::endl;
  if (num == arr[mid]) {
    std::cout << mid;
  }
  if (num < arr[mid]) {
    right = mid;
    binary_search(arr, left, right, num);

  }

  if (num > arr[mid]) {
    left = (mid + 1);
    binary_search(arr, left, right, num);
  }

}