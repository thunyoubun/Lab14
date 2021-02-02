#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *a,int *b,int *c,int *d)
{
	int data[] = {*a,*b,*c,*d};
	for(int i = 0;i<=50;i++)
	{
		int u =  rand() %4;
		int l = rand() %4;
		swap(data[u],data[l]) ;
	}
	*a = data[0];
	*b = data[1];
	*c = data[2];
	*d = data[3];
}