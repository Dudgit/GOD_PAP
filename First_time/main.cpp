#include <iostream>
#include <string>
#include <vector>
// A namespace kvázi vezetéknév
namespace Lukovics
{
    std::string Mark = "Lukovics";
}

namespace Szokody
{
    std::string Mark = "Szokody";
}

using namespace std;
//using namespace Lukovics;
using namespace Szokody;
int main()
{
    /*
    * Típus, név, érték
    */
    /*Bal érték*/ /*jobb érték*/
    int integer = 4;
    double double_precision_number = 0.;
    double_precision_number = sqrt(integer);
    double_precision_number = sqrt(double_precision_number);
    
    string my_string = "Godo egy kaka"; // a "" jelenti a stringet
    auto bc = pow(2,4);
    char character = ' '; // a ' ' jeleni a charactert röviden char-t
    
    vector<char> double_vector = {'1','.','2','.'}; // kb a 1. 2. stringgel egyenlő
    string Markus = "Zsidó";
    
    string Luko_Mark = "Lukó";
    string Szokody_Mark = "Szokody";
/*
    varriable = 1+2;
    varriable =  varriable*2+ 4*(varriable-1);
    //! Itt ér véget|| Itt kezdődik az olvasás
            varriable = varriable*2 + 4*(varriable-1);
    varriable = varriable*2 + 4*(varriable-1);
    auto b = 1;

    b = varriable+b;
    */
    cout<<Mark<<endl;
    cout<<Lukovics::Mark<<endl; // namespace-re ::-tal hivatkozunk
    /*
    Vezetéknév::keresztnév
    */
  // auto F_vonzo = gamma * m*M/r*r

}
