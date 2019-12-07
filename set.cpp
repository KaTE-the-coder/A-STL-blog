#include <iostream>
#include <set>  // for std::set, member function: insert

void setSet()
{
    std::set<int> S{1,4,5,7,0,-1,3,4}; // initializing S with an initializer list
    S.insert(100);   // use member function "insert" to insert new integers into S
    S.insert(2);
    for(const auto& s : S)
    {
        std::cout<<s<< " ";
    }
}
