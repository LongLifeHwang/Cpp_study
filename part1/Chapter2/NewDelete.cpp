#include <iostream>
#include <string.h>

/*
<<메모리 할당하기>>
int형 변수의 할당                     int *ptr = new int;
double형 변수의 할당                  double *ptr2 = new double;
길이가 3인 int형 배열의 할당            int *arr1 = new int[3];
길이가 7인 double형 배열의 할당 double *arr2 = new double[7];

<<메모리 해제하기>>
int형 변수의 소멸       delete ptr1;
double형 변수의 소멸    delete ptr2;
int형 배열의 소멸       delete []arr1;
double형 배열의 소멸    delete []arr2;
*/

char    *MakeStrAdr(int len)
{
    char    *str = new char[len];
    return (str);
}

int main(void)
{
    char    *str;

    str = MakeStrAdr(20);
    strcpy(str, "I am so happy~");
    std::cout<<str<<std::endl;
    delete []str;
    return (0);
}