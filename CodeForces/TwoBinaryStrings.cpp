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

// #define int long long
#define TEST int t = 1; cin >> t; while(t--) solve();
#define all(n) n.begin(),n.end()
#define REP(i,a,n)  for(i=a;i<n;i++)
#define REPR(i,n,a)  for(i=n;i>=a;i--)
#define all(n) n.begin(),n.end()

using pii=pair<int,int>;
using pll=pair<int,int>;
using vi=vector<int>;
using vll=vector<int>;

bool is_prime(int n){
	if (n <= 1)
        return false;
 
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}


void solve(){
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.length()-1;i++){
		if(a[i]=='0'&&b[i]=='0'&&a[i+1]=='1'&&b[i+1]=='1'){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}

int32_t main(){
	IO();
	TEST
	return 0;
}