#include <iostream>
#include <cstdio>



int main() {
    
    int a;  
    long b;
    char c;
    float d;
    double e ;
    
    std::cin>> a>> b>> c>> d >> e ;
    std::cout << a << std:: endl;
    std::cout << b << std:: endl;
    std::cout << c << std:: endl;
    std::cout << std::setprecision ( 3 ) << std::fixed << d << std:: endl;
    std::cout << std::setprecision ( 9 ) << std::fixed << e <<std:: endl;
    return 0;
}
