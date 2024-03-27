
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef vector<vi> vii;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define all(x) (x).begin(),(x).end()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define mod 1000000007
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl "\n"
void vecin(vl &v){for(int i=0;i<v.size();i++)cin>>v[i];}
void asort(vl &v){sort(all(v));}
void dsort(vl &v){sort(v.rbegin(),v.rend());}
ll minel(vl &v){ return *min_element(all(v));}
ll maxel(vl &v){ return *max_element(all(v));}

int dist(int a,int b,int c,int d){
    int o=pow(abs(a-c),2)+pow(abs(b-d),2);
    return o;
}
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n;cin>>n;
        vector<pair<int,int>> vp;
        vi v;
        int m=0;
        while(n--){
            int x,y;
            cin>>x>>y;
            vp.pb(mp(x,y));
        }
        int ind;
        vi arr(n);
        int k=0;
        for(int i=0;i<vp.size();i++){
                if(i<vp.size()-1){
            for(int j=i+1;j<vp.size();j++){
                //m=max(m,sqrt(pow(abs(vp[]-c),2)+pow(abs(b-d),2));)
                m=max(m,dist(vp[i].F,vp[i].S,vp[j].F,vp[j].S));
            }
                }
                else if(i==vp.size()-1) continue;
                arr[i]=m;
                //i++;
        }

        //int ma=*max_element(arr,arr+n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<nl;
        }
        //cout<<m<<nl;
        // for(auto i:vp){
        //     cout<<i.F<<" "<<i.S<<nl;
        // }
    }
    return 0;
}
