#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,67,34,23,9};
	int key;
	cout<<"Enter the Element for Searching";
	cin>>key;
	int pos=-1;
	for(int i=0;i<5;i++){
		if(arr[i]==key){
			pos=i;
			break;
		}
	}
	if(pos!=-1){
		cout<<"Element Found at index position "<<pos;
		
	}
	else{
		cout<<"Element Not found";
	}
}
