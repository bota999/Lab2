#include <iostream>
#include <cmath>
using namespace std;

int main() {
 	double x1,x2,y1,y2,l;
	cin>>x1>>y1>>x2>>y2;
	l=sqrt(pow((x2-x1), 2)+pow((y2-y1), 2));
	cout<<l;

 return 0;
}