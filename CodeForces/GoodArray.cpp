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
using pii=pair<int,int>;
using pll=pair<long long,long long>;
using vi=vector<int>;
using vll=vector<long long>;

#define all(n) n.begin(),n.end()
#define REP(i,a,n)  for(i=a;i<n;i++)
#define REPR(i,n,a)  for(i=n;i>=a;i--)


void solve(){
	int n;cin>>n;
	vi v(n);
	int cnt=0,sum=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		sum+=v[i];
		if(v[i]==1)cnt++;
	}
	if(sum>=cnt+n&&n>1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
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