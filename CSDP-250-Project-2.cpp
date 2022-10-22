//Name: Israel Showell
//Project Name: Palindrome Stack
//Date Created: 10/22/2022
//Project Description: This program takes a string input from the user, pushes it in a stack, makes a reverse copy of the string,
//Then, it compares the 2 strings to see if they are a Palindrome. 
//A Palindrome is a word, date, or phrase, that can be spelt backwards, and still be the same. 
//E.X: "lol" reversed will be "lol".
//"Racecar", "racecaR", are techianlly the same word, but they have different uppercase r's, so they are not the exact same word.


#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main()
{
    //Declaring variables and stacks.
    string str;
    stack<char> userStack;
    string tempstr;
    //This part explains the program to the user.
    cout << "Hello! I am a Palindrome program!" << endl;
    cout << "Please enter a word, date, or phrase, and I'll see if it is the same reverse!" << endl;
    cout << "Note: This program doesn't count uppercase and lowercase. "<<endl <<"(So, Racecar will come out racecaR, and will not be count as a Palindrome, "<<endl<<"but racecar will come out racecar, and will be count as a Palindrome.)" << endl;
    cout << endl<<"Your input: ";
    //Ensures the program gets all of the inputted text from the user.
    getline(cin, str);
   //i will be set to 0, and will keep growing until it has the same number that the string has.
    //str.at(i) tells the program the "index" o the string, and that fills the stack with the input the user added in.
    for (int i = 0; i < str.length(); ++i) {
        userStack.push(str.at(i));
    }
    //While the stack isn't empty, the program will push the top part of the stack,
    //and add it to the back of the temp string, thus making a reverse string.
    //The program pops out the top part of the stack, and makes the 2nd part the new top.
    while (!userStack.empty()) {
        tempstr.push_back(userStack.top());
        userStack.pop();
    }
    cout << endl;
    //With the below if/else statement, the system compares it bit by bit, and tells the user if they typed in a Palindrome or not.
    if (str == tempstr) {
        cout << "This is a Palindrome!" << endl;
        cout << str << "   " << tempstr << endl;
    }
    else {
        cout << "This isn't a Palindrome!" << endl;
        cout << str << "   " << tempstr << endl;
    }
    cout << endl;
    //Pauses the program, so the user can see the results.
    system("PAUSE");
}
