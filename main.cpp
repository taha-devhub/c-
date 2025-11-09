#include <iostream>

using namespace std;

int main()
{
    int a;
             while(true)
             {
                 cout<<"enter number:";
                 cin>>a;
                 if(a%2==0)
                    cout<<"even\n";
                 else
                    cout<<"odd\n";
                 if(a==-1)
                    break;}
    return 0;
}
