#include<iostream>
#include<string>

using namespace std;
int SayHello(){
	cout<<"Hello World!"<<endl;
}

int SayNameHello(string name){
	cout<<"Hello "<<name<<"!"<<endl;
}

int SayNameHelloWithIf(string name){
	if(name.size()==0){
		cout<<"Error: No Value in Var. Name."<<endl<<endl;
		return 0;
	}
	cout<<"Hello "<<name<<"!"<<endl;
	return 1;
}
