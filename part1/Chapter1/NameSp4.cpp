#include <iostream>

/*
선언 및 정의를 따로하면 에러가 출력된다. 

::은 선언된 공간을 나타내는 연산자입니다. 
std::cout은 이름 공간 std에 선언된 cout
std::cin은 이름 광간 std에 선언된 cin
std::endl은 이름 공간 std에 선언된 endl
을 나타냅니다. 
위의 내용을 토대로 std의 이름 공간을 그려보면,
namespace std
{
    cout ....
    cin ....
    endl ....
    ....
}
*/

namespace Parent
{
    int num = 2;
    namespace SubOne
    {
        int num = 3;
    }
    namespace SubTwo
    {
        int num = 4;
    }
}

int main(void)
{
    std::cout<<Parent::num<<std::endl;
    std::cout<<Parent::SubOne::num<<std::endl;
    std::cout<<Parent::SubTwo::num<<std::endl;
    return (0);
}