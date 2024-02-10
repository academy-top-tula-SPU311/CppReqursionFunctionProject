#include <iostream>

unsigned long long Factorial(int n)
{
    if (n == 0) return 1;
    return Factorial(n - 1) * n;
}

double Power(double x, int n)
{
    if (n == 0) return 1;
    return Power(x, n - 1) * x;
}

void Bin(int n)
{
    if (n >= 2)
        Bin(n / 2);
    std::cout << n % 2;
}


void NumberSystem(int n, int p)
{

}

unsigned long long Hanoy(int n)
{
    if (n == 0) return 0;
    return Hanoy(n - 1) * 2 + 1;
}

unsigned long long FibLoop(int n)
{
    int f0{ 0 };
    int f1{ 1 };
    int temp;
    for (int i{}; i < n; i++)
    {
        temp = f0 + f1;
        f0 = f1;
        f1 = temp;
    }
    return f0;
}

unsigned long long FibReq(int n)
{
    static int fibArr[100]{};

    if (n == 0 || n == 1) return n;
    if (!fibArr[n])
        fibArr[n] = FibReq(n - 1) + FibReq(n - 2);
    return fibArr[n];
}






int main()
{
    //Bin(137);
    //int ost = 10;
    //std::cout << (char)(55 + ost);
    //std::cout << Hanoy(64) / 60 / 60 / 24 / 365;
    
    int n{ 50 };

    std::cout << FibLoop(n) << "\n";
    std::cout << FibReq(n) << "\n";

}
