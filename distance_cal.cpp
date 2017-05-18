#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double xP, yP;
    cout<<"Enter value for yP: ";
    cin>>yP;
    cout<<"Enter value for xP: ";
    cin>>xP;
    int h = 238;
    double alpha = (30 * M_PI) / 180;
    double theta_v = (38.795 * M_PI) / 180;
    
    double theta2 = (theta_v - alpha + acos( (cos(theta_v) ) * cos(alpha)))/2;
    double z = (2 * h) / (1 / tan(theta2)) + (1 / tan(alpha));
    double x = h / tan(alpha + theta2);
    double T = (z * (640 - yP)) / 640;
    double t = T + x;
    cout<<t<<endl;
    
    double U = ((fabs(240 - xP)) * z) / 640;
    if(240 - xP > 0)
        cout<<"Move left\n";
    else if(240 - xP < 0)
        cout<<"Move right\n";
    return 0;
    
}
