#include<bits/stdc++.h>
using namespace std;
const double A =4.0;
const double A_=3.7;
const double B__ =3.3;
const double B = 3.0;
const double B_ = 2.7;
const double C__= 2.3;
const double C=2.0;
const double C_=1.7;
const double D__=1.3;
const double D = 1.00;

int main()
{
    //54
    double cse115=3*A;
    double cseL115=1*A_;
    double cse173=3*B;
    double cse215=3*B;
    double cseL215=1*B;
    double cse225=3*B;
    double cse231=3*A_;
    double cse299=1*A_;
    double cse311=3*A_;
    double cse332=3*A_;
    double cse373=3*A_;
    double cse323=3*A_;
    double cse327=3*A_;
    double cse331=3*A_;
    double cse499A=1.5*A_;
    double cse499B=1.5*A_;
    double el1=3*A_;
    double el2=3*A_;
    double el3=3*A_;
    double oel4=3*A_;
    double cse425=3*A_;


    //9
    double eng102=3*B;
    double eng103=3*B__;
    double eng111=3*B;

    //18
    // double mat116=3*A_;
    double mat120=3*B;
    double mat130=3*B_;
    double mat250=3*B;
    double mat350=3*B__;
    double mat361=3*B__;
    double mat125=3*B__;

    //16
    double phy107=3*A_;
    double phy107L=1*A_;
    double phy108=3*B__;
    double phy108L=1*A_;
    double che101=3*A_;
    double che101L=1*A_;
    double bio103=3*A_;
    double bio103L=1*A_;

    //21
    double ben205=3*B;
    double pol101=3*B_;
    double soc101=3*B_;
    double his103=3*B__;
    double his102=3*B__;
    double phi101=3*B__;
    double eco=3*B__;

    //12
    double eee154=1*D;
    double eee141=3*A_;
    double eee141L=1*A_;
    double eee111=3*A_;
    double eee111L=1*A_;
    double eee452=3*B__;

    double sum = cse115+cseL115+cse173+cse215+cseL215+cse225+cse231+cse299+cse311+cse332+cse373+cse323+cse327+cse331+cse499A+cse499B+cse425+el1+el2+el3+oel4
        +eng102+eng103+eng111
        // +mat116
        +mat120+mat130+mat250+mat350+mat361+mat125
        +phy107+phy107L+phy108+phy108L+che101+che101L+bio103+bio103L
        +ben205+pol101+soc101+his102+his103+phi101+eco
        +eee111+eee111L+eee141+eee141L+eee154+eee452;

    cout<<sum<<endl;
    cout<<"CGPA: "<<sum/130<<endl;

    

    return 0;
}