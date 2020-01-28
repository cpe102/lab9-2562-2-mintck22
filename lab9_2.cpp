//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){

    string textline;
    

    ifstream source1;
    source1.open("cheerbook.txt");
    

    ofstream dest;
    dest.open("cheerbook_copy.txt");
    dest << "-------------------- SOTUS ---------------------\n";
    
    while (getline(source1,textline)){
        
        dest << textline << "\n";
        
    }
    dest << "-------------------- SOTUS ---------------------";
    dest.close();

    return 0;

}
