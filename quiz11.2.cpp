#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

int check_banana (string){
	int str, str2;
	string data = "Banana"; 
	transform(data.begin(), data.end(), data.begin(), ::tolower);
	tring str ("There are two bananas in this haystack with bananas.");
  	string str2 ("Banana");
  	size_t found = str.find(str2);
  if (found!=std::string::npos)
   	cout << "'banana' found at: " << found << endl;
   	return 0;
}