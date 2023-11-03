#include<bits/stdc++.h>
using namespace std;

#define ll long long
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vll=vector<ll>;

#define all(n) n.begin(),n.end()
#define REP(i,a,n)  for(int i=a;i<n;i++)
#define REPR(i,n,a)  for(int i=n;i>=a;i--)

void solve(){
	ll x,y,n;
	cin>>x>>y>>n;
	vi arr(n,0);
	ll dec=1;
	arr[0]=x;
	arr[n-1]=y;
	REPR(i,n-2,1)arr[i]=arr[i+1]-dec,dec++;
	ll ans=arr[1]-arr[0];
	REP(i,1,n-1){
		int def=arr[i+1]-arr[i];
		if(def>=ans){
			ans=-1;
		}
		
	}
	if(ans>0)
	REP(i,0,n)cout<<arr[i]<<" ";
	else
	cout<<-1<<endl;
}

int main(){
	ll tc;
	cin>>tc;
	while(tc--){
		solve();
	}
	return 0;
}