#include <iostream>
/* 
    * A függvény bemenete nem kell, hogy ugyan az legyen, mint a visszatérési értéke
    * Az alap szintaktika változó ,név, (), a zárójelen belül a bemeneti értékek típussal ellátva, majd jönnek a {}, melyeken belül az utasítások, amiket a függvény elvégez
    * A függvényünk csak úgy él a nagy világban, nem tud semmiről, kivéve a globális változókról és a constokról
    * Illetve nyilván azokról az értékekről, amiket beadtunk nekik.
    * Lényegtelen, hogy a függvényen kívül mi volt a nevük, a függvényen belül az lesz a nevük, amit a ()-ben megadtunk neki.
    * Amit nem adunk vissza a return szóval, az ott meg is hala függvényen belül
*/

int integert_visszaado_fuggveny(double egy_double,double masik_double)
{
    int az_integer_amit_visszaadok = (int) (egy_double+masik_double) ;
    return az_integer_amit_visszaadok;
}

// * Nyilván addhatunk meg olyan bemeneteket is, amiket nem használunk, de ennek nem nagyon van értelme
double doublet_visszaado_fuggveny(double double_kinek_neve_jani, int integer_akit_nem_hasznalok)
{
    return double_kinek_neve_jani;
}

// * auto is lehet egy függvény típusa, ez hasznos, ám figyelni kell rá, hogy ha túl sokat használjuk nehéz lesz lekövetni, hogy mi mit ad vissza
template<typename T>
auto fuggveny_aminek_barmi_lehet_a_bemenete(T bemenet_aminek_nem_tudom_a_tipusat)
{
    return bemenet_aminek_nem_tudom_a_tipusat;
}
/* 
    !Fügvényeken belül meghívhatunk másik függvényeket is, de azoknak mindig felette kell lenniük
    *A voidok azt tudják, hogy nincs visszatérésük
*/
void fuggveny_ami_meghiv_egy_masikat(double bemeneti_double)
{
    int valami_integer = integert_visszaado_fuggveny(bemeneti_double,bemeneti_double);
    std::cout<<valami_integer<<std::endl;
    //! nincs return
}

// * A void csak nem ad vissza semmit, ugyan azt csinálhatod benne, mint máshol
void uresseg(double bemeneti_ertek)
{
    double valami_double = bemeneti_ertek;
    for (double i = 0.; i < bemeneti_ertek; i++)
    {
        valami_double *= bemeneti_ertek;
    }
    
    std::cout<<valami_double<<std::endl;
}

// * Azt is megtehetem, hogy egy függvenynek nincs bemeneti értéke
int nincs_bemeneti_ertek()
{
    return 40;
}

/* 
    *Egy függvénynek adhatunk másolt értékeket egy változóról
    * Ez azt jelenti, hogy nem azzal a változóval számol, amit beadtunk neki
    * Csak annak a pontos másolatával, aminek ugyan annyi az értéke
*/
int fuggveny_valtozat_1 (int en_egy_integer_vagyok)
{
    return en_egy_integer_vagyok-4;
}
/*
    *Adhatunk értékeket refferenciaként is, ami azt jelenti, hogy minden változtatás, amit végzünk rajta, az magával a változóval is megtörténik
*/
void fuggveny_valtozat_1(int& en_egy_integer_vagyok)
{
    en_egy_integer_vagyok -= 4;
}

int main()
{
    double sanyi_a_double = 2.7;
    double jeno_a_double = 1.;
    double barmi_lehet_a_nevem = 0.001;
    float ez_egy_float = 8.0f;

    // * Itt mutatom meg, hogy hogyan kell függvényeket meghívni
    int ha_mar_van_visszateresi_ertek_tároljuk = integert_visszaado_fuggveny(sanyi_a_double,jeno_a_double);
    // * Nyilván lehet a függvényekbe kézzel is beadni hardcodeolt értékeket is, mert miért ne
    int tibi = integert_visszaado_fuggveny(1.,4.);

    // * Azt adunk be, amit szeretnénk nyilván
    float float_amiben_taroljuk_a_fuggveny_erteket = fuggveny_aminek_barmi_lehet_a_bemenete(ez_egy_float);

    // * A voidok értékeit nem tároljuk, hiszen nincs értékük, őket csak meghívjuk
    uresseg(sanyi_a_double);

    // * Ha egy függvénynek nem kell semmi bemenet, akkor is ki kell rakni a () -t
    int legyen_a_nevem_karoly = nincs_bemeneti_ertek();

}