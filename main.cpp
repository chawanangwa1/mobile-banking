#include <iostream>
#include <string>
#define clear system("clear");
using namespace std;

int main(){
    int choise, age;
    string fname, lname, password, account_number, full_name;
    
    clear;//This line Cleans up the terminal before printing anything on the screen ""clear" works for linux system"
    cout << "\t\tWELCOME TO CTECH MOBILE BANKING APP" <<endl;
    cout << "\t\t1)TO LOGIN\n\t\t2)TO CREATE AN ACCOUNT\n\n\t\tCHOISE: ";
    cin >> choise;
    //if users dcides to create an account 
    if(choise == 1)
    {

    }
    else if(choise == 2)
    {
        clear;
        cout << "\t\tTO CREATE AN ACCOUNT PLEASE ENTER THE FOLLOWING DETAILS\n"<<endl;
        cout << "\t\tPERSONAL INFORMATION"<<endl;
        cout << "\t\tFIRST NAME: ";
        cin >> fname;
        cout << "\t\tLAST NAME: ";
        cin >> lname;
        full_name = fname+" "+lname; //putting the two names together
        cout << "AGE: ";
        cin >> age;
        clear;
        cout << "You Have Successfully Created an Account" <<endl;
        
    }

    return 0;
}