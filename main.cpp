#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <direct.h>

using namespace std;




int usertype ;
string userFirstName;
string userLastName;






void getUserType(int userTypeAnswer) {

mkdir("./userList");

  

if(userTypeAnswer == 1){






cout << "Enter your First name: \n";
cin >> userFirstName;
cout << "Enter your Last name: \n";
cin >> userLastName;


ofstream Users("./userList/" + userFirstName + " " + userLastName + ".txt");


Users.close();

cout << "Your account has been created!";


} else if(userTypeAnswer == 2){

cout << " existing user! \n\n";



} 
}


int main(){

mkdir("./userList");



cout << "\n\n Press 1 for new user or 2 for existing user:";
cin >> usertype;


if(usertype == 1){
getUserType(1);

main();

} else if (usertype== 2){
    getUserType(2);


} else {

cout << "Please enter a valid number and try again! \n\n";

main();


}



system("pause");
}

