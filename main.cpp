#include<iostream>
#include<string>
#include"sayHi.h"
#include"Number_printer.h"
#include"mathFunctions.h"
#include"primeNumber.h"
using namespace std;
int main(){
	
	if(SayNameHelloWithIf("NININININI")){
		SayHello();
	}
	
	cout<<"THE MAIN"<<endl;
	
	cout<<"MB:"<<"asd;lfjksfd"<<endl;
	//function 99乘法表 
		prime(25);
		fibonacchiSq(0,1,20);
		halfPerfectNum(10);
		timeTables();
	//
	cout<<"KK:"<<"asdfjk;"<<endl;
	//function output 51~100
		print_Numbers(1,20);
		SayHello();
		SayNameHello("KK");
		SayNameHelloWithIf("");
	//
	cout<<"WT:"<<"Hello:)"<<endl;
	//function output 1~100 的質數 
		primeNumber();
	//
	system("pause");
}
