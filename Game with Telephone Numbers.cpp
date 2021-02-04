/*
QUESTION LINK
https://codeforces.com/contest/1155/problem/B
*/


#include <iostream>
#include <bits/stdc++.h>
#define ll  long long int
using namespace std;

int main()
{
    ll n,Eights = 0;
    string s;
    cin>>n;
    cin>>s;
    for(ll i = 0; i < n-10; i++){
        if(s[i] == '8')
            Eights++;
        }
        
    if(Eights > (n-11)/2)    cout<<"YES\n";
    else    cout<<"NO\n";
    return 0;
}