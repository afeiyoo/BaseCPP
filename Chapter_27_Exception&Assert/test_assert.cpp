#include <iostream>
#include <cassert>       // 断言assert宏需要包含的头文件。
using namespace std;

void copydata(void *ptr1,void *ptr2)  // 把ptr2中的数据复制到ptr1中。
{
    assert(ptr1&&ptr2); // 断言ptr1和ptr2都不会为空。
    cout << "继续执行复制数据的代码......\n";
}

void isNumZero(){
    const int num = 1;
    static_assert(num, "参数不能为0");  // 如果为num为0，则编译不通过
}

int main()
{
    int ii=0,jj=0;
    copydata(&ii, &jj); // 把ptr2中的数据复制到ptr1中。
}