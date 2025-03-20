#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(5);
 int cnt = ms.count(2);

 ms.erase(ms.find(2), next(ms.find(2),2));

 for (auto i : ms)
 {
     cout << i << endl;
    }
cout << *ms.begin() << endl;
// ms.begin() returns an iterator (a pointer-like object) to the first element in the multiset
}







