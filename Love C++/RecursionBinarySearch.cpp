#include<bits/stdc++.h>
using namespace std;

bool RecBin(int *arr,int start,int end,int key){
	if(start>=end)return false;
	int mid=start+(end-start)/2;
	if(arr[mid]==key){
		return true;
	}else if(arr[mid]>key){
		return RecBin(arr,start,mid-1,key);
	}else{
		return RecBin(arr,mid+1,end,key);
	}
}

int main(){
	int arr[5]{2,4,6,8,7};
	int size=5;
	int key=0;
	bool result=RecBin(arr,0,size,key);
	if(result)cout<<"Present";
	else cout<<"Not Present";
	return 0;
}