

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
    int n,op;
    cin>>n;
    int x=1,y=3*n;


    if(n==1){cout<<1<<nl;cout<<x<<" "<<y<<nl;}
    else if(n==2){cout<<1<<nl;cout<<x<<" "<<y<<nl;}
    else {
            if(n%2==0){op=n/2;
            cout<<op<<nl;
           cout<<x<<" "<<y<<nl;
                for(int i=1;i<op;i++){
                        x+=3;
            y-=3;
                    cout<<x<<" "<<y<<nl;
                }
            }
    else {op=(n/2)+1;
     cout<<op<<nl;
           cout<<x<<" "<<y<<nl;
    for(int i=1;i<op;i++){
            x+=3;
            y-=3;
                    cout<<x<<" "<<y<<nl;
                }


    }
    }
    }


int main(){
   int test;
  cin>>test;
    while(test--){
     slove(); }

}



