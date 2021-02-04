/*
Question Link
https://codeforces.com/contest/1197/problem/C
*/

#include <iostream>
#include <bits/stdc++.h>
#define ll  long long int
using namespace std;
int main()
{
    int n,k,first = 0,second = 0;
    ll ans = 0;
    cin>>n>>k;
    int diff[n];
    cin>>first;
    for(int i = 0;i < n-1;i++){
        cin>>second;
        diff[i] = second-first;
        first = second;
        }
    sort(diff,diff+n-1);
    for(int i = 0; i  < n-k; i++)   ans += diff[i];
    cout<<ans<<endl;
    return 0;
}