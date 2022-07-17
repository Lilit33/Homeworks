#include <iostream>

int fibo(int);

int main()
{
    int n = 0;
    std::cin >> n;
    std::cout << "the " << n << "th Fibonacci's number would be ";

    if (n <= 1)
        std::cout << n << std::endl;
    if (n > 1)
        std::cout << fibo(n) << std::endl;

    return 0;
}

int fibo(int num)
{
    if (num <= 1)
        return num;

    return fibo(num - 1) + fibo(num - 2);
}
