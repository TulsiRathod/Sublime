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
#define arrin(arr,n)  for(int i=0;i<n;i++)cin>>arr[i];
#define arrout(arr,n) for(int i=0;i<n;i++){cout<<arr[i]<<" ";}cout<<endl;
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
	int n,k,sum=0;cin>>n>>k;
	vi arr(n),v;
	arrin(arr,n);
	REP(i,1,n){
		v.pb(abs(arr[i]-arr[i-1]));
		sum+=v.back();
	}
	// arrout(v,n-1);
	sort(all(v));
	REP(i,1,k){
		sum-=v.back();
		v.pop_back();
	}
	cout<<sum<<endl;
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