#include <iostream>

using namespace std;

int main()
{
    int a = 42, b = 7;

    int* ptr = &a;
    cout << ptr << endl;
    cout << *ptr << endl;

    ptr = &b;
    cout << ptr << endl;
    cout << *ptr << endl;
    
    *ptr = 13;
    cout << ptr << endl;
    cout << *ptr << endl;

    string s = "world";
    string* ptrStr = &s;
    cout << ptrStr << endl;

    string w = " hello";
    string* ptrW = &w;

    ptrStr->insert(0, "Hello ");
    cout << *ptrStr << endl;

    ptrStr->append(" !:)");
    cout << *ptrStr << endl;

    ptrStr->append(*ptrW);
    cout << *ptrStr << endl;

    return 0;
}

