#include <iostream>

/*
이름 공간: 이름을 붙여주기 위한 문법적 요소

함수의 이름과 인자가 완전히 같으면 충돌이 일어나게 됩니다. 이를 해결하기 위해 이름 공간을 만들어 함수들을 정리해 두면됩니다. 
*/

namespace BestComImp1
{
    void    SimpleFunc(void)
    {
        std::cout<<"BestCom이 정의한 함수"<<std::endl;
    }
}

namespace ProgComImp1
{
    void    SimpleFunc(void)
    {
        std::cout<<"ProgComImp이 정의한 함수"<<std::endl;
    }
}

int main(void)
{
    BestComImp1::SimpleFunc();
    ProgComImp1::SimpleFunc();
    return (0);
}