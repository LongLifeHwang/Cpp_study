#include <iostream>

/*
Call-by-reference는 참조자를 통해 진행하는 법과 메모리 주소를 통해 진행하는 방법 총 2가지 있습니다. 
참조자를 통해 진행을 할 경우에는 함수만 보았을 때 값이 변화했는지 안했는지 알 수가 없습니다. 
따라서 함수 내에서 값을 변화시키지 않을 것이라면 const를 선언하여 상수로 만드는 것도 하나의 방법입니다. 
*/

void	SwapByRef2(int &ref1, int &ref2)
{
	int	temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 20;
	SwapByRef2(num1, num2);
	std::cout<<"num1 : "<<num1<<std::endl;
	std::cout<<"num2 : "<<num2<<std::endl;
	return (0);
}
