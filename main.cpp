#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
            cout<<"enter first number:"<<endl;
            cin>>n1;
            cout<<"enter second number:"<<endl;
            cin>>n2;

            for(int i=1;i<=n1;i++)
            {
                if(n1%i==0 && n2%i==0)
                    cout<<i<<endl;
            }
    return 0;
}
