#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    // cout << &num;     
    int *ptr = &num;
    cout << ptr << endl;
    cout << *ptr << endl; //* is deference operator; *ptr gives value;
    cout << "size of pointer is " << sizeof(ptr) << endl;

    



}




















