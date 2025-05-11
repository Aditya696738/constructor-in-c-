#include <iostream>
#include <vector>
#include <string>
class Staff_room{
    public:
        int numberOfMembers;
        int HOD;
        std::vector<std::string> Roles;
        //parametric constructor
        Staff_room(int member , int hod , std::vector<std::string> role){
            numberOfMembers = member;
            HOD = hod;
            Roles = role;
        }
        void staffDetails(){
            std::cout << "Total number of staff is - " << numberOfMembers <<std::endl;
            std::cout << "Total H.O.D - " << HOD <<std:: endl;
            std::cout << "Roles of staff \n";
            for(std::string role : Roles){
                std::cout << role;
            }
            std::cout << std::endl;
        }
};
int main(){
    Staff_room staff(10 , 5 , {"Teacher, ", "Asst. Teacher, ", "Examiner, ", "Incharge"});
    staff.staffDetails();
    return 0;
}
