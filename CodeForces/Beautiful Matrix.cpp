#include<bits/stdc++.h>
using namespace std;

#define ll long long
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vll=vector<ll>;

#define all(n) n.begin(),n.end()
#define REP(i,a,n)  for(i=a;i<n;i++)
#define REPR(i,n,a)  for(i=n;i>=a;i--)

void solve(){
	int arr[5][5];
	int x=0,y=0,ans=0,i=0,j=0;
	REP(i,0,5)REP(j,0,5){cin>>arr[i][j];if(arr[i][j]==1)x=i,y=j;}
	ans+=abs(x-2);
	ans+=abs(y-2);
	cout<<ans<<endl;
}

int main(){
	solve();
	return 0;
}