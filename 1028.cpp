#include<iostream> 
using namespace std;
	
int main(){
	int a1,b1,a2,b2,i,n;
	cin>>n;
	for(i=0;i<n;i++){
	cin>>a1>>b1>>a2>>b2;
	if(a2>b1||a1>b2)
		cout<<"No"<<endl;
	else 
		cout<<"Yes"<<endl;
	}
	return 0;
}	


