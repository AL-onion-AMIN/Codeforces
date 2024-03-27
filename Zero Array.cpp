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
    lli sum=0;
    int first=0,second=0;
   //map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>vec[i];
       if(vec[i]%2!=0){
        first++;
       }
       else {second++;}
      //  mp[vec[i]]++;
    }
  if(first>second){
    cout<<"first"<<nl;
  }
  else {
    cout<<"second"<<nl;
  }
}
int main(){
 int test;
   cin>>test;
   while(test--){
    slove();
   }
}



