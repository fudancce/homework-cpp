#include <iostream>
using namespace std;

int getPower(int x,int y){
    int val;
    if(y<0)
       return 0;
    else if (y==0)
        val=1;
    else
        val=getPower(x,y-1)*x;
    return val;
}

double getPower(double x,int y){
    double val;
    if(y==0)
       val=1.0;
    else if (y>0)
        val=getPower(x,y-1)*x;
    else
        val=getPower(x,y+1)*(1/x);
    return val;
}


int main(){
    int a,m;
    double b;
    cout<<"请输入一个整数："<<endl;
    cin>>a;
    cout<<"请输入一个实数："<<endl;
    cin>>b;
    cout<<"请输入指数："<<endl;
    cin>>m;
    cout<<a<<"的"<<m<<"次方是："<<getPower(a,m)<<endl;
    cout<<b<<"的"<<m<<"次方是："<<getPower(b,m)<<endl;
    return 0;
}
