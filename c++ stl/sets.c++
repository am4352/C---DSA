#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //multi set doesnot remove duplicate
    multiset<string> cars = {"audi" , "audi" , "honda", "bmw"};     
    cars.insert("volvo");
    cars.insert("hyundai");
    
    cout << cars.size()<<endl;
    // cars.clear();
    for (string car : cars)
    {
        cout << car << " ";
        
    }
    cout << "nothing is there";
}









