// C++复合类型
#include <iostream>
#include <cstring>
using namespace std;

void testStruct()
{
    struct Student
    {
        int m_age;   //成员变量
        char m_name[256]; //成员变量
        void getinfo() {  //成员函数,C++这里可以定义函数，C语言不行。
            cout << m_name << ",,,," << m_age << endl;
        }
    };
    Student s;

    s.m_age = 22;
    // s.m_name = "张飞";
    strcpy(s.m_name, "张飞");
    s.getinfo();  //全局调用
    cout << "姓名：" << s.m_name << ", 年龄：" << s.m_age << endl;
}
void testUnion1() {
    union A {
        int i;
        char c[4];
    };
    /*union*/ A a;
    
}
void testUnion2() {
    union {   //匿名联合，主要想体现成员的内存排布方式（共用同一块内存）
        int i;
        char c[4];
    };
    i = 0x12345678;  //小端字节序，，小低低，，低数位占低地址
    cout << hex << c[0] << ' ' << c[1] << ' ' 
         << c[2] << ' '<< c[3]<< endl;
    
}

void testEnum(){
    enum Color{red, green,blue};
    Color c = red;   // c=0
    // Color c = 0;
    cout << "c=" << c << endl;

}
void testBllo(){
    bool a = true;
    bool b = false;
    cout << boolalpha <<"a=" << a << ", b=" << b << endl;
}


int main(void)
{
    testStruct();
    testUnion2();
    testEnum();
    testBllo();
    return 0;
}