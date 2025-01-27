#include <iostream>

extern "C" {
    double multiply(double, double, double);
    double add(double, double);
    double sub(double, double);
    double print(double);
    double cos(double);
}

int main(){
    std::cout<<add(11.0,3.0)<<std::endl;
    std::cout<<sub(11.0,5.0)<<std::endl;
    std::cout<<multiply(11.0,3.0,500.0)<<std::endl;
    std::cout<<cos(1000000.00)<<std::endl;
    std::cout<<print(1000.00)<<std::endl;

}
