#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int usertype ;

void getUserType(int userTypeAnswer) {

if(userTypeAnswer == 1){

cout << " New user! \n\n";

} else if(userTypeAnswer == 2){

cout << " existing user! \n\n";

} 
}


int main(){





cout << "\n\n Press 1 for new user or 2 for existing user:";
cin >> usertype;


if(usertype == 1){
getUserType(1);

} else if (usertype== 2){
    getUserType(2);


} else {

cout << "Please enter a valid number and try again! \n\n";

main();


}



system("pause");
}

