#include <iostream>

class   Point
{
    public:
        int x;
        int y;
};

class   Rectangle
{
    public:
        Point   upLeft;
        Point   lowReight;
        void    ShowRecInfo()
        {
            std::cout<<"좌 상단: "<< '[' << upLeft.x<<", ";
            std::cout<<upLeft.y<<"]\n";
            std::cout<<"우 하단: "<<'['<<lowReight.x<<", ";
            std::cout<<lowReight.y<<"]\n"<<std::endl;
        }
};

int main(void)
{
    Point   pos1 = {-2, 4};
    Point   pos2 = {5, 9};

    Rectangle   rec = {pos2, pos1};
    rec.ShowRecInfo();
    return (0);
}