#include<iostream>
using namespace std;

//Write the function printO() here
int printO(int c,int r){
	if(c <= 0 || r <= 0){
		cout << "Invalid input";
	}else{
		for(int i = 0 ; i < c ; i++){
			for(int j = 0 ; j < r ; j++){
			cout << "O";
			}
		cout << "\n";
		}
	}
	return 0;
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
