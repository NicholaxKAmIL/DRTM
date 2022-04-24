#include<iostream>

using namespace std;
int main(){
	cout<<"hello world!"<<endl;
	cout<<"THE MAIN"<<endl;
	
	cout<<"MB:"<<"asd;lfjksfd"<<endl;
	//function 99乘法表 
	
	//
	cout<<"KK:"<<"asdfjk;"<<endl;
	//function output 51~100
<<<<<<< Updated upstream
	
	int i,j,e=0;
	for(j=2;j<=99;j++){
		e=0;
	    for(i=2;i<j;i++){    
		    if(j%i==0){
		        e=1;
		    }
	    }
	    if(e==0){
	        cout<<j<<",";
	    }
    }
	 
=======
	int i[99],j,l=0;
	for(j=1;j<=99;j++){
		if(j%2+j%3+j%5+j%7==0||j==2||j==3||j==5||j==7){
			cout<<j<<","<<endl;
		}
	}
>>>>>>> Stashed changes
	//
	cout<<"WT:"<<"Hello:)"<<endl;
	//function output 1~100 的質數 
	
	//
	system("pause");
}
