#include <iostream>

using namespace std;

int main()
{
    int m;
int num[3]={12,8,9};
for(int i=0;i<3;i++)
    cout<<num[i]<<endl;

    int sizen;

    cout<<"enter number:";
    cin>>sizen;
int num[sizen];
    for(int i=0;i<sizen;i++)
    cin>>num[i];

    for(int i=0;i<sizen;i++)
        cout<<num[i]<<endl;
    return 0;
}
