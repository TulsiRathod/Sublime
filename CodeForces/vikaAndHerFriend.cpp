#include<bits/stdc++.h>
using namespace std;

void IO(){
	ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

#define int long long
#define all(n) n.begin(),n.end()
#define REP(i,a,n)  for(i=a;i<n;i++)
#define REPR(i,n,a)  for(i=n;i>=a;i--)

using pii=pair<int,int>;
using pll=pair<int,int>;
using vi=vector<int>;
using vll=vector<int>;

void solve(){
	int n,m,k;cin>>n>>m>>k;
	int x,y;cin>>x>>y;
	string ans="YES";
	for(int i=0;i<k;i++){
		int xx,yy;cin>>xx>>yy;
		if((x+y)%2==(xx+yy)%2){ans="NO";}
	}
	cout<<ans<<endl;
}

int32_t main(){
	IO();
	int tc;
	cin>>tc;
	while(tc--){
		solve();
	}
	return 0;
}