#include <iostream>

/*
c++로 헤더 파일의 확장자는 .h입니다.
cpp개발자가 헤더파일의 선언에서는 확장자를 생략하기로 하였습니다. 
그 이유로 과거의 표준 라이브러리와 새로운 표준 라이브러리의 구분, 새로운 표준 라이브러리를 사용하는 형태로 소스코드를 쉽게 변경할 수있도록 하기 위해서
(iostream은 최근에 나온 헤더 파일이지만 iostream.h는 과거의 헤더파일을 선언하는 것)

std::cout<<'출력 대상';
<<는 '출력 대상'을 이어주는 연산자
*/

int main(void)
{
    int num;

    num = 20;
    std::cout<<"Hellow World!"<<std::endl;
    std::cout<<"Hello "<<"World!"<<std::endl;
    std::cout<<num<<' '<<'A';
    std::cout<<' '<<3.14<<std::endl;
    return (0);
}