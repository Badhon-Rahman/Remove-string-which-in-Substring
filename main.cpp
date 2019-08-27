#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void RemoveSubString(string str, string subString){
    string uniqueStr = "";
    int j, u = 0, s = 0, flag;
          for(int i = 0; i < str.length(); i++){
            flag = 1;
            j = 0;
            while(j < subString.length()){
                if(str[i] == subString[j]){
                   flag  = 0;
                   break;
                }
                j++;
            }
            if(flag == 1){
                uniqueStr.push_back(str[i]);
            }
          }
          cout << "Unique string: ";
          while(s < uniqueStr.length()){
                cout << uniqueStr[s];
                s++;
          }
}

int main()
{
    char str[100];
    char subStr[10];

    cout << "Enter the string: ";
    gets(str);
    cout << "Enter the sub string: ";
    gets(subStr);
    RemoveSubString(str, subStr);
    return 0;
}
