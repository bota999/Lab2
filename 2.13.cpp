#include <iostream>
#include <cmath>
using namespace std;

int main() {
          double a,b,c,S,ha,hb,hc,p;	
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	ha=2*S/a;
	hb=2*S/b;
	hc=2*S/c;
	cout<<ha<<endl<<hb<<endl<<hc;



 return 0;
}