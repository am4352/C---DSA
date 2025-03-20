#include<iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
map<int, int> mpp;
mpp.insert({2,4});
mpp.insert({3,5});
mpp.insert({6, 9});
// mpp.insert({2,4});
// mpp.insert({3, 1});
// mpp[2,3] = 10;

for(auto it: mpp)
{
    cout << it.first << " " << it.second << endl;

}

cout << mpp[4];
}
