#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(6);
    // v.push_back(5);
    // v.pop_back();
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
     
    vector<string>cars = {"volvo", "bmw", "audi" , "honda"};
    for (string car : cars) 
    {
        cout << car <<' ';
    }

    cout << cars.empty();
}
