#include <iostream>

template <typename T>
T   Add(T num1, T num2)
{
    return (num1 + num2);
}

int main(void)
{
    std::cout<<Add<int>(15, 20)<<"\n";
    std::cout<<Add<double>(2.9, 3.7)<<"\n";
    std::cout<<Add<int>(3.2, 3.2)<<"\n";
    std::cout<<Add<double>(3.14, 2.75)<<std::endl;
    return (0);
}
