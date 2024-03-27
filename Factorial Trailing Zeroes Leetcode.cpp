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
//const int N=1e5;
//int arr[N];
int  slove(int n){

    int ans=0 ,pw=5;
    while(n>=pw){ans+=n/pw;
    pw=pw*5;}


 return ans;


    }
int  trailing_zeros(){
    int n;
    cin>>n;
  int low=1,high=1e9,mid,ans;
  while(low<=high){
        mid=(low+high)/2;
        if(slove(mid)<n){
            low=mid+1;
        }
        else if(slove(mid)>n){
            high=mid-1;
        }
        else {
            ans=mid;
            high=mid-1;
        }
        }
       return ans;
}

int main(){
   int test;
  cin>>test;
  int n=1;
    while(test--){
           cout<<"Case "<<n<<": "<<trailing_zeros()<<nl;
           n++;

}

}

