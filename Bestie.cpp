

//Coder= Al-Amin Bhuiyan
// from DUET
#include<bits/stdc++.h>
using namespace std;
#define  lli     long long int
#define  PI      3.1416
#define  nl      "\n"
#define  ce      cout<<"\n"
#define  mod     1000000007
#define  pb      push_back
#define  yes     cout<<"YES"<<"\n"
#define  no      cout<<"NO"<<"\n"
#define S        size()
#define L        length()
#define B        begin()
#define E        end()
#define F        first
#define se       second

void slove(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int r=v[0];
    for(int i=1;i<n;i++){
            r=__gcd(r,v[i]);
    }
 //   int mini=INT_MAX;
    if(r==1){cout<<0<<nl;}
   else if(__gcd(r,n)==1){cout<<1<<nl;}
   else if (__gcd(r,n-1)==1){cout<<2<<nl;}
   else {cout<<3<<nl;}
    }



int main(){
   int test;
  cin>>test;
    while(test--){
     slove(); }

}


