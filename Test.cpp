#include <iostream>

using namespace std;

class Test
{

private:
    int a;
    int b;

public:
    void setA(int aa)
    {
        a = aa;
    }

    Test(int ab){
        a = ab;
    }

    ~Test()
    {

    }
};