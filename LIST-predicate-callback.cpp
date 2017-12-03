// removing elements from a list based on criterion
#include<iostream>
#include<conio.h>
#include <list>
#include <algorithm>
int main()
{
   using namespace std;

	// Create a list and initialize it with 7 elements
	std::list<int> listOfInts( { 2, 3, 4, 6, 4, 9, 1, 2, 8, 9, 4, 6, 2 });

   //remove all 4s from the list and print
   /*
   for (auto i=listOfInts.begin();i!=listOfInts.end();i++)
   {
   if (*i==4)
   i=listOfInts.erase(i);
   }
    */
    
    listOfInts.remove_if([](const int& val)
    {
       if ((val>2) && (val<7))
       {
       return true;
       }
       else 
       {
       return false;
       }
    }
    );
    
    
    for_each(listOfInts.begin(),listOfInts.end(),
    [](const int& val)
    {
    std::cout << val << ",";
	 //std::cout << std::endl;
	 }
    );
    
    
    
    
	// Iterate over the list using range based loop
	//for (int val : listOfInts)
	//	std::cout << val << ",";
	//std::cout << std::endl;


   getch();
   return 0;
}


