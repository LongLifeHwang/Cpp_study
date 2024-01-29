#include <iostream>

/*
std::cin>>'변수';
'변수'를 입력 받는 것

옛날 c언어는 변수 선언이 항상 제일 먼저 등장해야만 했습니다. 
*/

int main(void)
{
    int num1;
    int num2;
    int result;

    std::cout<<"첫 번째 숫자 입력: ";
    std::cin>>num1;
    std::cout<<"두 번째 숫자 입력: ";
    std::cin>>num2;
    result = num1 + num2;
    std::cout<<"덧셈 결과: "<<result<<std::endl;
    return (0);
}