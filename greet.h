#include<iostream>
#include<string>
using namespace std;

int greet(){
	cout<<"Code:Hello."<<endl;
}

string name(){
	string name;
	cout<<"Code:What is your name?"<<endl;
	cin>>name;
	if(name=="No."||"no"||"No"||"eh"){
		return "";
	}
	return name;
}

int greetWithNameAndAnoDetect(string name){
	if(name.empty()){
		cout<<"Code:Why do you wish to be anonymous?"<<endl;
		string reason;
		cin>>reason;
		return 1;
	}
	cout<<"Code:Greetings "<<name<<"! I am a program."<<endl;
	return 0;
}
