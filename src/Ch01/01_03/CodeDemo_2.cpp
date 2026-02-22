#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Enter your first name:" << std::flush;
    std::cin >> str;
    std::cout <<"Your first name is:" << str<<"!"<< std::endl;

    std::cout << std::endl << std::endl;
    return(0);
}