# Függvények
A függvényeket használat előtt (ez sincs mindig így, de erről majd jóval később beszélünk) létre kell hozni. A létrehozást az alábbi módon végezzük:  
típus név (bemenet_típusa bemenet_neve) { műveletek, amiket a függvény végez } (nincs ; a végén !).
## A függvény típusai
A függvény típusa határozza meg, hogy azután a bizonyos "return" szócska után milyen típusu változót írunk. Ez lehet akár egy előre megírt standard librarys vagy akár egy saját class (majd ezekről később beszélünk).  
Ha a függvény típusa void, akkor nem tudunk visszaadni semmilyen értéket ezért nem írunk "return"-t.

## A függvény neve
A függvény neve teljesen szabadon választható egy szavas kifejezés.Az ékezetes karaktereket érdemes kerülni, főleg ha úgyis tudunk angolul, akkor nevezzük el angolul a dolgokat :P . Ha valami informatív nevet akarunk adni a függvénynek érdemes a kis- nagybetű elválasztást vagy alulvonásokat használni.Példa:  
- Ez egy nem jo fuggveny nev  
- EzViszontNagyonJo  
- ez_ugyszinten_mukodokepes  


## A bemeneti paraméter(ek) 
Amikor elkészítjük a függvényeket szükségünk van bemeneti paraméterekre. Őket megkaphatja a függvény másolat formájában vagy refferenciaként(később).
Teljesen mindegy, hogy mi volt a neve máshol a változóknak, amiket használtunk, ahogyan el lett nevezve a változóm a "( )" között úgy fogok tudni hivatkozni rá a "{ }" között. A bemeneti paraméterek számát és típusát mi határozhatjuk meg és nekünk is kell meghatározni.  

## Utasítások
Azért használunk függvényeket, mert nem akarjuk az ismétlődő utasításokat folyton leírni. A függvények segítenek tagoltabbá, átláthatóbbá tenni a munkafolyamatot, valamint ha többen dolgozunk könnyen lehet párhuzamosan munkálkodni.