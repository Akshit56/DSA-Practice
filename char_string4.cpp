//Reverse a character string
#include <iostream>
#include <string.h>
using namespace std;

int stringLength(char ch[]) {

  int index = 0;
  while (ch[index] != '\0') {
    index++;
  }
  return index;
}

void revChar(char ch[], int n) {

  int l = 0;
  int h = n - 1;
  while (h >= l) {
    swap(ch[l], ch[h]);
    l++;
    h--;
  }
}

int main() {

  char ch[100];
  cin.getline(ch, 100);
  cout << "Before : " << ch << endl;
  revChar(ch, stringLength(ch));
  cout << "After : " << ch;

  return 0;
}