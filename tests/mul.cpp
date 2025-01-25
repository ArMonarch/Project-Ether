#include <iostream>

extern "C" {
    double multiply(double, double, double);
    double cos(double);
}

int main(){
    std::cout<<multiply(11.0,3.0,500.0)<<std::endl;
    std::cout<<cos(1000000.00)<<std::endl;
}
