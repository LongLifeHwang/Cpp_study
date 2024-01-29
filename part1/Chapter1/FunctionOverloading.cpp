#include <iostream>

/*
함수 오버로딩(Function Overloading)
함수 호출시 전달되는 인자를 토애서 호출하고자 하는 함수의 구분이 가능하기 때문에 매개 변수의 선언 형태가 다르다면, 동일한 이름의 함수 정의를 허용이 가능함
*/

void    MyFunc(void)
{
    std::cout<<"MyFunc(void) called"<<std::endl;
}

void    MyFunc(char c)
{
    std::cout<<"myFunc(char c) called"<<std::endl;
}

void    MyFunc(int a)
{
    std::cout<<"MyFunc(int a) called"<<std::endl;
}

int main(void)
{
    MyFunc();
    MyFunc('1');
    MyFunc(1);
    return (0);
}