#include <iostream>

/*
전역 변수와 지역 변수의 이름이 같을 때에 어떻게 접근을 해야할까?
지역 변수에는 바로 접근이 가능하고 전역 변수로는 ::을 붙여서 접근이 가능합니다. 
*/

int num = 100;

int main(void)
{
    int num;

    num = 20;
    std::cout<<"\'num\'출력 결과 : "<<num<<std::endl;
    std::cout<<"\'::num\'출력 결과 : "<<::num<<std::endl;
    return (0);
}