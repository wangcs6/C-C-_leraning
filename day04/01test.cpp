#include <iostream>
using namespace std;

void foo(){

};

int main(void) {
    int a= 10;
    const int e = 10;

    // int& f =e; error   // 别名不可以比真名限定的更加宽松
    const int& g= e;   //ok
    const int& h= a;  //ok  别名可以比真名限定的更加严格

    // const int& ri = 10;
    // const int & rf = foo();



    return 0;
}

// int a = 10;
//  const int& cra = a; //但是常引用如果引用的是非常左值，通过常引用将丧失修改目标内存的权限
//  const int* cpa = &a; // 但是常指针如果指向的是非常左值，通过常指针将丧失修改目标内存的权限


