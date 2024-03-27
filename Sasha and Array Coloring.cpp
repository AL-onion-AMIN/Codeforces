

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
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    lli sum=0;
    sort(vec.begin(),vec.end());
    for(int i=0,j=n-1;i<j;i++,j--){
        sum+=(vec[j]-vec[i]);
    }
    cout<<sum<<nl;


    }

int main(){
   int test;
  cin>>test;
    while(test--){
     slove(); }

}




