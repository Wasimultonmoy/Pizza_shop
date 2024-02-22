#include <iostream>
#include <conio.h>
using namespace std;
void pizza_list()
{
    cout << "A.Hentai Pizza\n" "B.Neapolitan Pizza\n" "C.Chicago Deep-Dish Pizza\n" "D.Special Hentai Pizza" << endl;
}
char getChoice_pizza()
{
    char choice_Pizza;
    cout << "Enter Your choice: ";
    cin >> choice_Pizza;
    return choice_Pizza;
}
char getConfirmPizza(string pizzaName, int pizzaBill=0)
{
    char confirmPizza;
    while (true)
    {
        cout << "So, You want to buy a " << pizzaName << "You have to pay " << pizzaBill << "$. Do you want to Buy it? Y or N"<< endl;
        cin >> confirmPizza;
        confirmPizza = toupper(confirmPizza);
        if (confirmPizza == 'Y' || confirmPizza == 'N')
        {
            break;
        } else{
            cout << "Please Give correct input" << endl;
        }
    }
    return confirmPizza;

}
char getConfirmCoke()
{
    char confirmCoke;
    while (true)
    {
        cout << "Do you want to have coke? Y or N" << endl;
        cin >> confirmCoke;
        confirmCoke = toupper(confirmCoke);
        if (confirmCoke == 'Y' || confirmCoke == 'N')
        {
            break;
        } else {
            cout << "Invalid Input. Please select correct input" << endl;
        }
    }
    return confirmCoke;
}
void coke_list()
{
    cout << "A.Coca Cola\nB.Pepsi\nC.Mojo\nD.Rc Cola" << endl;
}
char getChoiceCoke()
{
    char choiceCoke;
    cout << "Enter Your choice: ";
    cin >> choiceCoke;
    return choiceCoke;
}
char getCon_Coke(string cokeName, int cokeBill=0)
{
    char confirmCoke;
    while (true)
    {
        cout << "So, you want to add a " << cokeName << " You have to add " << cokeBill << "$. Do you want to add? Y or N" << endl;
        cin >> confirmCoke;
        confirmCoke = toupper(confirmCoke);
        if(confirmCoke == 'Y' || confirmCoke == 'N')
        {
            break;
        } else {
            cout << "Invalid Input. Please select correct input" <<endl;
        }
    }
    return confirmCoke;
}
void getUserDetails(string userName, int userNumber)
{
    cout << "Let us know about yourself for future." << endl;
    cout << "Tell us your name: ";
    cin >> userName;
    cout << "Tell us your phone number: ";
    cin >> userNumber;
    cout << "So, you are " << userName << " and your phone number is: " << userNumber << endl;
    cout << "Thank you for purchase" << endl;
}
int main()
{
    int bill = 0, bill_coke = 0, phoneNumber;
    char pizza_Choice, pizzaConfirm, wantCoke, cokeChoice, cokeConfirm;
    string pizza[4] = {"Hentai Pizza", "Neapolitan Pizza", "Chicago Deep-Dish Pizza", "Special Hentai Pizza"}, coke[4] = {"Coca Cola", "Pepsi", "Mojo", "Rc Cola"}, user_Name;
    cout << "Welcome to Hentai Pizza Shop." <<endl;
    cout << "Here's our Menu: " <<endl;
    pizza_list();
    pizza_Choice = getChoice_pizza();
    pizza_Choice = toupper(pizza_Choice);

    switch (pizza_Choice)
    {
        case 'A':
            pizzaConfirm = getConfirmPizza(pizza[0], bill+= 75);
            pizzaConfirm = toupper(pizzaConfirm);
            if (pizzaConfirm == 'Y')
            {
                cout << "Ok, " << pizza[0] << " Has been added" << endl;
                wantCoke = getConfirmCoke();
                wantCoke = toupper(wantCoke);
                if (wantCoke == 'Y')
                {
                    coke_list();
                    cokeChoice = getChoiceCoke();
                    cokeChoice = toupper(cokeChoice);
                    switch (cokeChoice)
                    {
                        case 'A':
                            cokeConfirm = getCon_Coke(coke[0], bill_coke+= 10);
                            bill +=10;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill << "$." << endl;
                            break;
                        case 'B':
                            cokeConfirm = getCon_Coke(coke[1], bill_coke +=8);
                            bill +=8;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill <<"$." <<endl;
                            break;
                        case 'C':
                            cokeConfirm = getCon_Coke(coke[2], bill_coke+= 6);
                            bill +=6;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill << "$." << endl;
                            break;
                        case 'D':
                            cokeConfirm = getCon_Coke(coke[3], bill_coke+= 5);
                            bill +=5;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill << "$." << endl;
                            break;

                    }
                } else {
                    cout << "Ok, coke has not added." << endl;
                    getUserDetails(user_Name, phoneNumber);
                    cout << "Your bill is: " << bill << "$." << endl;
                }
            } else{
                cout << "Order has been cancel" << endl;
            }
            break;
        case 'B':
            pizzaConfirm = getConfirmPizza(pizza[1], bill+= 50);
            pizzaConfirm = toupper(pizzaConfirm);
            if (pizzaConfirm == 'Y')
            {
                cout << "Ok, " << pizza[1] << " Has been added" << endl;
                wantCoke = getConfirmCoke();
                wantCoke = toupper(wantCoke);
                if (wantCoke == 'Y')
                {
                    coke_list();
                    cokeChoice = getChoiceCoke();
                    cokeChoice = toupper(cokeChoice);
                    switch (cokeChoice)
                    {
                        case 'A':
                            cokeConfirm = getCon_Coke(coke[0], bill_coke+= 10);
                            bill +=10;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill << "$." << endl;
                            break;
                        case 'B':
                            cokeConfirm = getCon_Coke(coke[1], bill_coke +=8);
                            bill +=8;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill <<"$." <<endl;
                            break;
                        case 'C':
                            cokeConfirm = getCon_Coke(coke[2], bill_coke+= 6);
                            bill +=6;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill << "$." << endl;
                            break;
                        case 'D':
                            cokeConfirm = getCon_Coke(coke[3], bill_coke+= 5);
                            bill +=5;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill << "$." << endl;
                            break;

                    }
                } else {
                    cout << "Ok, coke has not added." << endl;
                    getUserDetails(user_Name, phoneNumber);
                    cout << "Your bill is: " << bill << "$." << endl;
                }
            } else{
                cout << "Order has been cancel" << endl;
            }
            break;
        case 'C':
            pizzaConfirm = getConfirmPizza(pizza[2], bill+= 85);
            pizzaConfirm = toupper(pizzaConfirm);
            if (pizzaConfirm == 'Y')
            {
                cout << "Ok, " << pizza[2] << " Has been added" << endl;
                wantCoke = getConfirmCoke();
                wantCoke = toupper(wantCoke);
                if (wantCoke == 'Y')
                {
                    coke_list();
                    cokeChoice = getChoiceCoke();
                    cokeChoice = toupper(cokeChoice);
                    switch (cokeChoice)
                    {
                        case 'A':
                            cokeConfirm = getCon_Coke(coke[0], bill_coke+= 10);
                            bill +=10;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill << "$." << endl;
                            break;
                        case 'B':
                            cokeConfirm = getCon_Coke(coke[1], bill_coke +=8);
                            bill +=8;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill <<"$." <<endl;
                            break;
                        case 'C':
                            cokeConfirm = getCon_Coke(coke[2], bill_coke+= 6);
                            bill +=6;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill << "$." << endl;
                            break;
                        case 'D':
                            cokeConfirm = getCon_Coke(coke[3], bill_coke+= 5);
                            bill +=5;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill << "$." << endl;
                            break;

                    }
                } else {
                    cout << "Ok, coke has not added." << endl;
                    getUserDetails(user_Name, phoneNumber);
                    cout << "Your bill is: " << bill << "$." << endl;
                }
            } else{
                cout << "Order has been cancel" << endl;
            }
            break;
        case 'D':
            pizzaConfirm = getConfirmPizza(pizza[3], bill+= 95);
            pizzaConfirm = toupper(pizzaConfirm);
            if (pizzaConfirm == 'Y')
            {
                cout << "Ok, " << pizza[3] << " Has been added" << endl;
                wantCoke = getConfirmCoke();
                wantCoke = toupper(wantCoke);
                if (wantCoke == 'Y')
                {
                    coke_list();
                    cokeChoice = getChoiceCoke();
                    cokeChoice = toupper(cokeChoice);
                    switch (cokeChoice)
                    {
                        case 'A':
                            cokeConfirm = getCon_Coke(coke[0], bill_coke+= 10);
                            bill +=10;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill << "$." << endl;
                            break;
                        case 'B':
                            cokeConfirm = getCon_Coke(coke[1], bill_coke +=8);
                            bill +=8;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill <<"$." <<endl;
                            break;
                        case 'C':
                            cokeConfirm = getCon_Coke(coke[2], bill_coke+= 6);
                            bill +=6;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill << "$." << endl;
                            break;
                        case 'D':
                            cokeConfirm = getCon_Coke(coke[3], bill_coke+= 5);
                            bill +=5;
                            cokeConfirm = toupper(cokeConfirm);
                            getUserDetails(user_Name, phoneNumber);
                            cout << "Your bill is: " << bill << "$." << endl;
                            break;

                    }
                } else {
                    cout << "Ok, coke has not added." << endl;
                    getUserDetails(user_Name, phoneNumber);
                    cout << "Your bill is: " << bill << "$." << endl;
                }
            } else{
                cout << "Order has been cancel" << endl;
            }
            break;
    }
    cout << "Press any key to Exit" << endl;
    getch();
}