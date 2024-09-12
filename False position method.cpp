#include<bits/stdc++.h>
using namespace std;
double a,b,c;
double func(double x)
{
    double val;
    val=(a*x*x)+(b*x)+c;
    return val;
}
int main()
{
    a=1,b=-4,c=-10;
    double x_left,x_right,x_new,f_left,f_right,f_new,stopping_value,cnt(0);
    cout<<"Enter left bracket value:";
    cin>>x_left;
    cout<<"The value of function for left bracket:"<<func(x_left)<<endl;
    cout<<"Enter right bracket value:";
    cin>>x_right;
    cout<<"The value of function for right bracket:"<<func(x_right)<<endl;
    f_new=INT_MAX;
    stopping_value=0.000001;
    while(abs(f_new)>stopping_value)
    {
        cnt++;
        f_left=func(x_left);
        f_right=func(x_right);
        x_new=(((x_left*func(x_right))-(x_right*func(x_left)))/(func(x_right)-func(x_left)));
        f_new=func(x_new);
        if(f_new==0)
            break;
        if(f_left*f_right>0)
        {
            cout<<"No root available in this range.";
            return 0;
        }
        if(f_left*f_new<0)
            x_right=x_new;
        else
            x_left=x_new;
    }
    cout<<"The approximate root:"<<x_new<<endl;
    cout<<"The function value for approximate root:"<<func(x_new)<<endl;
    cout<<"Total iteration took:"<<cnt<<endl;
    return 0;

}

