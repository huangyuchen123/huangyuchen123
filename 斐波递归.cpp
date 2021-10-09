#include<iostream>
using namespace std;
int Fibl(int n)
{
	if(n==1||n==2)
		return 1;
	else
		return(Fibl(n-1)+Fibl(n-2));
}
int main(){
	int n=10;
	cout<<Fibl(n)<<endl;
}
