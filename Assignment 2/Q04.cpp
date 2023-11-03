#include <bits/stdc++.h>
using namespace std;
int main(){
	bitset<5> op(0);
	int n=0;
	while(n!=3){

		cout<<"1. Change Settings"<<endl;
		cout<<"2. View Settings"<<endl;
		cout<<"3. Exit"<<endl;
		cout<<"Enter Choice "<<endl;
		cin>>n;
		switch(n){
		case 1:
			int c;
			cout<<"0. OS Mode"<<endl;
			cout<<"1. Wifi"<<endl;
			cout<<"2. Mute"<<endl;
			cout<<"3. Airplane Mode"<<endl;
			cout<<"4. Taskbar"<<endl;
			cout<<"Enter Choise"<<endl;
			cin>>c;
			op[c]=~op[c];
			system("cls");
			break;
		case 2:
			system("cls");
			cout<<"OS Mode :"<<op[0]<<endl;
			cout<<"Wifi :"<<op[1]<<endl;
			cout<<"Mute :"<<op[2]<<endl;
			cout<<"Airplane Mode :"<<op[3]<<endl;
			cout<<"Taskbar :"<<op[4]<<endl;
			break;
		default:
			break;
		}
	}
	return 0;
}