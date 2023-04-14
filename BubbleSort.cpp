/*
Bubble sort!!!
*/
#include <iostream>
#include <vector>
#include <utility> //for std::swap
int main()
{
   std::vector<int> numbers{};
   std::cout << "Enter as many numbers you want: \t";
   int input{};
   while(std::cin >> input)
   {
      numbers.push_back(input);
   }
   //Remember it's Ctrl + z (^z) that is EOF, so press that after you have entered your inputs.
   
   const int n = numbers.size();
   for(int i = 0; i < n; i++)
   {
      for(int j = 0; j < n - i -1; j++)
      {
         if(numbers[j] > numbers[j+1])
         {
            std::swap(numbers[j],numbers[j+1]);
         }
      }
   }
   
   std::cout << "Numbers in the ascending order are \n";
   for(auto &i : numbers)
      std::cout << i << std::endl;
}