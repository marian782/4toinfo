#include <iostream>
using namespace std;
int main() {
 int n;
 do{
 cin>>n;
} while(n>2);
int m[n][2];
int v[n];
for(int filas=0;filas<n;filas++){
for(int col=0;col<2;col++){
cin>>m [filas][col];
}
}
for(int i=0;i<n;i++){
  v[i]=m[i][0]+m[i][1];
}
return 0;
}