#include<iostream> 
using namespace std;
	
int main(){
	int x[200][100],y=0,n,i,j,t=0;
	cin>>n;
	for(i=0;i<2*n;i++){
		for(j=0;j<n;j++)
			cin>>x[i][j];
	} 
	for(i=0;i<n*n;i++){
		for(j=0;j<n;j++){
			y+=x[i/n][j]*x[n+j][i%n];
		}
		cout<<y<<" ";
		y=0;
		t++;
		if(t%n==0)
			cout<<endl;
	}
	return 0;
}	


