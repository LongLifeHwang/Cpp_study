#include <iostream>

/*
c++의 함수에서는 '디폴트 값'이라는 것을 설정할 수 있습니다. 
'디폴트 값'은 기본적으로 설정되어 있는 값을 의미합니다. 
매개 젼수에 디폴트 값이 설정되어 있으면, 선언된 매개 변수의 수보다 적은 수의 인자 전달이 가능합니다. 그리고 전달되는 인자는 왼쪽에서부터 채워져 나가고, 부족분은 디폴트 값으로 채워져 나갑니다. 
*/

int Adder(int num1 = 1, int num2 = 2)
{
    return num1 + num2;
}

int main(void)
{
    std::cout<<Adder()<<std::endl;  //Adder()를 Adder(1, 2)로 간주
    std::cout<<Adder(5)<<std::endl;  //Adder(5)를 Adder(5, 2)로 간주
    std::cout<<Adder(3, 5)<<std::endl;
    return (0);
}