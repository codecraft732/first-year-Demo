#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=4;i++){
		for(int j=1;j<=7;j++){
		if(i+j==5 || i-j==3 || i==4){
		cout<<"*";
		}
			else{
		cout<<" ";
		}
}

cout<<endl;
}
	return 0;
}
