#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    // int* pm = malloc(4);  这样写有错误
    // 标准C库函数malloc/free
    int *pm = (int *)malloc(4);
    cout << "*pm:" << *pm << endl;
    free(pm); //这一行代码一旦执行结束，pm指向的内存被释放，pm变为悬空指针
    pm = NULL;
    free(pm);  //野指针

    // new操作符，
    int *pn = new int(100);
    cout << "*pn" << *pn << endl;
    delete pn;
    pn = NULL;
    delete pn;

    int *parr = new int[4]{10,20,30,40}; // 已数组方式new，永远返回首元素地址
    for (int i = 0; i < 4; i++)
    {
        cout << parr[i] << " ";
    }
    cout << endl;
    delete[] parr;

    int(*p)[4] = new int[3][4];


    delete[] p;

    //异常处理
    try
    {
        new int[0xFFFFFFFFFFFFFF];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    
    

    

    return 0;
}