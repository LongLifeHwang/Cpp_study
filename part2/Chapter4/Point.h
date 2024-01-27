#ifndef __POINT_H_
# define __POINT_H_

/*
정보 은닉: private로 선언하여 필요 임의로 값이 저장되는 것을 막음
*/

# include <iostream>

class   Point
{
    private:
        int x;
        int y;
    public:
        bool    InitMembers(int xpos, int ypos);
        int     GetX() const;
        int     GetY() const;
        bool    SetX(int xpos);
        bool    SetY(int ypos);
};

#endif
