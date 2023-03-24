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
    return F[n];        //suh: after you finish your function, you did not remove the allocated memory
}

int main(){
    for(int i=0;i<=10;i++){     //suh: basically, lines 11-12 are for these 2 lines
        cout << Fib_DP(i) <<endl;
    }
}