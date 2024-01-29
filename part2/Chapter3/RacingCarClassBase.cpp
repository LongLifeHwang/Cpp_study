#include <iostream>
#include <cstring>

/*
class에 대해 알아보았습니다. 
class에는 private(자신만 접근이 가능)
         protective(상속 관계일 경우만 접근 가능)
         public(전부 접근이 가능)
한 부분으로 나누어져 있었습니다.

class와 struct의 차이는 위에서 public과 protextive를 사용하지 않는다면 class 외부에서 접근을 하지 못한다는 점이 있습니다. 

예를 하나 들자면 struct는 선언만 하면 내부 변수에 접근을 할 수 있지만 class는 그렇지 않다는 점이 가장 큰 차이점인 것 같습니다. 
*/

class Car
{
    private:
        std::string gamerID;
        int         fuelGauge;
        int         curSpeed;
    public:
        void        InitMembers(const std::string &ID, int fuel);
        void        ShowCarState();
        void        Accel();
        void        Break();
};

void    Car::InitMembers(const std::string &ID, int fuel)
{
    gamerID = ID;
    fuelGauge = fuel;
    curSpeed = 0;
}

void    Car::ShowCarState()
{
    std::cout<<"소유자 ID: "<<gamerID<<"\n";
    std::cout<<"연료량: "<<fuelGauge<<"%"<<"\n";
    std::cout<<"현재 속도: "<<curSpeed<<"km/h\n"<<std::endl;    
}

void    Car::Accel()
{
    if (fuelGauge <= 0)
        return ;
    else
        fuelGauge -= 2;
    if ((curSpeed + 10) >= 200)
    {
        curSpeed = 200;
        return ;
    }
    curSpeed += 10;
}

void    Car::Break()
{
    if (curSpeed < 10)
    {
        curSpeed = 0;
        return ;
    }
    curSpeed -= 10;
}

int main(void)
{
    Car run99;

    run99.InitMembers("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return (0);
}
