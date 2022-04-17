#include<iostream>

int temp;
int maxF;//max fibonacchi number

using namespace std;

int fibonacchiSq(int num1, int num2){
	temp = num1 + num2;
	if(temp <= maxF){
		cout<<temp<<endl;
		fibonacchiSq(num2, temp);
	}
}

int main(){
	cout<<"hello world!"<<endl;
	cout<<"THE MAIN"<<endl;
	
	cout<<"MB:"<<"asd;lfjksfd"<<endl;
	cout<<"Input Max Fibonacchi Number: ";
	cin>>maxF;
	fibonacchiSq(0, 1);

	cout<<"KK:"<<"asdfjk;"<<endl;
	//function output 51~100
	'
	//
	cout<<"WT:"<<"Hello:)"<<endl;
	//function output 1~100 ªº½è¼Æ 
	
	//
	system("pause");
}


