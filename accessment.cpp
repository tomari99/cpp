#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class User{
    public:
        int id;
        string userName;
        int age;
        int amount;
        string location;
        string password;


    public:
        void setData(int id,string name,int age,int amount,string location,string pwd){

            id = id;
            userName = name;
            age = age;
            amount = amount;
            location = location;
            password = pwd;
        }
        void getData(){
         cout <<"ID :"<<id<<"\nUsername :"<<userName<<"\nAge :"<<age<<"\nAmount :"<<amount<<"\nLocation :"<<location<<"\nPassword :"<<password<<endl;

        }


};

int main(){
    User user1;
    cout << "Enter User ID : ";
    cin >> user1.id;
    cout << "Enter User Name : ";
    cin >> user1.userName;
    cout << "Enter User age : ";
    cin >> user1.age;
    cout << "Enter amount : ";
    cin >> user1.amount;
    cout << "Enter Location : ";
    cin >> user1.location;
    cout << "Enter Password : ";
    cin >> user1.password;
    user1.setData(user1.id ,user1.userName ,user1.age ,user1.amount ,user1.location ,user1.password);
    user1.getData();

return 0;
}
