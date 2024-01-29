#include <iostream>
#include <cstring>

typedef struct s_bank
{
    int             id;
    int             money;
    char            name[100];
}   t_bank;

static int  find_id(t_bank *bank, int id, int flag)
{
    int i;

    i = -1;
    while (++i <= flag)
    {
        if (bank[i].id == id)
            return (i);
    }
    return (-1);
}

void    select(t_bank *bank, int num, int &flag)
{
    int id;
    int i;
    int money;
    int find;

    if (num == 1)
    {
        flag++;
        std::cout<<"\n[계좌 개설]"<<std::endl;
        std::cout<<"계좌ID: ";
        std::cin>>bank[flag].id;
        std::cout<<"이름: ";
        std::cin>>bank[flag].name;
        std::cout<<"입금액: ";
        std::cin>>bank[flag].money;
    }
    else if (num == 2)
    {
        std::cout<<"\n[입 금]"<<std::endl;
        std::cout<<"계좌ID: ";
        std::cin>>id;
        find = find_id(bank, id, flag);
        if (find < 0)
        {
            std::cout<<"id가 없습니다."<<std::endl;
            return ;
        }
        std::cout<<"입금액";
        std::cin>>money;
        bank[find].money += money;
        std::cout<<"입금 완료\n\n";
    }
    else if (num == 3)
    {
        std::cout<<"\n[출 금]"<<std::endl;
        std::cout<<"계좌ID: ";
        std::cin>>id;
        find = find_id(bank, id, flag);
        if (find < 0)
        {
            std::cout<<"id가 없습니다.\n"<<std::endl;
            return ;
        }
        if (bank[find].money < 0)
        {
            std::cout<<"마이너스 통장입니다.\n"<<std::endl;
            return ;
        }
        std::cout<<"출금액";
        std::cin>>money;
        bank[find].money -= money;
        std::cout<<"출금 완료\n\n";
    }
    else if (num == 4)
    {
        i = -1;
        while (++i <= flag)
        {
            std::cout<<"\n계좌ID: ";
            std::cout<<bank[i].id<<"\n";
            std::cout<<"이 름 :";
            std::cout<<bank[i].name<<"\n";
            std::cout<<"잔 액:";
            std::cout<<bank[i].money<<"\n";
        }
    }
}

int main(void)
{
    int     num;
    int     i;
    t_bank  bank[100];

    i = -1;
    while (i < 100)
    {
        std::cout<<"-----Menu-----"<<std::endl;
        std::cout<<"1. 계좌개설"<<std::endl;
        std::cout<<"2. 입금"<<std::endl;
        std::cout<<"3. 출금"<<std::endl;
        std::cout<<"4. 계좌정보 전체 출력"<<std::endl;
        std::cout<<"5. 프로그램 종료"<<std::endl;
        std::cout<<"선택: ";
        std::cin>>num;
        select(bank, num, i);
        if (num == 5)
            break ;
    }
    return (0);
}