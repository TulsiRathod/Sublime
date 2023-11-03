#include<bits/stdc++.h>
using namespace std;

void IO(){
	ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

#define int long long
#define TEST int t = 1; cin >> t; while(t--) solve();
#define all(n) n.begin(),n.end()
#define REP(i,a,n)  for(i=a;i<n;i++)
#define REPR(i,n,a)  for(i=n;i>=a;i--)
#define all(n) n.begin(),n.end()

using pii=pair<int,int>;
using pll=pair<int,int>;
using vi=vector<int>;
using vll=vector<int>;

void solve(){
	int n;cin>>n;
	vi a(n),b(n);
	for(int i=0;i<n;i++)cin>>a[i];
	b=a;
	sort(all(b));
	bool flag{1};
	for(int i=0;i<n;i++){
		if((a[i]+b[i])&1==1)flag=0;
	}
	cout<<(flag?"YES":"NO")<<endl;
}

int32_t main(){
	IO();
	TEST
	return 0;
}