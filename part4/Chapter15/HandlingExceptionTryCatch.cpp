#include <iostream>

int main(void)
{
    int num1;
    int num2;

    std::cout<<"input(two number) ";
    std::cin>>num1>>num2;

    try
    {
        if (num2 == 0)
            throw num2;
        std::cout<<"quota: "<<num1/num2<<"\n";
        std::cout<<"remainder: "<<num1 % num2 << std::endl;

    }
    catch(int expn)
    {
        std::cout<<"num2 does not become "<<expn<<".\n";
        std::cout<<"program restart"<<std::endl;
    }
    return (0);
}