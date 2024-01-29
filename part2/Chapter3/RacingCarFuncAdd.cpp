#include <iostream>

typedef struct s_car
{
    char gamerID[20];
    int fuelGauge;
    int curSpeed;

    void    ShowCarState()
    {
        std::cout<<"소유자ID: "<<gamerID<<"\n";
        std::cout<<"연료량: "<<fuelGauge<<"\n";
        std::cout<<"현재 속도: "<<curSpeed<<std::endl;
    }
    void    Accel()
    {
        if (fuelGauge <= 0)
        {
            std::cout<<"leaks soil"<<std::endl;
            return ;
        }
        else
            fuelGauge -= 2;
        curSpeed += 10;
        if (curSpeed >= 200)
        {
            curSpeed = 200;
            return ;
        }
    }
    void    Break()
    {
        if (curSpeed < 10)
        {
            curSpeed = 0;
            return ;
        }
        curSpeed -= 10;
    }
}   t_car;

int main(void)
{
    t_car   ingu = {"ingu", 100, 0};
    t_car   yakim = {"yakim", 200, 0};

    ingu.Accel();
    ingu.Accel();
    ingu.ShowCarState();
    ingu.Break();
    ingu.ShowCarState();
    yakim.Accel();
    yakim.Break();
    yakim.ShowCarState();
    return (0);
}