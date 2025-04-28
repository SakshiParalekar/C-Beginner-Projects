#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    float marks[5], sum = 0, average;
    char grade;
    
    cout<< "Enter marks for 5 Subjects." << endl;
    
    for(int i = 0; i < 5; i++) {
        cout<< "Subject" << i + 1 << ":";
        cin>> marks[i];
        
        while (marks[i] < 0 || marks[i] > 100) {
            cout<< "Invalid input! Please enter marks between 0 to 100 for subject" << i + 1 << ":";
            cin>> marks[i];
        }
        sum += marks[i];
    }
    
    average = sum / 5;
    
    cout<< fixed << setprecision(2) << "Average Marks:" << average << endl;
    
    if(average >= 90){
        cout<< "Grade A, You are Excellent!" << endl;
    }
    else if(average >= 80){
        cout<< "Grade B, Good job!" << endl;
    }
    else if(average >= 70){
        cout<< "Grade C, Keep it up!" << endl;
    }
    else if(average >= 60){
        cout<< "Grade D, Try your best!" << endl;
    }
    else {
        cout<< "Grade F! Better Luck next Time!" << endl;
    }
    
    return 0;
    
}