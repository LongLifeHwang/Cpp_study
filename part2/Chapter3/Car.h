#ifndef __CAR_H___
# define __CAR_H___

# include <iostream>
# include <cstring>

class Car
{
    private:
        std::string gamerID;
        int         fuelGauge;
        int         curSpeed;
    public:
        void    InitMembers(std::string ID, int fuel);
        void    ShowCarState();
        void    Accel();
        void    Break();
};

#endif
