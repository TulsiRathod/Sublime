#include<bits/stdc++.h>
using namespace std;

#define TEST int t = 1; cin >> t; while(t--) solve();
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define int long long
typedef long double ld;
typedef vector<int> vi;
typedef vector<int> vll;
typedef vector<ld> vld;
typedef vector<vector<int> > vvll;
typedef vector<vector<ld> > vvld;
typedef vector<vector<vector<int> > > vvvll;
typedef vector<string> vstr;
typedef vector<pair<int,int> > vpll;
typedef pair<int,int> pll;

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
#define p(x) cout<<(x)<<endl
const int INF = 1e9 + 7;


void solve(){
    int arr[]{10, 21, 13, 34, 50, 65, 72};
    for(auto i:arr){
        if(!(i&1))i*=2;
        cout<<i<<" ";
    }
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