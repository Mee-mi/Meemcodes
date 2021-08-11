#include <iostream>
#include <cmath>

using namespace std;

void update(int *a,int *b)
 {
    int old= *a;
    *a = old + *b;
    *b= abs(old - *b);
    
    // Complete this function    
}

int main() {
    int a, b;
    int *ptra = &a, *ptrb = &b;
    
    cin >>a >>b;
    
    update(ptra, ptrb);
    cout<< a << "\n" << b; 

    return 0;
}
