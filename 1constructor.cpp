#include <iostream>
#include <vector>
#include <string>std::
class Chai{
    public:
    std::string teaName;
    int servings;
    std::vector<std::string> ingredients;
    // default constructor
    Chai(){
        teaName = "lemon tea";
        servings = 5;
        ingredients = {"lemon ", "honey ", "tea leaves ", "water"};
        std::cout << "your tea is ready \n";
    }
    void ChaiDetails(){
        std::cout << "Tea Name : " << teaName <<std:: endl;
        std::cout << "Serving : " << servings << std::endl;
        std::cout << "Ingredeints of tea : " << "\n";
        for (std:: string ingredeint : ingredients)
        {
           std:: cout << ingredeint;
         }
        std::cout <<std:: endl;
    }
};
int main(){
    Chai chaiOne;
    chaiOne.ChaiDetails();
    // chaiOne.ingredients; // Removed as it serves no purpose
    // second object creation;
    Chai chaiTwo;
    chaiTwo.teaName = "green tea";
    chaiTwo.ingredients = {"gree tea leaves ", "water "};
    chaiTwo.ChaiDetails();
    return 0;
}