#include <iostream>
#include <vector>
#include <string>
class Tea{
    public: 
        std::string* teaName; // string pointer..
        int numberofCups;
        std::vector<std::string>ingredients;

    Tea(std::string name, int cups, std::vector<std::string> ingr) {
        teaName = new std::string(name);
        numberofCups = cups;
        ingredients = ingr;
    }
   //syntax for copy constructor
   Tea(const Tea & other){
        teaName = new std::string (*other.teaName);
        numberofCups = other.numberofCups;
        ingredients = other.ingredients;
   }
    //destructor
    ~Tea(){
        delete teaName; // free memory from dynamic memory
        std:: cout<<"Dynamic memory is clear.." << "\n";
    }
    void teaDetails(){
        std::cout << "Name fo tea is \n " << *teaName << std::endl;
         std::cout << "Serving : " << numberofCups << std::endl;
        std::cout << "Ingredeints of tea : " << "\n";
        for (std:: string ingredeint : ingredients)
        {
           std:: cout << ingredeint;
         }
        std::cout <<std:: endl;
    }
};
int main(){
    Tea chai("masala chai", 2, {"ginger, ", "cardamom, ", "tea leaves, ", "water, "});
    chai.teaDetails();
    Tea copiedChai = chai;
    *chai.teaName = "green tea";
    copiedChai.teaDetails();
    return 0;
}