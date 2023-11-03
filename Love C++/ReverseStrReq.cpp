#include<bits/stdc++.h>
using namespace std;
void Rev(string& str,int s,int e){
	if(s>e)return ;
	swap(str[s],str[e]);
	s++;
	e--;
	Rev(str,s,e);
	return;
}
int main(){
	string str{"Vande Mataram"};
	int n=13;
	Rev(str , 0 , str.length()-1);
	cout<<str<<endl;
	return 0;
}