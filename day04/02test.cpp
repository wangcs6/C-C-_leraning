#include <iostream>
using namespace std;

// C语言中的数据传递（初始化，赋值，传参，返回值）都是值传递（将数据复制一份给别人）
void foo(int v){}

int bar(){
    int m =100;
    return m;
}

int main (){
    int a = 10; //初始化
    a = 30;  //赋值
    foo(a);   //传参
    bar();     //100,,返回值
}
// 因为C++语言有引用这个技术，可以不做值传递
