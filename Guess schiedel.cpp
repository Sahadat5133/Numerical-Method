#include<bits/stdc++.h>
using namespace std;

double func_x(double y,double z)
{
    double x = ((1/27)*(85-(6*y)+z));
    cout << x << endl;
    return x;
}
double func_y(double x,double z)
{
    double y = ((1/15)*(72-(6*x)-(2*z)));
    return y;
}
double func_z(double x,double y)
{
    double z = ((1/54)*(110-x-y));
    return z;
}

int main()
{
    double x,y,z,stopping_value = 0.0001;
    double x1 = 2.425,y1 = 3.573,z1 = 1.925;
    cin >> x >> y >> z;

    x = func_x(y,z);
     cout << x << " " << y << " " << z << endl;
    y = func_y(x,z);
     cout << x << " " << y << " " << z << endl;
    z = func_z(x,z);
     cout << x << " " << y << " " << z << endl;

    if(abs(x1-x) <= stopping_value && abs(y1-y) <= stopping_value && abs(z1-z) <= stopping_value)
    {
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    }
    else
    {
        while(abs(x1-x) > stopping_value && abs(y1-y) > stopping_value && abs(z1-z) > stopping_value)
        {
            x = func_x(y,z);
            y = func_y(x,z);
            z = func_z(x,z);
            cout << x << " " << y << " " << z << endl;
        }
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;

    }
}
