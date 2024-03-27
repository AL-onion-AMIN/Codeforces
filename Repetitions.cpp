

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
 string str;
 cin>>str;
 int maxi=1;
 int ans=1;
 for(int i=0;i<str.size()-1;i++){
    if(str[i]==str[i+1]){
        ans++;
        //continue;
    }
    else{
            maxi=max(maxi,ans);

        ans=1;
    }
    maxi=max(maxi,ans);

 }
 cout<<maxi<<endl;
    }

int main(){

     slove(); }






