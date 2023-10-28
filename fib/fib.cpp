#include <iostream>
#include <map>

using namespace std;

map<unsigned int, unsigned long> fibs;

unsigned long fib(unsigned int num){
    if(num<2){
        return num;
    }

    try{
        return fibs.at(num);
    }catch(const std::exception& e){
        unsigned long result=fib(num-1)+fib(num-2);
        fibs[num]=result;

        return result;
    }
}

int main(){
    cout<<fib(10)<<endl;

    return 0;
}