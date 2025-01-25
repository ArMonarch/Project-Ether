#include <iostream>

extern "C" {
    double mul(double, double, double);
}

int main(){
    std::cout<<mul(1.0,3.0,500.0);
}
