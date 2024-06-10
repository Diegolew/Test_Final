#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void Add(string date, string event);
void DelEvent(string date, string event);
void DelDate(string date);
void Find(string date);
void Print();
    
map<string, vector<string>> db;

int main(){

cout<<"Bienvendido a la base de datos"<<endl;
cout<<"Comandos disponibles: Add, Del, Find, Print"<<endl;
cout<<"ingrese un comando: "<<endl;

string command, date, description;
while (getline(cin , command)) {
        if (command == "Add") {
        cin >> date >> description;
        Add(date, description);
    } else if (command == "Del") {
        cin >> date >> description;
        if (description.empty())
            DelDate(date);
        else
           DelEvent(date, description);
    } else if (command == "Find") {
        cin >> date;
        Find(date);
       } else if (command == "Print") {
       Print();
    } else {
        cout << "Unknown command: " << command << endl;
        return 1; 
    }
}
return 0;
}

void Add(string date, string event){
    db[date].push_back(event);   
}

void DelEvent(string date, string event){
    for(int i = 0; i < db[date].size(); i++){
        if(db[date][i] == event){
            db[date].erase(db[date].begin() + i);
        }
    }
}

void DelDate(string date){
    db.erase(date);
}

void Find(string date){
    if(db.count(date) == 0){
        cout << "Not found" << endl;
    }
    else{
        for(int i = 0; i < db[date].size(); i++){
            cout << db[date][i] << endl;
        }
    }
}

