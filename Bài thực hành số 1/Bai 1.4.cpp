#include<iostream>
using namespace std;

int main(){
	int a, b;
	cout<< "Nhap a, b:";
	cin >> a;
	cin >> b;
	if(a<b){
		cout<< a << " < " << b;
	} 
	else if(a>b){
		cout<< a << " > " << b;
	}
	else if(a==b){
		cout<< a << " = " << b;
	}
	return 0;
}

