#include "Rectangle.h"

int main(void)
{
    Point       pos1;
    Point       pos2;
    Rectangle   rec;

    if (!pos1.InitMembers(-2, 4))
        std::cout<<"초기화 실패\n";
    if (!pos1.InitMembers(2, 4))
        std::cout<<"초기화 실패\n";
    if (!pos2.InitMembers(5, 9))
        std::cout<<"초기화 실패\n";
    if (!rec.InitMembers(pos2, pos1))
        std::cout<<"직사각형 초기화 실패\n";
    if (!rec.InitMembers(pos1, pos2))
        std::cout<<"직사각형 초기화 실패\n";
    rec.ShowRecInfo();
    return (0);
}