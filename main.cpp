#include <iostream>

using namespace std;

int main()
{
    int num,tedad=0,mx=-1;
while(tedad<5){
    cout<<"enter number:"<<endl;
    cin>>num;
    if(num>mx)
        mx=num;
    tedad++;
}
cout<<"maximum is:"<<mx;
    return 0;
}
