#include <iostream>
#include <string>
#include <vector>

/*
* Minden változó és függvény, amit itt létrehozok alapból láthatatlan lesz
* Azonban, ha kiírom a namespace nevét és a :: pontot, akkor tudok rá hivatkozni
*/
namespace Dudi_space
{
    int my_integer = 74;
    double my_double = 11.;
    // * Ezt ha szépen akarnám kiírni "std::vector<std::string> my_vector = {"Lali","Tomi"};" lenne
    auto my_vector = {"Lali","Tomi"};
    const float allando_erteku_float = 44.f;
}

namespace kambodzsa
{
    int my_integer = 12;
    double my_double = 7.42145;
    auto my_vector = {"Tihamér","Jónás"};
}

int main()
{
    /* 
    * A változó létrehozásához ennyi elég
    ! Nem ajánlatos
    */
    int this_is_an_integer;
   
    // * Majd ha értéket akarunk adni neki, már nem kell kiírni a nevét
    this_is_an_integer= 4;

    // * Érdemesebb ezt csinálni
    int another_integer = 4;

    // * Ha nem írunk a pont mögé számot, akkor alapból 0-nak veszi, azaz most 4.0 lett az értéke
    double this_is_a_double = 4.;

    // * Az mindegy, hogy hogyan hívom az értéket, az első szó határozza meg az értékét
    double i_am_an_integer = 1.;
    // * Persze nem célszerű így kiszúrni magunkkal, de ha akarjuk megtehetjük

    // * Ha stringet akarunk létrehozni akkor "" közé kell írni az értékét
    std::string egy_string_vagyok= "Nem vagyok string";
    
    // * Mikor egy karaktert, akarunk létrehozni (char a character rövidítése), akkor '' közé kell írni, értelemszerűen csak egy karaktert írhatunk ide.
    char karakter = '1';

    /* 
    * A vektorok elé ki kell írni, hogy std:: majd utána a <>-ba beleírom, hogy milyen típusú értékek vannak benne
    * Kicsit olyan, mint a szelektív hulladékgyűjtés, meg van mondva, hogy mit rakhatsz bele
    */
    std::vector<double> doublet_tartalmazo_vektor= {4.5,1.};

    /* 
    * Az auto bármit felismer ami egy létező típus 
    ! Be is kell hívni a könyvtárat/fájlt, ami tartalmazza a típust, amit használni akarunk 
    */
    auto vector = {4.1,4.2};
    /* 
    * Ez hibát dob, hiszen hiába mondtuk azt, hogy az autó kitalálja az értéket
    * Ez nem azt jelenti, hogy a változóknak, bármi lehet az értéke, kedvünk szerint
    * Amikor először megadtuk neki az értékét, akkor kitalálja, hogy mi volt az és utána az is marad
    vector = 4;
    */

   /*
   * Ez nem fog működni, hiszen nincs megadva, hogy melyik helyről akarom kivenni ezt az értéket.
    std::cout<<my_integer<<std::endl;
   */
    // * Így tudom meghívni a változóimat a namespaceből
    std::cout<<Dudi_space::my_integer; 
    std::cout<<kambodzsa::my_integer;

    // * Ettől a művelettől nem változott meg a Dudi_space::my_integer értéke
    auto some_value = Dudi_space::my_integer+9;
    
    // * Így viszont meg tudom változtatni az értékét
    Dudi_space::my_integer+=10;

    /*
    ! Ilyet nem tudok csinálni
    * A constantoknak nem tudjuk változtatni az értékét
    Dudi_space::allando_erteku_float++;
    */

}
