

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
    stack<int>st;
    unordered_map<int,int>mp;
   vector<int>num1(3);
    vector<int>num2(4);
    for(int i=0;i<3;i++){
        cin>>num1[i];
    }
    for(int i=0;i<4;i++){
        cin>>num2[i];
    }
    for(int i=3;i>=0;i--){
        while(!st.empty() and st.top()<=num2[i]){
            st.pop();
        }
        if(st.empty()){
            mp.insert({num2[i],-1});
        }
        else
        {
            mp.insert({num2[i],st.top()});
        }
        st.push(num2[i]);
    }
    vector<int>ans;
    for(auto it: num1){
        ans.push_back(mp[it]);
    }
     for(auto it: ans){
       cout<<it<<nl;
    }

}
int main(){
   int test;
  cin>>test;
    while(test--){
     slove(); }

}




