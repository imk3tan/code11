#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> ketan,int key,int low,int high){
	if(low<=high){
		int mid=(low+high)/2;
		if(ketan[mid]==key){
			return mid;
		}
		if(key>mid){
			return BinarySearch(ketan,key,mid+1,high);
		}
		if(key<mid){
			return BinarySearch(ketan,key,low,mid-1);
		}
	}
	return -1;
}
int main(){
	vector<int> arr;
	arr.push_back(4);
	arr.push_back(5);
	arr.push_back(6);
	arr.push_back(7);
	arr.push_back(8);
	int key;
	cout<<"Enter the Element for Searching";
	cin>>key;
	int pos=BinarySearch(arr,key,0,4);
	if(pos!=-1){
		cout<<"Element found at Pos "<<pos;
		
	}
	else{
		cout<<"Element Not Found!";
	}
	
}
