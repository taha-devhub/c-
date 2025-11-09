#include <iostream>

using namespace std;

int main()
{
    int num;
             int sum=0;
             int s=0;

             cout<<"enter number:";
             cin>>num;

             cout<<"magsom elayh"<<num<<"="<<endl;
             for(int x=1;x<=num;x++)
                if(num % x==0){
                sum=sum+1;
                s=s+x;
             cout<<x<<endl;}
             cout<<"tedad="<<sum<<endl;
             cout<<"sum magsom elayh="<<s;
    return 0;
}
