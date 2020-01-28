//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
#include<cmath>

using namespace std;

int main(){

    int count = 0;
    float sum = 0 , sumx2 = 0 ,mean = 0;

    string textline;

    ifstream source("score.txt");
    while (getline(source,textline))
    {
        //cout << textline << "\n";
        sum += atof(textline.c_str());
        sumx2 += atof(textline.c_str())*atof(textline.c_str());
        count++;
    }

    mean = sum/count;
    cout << "Number of data = " << count << "\n";
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << pow((sumx2/count)-(mean*mean),0.5);

}