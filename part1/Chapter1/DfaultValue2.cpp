#include <iostream>
int Adder(int num1 = 1, int num2 = 2);

/*
함수의 원형을 별도로 선언하는 경우, 매개 변수의 디폴트 값은 함수의 원형 선언에만 위치시켜야 합니다. 
*/

int main(void)
{
    std::cout<<Adder()<<std::endl;  //Adder()를 Adder(1, 2)로 간주
    std::cout<<Adder(5)<<std::endl;  //Adder(5)를 Adder(5, 2)로 간주
    std::cout<<Adder(3, 5)<<std::endl;
    return (0);
}

int Adder(int num1, int num2)
{
    return num1 + num2;
}