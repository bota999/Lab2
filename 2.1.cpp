#include <iostream>
#include <cmath>
using namespace std;

int main() {
          double A,B,C,H,S,P,V;
	cin>>A>>B>>C>>H;
	P=(A+B+C)/2;
	S=sqrt(P*(P-A)*(P-B)*(P-C));
	V=S*H/3;
	cout<<V;


 return 0;
}




