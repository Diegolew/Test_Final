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
