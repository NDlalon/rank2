#include<iostream>
#include<string.h> 
using namespace std;
void clr(char o[]){
	int i;
	for(i=0;i<30;i++)
		o[i]=0;
}
	
int main(){
	char o[30];
	int n,x,i,j=0;
	cin>>n;
	for(i=0;i<n;i++){
		clr(o);
		cin>>x;	
		do{
			o[j]=x%2+'0';
			x/=2;
			j++;
		}while(x!=0);
		for(j=strlen(o);j>0;j--)
			cout<<o[j-1];
		cout<<endl;
	}
}	


