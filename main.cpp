#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

//DECLARACION DE FUNCIONES
void Add(string dato, string evento);
void DeleteEvent(string dato, string evento);
void DeleteDate(string dato);
void Find(string dato);
void Print();
//DECLARACION DE LA BASE DE DATOS
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
            string dato = line.substr(0, pos);
            string evento = line.substr(pos + 1);
            Add(dato, evento);
        }
    } else if (command == "Del") {
        size_t pos = line.find(' ');
        if (pos != string::npos) {
            string dato = line.substr(0, pos);
            string evento = line.substr(pos + 1);
            if (evento.empty()) {
                DeleteDate(dato);
            } else {
                DeleteEvent(dato, evento);
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
//FUNCION ADD
void Add(string dato, string evento) {
    database[dato].push_back(evento);
}
//FUNCION DELETE
void DeleteEvent(string dato, string evento) {
    auto& eventos = database[dato];
    eventos.erase(remove(eventos.begin(), eventos.end(), evento), eventos.end());
}
//FUNCION DELETE DATE
void DeleteDate(string dato) {
    database.erase(dato);
}
//FUNCION FIND
void Find(string dato) {
    if (database.count(dato) == 0) {
        cout << "Not found" << endl;
    } else {
        for (const auto& evento : database[dato]) {
            cout << evento << endl;
        }
    }
}
//FUNCION PRINT
void Print() {
    for (auto& dato_eventos : database) {
        string dato = dato_eventos.first;
        vector<string>& eventos = dato_eventos.second;

        sort(eventos.begin(), eventos.end());

        for (const auto& event : eventos) {
            cout << dato << " " << event << endl;
        }
    }
}