#include <iostream>

using namespace std;

int main()
{
    int n,findn,index,countn=0;
                        int andis[100];
                        cout<<"enter number:"<<endl;
                        cin>>n;
                        int numbers[n];
                        for(int i=0;i<n;i++)
                        {
                            //read array
                            cout<<"enter number:"<<i+1<<":";
                            cin>>numbers[i];

                        }
                        //print array
                        for(int i=0;i<n;i++)
                            cout<<setw(4)<<numbers[i];
                        cout<<"\n enter find number";
                        cin>>findn;
                        for(int i=0;i<n;i++)
                            if(findn==numbers[i])
                            {andis[countn]=i;
                            countn++;
                            }
                            if(countn==0)
                                cout<<"not found"<<index;
                            else
                                for(int i=0;i<countn;i++)

                            cout<<andis[i]<<"\t";*/
    return 0;
}
