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

void Add(string date, string event) {
    database[date].push_back(event);
}

void DelEvent(string date, string event) {
    auto& events = database[date];
    events.erase(remove(events.begin(), events.end(), event), events.end());
}

void DelDate(string date) {
    database.erase(date);
}

void Find(string date) {
    if (database.count(date) == 0) {
        cout << "Not found" << endl;
    } else {
        for (const auto& event : database[date]) {
            cout << event << endl;
        }
    }
}

void Print() {
    for (auto& date_events : database) {
        string date = date_events.first;
        vector<string>& events = date_events.second;

        sort(events.begin(), events.end());

        for (const auto& event : events) {
            cout << date << " " << event << endl;
        }
    }
}