#include <iostream>

template <class T1, class T2>
void    ShowData(doble num)
{
    std::cout<<(T1)num<<", "<<(T2)num<<std::endl;
}

int main(void)
{
    ShowData<char, int>(65);
    ShowData<char, int>(67);
    ShowData<char, double>(68.9);
    ShowData<char, double>(69.2);
    return (0);
}