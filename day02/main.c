#include <stdio.h>

// 声明要调用的函数，并用extern "C"兼容C++编译的目标文件
#ifdef __cplusplus
extern "C" {
#endif

int sum(int a, int b);  // 声明sum函数
int sub(int a, int b);  // 声明sub函数

#ifdef __cplusplus
}
#endif

int main(void)
{
    int c = sum(5, 4);
    int d = sub(5, 4);
    printf("c=%d,d=%d\n", c, d);
    return 0;
}



