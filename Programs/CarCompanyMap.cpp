#include <bits/stdc++.h>
using namespace std;
map<int, string> mpp;
void backEnd(int userID, char *choice){
	mpp[userID]=choice;
}

void frontEnd(){
	char choice[9]={"00000000"};
	bool intrested;
	cout<<"Are Youn intresed? (1 for Yes)"<<endl;
	cin>>intrested;
	int userID;
	cout<<"Enter User ID"<<endl;
	cin>>userID;
	while(intrested){
		int c1;
		cout<<choice<<endl;
		cout<<"1. Seat Cover"<<endl;
		cout<<"2. Alloys"<<endl;
		cout<<"3. Color"<<endl;
		cout<<"4. Steering Cover"<<endl;
		cout<<"5. Save"<<endl;
		cin>>c1;
		if(c1==1){
			char c2[2];
			cout<<"00. Beige"<<endl;
			cout<<"01. Dark"<<endl;
			cout<<"10. Dual Pattern"<<endl;
			cin>>c2;
			if(c2[1]=='0'||(c2[0]=='0'&&c2[1]=='1')){
				choice[7]='1';
				choice[5]=c2[0];
				choice[6]=c2[1];
			}		
		}else if(c1==2){
			choice[4]='1';
		}else if(c1==3){
			char c2[2];
			cout<<"00. CoffeeBrown"<<endl;
			cout<<"01. Pearl White"<<endl;
			cout<<"10. Marine Blue"<<endl;
			cout<<"11. Ash Grey"<<endl;
			cin>>c2;
			if((c2[1]=='1'||c2[1]!='0')&&(c2[1]!='1'||c2[0]!='0')){
				choice[3]='1';
				choice[1]=c2[0];
				choice[2]=c2[1];	
			}
		}else if(c1==4){
			 choice[0]='1';
		}else if(c1==5){
			backEnd(userID,choice);
			return;
		}else{
			cout<<"Invalid choice"<<endl;
		}
	}
}

void display(){
	cout << left << setw(10) << "UserID"
              << "SeatCovers"<<" | "
              << "Beige"<<" | "
              << "Dark"<<" | "
              << "DualPattern"<<" | "
              << "Alloys"<<" | "
              << "Color"<<" | "
              << "CoffeeBrown"<<" | "
              << "Pearl White"<<" | "
              << "Marine Blue"<<" | "
              << "Ash Grey"<<" | "
              << "Steering Cover" << std::endl;
	for(auto choice:mpp){
		cout<< left <<setw(15)<<choice.first;
        cout<< setw(17)<<choice.second[7];
        cout<<choice.second[6];
        cout<< setw(22)<<choice.second[5];
        cout<< setw(8)<<choice.second[4];
        cout<< setw(32)<<choice.second[3];
        cout<<choice.second[2];
        cout<< setw(32)<<choice.second[1];
        cout<<choice.second[0];
        cout<<endl;
	}
}

int main(){
	frontEnd();
	display();
	return 0;
}