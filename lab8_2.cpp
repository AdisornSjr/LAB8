#include<iostream>
#include<string>

using namespace std;

int main(){
    string name;
    int id;
    string movie;
    int X;
    string date;
    string said;
 
    
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    cin >> id;
    cin.ignore();
    X = id/10000000-12;
    cout <<  "Fahsai: I think you may be GEAR " << X << "." << " I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": ";
    getline(cin,date);
    cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;
    cout << name << ": ";
    getline(cin,said);
    cout << "Fahsai: 555+ see you " << date << "." << " Bye Bye \\(^ ^)/" << endl;

    return 0;


}