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
	
	//
	cout<<"WT:"<<"Hello:)"<<endl;
	//function output 1~100 的質數 
	int flag; 
	for (int n = 2; n <= 100; n++){
		flag = 0;
	    for(int i = 2; i < n; i++)  {  
	        if(n % i == 0){  
	            flag = 1;  
	        }  
	    }  
	    if(flag==0){
	        cout<<n<<endl;    
	    }  
	}
	//
	system("pause");
}
