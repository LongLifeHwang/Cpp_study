#include <iostream>

/*
static으로 변수를 선언한다면 한 번 초기화를 시켜주어야 합니다. 
*/

class SoSimple
{
    private:
        static int  simObjCnt;
    public:
        SoSimple()
        {
            simObjCnt++;
            std::cout<<simObjCnt<<"번째 SoSimple 객체"<<std::endl;
        }
};

class SoComplex
{
    private:
        static int  cmxObjCnt;
    public:
        SoComplex()
        {
            cmxObjCnt++;
            std::cout<<cmxObjCnt<<"번째 SoComplex 객체"<<std::endl;
        }
        SoComplex(SoComplex &copy)
        {
            cmxObjCnt++;
            std::cout<<cmxObjCnt<<"번째 SoComplex 객체"<<std::endl;
        }
};

int SoSimple::simObjCnt = 0;
int SoComplex::cmxObjCnt = 0;

int main(void)
{
    SoSimple    sim1;
    SoSimple    sim2;
    SoComplex   cmx1;
    SoComplex   cmx2 = cmx1;
    SoComplex();

    return (0);
}
