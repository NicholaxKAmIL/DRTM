#include<iostream>

using namespace std;

int main(){
	cout<<"hello world!"<<endl;
	cout<<"THE MAIN"<<endl;
	
	cout<<"MB:"<<"asd;lfjksfd"<<endl;
	int j = 0;
	for(int i = 2; i <= 100; i++){
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

	cout<<"KK:"<<"asdfjk;"<<endl;
	//function output 51~100
	
	//
	cout<<"WT:"<<"Hello:)"<<endl;
	//function output 1~100 ªº½è¼Æ 
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


