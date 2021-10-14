#include <iostream>
#include <random>
#include <string>
#include <algorithm>
using namespace std;

//This is a function that will shuffle user input
string shuffleString(string word)
{
    shuffle(word.begin(), word.end(), mt19937(random_device()()));
    return word;
}

int main()
{
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "This is a simple program that shuffles the password you enter "
            "to help you make a stronger unique password." << endl;
    cout << "Simple passwords can take seconds to crack."
            " Protect your personal data by using the Password Shuffle." << endl;
    cout << "============================================================================================================" << endl;
    cout << "Don't forget to turn on 2-way authinication for extra security. Its 2021. Don't be lazy!"
            " Dont't get cracked!"<< endl;
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    //ask the user for a password or phrase and store it in a string called password
    cout << "Phrases make for a stronger password! Don't use spaces between your words." << endl;
    string password;
    cout << "Enter your password or phrase: ";
    cin >> password;
    //calling the function shuffleString
    cout << "Your unique password is: " << shuffleString(password) << endl;
    cout <<"----------------------------------------------------------------" << endl;

    cout << "Enjoy!";

   return 0;
}
