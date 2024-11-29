#include <iostream>
using namespace std;
#include<cmath>

double deg2rad(double deg){
  return deg*(M_PI/180);
}
double  rad2deg(double radian){
  return radian*(180/M_PI);

}
double findXComponent(double l1,double l2 ,double a1,double a2){
  double xl1=l1*cos(a1);
  double xl2=l2*cos(a2);
  return xl1+xl2;
}
double  findYComponent(double l1,double l2 ,double a1,double a2){
 double yl1=l1*sin(a1);
  double yl2=l2*sin(a2);
  return yl1+yl2;
}
double pythagoras(double xcomp,double ycomp ){
double x2=pow(xcomp,2) ;
double y2=pow(ycomp,2) ;
double ANSptg=pow((x2+y2),0.5);
return ANSptg;
}
void showResult(double result_vec_length,double result_vec_direction){
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
cout<<"Length of the resultant vector = "<< result_vec_length<<"\n";
cout<<"Direction of the resultant vector (deg) = "<<result_vec_direction<<"\n";
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;//k
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
