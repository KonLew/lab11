#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    int count = 0;
    ifstream source;
    source.open("score.txt");
    double mean,sd;
    double sum=0,sum2=0;
    string score;
    
     
    while(getline(source,score)){
        sum += atof(score.c_str());
        sum2 += pow(atof(score.c_str()),2);  
        count++;
  
    }
    mean = sum/count;
    sd = sqrt(sum2/count-pow(mean,2));
    
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean <<"\n";
    cout << "Standard deviation = "<< sd << "\n";
}