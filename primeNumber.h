#include<iostream>

using namespace std;
int primeNumber(){
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
}

