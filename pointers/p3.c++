#include <iostream>
using namespace std;
int main()
 {
//     int num = 5;
//     int *p = &num;
//     cout << "the value of p* is " << *p << endl; //*p me value ati 
//     cout << "the value of p is" << p << endl; //sirf p me address ata hai 
//     // cout << p;
//     cout << "copying a pointer" << endl;
//     int *q = p;
//     cout << "the value of *q is" << *q << endl;
//     cout <<"value of q is "<< q << endl;
int i = 3;
int *t = &i;

*t = *t + 1;
cout <<"value of *t is"<< *t << endl;
cout << "value of t is " << t << endl;
t = t - 1;
cout << "value of t after increment is" <<t<< endl;
}