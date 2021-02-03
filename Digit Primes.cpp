/* Link of question
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1474
*/
#include<iostream>
#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
int check[MAX];

bool isPrime(int n) 
{ 
if (n <= 1) 
return false; 
if (n <= 3) 
return true;
if (n % 2 == 0 || n % 3 == 0) 
return false;   
for (int i = 5; i * i <= n; i = i + 6) 
if (n % i == 0 || n % (i + 2) == 0) 
return false; 
return true; 
}

bool isDigitPrime(int n){
if(isPrime(n)){
int ds = 0;
while(n > 0){
ds += n%10;
n = n/10;
}
}
else
return false;
}

void make(){
int assign = 0;
for(int i = 0; i < MAX; i++){
if(isDigitPrime(i))
assign++;
check[i] = assign;
}
}
int main(){
int tc;
scanf("%d",&tc);
while(tc--){
int lb,ub;
scanf("%d",&lb);
scanf("%d",&ub);
court<<check[ub]-check[lb-1]<<endl;
}
}
