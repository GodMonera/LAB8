//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name,movie , days , lastS , id;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    getline(cin,name) ;
    cout << "?????: Fahsai: Wow!!! "<<name<<" is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name <<": ";
    cin >> id ;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR "<<stoi(id.substr(0,2)) - 12<<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name <<": ";
    getline(cin,movie) ;
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name <<": ";
    getline(cin,days) ;
    cout << "Fahsai: "<< days <<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you.\n" ;
    cout << name <<": ";
    getline(cin,lastS) ;
    cout << "Fahsai: 555+ see you "<<days<<". Bye Bye \\(^ ^)/";


    return 0;
}
