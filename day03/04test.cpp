#include <iostream>
using namespace std;

int main(void)
{
    int a = 10;
    int &b = a; // b是a所代表内存的别名

    b = 20; // 表面看式对引用b赋值，其实是对引用b的目标内存a赋值
    cout << "a= " << a << "b=" << b << endl;

    // 表面上看是取引用b的地址，其实取得是引用b的目标内存（a）的地址
    cout << "&a:" << &a << ", &b:" << &b << endl;

    int c = 30;
    b = c;

    cout << "a=" << a <<endl;  //a = 30
    cout << "&a:" << &a << ",&b:" << &b << ",&c:" << &c << endl; 

// a= 20b=20
// &a:0xbf913ff974, &b:0xbf913ff974
// a=30
// &a:0xbf913ff974,&b:0xbf913ff974,&c:0xbf913ff970

    int& d =b;   //不要理解为引用的引用，而应该理解为b和d都是a的别名
    cout << "&a:" << &a << ",&b:" << &b << ",&d:" << &d << endl;
// &a:0x93447ffbec,&b:0x93447ffbec,&d:0x93447ffbec


    return 0;
}