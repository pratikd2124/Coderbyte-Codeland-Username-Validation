#include <iostream>
#include <string>
using namespace std;

string CodelandUsernameValidation(string str) {
  
  if (str.length() <= 4 && str.length() >= 25) return "false";
  if ( !((str[0] > 64 && str[0] < 91) || ((str[0]) > 96 && str[0] < 123)) ) return "false";
  
      for(int i=1; i < str.length() - 1; i++){
        if (!isalnum(str[i]) && str[i] !='_')
        return "false";
      }
      if (str[str.length()-1] == '_'){
        return "false";
      }
 
  
  // code goes here  
  return "true";

}

int main(void) { 
   
  // keep this function call here
  cout << CodelandUsernameValidation(gets(stdin));
  return 0;
    
}
