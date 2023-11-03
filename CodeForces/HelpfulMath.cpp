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

char toLowerCase(char ch){
	if(ch>='a'&&ch<='z')
		return ch;
	if(ch>='A'&&ch<='Z')
		return 'a'+(ch-'A');
	else return -1;
}

void solve(){
	string str1,str2;
	int one=0,two=0,three=0;
	cin>>str1;
	for(int i=0;i<str1.length();i++){
		if(str1[i]=='1')one++;
		if(str1[i]=='2')two++;
		if(str1[i]=='3')three++;
	}
	while(one--){
		str2+="1+";
	}

	while(two--){
		str2+="2+";
	}
	while(three--){
		str2+="3+";
	}
	str2.pop_back();
	cout<<str2<<endl;
}

int main(){
	// ll tc;
	// cin>>tc;
	// while(tc--){
		solve();
	// }
	return 0;
}