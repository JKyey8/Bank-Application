#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <windows.h>
#include <direct.h>
#include<dirent.h>
#include <cmath>


using namespace std;
using std::filesystem::directory_iterator;


int usertype ;
string userFirstName;
string userLastName;
int userPin;
int personalID;


void userInteractions (int personalID ){

   

 string userFile = "./userList/" + to_string(personalID) + ".txt";
int bankAction;
string line;
int current_line = 0;
ifstream dataFile;
dataFile.open(userFile);

if (dataFile.fail()){
cout << "can not open file";
return;
}

cout << "What would you like to do today? \n" ;
cout << "1.   Checking \n" ;
cout << "2    Savings \n" ;
cin >> bankAction;


while (!dataFile.eof()){


current_line++;


getline(dataFile, line);
if (current_line == bankAction ){
  
cout << line;
break;
} 



}



};


void getUserType(int userTypeAnswer) {

mkdir("./userList");

  

if(userTypeAnswer == 1){





cout << "Enter your First name: \n";
cin >> userFirstName;
cout << "Enter your Last name: \n";
cin >> userLastName;
cout << "Please create a 4-digit Personal Pin \n";
cin >> userPin;

string userID = userFirstName + " " + userLastName ;

srand((unsigned) time(NULL));
int checking = 10;
int savings = 15;


int personalID = 10000000 + (rand() % 90000000 );


ofstream Users("./userList/" + to_string(personalID) + ".txt");

Users << personalID << endl ;
Users << userPin << endl ;
Users << checking << endl  ;
Users << savings  ;
Users << userID << endl ;







Users.close();

cout << "Your account has been created! \n";
cout << "Your personal ID is " + to_string(personalID) + ". Plese keep this safe as you will use it to login.";

 string user = userFirstName + " " + userLastName ;
 
 userInteractions(personalID);

} else if(userTypeAnswer == 2){

DIR *directory;
struct dirent *x;


cout << " existing user! \n";

cout << "Enter your Personal ID \n";
cin >> personalID;
cout << "Enter your Personal Pin \n";
cin >> userPin;

bool result = false;


ifstream dataFile;
int current_line = 0;
string line;

string userFile = "./userList/" + to_string(personalID) + ".txt";
dataFile.open(userFile);
while (!dataFile.fail()){



current_line++;


getline(dataFile, line);
if (current_line == 2 ){
  
if(line == to_string(userPin)){
cout << "correct pin enteredv\n \n";
userInteractions(personalID);

} else {

cout << "Wrong thing bozo";

}
} 

} 
/*
if((directory = opendir("./userList/A")) != NULL){


while((x= readdir(directory)) != NULL){


if( "A" + to_string(personalID) + ".txt" == x->d_name){

cout << "Hip Hip";

 string user = userFirstName + " " + userLastName ;
 result = true;
 userInteractions(user);

break;


} 


}

closedir(directory);

}



if(result){
 
    
} else {

cout << "\nSorry, your account is not in our system. Please make an account. \n" ;



return;
}
*/


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

main();
} else {

cout << "Please enter a valid number and try again! \n\n";

main();


}



system("pause");
}

