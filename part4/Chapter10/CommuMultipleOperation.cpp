#include <iostream>

class Point
{
    private:
        int xpos;
        int ypos;
    public:
        Point(int x = 0, int y = 0) : xpos(x), ypos(y)
        {}
        void    ShowPosition() const
        {
            std::cout << '[' << xpos << ", "<<ypos<<']'<<std::endl;
        }
        Point& operator++()
        {
            xpos += 1;
            ypos += 1;
            return (*this);
        }
        Point operator*(int times)
        {
            Point pos(xpos * times, ypos * times);
            return (pos);
        }
        friend Point operator*(int times, Point& ref);
};

Point   operator*(int times, Point& ref)
{
    return (ref * times);
}

int main(void)
{
    Point   pos1(1, 2);
    Point   cpy;

    cpy = pos1 * 3;
    cpy.ShowPosition();
    cpy = 3 * pos1 * 2;
    cpy.ShowPosition();
    return (0);
}
