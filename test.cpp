#include<bits/stdc++.h>
using namespace std;

#define TEST int t = 1; cin >> t; while(t--) solve();
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define int long long
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vector<ll> > vvll;
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
#define len(a) a.length()
#define TEST int t = 1; cin >> t; while(t--) solve();
#define PI 3.1415926535897932384626433832795l
#define p(x) cout<<(x)<<endl
const int INF = 1e9 + 7;

void solve(){
    int n;cin>>n;
    vi a(n),b(n);
    ai(a,n);
    stack<int> s;
    s.push(-1);
    for(int i=n-1;i>=0;i--){
        while(s.top()!=-1&&s.top()<=a[i]){
            s.pop();
        }
        if(s.top()==-1){
            b[i]=-1;
            s.push(a[i]);
        }else if(s.top()>a[i]){
            b[i]=s.top();
            s.push(a[i]);
        }
    }
    ao(b,n);
}

int32_t main(){
    SPEED
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif  
    // TEST
    solve();
    return 0;
}