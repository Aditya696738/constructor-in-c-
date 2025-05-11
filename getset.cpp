#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Chai{
    private:
        int servings;
        vector<string> ingredients;
        string teaName;

    public:
    //default constructor
        Chai(){
            teaName = "unknown tea";
            servings = 1;
            ingredients = {"water" , "milk" , "tea leaves" , "sugar"};
        }
        // parametric constructor
        Chai(string name , int serve , vector<string>ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;
        }
};