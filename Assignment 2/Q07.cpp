#include<iostream>
#include<string.h>
#include <cstring>
#include <cctype>
using namespace std;
int main(){
	cout<<"Enter String :";
	char temp[100];
	cin>>temp;
	char chArrayA[100],chArrayB[100];
	strcpy(chArrayA,temp);
	cin>>temp;
	strcpy(chArrayB,temp);
	cout<<"1)"<<endl;
	cout<<"String 1 : "<<chArrayA<<endl;
	cout<<"String 2 : "<<chArrayB<<endl;

	strcat(chArrayA," ");
	strcat(chArrayA,chArrayB);
	cout<<"2)"<<endl;
	cout<<"String 1 : "<<chArrayA<<endl;
	cout<<"String 2 : "<<chArrayB<<endl;
	cout<<"Enter String :";
	cin.ignore();
	cin.getline(chArrayA,sizeof(chArrayA));
	cout<<"3)"<<endl;
	cout<<"String 1 : "<<chArrayA<<endl;
	cout<<"String 2 : "<<chArrayB<<endl;

	int len=strlen(chArrayA);
	for(int i=0;i<len;i++){
		chArrayB[i]=chArrayA[len-i-1];
	}
	chArrayB[len]='\0';
	cout<<"4)"<<endl;
	cout<<"String 1 : "<<chArrayA<<endl;
	cout<<"String 2 : "<<chArrayB<<endl;

	char* words[100];
    int numWords = 0;

    char* token = std::strtok(chArrayA, " ");
    while (token != nullptr) {
        words[numWords++] = token;
        token = std::strtok(nullptr, " ");
    }

    strcpy(chArrayB, "");  // Clear chArrayB
    for (int i = numWords - 1; i >= 0; i--) {
        strcat(chArrayB, words[i]);
        strcat(chArrayB, " ");
    }
    chArrayB[strlen(chArrayB) - 1] = '\0';  // Removing the last space

    cout<<"5)"<<endl;
	cout<<"String 1 : "<<chArrayA<<endl;
	cout<<"String 2 : "<<chArrayB<<endl;

	int j = 0;
    for (int i = 0; i < len; i++) {
        if (std::isalpha(chArrayA[i])) {
            chArrayB[j] = chArrayA[i];
            j++;
        }
    }
    chArrayB[j] = '\0';
    
	cout<<"6)"<<endl;
	cout<<"String 1 : "<<chArrayA<<endl;
	cout<<"String 2 : "<<chArrayB<<endl;


	return 0;
}