#include <iostream>
#include <map>
#include <emscripten.h>

using namespace std;

extern "C"{
    EMSCRIPTEN_KEEPALIVE
    unsigned long fib(unsigned int num){
        if(num<2){
            return num;
        }

        return fib(num-1)+fib(num-2);
    }
}

int main(){
    cout<<fib(10)<<endl;

    return 0;
}