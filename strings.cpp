#include<iostream>
#include<cstring>
using namespace std;

//Function 	Use
//strlen 	calculates the length of string
//strcat 	Appends one string at the end of another
//strncat 	Appends first n characters of a string at the end of another
//strcpy 	Copies a string into another
//strncpy 	Copies first n characters of one string into another
//strcmp 	Compares two strings
//strncmp 	Compares first n characters of two strings
//strchr 	Finds first occurrence of a given character in a string
//strrchr 	Finds last occurrence of a given character in a string
//strstr 	Finds first occurrence of a given string in another string

int main()
{
  char s1[80], s2[80];

  strcpy(s1, "C++");
  strcpy(s2, " is power programming.");

  cout << "lengths: " << strlen(s1);
  cout << ' ' << strlen(s2) << '\n';

  if(!strcmp(s1, s2))
     cout << "The strings are equal\n";
  else cout << "not equal\n";

  strcat(s1, s2);
  cout << s1 << '\n';

  strcpy(s2, s1);
  cout << s1 << " and " << s2 << "\n";

  if(!strcmp(s1, s2))
    cout << "s1 and s2 are now the same.\n";

  return 0;
}