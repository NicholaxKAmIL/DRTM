#include<iostream>
#include<string>
#include"SayHi.h"
#include"primeNumber.h"
#include"Number_Printer.h"
#include"mathFunctions.h"

using namespace std;
int main(){
	SayHello();
	SayNameHello("Winnie");
	
	SayNameHelloWithIf("Winnie");
	
	if(1)if(true)if(1==1)if(1>0)cout<<"That all TRUE!"<<endl;
	
	cout<<"hello world!"<<endl;
	cout<<"THE MAIN"<<endl;
	
	cout<<"MB:"<<"asd;lfjksfd"<<endl;
	//function 99乘法表 
	prime(37);
	cout<<"Fibonacchi Sequence"<<endl;
	fibonacchiSq(1,1, 1000);
	halfPerfectNum(28);
	timeTables();
	//
	cout<<"KK:"<<"asdfjk;"<<endl;
	//function output 51~100
	print_Numbers(51, 60);
	//
	cout<<"WT:"<<"Hello:)"<<endl;
	//function output 1~100 的質數 
	primeNumber();
	//
	system("pause");
}
