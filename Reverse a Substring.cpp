/*
QUESTION LINK
https://codeforces.com/contest/1155/problem/A
*/

#include <iostream>
#include <bits/stdc++.h>
#define ll  long long int
using namespace std;

int main()
{
    ll n;
    string s;
    cin>>n;
    cin>>s;
    bool flag = false;
    int i = 1;
    while(i < n){
        if(s[i] < s[i-1]){
            flag = true;
            break;
        }
        else    i++;
    }
    if(flag)    cout<<"YES\n"<<i<<" "<<i+1;
    else    cout<<"NO\n";
    return 0;
}