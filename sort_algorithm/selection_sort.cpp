#include <iostream>

void swap(int *, int *);
void sorting(int *arr, int);

int main()
{
    int arr[6]{54, 80, 23, 48, 79, 10};

    sorting(arr, 6);

    for (int k = 0; k < 6; ++k)
        std::cout << arr[k] << "  ";
        


    return 0;
}

void swap(int *num1, int *num2)
{

    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void sorting(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;

        for (j = i + 1; j < n -1; j++)
            if (arr[j] < arr[min_idx])             //
                min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
}
