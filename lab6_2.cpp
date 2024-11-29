#include <iostream>
#include <cmath>
using namespace std;

//สร้างฟังก์ชัน
double deg2rad(double a){ //แปลงองศาเป็นเรเดียน
    return (M_PI/180)*a;
}

double rad2deg(double b){ //แปลงเรเดียนเป็นองศา
    return (180/M_PI)*b;
}

double findXComponent(double l1,double l2,double a1,double a2){ //หาเวกเตอร์ในแกน x
    double l1x,l2x;
    l1x = l1*cos(a1);
    l2x = l2*cos(a2);
    return l1x+l2x;
}

double findYComponent(double L1,double L2,double b1,double b2){ //หาเวกเตอร์ในแกน y
    double l1y,l2y;
    l1y = L1*sin(b1);
    l2y = L2*sin(b2);
    return l1y+l2y;
}

double pythagoras(double x ,double y){ //หาเวกเตอร์ลัพธ์
    return sqrt((x*x)+(y*y));
}

void showResult(double L , double d){ //แสดงผลลัพธ์
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << L << endl;
    cout << "Direction of the resultant vector (deg) = " << d << endl ;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
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
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
