// Class - Session 2.cpp //

#include <iostream>
#include <string>

//Constants for calculation//
int days_pr_month = 29;
int hours_pr_day = 8;
int money_pr_hour = 1000; //Money in NOK//
int ceo_manager_bonus = 2000; //Money in NOK//

//String inputs//

std::string full_name = "";
std::string id_number = "";

//Wage//
int wage;

//Base wage calculation//
int hours_pr_month = days_pr_month * hours_pr_day;
int base_wage = hours_pr_month * money_pr_hour;

//Position//
int ceo_manager_answer;

int main()
{
    std::cout << "\t\t\t\t\t\t Wage calculator\n\n";
    
    //name input//
    std::cout << "Please enter your full name: ";
    std::getline(std::cin, full_name);

    //id input//
    std::cout << "Please enter your ID number: ";
    std::getline(std::cin, id_number);

    //position input//
    std::cout << "Are you a CEO or a manager? \n\t 1. Yes \n\t 2. No\n  Answer by inputting 1 or 2: ";
    std::cin >> ceo_manager_answer;
    
    //Wage calculation//
        if (ceo_manager_answer == 1)
        {
            wage = base_wage + ceo_manager_bonus;
        }
        else
        {
            wage = base_wage;
        }

    //Final output screen//
    system("cls");
    std::cout << "\t\t\t\t\t\t Wage calculator\n\n";
    std::cout << " Here is the information you have submitted: \n\n" "\t Full name| " << full_name;
    std::cout << "\n\t ID Number| " << id_number;
    std::cout << "\n\t Wage| " << wage, " NOK";

}

