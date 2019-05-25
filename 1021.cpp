#include<iostream>
#include<string.h> 
using namespace std;

int main(){
	int n,i,j=0;
	char x[100000];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		while(1){
			if(x[j]!=x[strlen(x)-1-j]){
				cout<<"No"<<endl;
				break;	
			}
			else if(j==strlen(x)-1){
				cout<<"Yes"<<endl;
				break;
			}
			j++;
		}
		j=0;
	}
	return 0;
}
