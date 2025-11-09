#include <iostream>

using namespace std;

int main()
{
   int n,tedad=0;

             cin>>n;

             for(int a=1;a<=n;a++)
                             if(n%a==0)
             {
                 tedad++;
                 cout<<tedad<<")"<<a<<endl;

             }
             cout<<"tedad adad="<<tedad;
    return 0;
}
