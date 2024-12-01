#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    try{
        // 可能抛出异常的代码。
        int ii = 0;
        cout << "你是一只什么鸟？（1-傻傻鸟；2-小小鸟）";
        cin >> ii;

        if (ii==1) throw "不好，有人说我是一只傻傻鸟。";      // throw抛出const char *类型的异常。
        if (ii==2) throw ii;                               // throw抛出int类型的异常。
        if (ii==3) throw string("不好，有人说我是一只傻傻鸟。"); // throw抛出string类型的异常。

        cout << "我不是一只傻傻鸟，哦耶\n";
    }catch(int ii){
        cout << "异常的类型是int=" << ii << endl;
    }catch(const char* ss){
        cout << "异常的类型是const char *=" << ss << endl;
    }catch(string str){
        cout << "异常的类型是string=" << str << endl;
    }catch(...){
        // 不管什么异常，都在这里处理。
        cout << "捕获到异常，具体没管是什么异常。\n";
    }
    cout << "程序继续运行......\n";  // 执行完try ... catch ...后，将继续执行程序中其它的代码。
}