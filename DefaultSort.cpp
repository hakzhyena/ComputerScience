#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void DefaultSort(vector<T> &elements)
{
   sort(elements.begin(), elements.end());
}

void testInts()
{
   vector<int> intElements {40,30,20,10};
   std::cout << "\nElements in the intElements are: " << endl;
   
   for(auto const &element:intElements)
   {
      cout << element << endl;
   }
   
   DefaultSort(intElements);
   
   std::cout << "\nElements in the intElements after default sorting are: "  << endl;
   for(auto const &element:intElements)
   {
      cout << element << endl;
   }
}

void testChars()
{
   vector<char> charElements {'l','k','j','i'};
   std::cout << "\nElements in the charElements are: " << endl;
   
   for(auto const &element : charElements)
   {
      cout << element << endl;
   }
   
   DefaultSort(charElements);
   
   std::cout << "\nElements in the charElements after default sorting are: "  << endl;
   for(auto const &element : charElements)
   {
      cout << element << endl;
   }
}
int main()
{
   testInts();
   testChars();
}