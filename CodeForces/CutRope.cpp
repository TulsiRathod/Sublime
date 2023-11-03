#include<bits/stdc++.h>
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
#define REP(i,a,n)  for(int i=a;i<n;i++)
#define REPR(i,n,a)  for(int i=n;i>=a;i--)
#define arin(arr,n)  for(int i=0;i<n;i++)cin>>arr[i];
#define arout(arr,n) for(int i=0;i<n;i++)cout<<arr[i]<<" ";
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
	int n;cin>>n;
	int ans=0;
	REP(i,0,n){
		int x,y;cin>>x>>y;
		if(x>y)ans++;
	}	
	cout<<ans<<"\n";
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