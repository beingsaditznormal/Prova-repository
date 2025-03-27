#include<iostream>
#include<cmath>
using namespace std;

double prod_scalare(double v1[],double v2[]);
double norma(double v[]);
double scambia ();


int main()
{
    double v[5] = {1,2,3,4,5};
    double w[5] = {10,2,4,3,2};
    double M[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    double ris = prod_scalare(v,w);
    cout<<"prodotto scalare tra vettori vale"<<"\t"<<ris<<endl;
    double norm = norma(v);
    cout<<"norma del vettore"<<"\t"<<norm;


    
    
    
    
    
    
    return 0;


}

double prod_scalare(double v1[],double v2[])
{
    double ris=0;

    for(int i = 0;i<5;i++)
    {
        ris=ris+ (v1[i] * v2[i]);
    }
    return ris;
}

double norma(double v[])
{
    double norm_2 = prod_scalare(v,v);
    double norm =sqrt(norm_2);
    return(norm);
}

