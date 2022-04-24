#include<iostream>
#include<string>
#include"sayHi.h"
#include"mathFunctions.h"
#include"Number_Printer.h"
#include"primeNumber.h"
using namespace std;
int main(){
	
	if(SayNameHelloWithIf("NININININI")){
		SayHello();
	}
	
	cout<<"THE MAIN"<<endl;
	
	cout<<"MB:"<<"asd;lfjksfd"<<endl;
	//function 99乘法表 
	prime(250);
	cout<<"Fibonacchi Sequence:"<<endl<<endl;
	fibonacchiSq(0,1,250);
	halfPerfectNum(10000);
	timeTables();
	print_Numbers(1,50);
	primeNumber(); 
	//
	cout<<"KK:"<<"asdfjk;"<<endl;
	//function output 51~100
	 
	//
	cout<<"WT:"<<"Hello:)"<<endl;
	//function output 1~100 的質數 
	
	//
	system("pause");
}
