#include <iostream>

using namespace std;

int main()
{
   int n,tedad=0,sum=0;

             cin>>n;

             for(int a=1;a<=n;a++)
                             if(n%a==0)
             {
                 tedad++;
                 sum+=a;
                 cout<<tedad<<")"<<a<<endl;

             }
             cout<<"tedad adad="<<tedad<<endl;
             cout<<"magmooe="<<sum;


             int n;
             cout<<"enter number 1:"<<endl;
             cin>>n;
             int m;
             cout<<"enter number 2:"<<endl;
             cin>>m;
             int miny=min(n,m);
             int maxy=max(n,m);
             for(int c=miny;c<maxy;c++)
                cout<<c<<endl;
    return 0;
}
