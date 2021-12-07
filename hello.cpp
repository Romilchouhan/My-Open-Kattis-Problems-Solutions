# include <iostream>
# include <bits/stdc++.h>
# include <cmath>
using namespace std;
typedef long long ll;
# define endl "\n"
# define rep(i, a, b) for(int i = a; i < b; i++)
const int mod = 1e9 + 7;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long a, b;
  while(scanf("%lld%lld", &a, &b) == 2){
    printf("%lld\n", max(a, b) - min(a, b));
  }
  return 0;
 }
