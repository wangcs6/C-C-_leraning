// 1.哑元函数
// 2.缺省（默认）参数：带默认值的形参
#include <iostream>
using namespace std;

// void foo (int a ,double b, float c, short d ,char e ='A'){
//     //函数内部不能获取到用户传递的数据    1/0
//     // 高精尖的人工智能算法需要根据用户给定的基准磁能得到正确结果
//     cout<< "e="<< e << endl;
// }
void foo (int a ,double b, float c, short d ,char e ='A');  //只声明，不定义
void foo(int a){

}

int main(void){
    foo(3,3.14,3.1,2);  // 自带
    foo(3,3.14,3.1,2,'B');  // 取实参"B"
    foo(10);
    return 0;
}