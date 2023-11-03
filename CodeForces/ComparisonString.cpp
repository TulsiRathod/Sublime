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
#define all(n) n.begin(),n.end()
#define REP(i,a,n)  for(i=a;i<n;i++)
#define REPR(i,n,a)  for(i=n;i>=a;i--)

using pii=pair<int,int>;
using pll=pair<int,int>;
using vi=vector<int>;
using vll=vector<int>;

void solve(){
	int n;cin>>n;
	string str;
	cin>>str;
	int ans=1,cnt=1;
	for(size_t i=1;i<n;i++){
		if(str[i]!=str[i-1])cnt=1;
		else cnt++;
		ans=max(ans,cnt);
	}
	cout<<ans+1<<endl;
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