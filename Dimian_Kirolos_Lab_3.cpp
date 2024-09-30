// Kirolos Dimian
// Lab 3
// 9/30/24

#include <iostream>
#include <iomanip>

using namespace std;

int main() //This is the function "main"


{
    // This line is used so I know the alignment of the text with the number of columms
    cout << "12345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890" << endl; 
    // This line of code is used for organization purposes so you can clearly compare it with the numbers above
    cout << ("") << endl;
    // This line is used to show the line of #'s that make up the top of the box
    cout << setw(102) << setfill('#') << ("#") << endl;
    // This line is used to show #'s at the beginning and at the end but with spaces in the middle
    cout << ("#") << setfill(' ') << setw (101) << ("#")<< endl;
    // This line is used to print a # at the beginning have spaces, then print, then space it until the end and end it off with a #
    cout << ("#") << " Ways to access the Task Manager on your Windows computer:" << setw (43) << ("#")<< endl;
    // This line is used to show #'s at the beginning and at the end but with spaces in the middle
    cout << ("#") << setfill(' ') << setw (101) << ("#")<< endl;
    // This line is used to print a # at the beginning, have spaces, print, have more spaces, and end off the box with a hashtag with the mentioned 
    cout << ("#") << setfill(' ') << setw (56) << "Press the key combination Ctrl + Shift + Escape:" << setw (45) << ("#")<< endl;
    // This line is used to show #'s at the beginning and at the end but with spaces in the middle
    cout << ("#") << setfill(' ') << setw (101) << ("#")<< endl;
    // This line is used to print a # with spaces and then the text, with spaces and then a # to complete the box
    cout << ("#") << setfill(' ') << setw (80) << "Press the key combination Ctrl + Alt + Delete and select \"Task Manager\" " << setw (21) << ("#")<< endl;
    // This line is used to show #'s at the beginning and at the end but with spaces in the middle
    cout << ("#") << setfill(' ') << setw (101) << ("#")<< endl;
    // This line is used to print a # with spaces and then the text, with spaces and then a # to complete the box
    cout << ("#") << setfill(' ') << setw (60) << "Type \"Task Manager\" in the Windows Start menu search" << setw (41) << ("#")<< endl;
    // This line is used to show #'s at the beginning and at the end but with spaces in the middle
    cout << ("#") << setfill(' ') << setw (101) << ("#")<< endl;
    // This line is used to show #'s at the beginning and at the end but with spaces in the middle
    cout << ("#") << setfill(' ') << setw (101) << ("#")<< endl;
    // This line is used to show the line of #'s that make up the top of the box
    cout << setw(102) << setfill('#') << ("#") << endl;
  
   return 0; //This is to return the function "main"

}

/* Copy of my output
12345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890

######################################################################################################
#                                                                                                    #
# Ways to access the Task Manager on your Windows computer:                                          #
#                                                                                                    #
#        Press the key combination Ctrl + Shift + Escape:                                            #
#                                                                                                    #
#        Press the key combination Ctrl + Alt + Delete and select "Task Manager"                     #
#                                                                                                    #
#        Type "Task Manager" in the Windows Start menu search                                        #
#                                                                                                    #
#                                                                                                    #
######################################################################################################
*/