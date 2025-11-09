#include <iostream>

using namespace std;

int main()
{
    int n;
                cout<<"tedad: ";
                cin>>n;

                string name[n];
                for(int i=0;i<n;i++)
                {
                    cout<<"enter name: \n";
                    cin>>name[i];
                }
                string findn;
                cout<<"enter find your name:";
                cin>>findn;

                for(int i=0;i<n;i++)
                {
                    string x=name[i];
                    if(findn == x){
                        cout<<" find "<<findn<<"index"<<i;
                    }else
                    cout<<"not find";}
    return 0;
}
