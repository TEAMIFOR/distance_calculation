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
    int h = 238; //height of the quad
    double alpha = (30 * M_PI) / 180; //angle of inclination
    double theta_v = (34.046 * M_PI) / 180; //vertical FOV
    
    double theta2 = (theta_v - alpha + acos( (cos(theta_v) ) * cos(alpha)))/2;
    double z = (2 * h) / (1 / tan(theta2)) + (1 / tan(alpha));
    double r = h / tan(alpha + theta2);
    double T = (z * (480 - yP)) / 480;
    double y = T + r; //local y distance in real life
    cout<<y<<endl;
    
    if(320 - xP > 0)
        cout<<"Move left\n";
    else if(320 - xP < 0)
        cout<<"Move right\n";
    return 0;
    
}
