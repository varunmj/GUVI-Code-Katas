#include<iostream>
using namespace std;
int main()
{
int hr1,mint1,tmin1,hr2,mint2,tmin2,timeleft;
cout<<"First time :";
cin>>hr1>>mint1;
tmin1=hr1*60;
tmin1=tmin1+mint1;
cout<<"Second time :";
cin>>hr2>>mint2;
tmin2=hr2*60;
tmin2=tmin2+mint2;


timeleft=tmin2-tmin1;
cout<<"The Difference between the two times :"<<timeleft;
return 0;
}
