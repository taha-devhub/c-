#include <iostream>

using namespace std;

int main()
{
    int a;
                int b=0;
                cout<<"enter number:";
                cin>>a;

                for(int x=1;x<=a;x++)
                    if(a%x==0){
                    b=b+1;}
                    if(b==2)
                        cout<<"number one";
                    else
                        cout<<"morakab";
    return 0;
}
