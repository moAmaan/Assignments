#include<iostream>
using namespace std;
class Temprature
{
  protected:
     float temp;
   public:
    void setTempData(float a)
    {
       temp=a;
    }
};
class  Fahrenheit : public Temprature
{
    private:
    float ctemp;
    public:
    void changetempFtoC()
    {
        ctemp=(0.556*(temp-32));
        cout<<ctemp<<" degree celsius"; 
    }
};
class Celsius : public Temprature
{
    private:
    float ftemp;
    public:
    void changetempCtoF()
    {
        ftemp=(1.8*temp)+32;
        cout<<ftemp<<" degree fahrenheit";
    }

};

int main()
{ 
    
    Fahrenheit f;
    Celsius c;
   float c_tmp;
    cout<<"Enter temprature to convert from F->C"<<endl;
    cin>>c_tmp;
   
    f.setTempData(c_tmp);
    cout<<"Convert given temprature into degree celsius:"<<endl;
    f.changetempFtoC();
    cout<<"\nEnter temprature to convert from C->F"<<endl;
    cin>>c_tmp;
   
    c.setTempData(c_tmp);
    cout<<"Convert given temprature into  Fahrenheit:"<<endl;
    c.changetempCtoF();
    return 0;
}
