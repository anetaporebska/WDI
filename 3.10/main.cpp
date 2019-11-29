#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int n;
    cin>>n;
    int tab[n]={};
    int w=1;//licznik długosci ciagu
    int t[n]={};
    int m=0;

    for(int i=0; i<n; i++)
    {
    tab[i]=rand()%1000+1;
    }

    for(int i=1; i<n; i++)
    {
    if(tab[i-1]<tab[i]) w++;
    else {t[m]=w; w=1; m++;}
    }

  /*  for(int i=0; i<n; i++)
    {
    cout<<tab[i]<<" ";

    }
    cout<<endl;

    for(int i=0; i<n; i++)
    {
    cout<<t[i]<<" ";
    }
    cout<<endl;
    */
    int maxi=t[0];
    for(int i=1; i<n; i++)
    {
    if(t[i]>maxi) {maxi=t[i];}
    }
    cout<<maxi;

    return 0;
}
