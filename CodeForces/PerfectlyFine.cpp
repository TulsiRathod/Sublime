#include<bits/stdc++.h>
using namespace std;

#define TEST int t = 1; cin >> t; while(t--) solve();
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef vector<vector<ll> > vvll;
typedef vector<vector<ld> > vvld;
typedef vector<vector<vector<ll> > > vvvll;
typedef vector<string> vstr;
typedef vector<pair<ll,ll> > vpll;
typedef pair<ll,ll> pll;

#define all(n) (n).begin(),(n).end()
#define allr(n) (n).rbegin(),(n).rend()
#define REP(i,a,n)  for(int i=a;i<n;i++)
#define REPR(i,n,a)  for(int i=n-1;i>=a;i--)
#define ai(arr,n)  for(int i=0;i<n;i++)cin>>arr[i];
#define ao(arr,n) for(int i=0;i<n;i++)cout<<arr[i]<<" ";
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define sz(a) a.size()
#define TEST int t = 1; cin >> t; while(t--) solve();
#define PI 3.1415926535897932384626433832795l
const ll INF = 1e9 + 7;
long long cnt=0;

void solve(){
    int n;cin>>n;
    int f=INF,s=INF,t=INF;
    REP(i,0,n){
        int x;cin>>x;
        string str;cin>>str;
        if(str=="11"){
            t=min(t,x);
        }else if(str=="01"){
            f=min(x,f);
        }else if(str=="10"){
            s=min(x,s);
        }
    }
    if(t!=INF&&s!=INF&&f!=INF){
        cout<<min(t,(s+f))<<endl;
    }else if(t!=INF){
        cout<<t<<endl;
    }else if(s!=INF && f!=INF){
        cout<<s+f<<endl;
    }else cout<<-1<<endl;
}

int32_t main(){
    SPEED
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    TEST
    // solve();
    return 0;
}