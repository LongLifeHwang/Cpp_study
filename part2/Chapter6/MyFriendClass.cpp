#include <iostream>

class Girl;

class Boy
{
    private:
        int height;
        friend class Girl;       
    public:
        Boy(int len) : height(len)
        {
        }
        void    ShowYourFriendInfo(Girl& frn);
};

class Girl
{
    private:
        std::string phNum;
    public:
        Girl(std::string num)
        {
            phNum = num;
        }
        void    ShowYourFriendInfo(Boy& frn);
        friend class Boy;
        
};

void    Boy::ShowYourFriendInfo(Girl& frn)
{
    std::cout<<"Her phone number: "<<frn.phNum<<std::endl;
}

void    Girl::ShowYourFriendInfo(Boy& frn)
{
    std::cout<<"His height: "<<frn.height<<std::endl;
}

int main(void)
{
    Boy     boy(170);
    Girl    girl("010-1234-5678");

    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);
    return (0);
}
