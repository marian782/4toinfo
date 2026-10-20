#include <iostream>
using namespace std;

int main() {
    int N_natty[3];
    int B=0;
    for (int i=0;i<3;i++){
        N_natty[i]=B;
        B=B+1;
    }
    for (int i=0;i<3;i++){
        cout<<N_natty[i]<<endl;
    }
        return 0;
}
