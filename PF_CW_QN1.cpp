#include <iostream>
using namespace std;



int main() {
    string newUserId; //This variable will hold the id that the user will type
    string newPassword;//THis varible called newPassword will hold the password by user at first
    double accountBalance = 0.0; // AccountBalance will hold the user's balance
    bool isLoggedIn = false; // THis variable will hold the status of my logging in to ATMprogram
    char user_entered_option;  //option that the user enters from the menu display

    string enteredUserId, enteredPassword;

    while (true) {
        if (!isLoggedIn) {
            cout << "Welcome to the ATM Machine! \n \n" ;
            cout << "Choose an option: \n" ;
            cout << "l - Login \n" ;
            cout << "c - Create New Account \n";
            cout << "q - Quit \n" ;
            cout << "> ";
            cin >> user_entered_option;


            //When the user enters option "c" the code below will run so that he or me can
            //create an account with the Bank or ATM machine.
            if (user_entered_option == 'c') {
                cout << "Enter a new user id: ";

                //Here the user will entere their preferred user_id and it will be stored in
                // the variable name newUserId as below.
                cin >> newUserId;  
                cout << "Enter a new password: ";

                //Here is where the user will be requested for his or her password for the
                //userid he will be creating. And this password will be stored in variable
                //called newPassword as I have declared below.
                cin >> newPassword;
                cout << "Account created successfully!" << endl;

            }
           
            //IF THE USER EXISTS IN THE SYSTEM AND ENTERS "l", he will be required
            //to enter his user_id and password that he or she has registered with the
            //Bank as below.
            else if (user_entered_option == 'l') {

                cout << "Enter your user id: ";
                cin >> enteredUserId;  
                cout << "Enter your password: ";
                cin >> enteredPassword;

                //HERE MY CODE WILL CHECK IF THE ENTERED USER ID AND PASSWORD IS EQUAL
                // TO THE USER LOGIN DETAILS SUPPLIED AT THE TIME OF REGISTRATION
                if (enteredUserId == newUserId && enteredPassword == newPassword) {
                    cout << "***LOGIN SUCCESSFUL!***" << endl;
                    isLoggedIn = true;
                } else {

                    //THIS MESSAGE RETURNS TO THE USER IF THEY DON'T EXIST IN THE SYSTEM
                    //AND TO DISPLAY THIS WE USE THE "cout" object
                    cout << "\n ***LOGIN FAILED!*** \n " << endl;
                }

            }

            //THIS CODE  BELOW WILL RUN IF THE USER IS EXITING THE ATM PROGRAM
            else if (user_entered_option == 'q') {
                cout << "Thanks for using our banks. It's nice to have you always!" << endl;
                return 0;

            } else {
                cout << "Invalid option. Please try again." << endl;
            }

        }
       
             
        //THIS CODE WILL RUN IF THE USER IS SUCCESSFUL IN LOGING IN TO THE ATM PROGRAM
        // WITH OPTIONS TO CONDUCT DEPOSIT, WITHDRAW, CHECK BALANCE< and QUIT THE ATM PROGRAM
        else {
            cout << "Choose an option:" << endl;
            cout << "d - Deposit Money" << endl;
            cout << "w - Withdraw Money" << endl;
            cout << "r - Check Balance" << endl;
            cout << "q - Quit" << endl;
            cout << "> ";
            cin >> user_entered_option;


        //if the user selects option "d" he will be direct to deposit of which he will be prompted
        //to enter the amount of money they wish to deposit forexample 200000 without commas.
            if (user_entered_option == 'd') {
                double depositAmount;
                cout << "Enter amount to deposit: UGX ";
                cin >> depositAmount;
                accountBalance += depositAmount;
                cout << "Deposit successful. Your new balance is UGX " << accountBalance << "." << endl;

            }
           
            //when the user selects "w" he or she will be taken to withdraw the money.
            // the cin object will capture the withdraw amount entered by the user.
       
            else if (user_entered_option == 'w') {
                double withdrawalAmount;
                cout << "Enter amount to withdraw: UGX ";
                cin >> withdrawalAmount;

                if (withdrawalAmount > accountBalance) {
                    cout << "Insufficient funds." << endl;
                } else {
                    accountBalance -= withdrawalAmount;
                    cout << "Withdrawal successful. Your new balance is UGX " << accountBalance << "." << endl;
                }


            //NOW HERE, When the user decides to check his or her balance the code below will return their
            //balance and displaay it for theeem.

            } else if (user_entered_option == 'r') {
                cout << "Your current balance is UGX " << accountBalance << "." << endl;



            //If I entered "q" which is an option to Quit the Program, the program will quit. and display the message
            // "You have logged out" as below here
            } else if (user_entered_option == 'q') {
                isLoggedIn = false;
                cout << "You have been logged out." << endl;

            } else {
                cout << "Option is not okay. Please try again" << endl;
            }
        }
    }


    //IF my PROGRAM has RUN well it will return 0 as here BELOw.
    return 0;
}

