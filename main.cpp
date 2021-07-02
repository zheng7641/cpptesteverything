#include <iostream>

int testA();

#define aa 0;
const int c2 = 0;

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
    return 0;
}

int testA() {
    return 0;
}