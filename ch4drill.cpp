#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    double a=0,b=0,kicsi,nagy ;
    const double m_cm = 100,in_cm = 2.54,ft_in = 12;
    bool tarolo=true;
    double Sum=0;
    string mertekegyseg;
    vector<double>v ;
    char m;// ez lesz a | jel

    while(cin>>a>>mertekegyseg)
    {

     if (mertekegyseg == "m"){
    a = a;
  }else if (mertekegyseg == "cm"){
    a = a/m_cm;
  }else if (mertekegyseg == "in"){
    a = in_cm*a/m_cm;
  }else if (mertekegyseg == "ft"){
    a = ft_in*in_cm*a/m_cm;
  }
  else
  {
    cout<<"Illegal unit!"<<endl;
  }
  v.push_back(a);
  Sum=Sum+a;
  if(tarolo)
  {
  kicsi=a;
  nagy=a;
  tarolo=false;
    }

  else if (a<kicsi) {
    cout<<"The smallest so far "<<endl;
    kicsi = a;
  }else if (a>nagy){
    cout<<"The large so far "<<endl;
    nagy = a;
    }


    }

    cout<<endl;
cout<<"The smaller value is: "<<kicsi<<"m"<<endl;
cout<<"the larger value is:  "<<nagy<<"m"<<endl;
cout<<"Sum:  "<<Sum<<"m"<<endl;
double c;//csere
for(int i=0;i<v.size();i++){
    for (int j=0;j<v.size()-1;j++){
      if (v[j]>v[j+1])\
        {
        c = v[i];
        v[i] = v[j];
        v[j] = c;
      }
    }
  }


cout<<"A vektor elemei: "<<v[0];
for(int i=1;i<v.size();i++)
    cout<<","<<v[i];
    return 0;


}


    //return 0;
//while(cin>>a>>mertekegyseg>>b>>mertekegyseg && c!='|')
//{


  //  if(a>b)
   // {
    //    cout<<"The smaller value is: "<<b<<endl;
    //    cout<<"the larger value is: "<<a<<endl;
    //    if((a-b)<1.0/100)
      //  {
      //      cout<<"the numbers are almost equal";
      //  }
  //  }
   // if(a<b)
   // {
    //    cout<<"The smaller value is: "<<a<<endl;
     //   cout<<"the larger value is: "<<b<<endl;
     //  if((b-a)<1.0/100)
        //{
       //     cout<<"the numbers are almost equal";
       // }
    //}
    //if(a==b)
     //   {cout<<"the numbers are equal"<<endl;}
   //
//}







