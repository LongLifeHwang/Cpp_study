#include <iostream>

/*
true와 false는 bool자료형이다. 
true는 숫자 1이 아니라 bool형 1이다. 
false는 숫자 0이 아니라 bool형 0이다. 
*/

int main(void)
{
    int num;

    std::cout<<"true : "<<true<<std::endl;
    std::cout<<"false : "<<false<<std::endl;
    num = 0;
    while (true)
    {
        std::cout<<num<<' ';
        if (++num == 10)
            break ;
    }
    std::cout<<std::endl;
    std::cout<<"sizeof 1: "<<sizeof(1)<<std::endl;
    std::cout<<"sizeof 0: "<<sizeof(0)<<std::endl;
    std::cout<<"sizeof true: "<<sizeof(true)<<std::endl;
    std::cout<<"sizeof false: "<<sizeof(false)<<std::endl;
    return (0);
}