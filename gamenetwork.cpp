// Game network program 
// Let's get it 

#include <iostream>
#include <string>
using namespace std;

int main()

{
  string username;
  string password;
  bool success;

  cout <<"\t-----The Game Network----\n";
  do
  {
    cout << "\nUsername: ";
    cin >> username;
    cout <<"\nPassword: ";
    cin >> password;

    if (username == "hussein" && password == "muhaisen")
    {
      cout <<"\nHussein Just joined the server";
      success = true; 
    }

    else if (username == "jack" && password =="rose")
    {
      cout <<"\nJack Just joined the server";
      success = true;
    }
    else if (username == "titanic" && password =="ship")
    {
      cout <<"\nTitanic Just joined the server";
      success = true;
    }
    else if(username == "love" || password =="hate")
    {
      cout <<"\nLove Just joined the server";
      success = true;
    }
    else
    {
      cout <<"\nLogin failed.";
      success = false;
    }
  } while (!success);
  return 0;
}