#include <iostream>

/*
using namespace std;
이름 공간 std에 선언된 모든 것에 대해 이름 공간 지정의 생략을 명령할 수 있습니다. 
이는 이름 공간 std에 선언된 모든 것에 접근할 때에는 이름 공간의 지정을 생략하겠다는 선언입니다. 

예제의 방법으로 사용하면 프로그래밍 하기에는 조금 편한 것은 사실입니다. 하지만 그만큼 이름 충돌이 발생할 확률은 상대적으로 높아집니다. 
*/

using namespace std;

int main(void)
{
    int num;

    num = 20;
    cout<<"Hello World!"<<endl;
    cout<<"Hello "<<"World!"<<endl;
    cout<<num<<' '<<'A';
    cout<<' '<<3.14<<endl;
    return (0);
}