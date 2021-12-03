#include<iostream>
#include<string>
using namespace std;

int gear(int ID){
    int g;
   while(ID%10000000 != 0){
         ID--;
    }
    g = (ID/10000000)-12;
    return g;
}


string name,film,date,quote;
int ID;
int main(){
    cout << "Fahsai: Sawadee ka...Can you tell me your name? \n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID? \n";
    cout << name <<": ";
    cin >> ID;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << gear(ID)  <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name <<": ";
    getline(cin,film);
    cout << "Fahsai: So....which day are you free to go with me? \n";
    cout << name <<": ";
    getline(cin,date);
    cout << "Fahsai: " << date <<"....that is OK!!! I'm looking forward to watching "<< film << " with you.\n";
    cout << name <<": ";
    getline(cin,quote);
    cout << "Fahsai: 555+ see you "<< date << ". Bye Bye \\(^ ^)/";

}












