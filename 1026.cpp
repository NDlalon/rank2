#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n,i;
	double x;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		if(sqrt(x)==(int)sqrt(x))
			cout<<"Yes"<<endl;
		else 
			cout<<"No"<<endl;
	}
	return 0;
}
