#include <iostream>

/*
상수화된 변수 : const 선언에 의해서 만들어진 변수를 가리켜 말합니다. 

const int &ref = 30;
이는 숫자 30이 메모리 공간에 계속 남아있을 때에나 성립이 가능한 문장입니다. 
그래서 c++에서는 위의 문장이 성립할 수 있도록 const 참조자를 이용해서 상수를 참조할 때 '임시 변수'라는 것을 만듭니다. 
그리고 이 장소에 상수 30을 저장하고 참조자가 이를 참조하게끔합니다. 
*/

int RefRetFunTwo(int &ref)
{
    ref++;
    return (ref);
}

int main(void)
{
    int num1;
    int num2;

    num1 = 1;
    num2 = RefRetFunTwo(num1);
    num1 += 1;
    num2 += 100;
    std::cout<<"num1 : "<<num1<<std::endl;
    std::cout<<"num2 : "<<num2<<std::endl;
    return (0);
}