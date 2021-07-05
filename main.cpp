#include <iostream>

int testA();

#define aa 0;
const int c2 = 0;

class Test;

int main() {
    using namespace std;
    cout << "Hello, World!" << std::endl;
    int a = 0;
    string b = "1";
    cout << a << b << endl;
    int c = testA();

    short s1 = 0;
    int i1 = INT_MAX;
    long l1 = 0;

    cout << aa;

    int i2{1};
    int i3 = {2};
    int i4 = {}; //i4=0
    const int c1 = 0;

    int ar1[2] = {1}; //1 \0
    int ar2[3];
    ar2[0] = 1;
    ar2[1] = 1;

    char ch1[2] = {'a'};

//    cin.get();//读取一行
//
//
    cout<<endl;
    string st1 = "st1";
    cout<<st1<<endl;

    struct sss{
        int a;
        string  b;
    };

    sss s ;
    s.a=1;
    s.b="a";
    cout<<s.a<<s.b<<endl;

    cout<<&s<<endl;

    int a122313;
    a122313 = 0;
    int&r = a122313;
    cout<<r<<endl;

    time_t now = time(nullptr);
    char* dt = ctime(&now);
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout<<dt<<endl<<dt<<endl;

    Test* test1 = new Test(1,1);

    return 0;
}

int testA() {
    return 0;
}