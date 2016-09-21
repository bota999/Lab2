#include <iostream>
#include <cmath>
using namespace std;

int main() {
         double x,y,z,a,b,m,n;
	cin>>x>>y>>z;
	m=(1+pow(sin(x+y),2))+x*(2+(abs(x-2*x/(1+x*x*y*y))));
	n=2+(abs(x-2*x/(1+x*x*y*y)));
	a=m/n;
	b=pow(cos(atan(1/z)), 2);
	cout<<a<<endl<<b;



return 0;
}