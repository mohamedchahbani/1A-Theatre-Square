#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    long long int s1,s2, n , m ,a;

    int nb=1;
    cin >>n;
    cin >>m;
    cin >>a;
    s1=n/a;
    s2=m/a;
    if(n%a!=0){
        s1++;
    }
    if(m%a!=0){
        s2++;
    }
    cout<<s1*s2<<endl;
    
    return 0;
}