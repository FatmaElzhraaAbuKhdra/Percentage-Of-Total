#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int Ardegree,Endegree,Phdegree,Chdegree,Bidegree,Geodegree,Frendegree,TotalValue,Total=410;
    double ResultOfTotal=0;
    cout<<"Arabic degree = ";
    cin>>Ardegree;

    cout<<"English degree = ";
    cin>>Endegree;

    cout<<"Physics degree = ";
    cin>>Phdegree;

    cout<<"Chemistry degree = ";
    cin>>Chdegree;

    cout<<"Biology degree = ";
    cin>>Bidegree;

    cout<<"Geology degree = ";
    cin>>Geodegree;

    cout<<"French degree = ";
    cin>>Frendegree;
    TotalValue=Ardegree+Endegree+Phdegree+Chdegree+Bidegree+Geodegree+Frendegree;
    ResultOfTotal =(double(TotalValue)/Total)*100;
    cout<<"The Total value = "<<TotalValue<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"The Percentage Of Total = "<<ResultOfTotal<<" %";
    
    return 0;
}