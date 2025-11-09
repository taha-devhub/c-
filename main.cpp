#include <iostream>

using namespace std;

int main()
{
   float a,b;
            cout<<"welcome to BMI  "<<endl;
            cout<<"enter your height(meter): ";
            cin>>a;
            cout<<"enter your weight(kg): ";
            cin>>b;
            cout<<b/(a*a)<<endl;
            float bmi=b/(a*a);
            if(bmi>=40){
                cout<<"fat degree 3";}
            else if(bmi<=39.9 && bmi>=35) {
                cout<<"fat degree 2";}
            else if(bmi<=34.9 && bmi>=30){
                cout<<"fat degree 1";}
            else if(bmi<=29.9 && bmi>=25){
                cout<<"overweight";}
            else if(bmi<=24.9 && bmi>=18.5){
                cout<<"normal";}
            else if(bmi<18.5){
                cout<<"underweight";}
    return 0;
}
