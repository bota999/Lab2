#include <iostream>
#include <cmath>
using namespace std;

int main() {

          double R,r,h,S,V,l,PI;
	cin>>R>>r>>h;
	PI=3.14;
	V=PI*h*(R*R+r*r+R*r)/3;
	l=sqrt(h*h+(R-r)*(R-r));
	S=PI*l*(R+r)+PI*(R*R+r*r);
	cout<<V<<endl;
	cout<<S;
	


 return 0;
}




