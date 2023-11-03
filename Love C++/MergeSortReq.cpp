#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int start,int end){
	int mid=(start+end)/2;
	int len1=mid-start+1;
	int len2=end-mid;
	int index=start;
	int *first=new int[len1];
	int *second=new int[len2];

	for(int i=0;i<len1;i++){
		first[i]=arr[index++];
	}
	index=mid+1;
	for(int i=0;i<len1;i++){
		second[i]=arr[index++];
	}
	index=start;
	int index1=0,index2=0;
	while(index1<len1&&index2<len2){
		if(first[index1]<second[index2])arr[index++]=first[index1++];
		else arr[index++]=second[index2++];
	}
	while(index1<len1){
		arr[index++]=first[index1++];
	}
	while(index2<len2){
		arr[index++]=second[index2++];
	}
	delete first;
	delete second;
}

void mergeSort(int *arr,int start,int end){
	if(start>=end){
		return;
	}
	int mid=start+(end-start)/2;
	mergeSort(arr,start,mid);
	mergeSort(arr,mid+1,end);
	merge(arr,start,end);
}

int main(){
	int arr[15]{16,3,73,78,25,8,34,97,76,23,56,0,26,39,78};
	int n=15;
	mergeSort(arr,0,n-1);
	for (int i = 0; i < 15; ++i)
	{			
		/* code */
		cout<<arr[i]<<" ";
	}
	return 0;
}