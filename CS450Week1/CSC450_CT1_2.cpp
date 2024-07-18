#include<iostream>
#include<conio.h>
#include<iomanip>

//Standard namespace declaration
using namespace std;

//Main Function
int main()
{

     double myMoney = 1000.50;  //this should be printed out


     //Standard Ouput Statement
     std::cout << "Please be sure to correct all syntax errors in this program" << std::endl;

     std::cout << "I have corrected all errors for this program." << std::endl;

     std::cout << "The total amount of money available is = $"<< std::fixed << std::setprecision(2) << myMoney << std::endl;

     /* Wait For Output Screen

     Main Function return Statement
     */
     return 0;
}
