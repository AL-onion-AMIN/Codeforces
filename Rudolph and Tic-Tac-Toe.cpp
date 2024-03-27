


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
  char arr[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
  }

    if((arr[0][0]=='X' and arr[1][0]=='X' and arr[2][0]=='X') or
      (arr[0][1]=='X' and arr[1][1]=='X' and arr[2][1]=='X') or
       (arr[0][2]=='X' and arr[1][2]=='X' and arr[2][2]=='X') or

       (arr[0][0]=='X' and arr[0][1]=='X' and arr[0][2]=='X') or
       (arr[1][0]=='X' and arr[1][1]=='X' and arr[1][2]=='X') or
       (arr[2][0]=='X' and arr[2][1]=='X' and arr[2][2]=='X') or
       (arr[2][0]=='X' and arr[1][1]=='X' and arr[0][2]=='X') or
       (arr[0][0]=='X' and arr[1][1]=='X' and arr[2][2]=='X') ){
        cout<<"X"<<nl;
       }
       else if((arr[0][0]=='O' and arr[1][0]=='O' and arr[2][0]=='O') or
      (arr[0][1]=='O' and arr[1][1]=='O' and arr[2][1]=='O') or
       (arr[0][2]=='O' and arr[1][2]=='O' and arr[2][2]=='O') or

       (arr[0][0]=='O' and arr[0][1]=='O' and arr[0][2]=='O') or
       (arr[1][0]=='O' and arr[1][1]=='O' and arr[1][2]=='O') or
       (arr[2][0]=='O' and arr[2][1]=='O' and arr[2][2]=='O') or
       (arr[2][0]=='O' and arr[1][1]=='O' and arr[0][2]=='O') or
       (arr[0][0]=='O' and arr[1][1]=='O' and arr[2][2]=='O') ){
        cout<<"O"<<nl;
       }
       else if((arr[0][0]=='+' and arr[1][0]=='+' and arr[2][0]=='+') or
      (arr[0][1]=='+' and arr[1][1]=='+' and arr[2][1]=='+') or
       (arr[0][2]=='+' and arr[1][2]=='+' and arr[2][2]=='+') or

       (arr[0][0]=='+' and arr[0][1]=='+' and arr[0][2]=='+') or
       (arr[1][0]=='+' and arr[1][1]=='+' and arr[1][2]=='+') or
       (arr[2][0]=='+' and arr[2][1]=='+' and arr[2][2]=='+') or
       (arr[2][0]=='+' and arr[1][1]=='+' and arr[0][2]=='+') or
       (arr[0][0]=='+' and arr[1][1]=='+' and arr[2][2]=='+') ){
        cout<<"+"<<nl;
       }

       else
       {
           cout<<"DRAW"<<nl;
       }


    }

int main(){
   int test;
  cin>>test;
    while(test--){
     slove(); }

}




