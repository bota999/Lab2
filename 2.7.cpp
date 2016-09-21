#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double R1,R2,R3,R0;
	cin>>R1>>R2>>R3;
	R0 = pow(R1, -1) + pow(R2, -1) + pow(R3, -1);
	cout<<1/R0;

 return 0;
}




