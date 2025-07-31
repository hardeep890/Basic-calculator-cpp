#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the first value : ";
    cin>>a;
    cout<<"enetr the second  value : ";
    cin>>b;
    cout<<"Addition  "<<a+b<<endl;
    cout<<"subtraction  "<<a-b<<endl;
    if (b != 0)
        cout << "Division: " << a / b << endl;
    else
        cout << "Division not possible (b = 0)" << endl;
    
    cout<<"product  "<<a*b<<endl;
    return 0;
}
