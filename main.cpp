#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <direct.h>
#include<dirent.h>
#include <cmath>


using namespace std;
using std::filesystem::directory_iterator;



int usertype ;
string userFirstName;
string userLastName;

void userInteraction(string user){

cout << user;

};




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

DIR *directory;
struct dirent *x;


cout << " existing user! \n\n";

cout << "Enter your First name: \n";
cin >> userFirstName;
cout << "Enter your Last name: \n";
cin >> userLastName;

bool result = false;

if((directory = opendir("./userList")) != NULL){


while((x= readdir(directory)) != NULL){

if( userFirstName + " " + userLastName + ".txt" == x->d_name){

 string user = userFirstName + " " + userLastName ;
 result = true;
userInteraction(user);

break;


} 


}

closedir(directory);

}


if(result){

    
} else {

cout << "\nSorry, your account is not in our system. Please make an account. \n" ;



}
/*
for( const auto & file: directory_iterator("./userList")){








if(file.path().generic_string().find("" + userFirstName + " " + userLastName + ".txt" ) != string::npos){




cout << "\n I like men";

break;
} else {



}




    }

*/
/*
for(int i = 0; i < sizeof(directory_iterator("./userList")) / sqrt(sizeof(directory_iterator("./userList")));i++){

cout << i;

const auto & entry: directory_iterator("./userList").path();


cout << directory_iterator("./userList").[i];


}
*/
/*
for( const auto & file: directory_iterator("./userList")){



if(file.path().generic_string().find("" + userFirstName + " " + userLastName + ".txt" ) != string::npos){




cout << "\n I like men";

break;
} else {
continue;


}


cout << " \n sorry we couldnt find your login information";

    }


*/



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

