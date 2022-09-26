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
    int insert = 0;
    int uinput = 0;
    cout <<"Press 1 to insert data \nPress 2 to read data \n";
    cout << "\nYour input : ";

    cin >>uinput;
    User user[10];
    fstream userData;
    if(uinput == 1){
    cout << "How many user u want to insert : ";
    cin >> insert;

        for(int i = 0;i<insert;i++){
        cout << "Enter User ID : ";
        cin >> user[i].id;
        cout << "Enter User Name : ";
        cin >> user[i].userName;
        cout << "Enter User age : ";
        cin >> user[i].age;
        cout << "Enter amount : ";
        cin >> user[i].amount;
        cout << "Enter Location : ";
        cin >> user[i].location;
        cout << "Enter Password : ";
        cin >> user[i].password;
        user[i].setData(user[i].id ,user[i].userName ,user[i].age ,user[i].amount ,user[i].location ,user[i].password);

        userData.open("User.txt",ios::app);
        if(userData.is_open()){
            userData <<"\nID :"<<user[i].id<<"\nUsername :"<<user[i].userName<<"\nAge :"<<user[i].age<<"\nAmount :"<<user[i].amount<<"\nLocation :"<<user[i].location<<"\nPassword :"<<user[i].password;
            userData.close();
        }
        }
    }
    if(uinput == 2){

    userData.open("user.txt",ios::in);
        if(!userData.is_open()){
            cout << "There is no data";
            userData.close();
        }

        if(userData.is_open()){

            string line;
            while(getline(userData,line)){

                cout << line <<endl;
            }

            userData.close();
        }
    }

return 0;
}
