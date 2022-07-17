// Online C++ compiler to run C++ program online
#include <iostream>

int jump_search(int * , int, int);
int main() {

  int arr[10] {
    5,
    9,
    11,
    26,
    32,
    47,
    50,
    59,
    83,
    100
  };
  int a = 26;
  std::cout << jump_search(arr, 10, a);

  return 0;
}

int jump_search(int * arr, int index, int number) {
  int i = 0;
  while (i < index) {

    for (int k = i; k < index; k = (k + 3)) {

      if (number == arr[k]) {
        return k;
      }
    }
    ++i;
  }

}