#include<iostream> 
#include<math.h>
using namespace std;

int main(){
	int i,n,j,k,c=1,a;
	int x[50][2];
	for(i=0;i<50;i++){
		x[i][0]=0;x[i][1]=0;
	}
	cin>>n;
	a=n;
	for(i=2;i<=n;i++){
		if(n%i==0){
			n/=i;
			for(j=0;j<50;j++){
				if(x[j][0]==0||x[j][0]==i){
					x[j][1]++;
					x[j][0]=i;
					i=1;
					break;
				}
			}
		}
	} 
	i=0;
	j=1;
	k=x[0][1];
	while(x[i][0]!=0){
		if(x[i][1]!=k){
			c=0;
			break;
		}
		j*=x[i][0];
		i++;
	}
	if(c==1)
		cout<<j<<" "<<x[0][1];
	else
		cout<<a<<" 1";
	return 0;
}	
