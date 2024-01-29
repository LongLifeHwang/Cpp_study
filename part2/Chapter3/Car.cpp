#include "Car.h"

void    Car::InitMembers(std::string ID, int fuel)
{
    gamerID = ID;
    fuelGauge = fuel;
    curSpeed = 0;
}

void    Car::ShowCarState()
{
    std::cout<<"소유자ID: "<<gamerID<<"\n";
    std::cout<<"연료량: "<<fuelGauge<<"\n";
    std::cout<<"현재 속도: "<<curSpeed<<"km/h\n"<<std::endl;
}

void    Car::Accel()
{
    if (fuelGauge < 0)
        return ;
    else
        fuelGauge -= 2;
    if ((curSpeed + 10) > 200)
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
