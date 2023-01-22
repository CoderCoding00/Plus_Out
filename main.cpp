// Plus Out Problem
// Given a string and a non-empty word string, set result to a version of the original string
// where all chars have been replaced by pluses ("+"),
// except for appearances of the word string which are preserved unchanged.

// • for input of "12xy34", "xy" → "++xy++"
// • for input of "12xy34", "1" → "1+++++"
// • for input of "12xy34xyabcxy", "xy" → "++xy++xy+++xy"

#include <iostream>
#include <string>
using namespace std;

string plusOut(const string &s, const string &x)
{
   string result = "";
   int lens = s.size();
   int lenx = x.size();
   for (int i = 0; i < lens - lenx + 1; i++) //
   {
      if (s.substr(i, lenx) == x)
      {
         result += x;   // adds whats in string x to the result.
         i += lenx - 1; // adds the length of x to i.
      }
      else
         result += '+';
   }

   return result;
}

int main()
{

   cout << "Testing plusOut(\"12xy34\"): " << plusOut("12xy34", "xy") << endl;
   cout << "Testing plusOut(\"12xy34\"): " << plusOut("12xy34", "1") << endl;
   cout << "Testing plusOut(\"12xy34xyabcxy\"): " << plusOut("12xy34xyabcxy", "xy") << endl;

   return 0;
}