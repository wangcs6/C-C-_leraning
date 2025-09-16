// 引用作为函数的形参
// 我们在设计一个函数时，只要你能保证在函数内部绝对不修改实参，那么就大胆的加上const
#include <iostream>
using namespace std;

// 引用形的形参
void Swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}
void Swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
void Print(const int &x, const int &y)
{
    // 打印机函数
    // x = 999;
    cout << x << ' ' << y << endl;
}
int main(void)
{
    int a = 10, b = 20;
    Swap(a, b);
    // Swap(&a,&b);
    Print(a, b);
    Print(666,999);
    cout << "a:" << a << "b:" << b << endl;

    return 0;
}
