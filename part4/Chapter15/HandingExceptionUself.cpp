#include <iostream>

int main(void)
{
    int num1;
    int num2;

    std::cout<<"input(two number) ";
    std::cin>>num1>>num2;

    if (num2 == 0)
        std::cout<<"num2 does not become '0'"<<std::endl;
    else
    {
        std::cout<<"quota: "<<num1/num2<<"\n";
        std::cout<<"remainder: "<<num1 % num2 << std::endl;
    }
    return (0);
}