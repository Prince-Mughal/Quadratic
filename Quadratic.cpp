/*
  @PrinceMughal_
  You may modify or reproduce.
  Time: 12:45am Sunday
  Date: 10-12-2017

*/

#include <iostream>
#include <math.h> /* sqrt() */
using namespace std;

int main(void){

double a = 0.0;
double b = 0.0;
double c = 0.0;
double x1 = 0.0 ;
double x2 = 0.0;
double root = 0.0;
double under_root = 0.0;

cout<<"Enter Value For 'a' : "; cin>>a;
cout<<"Enter Value For 'b' : "; cin>>b;
cout<<"Enter Value For 'c' : "; cin>>c;

under_root = (b*b)-(4.0*a*c);
if ( under_root > 0 ){
    root = sqrt(under_root);
    x1 = ( ( (-1.0) * b) + root) / (2.0 * a);
    x2 = ( ( (-1.0) * b) - root) / (2.0 * a);
    cout<<"X1 = "<<x1<<", X2 = "<<x2<<endl;

} else if( under_root == 0){
    x1 = ( (-1.0) * b) / (2.0 * a);
    x2 = ( (-1.0) * b) / (2.0 * a);
    cout<<"X1 = "<<x1<<", X2 = "<<x2<<endl;
}
else{
    root = sqrt(under_root * (-1));
    x1 = ( (-1.0) * b) / (2.0 * a);
    x2 = ( (-1.0) * b) / (2.0 * a);
    cout<<"X1 = "<<x1<<" + "<< root / ( 2.0 * a ) <<"i"<<endl;
    cout<<"X2 = "<<x2<<" - "<< root / ( 2.0 * a ) <<"i"<<endl;
}


return 0;}
