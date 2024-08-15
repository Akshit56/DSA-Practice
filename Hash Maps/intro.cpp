#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{

  // creation
  unordered_map<string, int> m;

  // insertion method 1:

  pair<string, int> p = make_pair("Akshit", 2);
  m.insert(p);

  // method 2
  pair<string, int> p2("Gupta", 3);
  m.insert(p2);

  // method 3
  m["mera"] = 1;
  m["mera"] = 2; // updation of previous key(line 22), har key ki only one unique entry value hogi

  // search
  cout << m["mera"] << endl;

  cout << m.at("Gupta") << endl;

  cout << m["unknownKey"] << endl;    // unknown value ke liye 0 assign kar dega, new entry created pointing to 0
  cout << m.at("unknownKey") << endl; // unknown ke liye error dega, but line 30 ko pehle likh diya isliye 0 assign ho gaya hai

  // size
  cout << m.size() << endl; // return 4 as we have 4 entries

  // check presence
  cout << m.count("bro") << endl;    // return 0  as does not exist
  cout << m.count("Akshit") << endl; // returns 1 as it exists

  // erase/delete
  // m.erase("Gupta");
  cout << m.size() << endl; // returns 3 as before deletion we had 4 entries

  // searching

  if (m.find("Akshitt") != m.end())
  {
    cout << "found" << endl;
  }
  else
  {
    cout << "Not Found" << endl;
  }

  // printing

  unordered_map<string, int>::iterator it = m.begin();
  while (it != m.end())
  {
    cout << it->first << " " << it->second << endl;
    it++;
  }
}