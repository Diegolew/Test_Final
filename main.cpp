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
 
map<string, vector<string>> database;

int main() {
cout << "Bienvenido\n";
cout << "Comandos disponibles: Add, Del, Find, Print" << endl;
cout << "Ingrese un comando: " << endl;

string line;
while (getline(cin, line)) {
    string command;
    size_t pos = line.find(' ');
    if (pos != string::npos) {
        command = line.substr(0, pos);
        line.erase(0, pos + 1);
    } else {
        command = line;
        line = "";
    }
    if (command == "Add") {
        size_t pos = line.find(' ');
        if (pos != string::npos) {
            string date = line.substr(0, pos);
            string event = line.substr(pos + 1);
            Add(date, event);
        }
    } else if (command == "Del") {
        size_t pos = line.find(' ');
        if (pos != string::npos) {
            string date = line.substr(0, pos);
            string event = line.substr(pos + 1);
            if (event.empty()) {
                DelDate(date);
            } else {
                DelEvent(date, event);
            }
        }
    } else if (command == "Find") {
        Find(line);
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
    database[date].push_back(event);   
}

void DelEvent(string date, string event){
    for(int i = 0; i < database[date].size(); i++){
        if(database[date][i] == event){
            database[date].erase(database[date].begin() + i);
        }
    }
}

void DelDate(string date){
    database.erase(date);
}

void Find(string date){
    if(database.count(date) == 0){
        cout << "Not found" << endl;
    }
    else{
        for(int i = 0; i < database[date].size(); i++){
            cout << database[date][i] << endl;
        }
    }
}

void Print(){
    for(auto& date_events : database){
        string date = date_events.first;
        vector<string>& events = date_events.second;
        
        int n = events.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (events[i] > events[j]) {
                    swap(events[i], events[j]);
                }
            }
        }
        
        for(const auto& event : events){
            cout << date << " " << event << endl;
        }
    }
}
