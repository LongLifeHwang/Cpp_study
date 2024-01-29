#include <iostream>

/*
using을 이용한 이름공간의 명시

using Hybird::HybFunc;
이는 Hybird에서 HybFunc이라는 변수이든 함수를 찾으라는 뜻입니다. 
선언 이후에 효력이 발생되고 지역 변수로 선언을 하였다면 선언된 지역을 벗어나면 효력이 사라집니다. 
*/

namespace Hybird
{
    void    HybFunc(void)
    {
        std::cout<<"So simple function!"<<std::endl;
        std::cout<<"In namespace Hybird!"<<std::endl;
    }
}

int main(void)
{
    using Hybird::HybFunc;
    HybFunc();
    return (0);
}