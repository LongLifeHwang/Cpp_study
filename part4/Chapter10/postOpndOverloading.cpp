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
        const Point operator++(int)
        {
            const Point retobj(xpos, ypos);

            xpos += 1;
            ypos += 1;
            return (retobj);
        }
        friend Point& operator--(Point &ref);
        friend const Point operator--(Point &ref, int);
};

Point& operator--(Point &ref)
{
    ref.xpos -= 1;
    ref.ypos -= 1;
    return (ref);
}

const Point operator--(Point &ref, int)
{
    const Point retobj(ref);

    ref.xpos -= 1;
    ref.ypos -= 1;
    return (retobj);
}

int main(void)
{
    Point   pos1(3, 5);
    Point   cpy;

    cpy = pos1--;
    cpy.ShowPosition();
    pos1.ShowPosition();
    cpy = pos1++;
    cpy.ShowPosition();
    pos1.ShowPosition();
    return (0);
}
