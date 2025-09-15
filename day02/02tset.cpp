// 重载关系：1.同一作用域内 2.函数名必须相同 3.形参表必须不同
// 形参表是否相同 和形参名无关，与形参个数以及每一个对应形参的类型有关
#include <iostream>
using namespace std;
void foo(char *c, short s) // 完全匹配，建议使用
{
    cout << "1. foo" << endl;
}
void foo(int i, double d) //
{
    cout << "2.foo" << endl;
}
void foo(const char *c, short s)
{
    cout << "3.foo" << endl;
}
void foo(double d, int i)
{
    cout << "4.foo" << endl;
}

void foo(...)
{
    cout << "5.foo" << endl;
}
 // 函数指针方式调用，由函数指针本身的类型决定调用哪个foo
void (*pfunc)(const char *, short) = foo;
// int foo (double i,int d){ } -是否构成重载关系与返回值关系无关
int main(void)
{
    char *c;
    short s;
    // 普通方式调用，有实参和形参的匹配度决定用哪个foo函数
    foo(c, s); // 调的第一个foo函数

    const char *cc;
    foo(cc, s); // 3

    int i;
    double d;
    foo(i, d); // 2
    foo(d, i); // 4
   
    pfunc(c, s); // 函数指针方式调用，由函数指针类型决定调用哪个foo

    return 0;
}