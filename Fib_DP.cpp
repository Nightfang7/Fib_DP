#include <iostream>

using namespace std;

int Fib_DP(int n){
    if(n==0 || n==1)
        return n;
    int *F = (int *) malloc((n) * sizeof(int));
    F[0] = 0;
    F[1]= 1;
    for(int i=2;i<=n;i++){
        F[i]=F[i-1]+F[i-2];
    }
    return F[n];
}

int main(){
    for(int i=0;i<=10;i++){
        cout << Fib_DP(i) <<endl;
    }
}