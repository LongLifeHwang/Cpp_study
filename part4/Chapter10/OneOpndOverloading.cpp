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
            return *this;
        }
        friend Point& operator--(Point &ref);
};

Point& operator--(Point &ref)
{
    ref.xpos -= 1;
    ref.ypos -= 1;
    return (ref);
}

int main(void)
{
    Point   pos1(1, 2);

    ++pos1;
    pos1.ShowPosition();
    --pos1;
    pos1.ShowPosition();
    ++(++pos1);
    pos1.ShowPosition();
    --(--pos1);
    pos1.ShowPosition();
    return (0);
}
