#include <cmath>
#include <cstdio>
#include <cstring>

/*
c언어에서 사용중인 헤더 파일을 사용하기 위해서는 .h를 빼고 앞에 c를 붙이면 c++의 헤더파일이 됩니다. 
#include <stdio.h>  ->  #include <cstdio>
#include <stdlib.h> ->  #include <cstdlib>
#include <math.h>   ->  #include <cmath>
#include <string.h> ->  #include <cstring>
*/

int main(void)
{
    char    str1[] = "Result";
    char    str2[30];

    strcpy(str2, str1);
    printf("%s : %f \n", str1, sin(0.14));
    printf("%s : %f \n", str2, abs(-1.25));
    return (0);
}