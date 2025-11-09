#include <iostream>

using namespace std;

int main()
{
   int n;
            cout<<"tadad:";
            cin>>n;
            string lname[n];
            string fname[n];

            for(int i=0;i<n;i++)
             {cout<<"enter first name: "<<endl;
            cin>>fname[i];}

            for(int i=0;i<n;i++)
             {cout<<"enter last name: "<<endl;
            cin>>lname[i];}

             for(int i=0;i<n;i++)
                {cout<<fname[i]<<" "<<lname[i]<<endl;}
    return 0;
}
