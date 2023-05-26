#include<iostream>
using namespace std;
void TowerofHanoi(int n,char s,char h,char d){
	if(n==1){
		cout<<"Transferring "<<n <<" disks from "<<s<<" to "<<d<<endl;
		return;
	
	}
	TowerofHanoi(n-1,s,d,h);
	cout<<"Transferring "<<n <<" disks from "<<s<<" to "<<d<<endl;
	TowerofHanoi(n-1,h,s,d);
}
int main(){
	int n;
	cin>>n;
	char s='s';
	char h='h';
	char d='d';
	TowerofHanoi(n,s,h,d);
}
