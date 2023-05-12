#include <iostream>
using namespace std;

inline int sum(int a, int b)
{
    return a + b;
}
inline int sub(int a, int b)
{
    return a-b;
}
inline int multiply(int a,int b){
    return a*b;
}
inline int divide(int a,int b){
    return a/b;
}
int main(){
    char c;
    int a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    cout<<"Enter operation"<<endl;
    cin>>c;
    switch(c){
        case '+':
        cout<<"Adition is "<<sum(a,b);
        break;
        case '-':
        cout<<"Subtraction is "<<sub(a,b);
        break;
        case '*':
        cout<<"Multiplication is "<<multiply(a,b);
        break;
        case '/':
        cout<<"Division is "<<divide(a,b);
        break;
        default:
        cout<<"Invalid option";
    }
}