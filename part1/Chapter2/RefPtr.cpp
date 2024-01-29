#include <iostream>

int main(void)
{
    int num;
    int *ptr;
    int **dptr;
    int &ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    num = 10;
    ptr = &num;
    dptr = &ptr;
    std::cout<<ref<<std::endl;
    std::cout<<*pref<<std::endl;
    std::cout<<**dpref<<std::endl;
    return (0);
}