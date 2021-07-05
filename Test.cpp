
#include <iostream>

using namespace std;

class Test
{

public:
    int a;
    int b;

    Test(int a, int b)
    {
        a = a;
        b = b;
    }

    void set(int a)
    {
        a = a;
    }

    ~Test()
    {

    }
};