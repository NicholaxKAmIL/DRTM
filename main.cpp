#include<iostream>

using namespace std;
int main(){
	cout<<"hello world!"<<endl;
	cout<<"THE MAIN"<<endl;
	
	cout<<"MB:"<<"asd;lfjksfd"<<endl;
	int j = 0;
	for(int i = 1; i <= 10000; i++){
		j = 0;
		for(int k = i - 1; k > 0; k--){
			if(i%k == 0){
				j = j + k;
			}
		}
		if(j == i){
			cout<<i<<endl;
		}
	}
	cout<<"KK:"<<"asdfjk;"<<endl;
	//function output 51~100
	'
	//
	cout<<"WT:"<<"Hello:)"<<endl;
	//function output 1~100 ªº½è¼Æ 
	
	//
	system("pause");
}
