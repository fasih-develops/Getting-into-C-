#include <iostream>
#include <vector>

using namespace std;
// creating an alias for a data type
typedef std::vector<std::pair<std::string, int>> call;
typedef std::string ors;
//typedef is an old C++ keyword used to create an alias(another name) for an existing keyword
using u = int;
// using is a keyword used to create another name for an existing data type
int main()
{
    ors champ = "jkfdkj";
    cout<< "lests go " << champ << '\n';
    u b = 20;
    // arithmatic operations

    //b=b+1;
    //b-=1;
    //b--;
    //b+=1;
    //b++;
    //b*=2;
    //b/=3;
    float remainder = b%3;
    cout << remainder;
}



