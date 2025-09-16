#include <iostream>
using namespace std;

int foo()
{
    int m = 10;
    return m;
}

int main(void)
{
    // 能够取值，，，，，，，左值
    // 非常左值 （无const修饰）
    //  常左值    有const修饰
    int a = 20;
    &a;     // ok
    a = 20; // ok

    const int b = 10;
    &b; // ok
    // b = 20;   //error

    // 匿名内存-->不能取址-->右值
    foo(); // (1)分配一块匿名内存   (2)生成跳转指令
    
    return 0;
}