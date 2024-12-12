#include<iostream>
#include<string>

int main(){
    
    int _age, _height, _bounty;
    std::cout << "Enter your age: ";
    std::cin >> _age;
    if(_age <= 25){
        std::cout << "Enter your height: ";
        std::cin >> _height;
        if(_height < 100){
            std::cout << "Your character = " << "Chopper";
        }
        if(_height < 180 and _height >= 100){
            std::cout << "Your character = " << "Usopp";
        }
        if(_height >= 180){
            std::cout << "Enter your bounty: ";
            std::cin >> _bounty;
            if(_bounty <= 1100000000){
                std::cout << "Your character = " << "Sanji";
            }else{
                std::cout << "Your character = " << "Zoro";
            }
        }
    }
    if(_age > 25 and _age <= 60){
        std::cout << "Enter your bounty: ";
        std::cin >> _bounty;
        if(_bounty <= 500000000){
                std::cout << "Your character = " << "Franky";
        }else{
            std::cout << "Your character = " << "Jinbe";
        }
    }
    if(_age > 60){
        std::cout << "Your character = " << "Brook";
    }
}