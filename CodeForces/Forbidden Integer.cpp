#include<bits/stdc++.h>
#include<string.h>
using namespace std;

#define TEST int t = 1; cin >> t; while(t--) solve();
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
typedef long long  int ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef vector<vector<ll> > vvll;
typedef vector<vector<ld> > vvld;
typedef vector<vector<vector<ll> > > vvvll;
typedef vector<string> vstr;
typedef vector<pair<ll,ll> > vpll;
typedef pair<ll,ll> pll;

#define pb push_back
#define all(n) (n).begin(),(n).end()
#define allr(n) (n).rbegin(),(n).rend()
#define REP(i,a,n)  for(int i=a;i<n;i++)
#define REPR(i,n,a)  for(int i=n;i>=a;i--)
#define ai(arr,n)  for(int i=0;i<n;i++)cin>>arr[i];
#define ao(arr,n) for(int i=0;i<n;i++)cout<<arr[i]<<" ";
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define sz(a) a.size()
#define TEST int t = 1; cin >> t; while(t--) solve();
#define PI 3.1415926535897932384626433832795l
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve(){
    int m;cin>>m;
    REP(i,0,m){
        vi v;  
        int n,k,x;cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            while(n--)cout<<1<<" ";
        }else if(k==1 || (k==2 && n%2==1)){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<(n/2)<<endl;
            cout<<(n%2==1||n%2==2?3:2)<<" ";
            for (int i = 1; i < n / 2; i++) {
                cout << 2 << " ";
            }
            cout<<endl;
        }
    } 
    return;
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
    