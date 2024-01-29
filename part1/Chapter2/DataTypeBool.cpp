#include <iostream>

bool IsPositive(int num)
{
    if (num < 0)
        return (false);
    else
        return (true);
}

int main(void)
{
    bool    flag;
    int     num;

    std::cout<<"Input number: ";
    std::cin>>num;
    flag = IsPositive(num);
    if (flag)
        std::cout<<"Zero Or Postive number"<<std::endl;
    else
        std::cout<<"Negative number"<<std::endl;
    return (0);
}