#include<iostream>
using namespace std;

int main()
{
	int i,j,k,m,n,a[100],t;
	cin>>n;
	for(m=0;m<n;m++){
		cin>>a[m];
		cout<<a[m];
	}
	
	
	for(m=0;m<n-1;m++){
		j=m;
		for(k=m+1;k<n;k++)
			if(a[k]<a[j])
				j=k;
		if(j!=m){
			t=a[j];
			a[j]=a[m];
			a[m]=t;
		}
	}
	
}
