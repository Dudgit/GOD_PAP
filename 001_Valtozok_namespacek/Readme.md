# Változók

## Létrehozás
Változókat az alábbi módon hozhatjuk létre: 
### Típus név;  
Ezzel gyakorlatilag van is egy változónk, aminek értéke memória szemét, amit utána bármikor felülírhatunk.
Érdemes azonban deklaráláskor értéket adni neki, melyet az alábbi módon szoktunk megtenni:  
### Típus név = érték;
A név lehet akármilyen hosszú és akármi (az ékezetes karaktereket, azért érdemes kerülni), de a c++ a spacetől spaceig olvas. Ez annyit tesz, hogy egy változó nevét így nem tagolhatjuk. Vannak erre természetesen bevett módszerek, ilyen az alulvonások használata, vagy éppen a kis-nagybetű tagolás használata.
### ez nem jo nev
### ez_egy_jo_nev
### EzIsEgyJoNev
Az utolsó változathoz annyit még, hogy bizonyos fordítók nem tesznek különbséget kis- és nagybetűk között, ezért oda kell figyelni, hogy ne nevezzünk két dolgot ugyan úgy.

## Hivatkozás
Miután létrehoztuk a váltózóinkat szabadon használhatjuk őket, illetve változtathatjuk az értéküket.
(Ez alól kivételek a konstans értékek, ezek olyan változók melyek értéke állandó, őket úgy hozzuk létre, hogy a típus elé beírjuk, hogy const)
A használat során, már nem kell (és nem is szabad) kiírnunk a típusukat, név alapján lehet hivatkozni rájuk.
A bal és jobb érték varázslástól sem kell megijedni. Amikor egy változó az egyenlőség jel jobb oldalán van teljesen mindegy, hogy mit csinálunk nem fog megváltozni tőle.
A létrehozott értékek a kapcsos zárójelek között léteznek. Ez azt jelenti, hogy ha egy függvényen belül létrehozunk egy értéket, azokra csak azon a függvényen belül { itt } tudunk hivatkozni. Miután a függvényünk végzett a munkájával megszűnik minden, ami benne volt.

## Típusok
A változó típusa lehet szinte bármi. A standard library nagyon sok típust biztosít nekünk (int,float,double,vector,string,stb...)
Vannak változók, amelyek a "namespace"-ek belsejében találjuk. Ez azt jelenti, hogy amikor egy stringet akarunk használni, nem elég kiírni,hogy string, ki kell írni, hogy std::string (az "std::" azt jelenti, hogy a standard library által felkínált stringet használjuk).
A vectoroknál is ki kell írni az "std::" kezdést, de ezen felül meg kell adnunk, hogy milyen elemeket fogunk tárolni benne, erre a <> kifejezést használjuk, amit a név elé írunk, a típus részeként. Ezt csak úgy kell elképzelni, hogy nem az a változóm típusa, hogy vektor, hanem " stringeket tároló vektor".
C++ 11 óta van egy nagyon hasznos kulcsszavunk az auto. Ezt használhatjuk típus megnevezés helyett. Fontos az auto nem egy változó típus, csak kitalálja helyettünk, hogy a beadott értékünk, azaz, ami az egyenlet jobb oldalán van milyen típusú érték.

# Namespace

## Létrehozás
A namespace egy olyan gyűjtő csokor, amelyben függvényeket, típusokat és értékeket tárolunk. Vannak a c++ által előre létrehozott namspace-ek, ilyen például a standard library, de létrehozhatunk magunk is ilyeneket:
### namespace a_namespace_neve {}
## Használat
Minden ami a kapcsos zárójelen belül van, azt el tudjuk érni bárhonnan. Ezt úgy tehetjük meg, hogy:
### namespace_neve::bármi_amire_hivatkozni_akarunk
Egy gyakori shortcut, ha a "using namespace namespace_neve;" parancsot beírjuk, ekkor nem kell folyton kírni a namespace nevét és a ::-t hogy tudjunk a benne lévő értékekre hivatkozni, de ha van több namespace, amit használunk ez egészen zavaró tud lenni, bonyodalmakat okozhat.

# Include
Vannak értékek, függvények, melyeket a c++ létrehozott és a standard library-ból elérhetőek, ám ezek eléréséhez be kell őket hívni, ezt a \#include paranccsal érhetjük el.  
Ha a fejlesztői környezetnek megadtuk, hogy honnan érje el a csomagokat akkor <> közé kell beírni a csomag nevét, amit be szeretnénk tölteni. Azonban minden könyvtárat behívhatunk elérési út alapján, ha a \#include után "" közé írjuk a könyvtár elérési útját. Ha nem írunk elérési utat, csak simán a file nevét, akkor fogja csak megtalálni, ha a behívni kívánt fájl és a fájl, amibe be akarjuk hívni, egy mappában van, vagy a behívni kívánt fájlt tartalmazó mappa/mappák egy mappában vannak a behívó fájlal. Ilyenkor tudunk /-kel elérési utat biztosítani.