#include <iostream>
#include <vector>     // for std::vector, member functions: begin, end
#include <algorithm> //  for std::sort


//Let's create a function for std::vector

void setVector()
{
    //Declaring an std::vector:
    std::vector <int> V{1,2,4,3,6,10,-1,0};
    //Use for-each loop to print each integer in V
    std::cout<<"Before std::sort:"<<'\n';
    for(const auto& v : V)
        std::cout<<v<<" ";
    std::cout<<'\n';
    std::cout<<"After std::sort:"<<'\n';
    std::sort(V.begin(), V.end());
    for(const auto& v2 : V)
        std::cout<<v2<<" ";
}
