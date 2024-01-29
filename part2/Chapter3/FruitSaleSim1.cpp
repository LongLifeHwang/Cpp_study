#include <iostream>

/*
객체지향 프로그래밍은 현실에 존재하는 사물과 대상, 그리고 그에 따른 행동을 있는 그대로 실체화 시키는 형태의 프로그래밍
객체는 하나 이상의 상태 정보(데이터)와 하나 이상의 행동(기능)으로 구성됨
*/

class FruitSeller
{
    private:
        int APPLE_PRICE;
        int numOfApples;
        int myMoney;
    public:
        void    InitMembers(int price, int num, int money)
        {
            APPLE_PRICE = price;
            numOfApples = num;
            myMoney = money;
        }
        int    SaleApples(int money)
        {
            int num;

            num = money / APPLE_PRICE;
            numOfApples -= num;
            myMoney += money;
            return (num);
        }
        void    ShowSalesResult()
        {
            std::cout<<"남은 사과: "<<numOfApples<<"\n";
            std::cout<<"판매 수익: "<<myMoney<<"\n"<<std::endl;
        }
};

class FruitBuyer
{
    int myMoney;
    int numOfApples;

    public:
        void    InitMembers(int money)
        {
            myMoney = money;
            numOfApples = 0;
        }
        void    BuyApple(FruitSeller &seller, int money)
        {
            numOfApples += seller.SaleApples(money);
            myMoney -= money;
        }
        void    ShowBuyResult()
        {
            std::cout<<"현재 잔액: "<<myMoney<<"\n";
            std::cout<<"사과 개수: "<<numOfApples<<"\n"<<std::endl;
        }
};

int main(void)
{
    FruitSeller seller;
    FruitBuyer  buyer;

    seller.InitMembers(1000, 20, 0);
    buyer.InitMembers(5000);
    buyer.BuyApple(seller, 2000);
    std::cout<<"과일 판매자의 현환\n";
    seller.ShowSalesResult();
    std::cout<<"과일 구매자의 현황\n";
    buyer.ShowBuyResult();
    return (0);
}
