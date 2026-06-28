#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
long long int n;
cin>>n;
int i=0;
while(n!=1){
if(i>0)cout<<" ";
cout<<n; 
if(n%2==0)n/=2;
else n=n*3+1;
i+=1;
}
if(n==1)cout<<" 1";
}