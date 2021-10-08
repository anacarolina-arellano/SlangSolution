#include <iostream>
#include <string>
#include <vector>
using namespace std;
//First Step: Function that returns the n-grams of the received text
vector<string> calculateNGrams​(string text​, int ​n​)
{
  vector<string> solution;

  //Outside loop is O(n), we have to traverse the text
  for(int i = 0; i < text​.length(); i++)
  {
    //inner loop constant complexity O(1) (example: always be 2, always 3, etc. worst case escenario it will be of the lenght of the text, in that case this algorithm would turn into O(n^2))
    for(int j = 0; j < n; j++)
    {
      string newAnagram = "";
    }
  }
  return solution;  
}
int main() {
  std::cout << "Hello World!\n";
}