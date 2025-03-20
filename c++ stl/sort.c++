#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first; // Sort by first element in descending order
}
int main()
{
  pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};
  sort(a, a + 1, comp);
  for(auto i: a)
  {
      cout << i.first << " " << i.second << endl;
  }
  int n = 2;
  int cnt = __builtin_popcount(n);
  cout << cnt << endl;
  int m = 841995;
  int cnl = __builtin_popcountll(m);
  cout << cnl << endl;

  string s = "1234"; // it should be in sorted order ;
  sort(s.begin(), s.end());
  do{
      cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));


}















