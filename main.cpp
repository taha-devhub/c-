#include <iostream>

using namespace std;

int main()
{int a,b=0;
           cout<<"enter number:";
           cin>>a;
           for(int x=1;x<=a;x++)
            if(a%x==0)
            b++;

           cout<<"number="<<b;
           if(b==2)
            cout<<"\n number is prime";
           else
            cout<<"\n number is not prime";

    return 0;
}
