#include<iostream>
using namespace std;
int main(){

    int a=123;
    cout<<a<<endl;

    char b='h';
    cout<<b<<endl;

    bool c=true;
    cout<<c<<endl;

    float f=1.2;
    cout<<f<<endl;

    double d=1.23;
    cout<<d<<endl;

    int size =sizeof(d);
    cout<<"size of d is :"<<size<<endl;

    // typecasting
    int h ='h';
    cout<<h<<endl;

    char ch1=98;
    cout<<ch1<<endl;

// arithematic operators
    int a1=2/5;
    cout<<a1<<endl;

    float a2=2.0/5;
    cout<<a2<<endl;
    
    double a3=2.0/5;
    cout<<a3<<endl;
    // also +,-,*,% used in same way

// relational operators
    int n1=2;
    int n2=4;
    
    bool first =(n1==n2);
    cout<<first<<endl;

    bool sec=(n1>n2);
    cout<<sec<<endl;

    bool third =(n1<n2);
    cout<<third<<endl;

    bool four =(n1!=n2);
    cout<<four<<endl;
    
// also //single line comment and /* */ multi line cmt
    return 0;
    
}
