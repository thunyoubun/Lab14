#include<iostream>
#include<string>
using namespace std;

int main(){
	int a = 5;
	int *x = &a;
	int **z = &x;
	char b = 'A';
	char &c = b;
	char *y = &c;
	

	cout <<  a << " "<< b <<" " << c <<" "<< x <<" "<< &y <<" "<< z << endl;
	
	cout << &a << " " << &y << " "  << &y << " " << &x << " " << &y << " " << *z << endl;

	b = 'F';
	cout << a << " " << b << " "  << c << " " << x << " " << &y << " " << &z << endl;
	
	b = 'W';
	*y = b;
	cout <<  a << " "<< b <<" " << c <<" "<< x <<" "<< &y <<" "<< &z << endl;

	a = 6;
	*x = a;
	cout <<  a << " "<< b <<" " << c <<" "<< x <<" "<< &y <<" "<< &z << endl;

	a = 7;
	**z = a;
	cout <<  a << " "<< b <<" " << c <<" "<< x <<" "<< &y <<" "<< &z << endl;


	return 0;
}
