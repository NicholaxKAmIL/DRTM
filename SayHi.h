#include<iostream>
#include<string>

using namespace std;

int SayHallo(){
	cout<<"Hello World!"<<endl;
}

int SayNameHallo(string Name){
	cout<<"Hello "<<Name<<"!"<<endl;
}

int SayNameHalloWithIf(string Name){
	if(Name.size()==0){
		cout<<"Error:No Value in Var. * Name *"<<endl;
		return 0;
	}
	cout<<"Hallo "<<Name<<"!"<<endl;
	return 1;
	
}
