#include <iostream>
#include <cmath>
using namespace std;

int main() {
          double a,b,c,ma,mb,mc;
	cin>>a>>b>>c;
	ma=0.5*sqrt(2*(b*b+c*c)-a*a);
	mb=0.5*sqrt(2*(c*c+a*a)-b*b);
	mc=0.5*sqrt(2*(a*a+b*b)-c*c);
	cout<<ma<<endl<<mb<<endl<<mc;



 return 0;
}




