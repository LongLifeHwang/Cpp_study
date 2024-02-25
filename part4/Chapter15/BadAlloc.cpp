#include <iostream>
#include <new>

int main(void)
{
    int num;

    num = 0;
    try
    {
        while (1)
        {
            num++;
            std::cout<<num<<" malloc\n";
            new int[1000][1000];
        }
    }
    catch(std::bad_alloc &bad)
    {
        std::cout<<bad.what()<<"\n";
        std::cout<<"finish"<<std::endl;
    }
    return (0);
}