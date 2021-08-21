#include <iostream>

using namespace std;

template <typename T>
void calc(T a, T b, char segno) {
    switch (segno)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    
    case '-':
        cout<<a-b<<endl;
        break;

    case '*':
        cout<<a*b<<endl;
        break;

    case '/':
        cout<<a/b<<endl;
        break;

    case '%':
        cout<<a%b<<endl;
        break;

    default:
        cout<<"error: insert a valid sign or number"<<endl;
        break;
    }
}