#include <bits/stdc++.h>
using namespace std;

int var1;
static int var2;
int var3 = 3;

int f(int var4){
    if( var4 <= 1 ) return 1;
    else return f(var4-1) + f(var4-2);
}
 
int main(){
    int var5;
    static int var6;
    int *var7 = (int*) malloc(sizeof(int)*100);
    int var8 = 5;
    return 0;
}