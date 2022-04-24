#include<iostream>
using namespace std;

int prime(int maxNum){
	cout<<"Prime Numbers:"<<endl<<endl;
	int j = 0;
	for(int i = 2; i <= maxNum; i++){
		j = 0;
		for(int k = i; k > 0; k--){
			if(i%k == 0){
				j = j + k;
			}
		}
		if(j == i+1){
			cout<<i<<endl;
		}
	}
}

int fibonacchiSq(int num1, int num2,int maxF){
	int temp = num1 + num2;
	if(temp <= maxF){
		cout<<temp<<endl;
		fibonacchiSq(num2, temp, maxF);
	}
}

int halfPerfectNum(int maxNum){
	cout<<"Pseudo Perfect Number:"<<endl<<endl;
	int j = 0;
	for(int i = 1; i <= maxNum; i++){
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
}

int timeTables(){
	cout<<"Times Table:"<<endl<<endl;
	for(int i = 1; i < 10; i++){
		cout<<i<<" ";
		for(int k = 2; k < 10; k++){
			if(i*(k-1)<10){
				cout<<" ";
			}
			cout<<i*k<<" ";
		}
		cout<<endl;
	}
}
