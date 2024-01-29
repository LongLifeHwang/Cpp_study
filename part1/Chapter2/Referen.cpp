#include <iostream>

/*
참조자는 정말로 변수를 참조하는 것이다.
그냥 같은 주소를 참조하는 변수를 하나 더 만든다고 생각하면 좋을 것 같습니다. 
변수의 값 메모리 주소 모두를 공유하게 됩니다. 

참조자는 변수를 대상으로만 선언이 가능합니다. 
하지만 선언이 된 후에는 변수와 차이가 없습니다. 주소 값과 변수 값이 동일합니다. 
함수 내에서 선언된 지역적(local)참조자는 지역 변수와 마찬가지로 함수를 빠져나가면 소멸이 됩니다. 

참조자는 변수에 별명(별칭)을 하나 붙여주는 것입니다. 
*/

int main(void)
{
    int num1;
    int &num2 = num1;

    num1 = 10;
    std::cout<<"num1 : "<<num1<<std::endl;
    std::cout<<"num2 : "<<num2<<std::endl;
    std::cout<<"num1 adress : "<<&num1<<std::endl;
    std::cout<<"num2 address : "<<&num2<<std::endl;
    return (0);
}