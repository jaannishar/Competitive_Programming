/* Question Link
https://codeforces.com/contest/1463/problem/A
*/
#include <iostream>
#include <bits/stdc++.h>
#define ll  long long int
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll sum =a+b+c;
        if(sum%9 != 0 || a < sum/9 || b < sum/9 || c < sum/9)      cout<<"NO\n";
        else
            cout<<"YES\n";
        }
    return 0;
}