#include <iostream>

class CountryArea
{
    public:
        const static int    Russia = 1707540;
        const static int    CANADA = 998467;
        const static int    SOUTH_KOREA = 9922;
};

int main(void)
{
    std::cout<<"러시아 면적: "<<CountryArea::Russia<<'\n';
    std::cout<<"캐나다 면적: "<<CountryArea::CANADA<<'\n';
    std::cout<<"한국 면적: "<<CountryArea::SOUTH_KOREA<<'\n';
    return (0);
}
