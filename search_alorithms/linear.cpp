#include <iostream>

int search(int *, int, int);

int main()
{
    int array[]{45, 26, 87, 29, 10, 5, 31};
    int num;
    std::cout << "enter the number  " << std::endl;
    std::cin >> num;

    search(array, num, 7);

    return 0;
}

int search(int *arr, int num, int n)
{

    for (int a = 0; a < n; ++a)
    {
        if (num == arr[a])
        {
            std::cout << " the index of number " << num << " is " << a << std::endl;
            return a;
        }
    }
    std::cout << "the number " << num << " isn't included." << std::endl;

    return 0;
}

//4, 6, 1, 3
