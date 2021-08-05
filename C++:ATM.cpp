#include <iostream>
#include <time.h>

using namespace std;

//Menu
void showMenu(){
    
    cout << "******** Menu ********" << endl;
    cout << "1. Check balance \n";
    cout << "2. Deposit \n";
    cout << "3. Withdraw \n";
    cout << "******** Menu ********" << endl;
};

//Next
void nextHome(){
    cout << "Next- \n";
    cout << "1. Return home \n";
    cout << "2. Exit \n";
    cout << "Ans: ";
};

//spacing
void spacing(){
    cout << " " << endl;
};

//refresh
void refresh(){
    system("clear");
};

int main() {
    int opt;
    double balance = 500;
    double withdraw;

    while(true){
        // Loop
        refresh();
        showMenu();
        cout << "Option: ";
        std::cin >> opt;
        refresh();
        spacing();

    switch(opt){
        case 1:
        cout << "Balance is: $" << balance << endl;
        break;
        case 2:
        cout << "Deposit amount: $";
        double depositAmount;
        std::cin >> depositAmount;
        balance += depositAmount;
        cout << "New balance: $" << balance << endl;
        break;
        case 3:
        cout << "Withdraw amount: $";
        double withdrawAmount;
        std::cin >> withdrawAmount;
        if(withdrawAmount <= balance){
            balance -= withdrawAmount;
            cout << "New balance: $" << balance << endl;
        } else{
            cout << "Not enough money! \n";
            cout << "Your balance is $" << balance << endl;
        }
        break;
        default:
        cout << "Invalid request, please try again!" << endl;
        break;
    };

    char next;

    spacing();
    spacing();
    
    int home;

    nextHome();
    std::cin >> home;
    if(home == 1){
        refresh();
        continue;
    } else if(home == 2){
        refresh();
        break;
    } else{
        refresh();
        cout << "Invalid request! We will send you to the home page." << endl;
        continue;
    }
    };
    return 0;
};