#include <iostream>

void swap(int*, int*);
void sorting(int* arr, int);

int main ()
{
    int arr[6] {54, 80, 23, 48, 79, 10};

    sorting(arr, 6);

    for ( int value : arr)
    std::cout << value << "  ";
    return 0;

}

void sorting (int *arr, int index)
{
    for (int i = 1; i <= index; ++i)
        for ( int j = 0; j < index; j++)
            if ( arr[i-1] > arr[j])
            swap(&arr[i-1], &arr[j]);
}

void swap (int *num1, int *num2)
{
    
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    
}