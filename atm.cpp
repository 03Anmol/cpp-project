#include<iostream>
using namespace std;
void showMenu(){
    cout<<"***MENU***"<<endl;
    cout<<"1. CheakBalance: "<<endl;
    cout<<"2. Deposit: "<<endl;
    cout<<"3. Withdraw: "<<endl;
    cout<<"4. Exit: "<<endl;
}



int main(){

   float cheakBalance =500;
   float deposit;
   float withdraw;
   int option;
   int pin =1819,userPin;
   cout<<"Please enter your PIN: "<<endl;
   cin>>userPin;
   if(pin==userPin){

   do{
       showMenu();
   cout<<"Please enter an option: "<<endl;
   cin >> option;
   system("cls");
   switch(option){
   case 1: cout<<"Your balance is: "<<cheakBalance<<" $ "<<endl;
               break;
   case 2: cout<<"Enter the amount you want to deposit: "<<endl;
            cin >> deposit;
            cheakBalance = deposit+cheakBalance;
            cout<<"Deposite sucessfull: "<<endl;
            cout<<"For confirm cheak the balance: "<<endl;
            break;
   case 3: cout<<"Please enter the amount you want to withdraw: "<<endl;
               cin>>withdraw;
               if(withdraw<cheakBalance){
                   cheakBalance  = cheakBalance-withdraw;
               }
               else{
                   cout<<"Insufficient funds to withdraw: "<<endl;
               }
                 break;
   case 4: cout<<"Thank you: "<<endl;
   break;

    default:{
                   cout<<"Please enter a valid option: "<<endl;
               }
                break;
    }

 }while(option!=4);
   }
   else{
       cout<<"Please enter a valid pin: "<<endl;
       cout<<"Try again: "<<endl;
   }

}
