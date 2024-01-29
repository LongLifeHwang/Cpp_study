#include <iostream>

/*
두 개 이상의 인자를 입력 받을 ㄸ에 탭, 스페이스 바, Enter 키의 입력과 공백에 의해 나누어 집니다. 
*/

int main(void)
{
    int num1;
    int num2;
    int result;

    std::cout<<"두 개의 변수: ";
    std::cin>>num1>>num2;
    result = 0;
    if (num1 < num2)
    {
        for (int i = num1; i < num2; i++)
            result += i;
    }
    else
    {
        for (int i = num2 + 1; i < num1; i++)
            result += i;
    }
    std::cout<<"두 수 사이의 정수 합: "<<result<<std::endl;
    return (0);
}