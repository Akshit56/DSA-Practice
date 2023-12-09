// Convert the given string to upper case
#include <iostream>
#include <string.h>
using namespace std;

void changeDigit(char ch[], int size) {

  int index = 0;
  while (ch[index] != '\0') {
    if (ch[index] >= 'a' && ch[index] <= 'z') {
      ch[index] = ch[index] - 'a' + 'A';
    }
    index++;
  }
}

int main() {
  char ch[100];
  cin.getline(ch, 100);
  cout << "Before : " << ch << endl;
  changeDigit(ch, 100);
  cout << "After : " << ch;
  return 0;
}
