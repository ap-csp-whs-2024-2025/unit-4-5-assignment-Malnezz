#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

// Task 1
//ate a list (vector) of ints, doubles, and strings.  Make sure each list has at least 5 elements in it.

// Task 2
Manually display the elements at index 0, 2, and 4 of your list of ints. 

// Task 3
Use the provided `displayList()` procedure to display your list of strings.  Then, append your name to the list of strings using the `push_back()` procedure, and display it again.

// Task 4
Use the provided `displayList()` procedure to display your list of doubles.  Then, remove the last element of the list using the `pop_back()` procedure, and display it again.


template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    int x = 5;
    double y = 3.14; 
    std::string name = "Mr Vu"
    std::vector<int> jennys = {8, 6, 7, 5, 3, 0, 9}; 
    // You can follow along with any code in class here
    std::vector<std::string>barrera house ={8102, 20th, Westminster}; 
    
    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}