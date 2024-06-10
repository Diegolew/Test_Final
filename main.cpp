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

return 0;
}

void Add(string date, string event){
    db[date].push_back(event);   
}
