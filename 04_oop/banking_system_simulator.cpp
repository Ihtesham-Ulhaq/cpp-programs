#include <iostream>
#include <string>
using namespace std;

const int MAX_ACCOUNTS = 10000;    
int accountNumbers[MAX_ACCOUNTS];          //array to store account numbers
string accountHolderNames[MAX_ACCOUNTS];  //array to store account holders name
double balances[MAX_ACCOUNTS];           //array to store account balance

int accountCount = 0;                     /*variable which stores number of accounts made cant exceed MAX_ACCOUNTS
                                           this varable is the index in which all information will stored*/
//function to create a account 
void createAccount() {
    if (accountCount >= MAX_ACCOUNTS) {
        cout << "Cannot create more accounts. Limit reached." << endl;
        return;
    }
                                                                                                    
    cout << "Enter account holder name: ";
    cin.ignore(); //ignore the input from user after a space is added in it.                        /*if cin.ignore() and getline() was not used .then it will be written as." cin>>accountHolderNames[accountcount]".But then if a space was added will user gives input the problem will run infinit times until maximum account limit is reached . 
    getline(cin, accountHolderNames[accountCount]);//stores the input ignored by cin.ignore()       
    cout << "Enter account number: ";                                                                             
    cin >> accountNumbers[accountCount];  //e.g(accountNumbers[0]=101.so this arrays index value 0 consists of account number 101
    cout << "Enter initial balance: ";
    cin >> balances[accountCount];
   
    accountCount++;    //increases the value of accountCount by 1. 
    cout << "Account created successfully!" << endl;
}
//function to display account details 
void displayAccountDetails(int accNum) {
    for (int i = 0; i < accountCount; i++) {   // i is variables used as a array index. 
       
	    if (accountNumbers[i] == accNum) {      //accountNumbers[8]=102 if the account number provided by user is equal to 102 then the loop will run from 0 index while accountNumber[0]=101 so 101 !==102. so it will run 8 times until it reaches accountNumber[8]=102 it will be not true.
            cout << "Account Number: " << accountNumbers[i] << endl;
            cout << "Account Holder: " << accountHolderNames[i] << endl;
            cout << "Balance: $" << balances[i] << endl;
            return;
        }
    }
    cout << "Account not found." << endl;
}
//function to deposit money 
void depositMoney(int accNum, double amount) {    
    for (int i = 0; i < accountCount; i++) {     //same loop concept as display account details 
        if (accountNumbers[i] == accNum) {
            
			if (amount > 0) {
                balances[i] += amount;
                cout << "Deposited $" << amount << " successfully." << endl;
            } else {
                cout << "Invalid deposit amount." << endl;
            }
            return;
        }
    }
    cout << "Account not found." << endl;
}
//funtion to withdraw money 
void withdrawMoney(int accNum, double amount) {     //same loop concept as above funtions
    for (int i = 0; i < accountCount; i++) {
        if (accountNumbers[i] == accNum) {
            if (amount > 0 && amount <= balances[i]) {       //just the reverse concept of depositing money function
                balances[i] -= amount;
                cout << "Withdrew $" << amount << " successfully." << endl;
            } else {
                cout << "Invalid or insufficient funds for withdrawal." << endl;
            }
            return;
        }
    }
    cout << "Account not found." << endl;
}
//main program starts
int main() {
    int choice;
   //do while loop
    do {
        cout << "\n===== Bank Account System =====" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Display Account Details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            createAccount(); //funtion call
        } else if (choice >= 2 && choice <= 4) {
            int accNum;
            cout << "Enter account number: ";
            cin >> accNum;

            if (choice == 2) {
                double amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                depositMoney(accNum, amount); //function call
            } else if (choice == 3) {
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                withdrawMoney(accNum, amount);   //function call
            } else if (choice == 4) {
                displayAccountDetails(accNum);   //function call
            }
        } else if (choice != 5) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    cout << "Exiting... Thank you!" << endl;
    return 0;
}
