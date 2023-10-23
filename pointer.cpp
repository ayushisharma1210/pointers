#include<iostream>
using namespace std;
int main()
{
    int i;
    float fl;
    int*int_ptr;
    float*float_ptr;
    char*char_ptr;

    i=5;
    fl= 3.4;
    int_ptr = &i;
    cout << "*int_ptr=" << *int_ptr;
    cout<< "&i=" << &i;
    cout<<"int_ptr=" << int_ptr;
}