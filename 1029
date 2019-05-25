#include <iostream>
using namespace std;

int main(){
	unsigned long long n,i,a[2],b[2];
	unsigned long long x;
	cin >>n;
	cin>>a[0]>>a[1];
	x=a[0]*a[1];
	b[0]=a[0];b[1]=a[1];
	for(i=0;i<n-1;i++){
		cin>>a[0]>>a[1];
		if(x<a[0]*a[1]){
			x=a[0]*a[1];
			b[0]=a[0];b[1]=a[1];
		}
	}
	cout<<b[0]<<" "<<b[1];
	return 0;
}

