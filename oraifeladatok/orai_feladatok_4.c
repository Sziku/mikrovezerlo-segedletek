/*
 = *===========================================================
 C PROGRAMOZAS - ALGORITMUS FELADATOK
 ============================================================

 Ebben a fajlban 15 egyre nehezedo algoritmikus feladat van.

 SZABALYOK:

 1. Csak a TODO-val jelolt reszeket modositsd!
 2. A tesztelo kodot NE modositsd!
 3. A main() fuggvenyt NE modositsd!
 4. Minden feladat 10 pontot er.
 5. Minden feladathoz 5 teszt tartozik.
 6. Egy sikeres teszt 2 pont.
 7. Maximum pontszam: 150 pont.

 A program a futas vegen kiirja:
 - mely tesztek sikerultek,
- mely tesztek hibasak,
- az egyes feladatok pontszamat,
- az osszpontszamot.

============================================================
*/

#include <stdio.h>
#include <stdlib.h>


/*
 = *===========================================================
 1. FELADAT - PAROS ELEMEK SZAMA
 ============================================================

 Keszits egy paros_db() nevu fuggvenyt!

 A fuggveny egy egesz szamokat tartalmazo tombot es
 annak meretet kapja.

 Szamold meg, hany paros szam van a tombben!

 Pelda:

 { 1, 2, 3, 4, 5 }

 Eredmeny:

 2

 Mert a 2 es a 4 paros.

 Maximum pontszam: 10 pont.
 ============================================================
 */

int paros_db(const int tomb[], int meret)
{
    // TODO: 1. feladat


    return 0;
}


/*
 = *===========================================================
 2. FELADAT - SZAMJEGYEK OSSZEGE
 ============================================================

 Keszits egy szamjegy_osszeg() nevu fuggvenyt!

 A fuggveny egy egesz szamot kap.

 Add ossze a szam szamjegyeit!

 Pelda:

 1234

 1 + 2 + 3 + 4 = 10

 szamjegy_osszeg(1234) -> 10


 Negativ szamnal a minusz elojelet hagyd figyelmen kivul!

 Pelda:

 -502

 5 + 0 + 2 = 7


 Tipp:

 A % operatorral megkaphatod az utolso szamjegyet.

 1234 % 10 -> 4

 A / operatorral eltavolithatod az utolso szamjegyet.

 1234 / 10 -> 123


 Maximum pontszam: 10 pont.
 ============================================================
 */

int szamjegy_osszeg(int szam)
{
    // TODO: 2. feladat


    return 0;
}


/*
 = *===========================================================
 3. FELADAT - LINEARIS KERESES
 ============================================================

 Keszits egy keres_index() nevu fuggvenyt!

 A fuggveny kap:

 - egy tombot
 - annak meretet
 - egy keresett szamot

 Add vissza annak az elso elemnek az indexet,
amely megegyezik a keresett szammal.

Pelda:

{ 5, 2, 8, 2, 9 }

keresett = 2

Eredmeny:

1


Ha nincs ilyen elem:

return -1;


Maximum pontszam: 10 pont.
============================================================
*/

int keres_index(const int tomb[], int meret, int keresett)
{
    // TODO: 3. feladat


    return -1;
}


/*
 = *===========================================================
 4. FELADAT - PALINDROM SZAM
 ============================================================

 Keszits egy palindrom() nevu fuggvenyt!

 Egy szam palindrom, ha visszafele olvasva is ugyanaz.

 Pelda:

 121 -> palindrom
 1221 -> palindrom
 123 -> nem palindrom


 A fuggveny terjen vissza:

 1 -> ha palindrom
 0 -> ha nem palindrom


 A negativ szamokat ne tekintsuk palindromnak.

 Pelda:

 palindrom(-121) -> 0


 Ne alakitsd a szamot szovegge!

 Maximum pontszam: 10 pont.
 ============================================================
 */

int palindrom(int szam)
{
    // TODO: 4. feladat


    return 0;
}


/*
 = *===========================================================
 5. FELADAT - LEGNAGYOBB KOZOS OSZTO
 ============================================================

 Keszits egy lnko() nevu fuggvenyt!

 A fuggveny ket egesz szamot kap.

 Határozd meg a ket szam legnagyobb kozos osztojat.

 Pelda:

 lnko(48, 18) -> 6


 Hasznalhatod az euklideszi algoritmust:

 48 % 18 = 12
 18 % 12 = 6
 12 % 6  = 0

 Tehat az LNKO = 6.


 A negativ szamokat is kezelje a program.

 Pelda:

 lnko(-24, 18) -> 6


 Maximum pontszam: 10 pont.
 ============================================================
 */

int lnko(int a, int b)
{
    // TODO: 5. feladat


    return 0;
}


/*
 = *===========================================================
 6. FELADAT - PRIMSZAM VIZSGALAT
 ============================================================

 Keszits egy prim() nevu fuggvenyt!

 A fuggveny egy egesz szamot kap.

 Terjen vissza:

 1 -> ha a szam prim
 0 -> ha nem prim


 Pelda:

 prim(2)  -> 1
 prim(17) -> 1
 prim(25) -> 0
 prim(1)  -> 0


 FONTOS:

 0 es 1 nem primszam.

 Egy primszamnak pontosan ket pozitiv osztoja van:
 1 es sajat maga.


 Maximum pontszam: 10 pont.
 ============================================================
 */

int prim(int szam)
{
    // TODO: 6. feladat


    return 0;
}


/*
 = *===========================================================
 7. FELADAT - MASODIK LEGNAGYOBB ELEM
 ============================================================

 Keszits egy masodik_legnagyobb() nevu fuggvenyt!

 Keresd meg a tomb masodik legnagyobb KULONBOZO elemet.

 Pelda:

 { 4, 8, 2, 10, 6 }

 legnagyobb:         10
 masodik legnagyobb: 8


 FONTOS:

 { 10, 10, 8, 5 }

 eseten a masodik legnagyobb 8, nem 10.


 A tesztekben mindig lesz legalabb ket kulonbozo elem.

 Negativ szamok is lehetnek.


 Maximum pontszam: 10 pont.
 ============================================================
 */

int masodik_legnagyobb(const int tomb[], int meret)
{
    // TODO: 7. feladat


    return 0;
}


/*
 = *===========================================================
 8. FELADAT - RENDEZES
 ============================================================

 Keszits egy rendez() nevu fuggvenyt!

 Rendezd a tomb elemeit novekvo sorrendbe.

 Pelda:

 { 5, 2, 8, 1, 3 }

 ->

 { 1, 2, 3, 5, 8 }


 Hasznalhatsz peldaul:

 - buborekrendezest
 - kivalasztasos rendezest


 NE hasznald a qsort() fuggvenyt!

 Maganak a tombnek kell megvaltoznia.

 Maximum pontszam: 10 pont.
 ============================================================
 */

void rendez(int tomb[], int meret)
{
    // TODO: 8. feladat

}


/*
 = *===========================================================
 9. FELADAT - BINARIS KERESES
 ============================================================

 Keszits egy binaris_keres() nevu fuggvenyt!

 A tomb mar NOVekvo sorrendben van.

 A fuggveny adja vissza a keresett elem indexet.

 Pelda:

 { 1, 3, 5, 7, 9 }

 keresett = 7

 Eredmeny:

 3


 Ha nincs benne:

 return -1;


 FONTOS:

 Binaris keresest hasznalj, ne linearis keresest!


 Otlet:

 bal = 0
 jobb = meret - 1

 Vizsgald mindig a kozepso elemet.

 Maximum pontszam: 10 pont.
 ============================================================
 */

int binaris_keres(const int tomb[], int meret, int keresett)
{
    // TODO: 9. feladat


    return -1;
}


/*
 = *===========================================================
 10. FELADAT - DUPLIKATUMOK ELTAVOLITASA
 ============================================================

 A tomb mar rendezett.

 Keszits egy duplikatum_torol() nevu fuggvenyt!

 Tavolitsd el az egymas utan szereplo azonos elemeket.

 Pelda:

 { 1, 1, 2, 2, 3 }

 ->

 { 1, 2, 3 }


 A fuggveny adja vissza az uj tombmeretet.

 A fenti pelda eredmenye:

 3


 Nem kell uj tombot letrehozni.

 Az eredeti tomb elejet modositsd!


 Pelda:

 eredeti meret: 5

 uj meret:

 3


 Maximum pontszam: 10 pont.
 ============================================================
 */

int duplikatum_torol(int tomb[], int meret)
{
    // TODO: 10. feladat


    return meret;
}


/*
 = *===========================================================
 11. FELADAT - TOMB FORGATASA JOBBRA
 ============================================================

 Keszits egy forgat_jobbra() nevu fuggvenyt!

 Forgasd el a tombot k hellyel jobbra.

 Pelda:

 { 1, 2, 3, 4, 5 }

 k = 2

 eredmeny:

 { 4, 5, 1, 2, 3 }


 Ha k nagyobb a tomb meretenel, akkor is mukodjon.

 Pelda:

 meret = 3
 k = 4

 Ez ugyanaz, mint:

 k = 1


 Tipp:

 Hasznos lehet:

 k = k % meret;


 Maximum pontszam: 10 pont.
 ============================================================
 */

void forgat_jobbra(int tomb[], int meret, int k)
{
    // TODO: 11. feladat

}


/*
 = *===========================================================
 12. FELADAT - KET RENDEZETT TOMB OSSZEFESULESE
 ============================================================

 Keszits egy osszefesul() nevu fuggvenyt!

 Ket mar rendezett tombot kell egy harmadik,
szinten rendezett tombbe osszefesulni.

Pelda:

A:

{ 1, 3, 5 }

B:

{ 2, 4, 6 }

CEL:

{ 1, 2, 3, 4, 5, 6 }


A fuggveny kap:

- A tomb
- A tomb merete
- B tomb
- B tomb merete
- cel tomb


Probald meg egyetlen vegighaladassal megoldani.

Maximum pontszam: 10 pont.
============================================================
*/

void osszefesul(
    const int a[],
    int meret_a,
    const int b[],
    int meret_b,
    int cel[])
{
    // TODO: 12. feladat

}


/*
 = *===========================================================
 13. FELADAT - LEGGYAKORIBB ELEM
 ============================================================

 Keszits egy leggyakoribb() nevu fuggvenyt!

 Keresd meg azt a szamot, amelyik a legtobbszor
 szerepel a tombben.

 Pelda:

 { 1, 2, 2, 3 }

 Eredmeny:

 2


 Ha ket vagy tobb szam ugyanannyiszor szerepel,
akkor a KISEBBIK szamot add vissza.

Pelda:

{ 4, 4, 5, 5 }

4 es 5 is ketszer szerepel.

Eredmeny:

4


Maximum pontszam: 10 pont.
============================================================
*/

int leggyakoribb(const int tomb[], int meret)
{
    // TODO: 13. feladat


    return 0;
}


/*
 = *===========================================================
 14. FELADAT - MAXIMALIS RESZOSSZEG
 ============================================================

 Keszits egy max_reszosszeg() nevu fuggvenyt!

 Keresd meg azt az EGYMAST KOVETO elemsorozatot,
amelynek az osszege a lehetseges legnagyobb.


Pelda:

{ -2, 1, -3, 4, -1, 2, 1, -5, 4 }


A legjobb resz:

{ 4, -1, 2, 1 }

Osszege:

6


Tehat:

max_reszosszeg(...) -> 6


FIGYELEM:

Ha minden szam negativ, akkor a legnagyobb
egyetlen elem legyen az eredmeny.

Pelda:

{ -5, -2, -8 }

eredmeny:

-2


Maximum pontszam: 10 pont.
============================================================
*/

int max_reszosszeg(const int tomb[], int meret)
{
    // TODO: 14. feladat


    return 0;
}


/*
 = *===========================================================
 15. FELADAT - LEGHOSSZABB NOVeKVO SZAKASZ
 ============================================================

 Keszits egy leghosszabb_novekvo() nevu fuggvenyt!

 Keresd meg a leghosszabb olyan EGYMAST KOVETO
 tombrez hosszát, ahol minden elem nagyobb az elozonel.


 Pelda:

 { 1, 2, 3, 2, 3, 4, 5 }


 Novekvo szakaszok:

 1, 2, 3           -> hossz 3

 2, 3, 4, 5        -> hossz 4


 Eredmeny:

 4


 FONTOS:

 Szigoruan novekvo legyen!

 Pelda:

 1, 1, 2

 Az elso ket elem nem novekvo, mert 1 nem nagyobb 1-nel.


 Maximum pontszam: 10 pont.
 ============================================================
 */

int leghosszabb_novekvo(const int tomb[], int meret)
{
    // TODO: 15. feladat


    return 0;
}


/*
 = *===========================================================
 TESZTELO RENDSZER
 ============================================================

 AZ EZ ALATTI KODOT NE MODOSITSD!

 ============================================================
 */


int ellenoriz_int(const char* nev, int kapott, int vart)
{
    if (kapott == vart)
    {
        printf("[OK] %s\n", nev);
        return 2;
    }

    printf("[HIBAS] %s\n", nev);
    printf("        Vart:   %d\n", vart);
    printf("        Kapott: %d\n", kapott);

    return 0;
}


int tombok_egyeznek(
    const int a[],
    const int b[],
    int meret)
{
    int i;

    for (i = 0; i < meret; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }

    return 1;
}


int ellenoriz_tomb(
    const char* nev,
    const int kapott[],
    const int vart[],
    int meret)
{
    int i;

    if (tombok_egyeznek(kapott, vart, meret))
    {
        printf("[OK] %s\n", nev);
        return 2;
    }

    printf("[HIBAS] %s\n", nev);

    printf("        Vart:   { ");

    for (i = 0; i < meret; i++)
    {
        printf("%d", vart[i]);

        if (i < meret - 1)
            printf(", ");
    }

    printf(" }\n");


    printf("        Kapott: { ");

    for (i = 0; i < meret; i++)
    {
        printf("%d", kapott[i]);

        if (i < meret - 1)
            printf(", ");
    }

    printf(" }\n");

    return 0;
}


/*
 = *===========================================================
 1. TESZT
 ============================================================
 */

int teszt1(void)
{
    int pont = 0;

    int a[] = { 1, 2, 3, 4, 5 };
    int b[] = { 2, 4, 6 };
    int c[] = { 1, 3, 5 };
    int d[] = { -2, -1, 0, 7 };
    int e[] = { 8 };

    printf("\n=== 1. PAROS ELEMEK ===\n");

    pont += ellenoriz_int("Teszt 1", paros_db(a, 5), 2);
    pont += ellenoriz_int("Teszt 2", paros_db(b, 3), 3);
    pont += ellenoriz_int("Teszt 3", paros_db(c, 3), 0);
    pont += ellenoriz_int("Teszt 4", paros_db(d, 4), 2);
    pont += ellenoriz_int("Teszt 5", paros_db(e, 1), 1);

    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 2. TESZT
 ============================================================
 */

int teszt2(void)
{
    int pont = 0;

    printf("\n=== 2. SZAMJEGY OSSZEG ===\n");

    pont += ellenoriz_int("1234", szamjegy_osszeg(1234), 10);
    pont += ellenoriz_int("-502", szamjegy_osszeg(-502), 7);
    pont += ellenoriz_int("0", szamjegy_osszeg(0), 0);
    pont += ellenoriz_int("9999", szamjegy_osszeg(9999), 36);
    pont += ellenoriz_int("10001", szamjegy_osszeg(10001), 2);

    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 3. TESZT
 ============================================================
 */

int teszt3(void)
{
    int pont = 0;

    int tomb[] = { 5, 2, 8, 2, 9 };

    printf("\n=== 3. LINEARIS KERESES ===\n");

    pont += ellenoriz_int("5 keresese",
                          keres_index(tomb, 5, 5), 0);

    pont += ellenoriz_int("2 keresese",
                          keres_index(tomb, 5, 2), 1);

    pont += ellenoriz_int("9 keresese",
                          keres_index(tomb, 5, 9), 4);

    pont += ellenoriz_int("100 keresese",
                          keres_index(tomb, 5, 100), -1);

    pont += ellenoriz_int("8 keresese",
                          keres_index(tomb, 5, 8), 2);

    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 4. TESZT
 ============================================================
 */

int teszt4(void)
{
    int pont = 0;

    printf("\n=== 4. PALINDROM ===\n");

    pont += ellenoriz_int("121", palindrom(121), 1);
    pont += ellenoriz_int("123", palindrom(123), 0);
    pont += ellenoriz_int("7", palindrom(7), 1);
    pont += ellenoriz_int("1221", palindrom(1221), 1);
    pont += ellenoriz_int("-121", palindrom(-121), 0);

    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 5. TESZT
 ============================================================
 */

int teszt5(void)
{
    int pont = 0;

    printf("\n=== 5. LNKO ===\n");

    pont += ellenoriz_int("48,18", lnko(48, 18), 6);
    pont += ellenoriz_int("100,25", lnko(100, 25), 25);
    pont += ellenoriz_int("17,13", lnko(17, 13), 1);
    pont += ellenoriz_int("0,5", lnko(0, 5), 5);
    pont += ellenoriz_int("-24,18", lnko(-24, 18), 6);

    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 6. TESZT
 ============================================================
 */

int teszt6(void)
{
    int pont = 0;

    printf("\n=== 6. PRIMSZAM ===\n");

    pont += ellenoriz_int("2", prim(2), 1);
    pont += ellenoriz_int("17", prim(17), 1);
    pont += ellenoriz_int("1", prim(1), 0);
    pont += ellenoriz_int("25", prim(25), 0);
    pont += ellenoriz_int("97", prim(97), 1);

    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 7. TESZT
 ============================================================
 */

int teszt7(void)
{
    int pont = 0;

    int a[] = { 4, 8, 2, 10, 6 };
    int b[] = { 10, 10, 8, 5 };
    int c[] = { -10, -3, -20, -5 };
    int d[] = { 1, 100 };
    int e[] = { 5, 2, 9, 9, 8, 4 };

    printf("\n=== 7. MASODIK LEGNAGYOBB ===\n");

    pont += ellenoriz_int("Teszt 1",
                          masodik_legnagyobb(a, 5), 8);

    pont += ellenoriz_int("Teszt 2",
                          masodik_legnagyobb(b, 4), 8);

    pont += ellenoriz_int("Teszt 3",
                          masodik_legnagyobb(c, 4), -5);

    pont += ellenoriz_int("Teszt 4",
                          masodik_legnagyobb(d, 2), 1);

    pont += ellenoriz_int("Teszt 5",
                          masodik_legnagyobb(e, 6), 8);

    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 8. TESZT
 ============================================================
 */

int teszt8(void)
{
    int pont = 0;

    int a[] = { 5, 2, 8, 1, 3 };
    int va[] = { 1, 2, 3, 5, 8 };

    int b[] = { 10, -5, 0, 3 };
    int vb[] = { -5, 0, 3, 10 };

    int c[] = { 4, 4, 2, 1 };
    int vc[] = { 1, 2, 4, 4 };

    int d[] = { 7 };
    int vd[] = { 7 };

    int e[] = { 3, 2, 1 };
    int ve[] = { 1, 2, 3 };

    printf("\n=== 8. RENDEZES ===\n");

    rendez(a, 5);
    pont += ellenoriz_tomb("Teszt 1", a, va, 5);

    rendez(b, 4);
    pont += ellenoriz_tomb("Teszt 2", b, vb, 4);

    rendez(c, 4);
    pont += ellenoriz_tomb("Teszt 3", c, vc, 4);

    rendez(d, 1);
    pont += ellenoriz_tomb("Teszt 4", d, vd, 1);

    rendez(e, 3);
    pont += ellenoriz_tomb("Teszt 5", e, ve, 3);

    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 9. TESZT
 ============================================================
 */

int teszt9(void)
{
    int pont = 0;

    int tomb[] = { 1, 3, 5, 7, 9, 11 };

    printf("\n=== 9. BINARIS KERESES ===\n");

    pont += ellenoriz_int("1 keresese",
                          binaris_keres(tomb, 6, 1), 0);

    pont += ellenoriz_int("11 keresese",
                          binaris_keres(tomb, 6, 11), 5);

    pont += ellenoriz_int("7 keresese",
                          binaris_keres(tomb, 6, 7), 3);

    pont += ellenoriz_int("2 keresese",
                          binaris_keres(tomb, 6, 2), -1);

    pont += ellenoriz_int("5 keresese",
                          binaris_keres(tomb, 6, 5), 2);

    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 10. TESZT
 ============================================================
 */

int teszt10(void)
{
    int pont = 0;
    int uj;

    int a[] = { 1, 1, 2, 2, 3 };
    int va[] = { 1, 2, 3 };

    int b[] = { 1, 2, 3 };
    int vb[] = { 1, 2, 3 };

    int c[] = { 5, 5, 5 };
    int vc[] = { 5 };

    int d[] = { -2, -2, -1, 0, 0, 4 };
    int vd[] = { -2, -1, 0, 4 };

    int e[] = { 7 };
    int ve[] = { 7 };

    printf("\n=== 10. DUPLIKATUM TORLES ===\n");


    uj = duplikatum_torol(a, 5);

    if (uj == 3)
        pont += ellenoriz_tomb("Teszt 1", a, va, 3);
    else
        pont += ellenoriz_int("Teszt 1 - meret", uj, 3);


    uj = duplikatum_torol(b, 3);

    if (uj == 3)
        pont += ellenoriz_tomb("Teszt 2", b, vb, 3);
    else
        pont += ellenoriz_int("Teszt 2 - meret", uj, 3);


    uj = duplikatum_torol(c, 3);

    if (uj == 1)
        pont += ellenoriz_tomb("Teszt 3", c, vc, 1);
    else
        pont += ellenoriz_int("Teszt 3 - meret", uj, 1);


    uj = duplikatum_torol(d, 6);

    if (uj == 4)
        pont += ellenoriz_tomb("Teszt 4", d, vd, 4);
    else
        pont += ellenoriz_int("Teszt 4 - meret", uj, 4);


    uj = duplikatum_torol(e, 1);

    if (uj == 1)
        pont += ellenoriz_tomb("Teszt 5", e, ve, 1);
    else
        pont += ellenoriz_int("Teszt 5 - meret", uj, 1);


    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 11. TESZT
 ============================================================
 */

int teszt11(void)
{
    int pont = 0;

    int a[] = { 1, 2, 3, 4, 5 };
    int va[] = { 4, 5, 1, 2, 3 };

    int b[] = { 1, 2, 3, 4 };
    int vb[] = { 4, 1, 2, 3 };

    int c[] = { 1, 2, 3 };
    int vc[] = { 1, 2, 3 };

    int d[] = { 1, 2, 3 };
    int vd[] = { 3, 1, 2 };

    int e[] = { 7 };
    int ve[] = { 7 };

    printf("\n=== 11. FORGATAS ===\n");

    forgat_jobbra(a, 5, 2);
    pont += ellenoriz_tomb("Teszt 1", a, va, 5);

    forgat_jobbra(b, 4, 1);
    pont += ellenoriz_tomb("Teszt 2", b, vb, 4);

    forgat_jobbra(c, 3, 3);
    pont += ellenoriz_tomb("Teszt 3", c, vc, 3);

    forgat_jobbra(d, 3, 4);
    pont += ellenoriz_tomb("Teszt 4", d, vd, 3);

    forgat_jobbra(e, 1, 100);
    pont += ellenoriz_tomb("Teszt 5", e, ve, 1);

    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 12. TESZT
 ============================================================
 */

int teszt12(void)
{
    int pont = 0;

    int a1[] = { 1, 3, 5 };
    int b1[] = { 2, 4, 6 };
    int v1[] = { 1, 2, 3, 4, 5, 6 };
    int c1[6];

    int a2[] = { 1, 2 };
    int b2[] = { 3, 4 };
    int v2[] = { 1, 2, 3, 4 };
    int c2[4];

    int a3[] = { -3, 0, 7 };
    int b3[] = { -2, 5, 8 };
    int v3[] = { -3, -2, 0, 5, 7, 8 };
    int c3[6];

    int a4[] = { 1, 1, 3 };
    int b4[] = { 1, 2 };
    int v4[] = { 1, 1, 1, 2, 3 };
    int c4[5];

    int a5[] = { 5 };
    int b5[] = { 2 };
    int v5[] = { 2, 5 };
    int c5[2];

    printf("\n=== 12. OSSZEFESULES ===\n");

    osszefesul(a1, 3, b1, 3, c1);
    pont += ellenoriz_tomb("Teszt 1", c1, v1, 6);

    osszefesul(a2, 2, b2, 2, c2);
    pont += ellenoriz_tomb("Teszt 2", c2, v2, 4);

    osszefesul(a3, 3, b3, 3, c3);
    pont += ellenoriz_tomb("Teszt 3", c3, v3, 6);

    osszefesul(a4, 3, b4, 2, c4);
    pont += ellenoriz_tomb("Teszt 4", c4, v4, 5);

    osszefesul(a5, 1, b5, 1, c5);
    pont += ellenoriz_tomb("Teszt 5", c5, v5, 2);

    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 13. TESZT
 ============================================================
 */

int teszt13(void)
{
    int pont = 0;

    int a[] = { 1, 2, 2, 3 };
    int b[] = { 4, 4, 5, 5 };
    int c[] = { -1, -1, -2, 3 };
    int d[] = { 7 };
    int e[] = { 3, 1, 3, 2, 1, 1 };

    printf("\n=== 13. LEGGYAKORIBB ===\n");

    pont += ellenoriz_int("Teszt 1",
                          leggyakoribb(a, 4), 2);

    pont += ellenoriz_int("Teszt 2",
                          leggyakoribb(b, 4), 4);

    pont += ellenoriz_int("Teszt 3",
                          leggyakoribb(c, 4), -1);

    pont += ellenoriz_int("Teszt 4",
                          leggyakoribb(d, 1), 7);

    pont += ellenoriz_int("Teszt 5",
                          leggyakoribb(e, 6), 1);

    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 14. TESZT
 ============================================================
 */

int teszt14(void)
{
    int pont = 0;

    int a[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int b[] = { 1, 2, 3 };
    int c[] = { -5, -2, -8 };
    int d[] = { 5, -1, 5 };
    int e[] = { 0, -1, 0 };

    printf("\n=== 14. MAXIMALIS RESZOSSZEG ===\n");

    pont += ellenoriz_int("Teszt 1",
                          max_reszosszeg(a, 9), 6);

    pont += ellenoriz_int("Teszt 2",
                          max_reszosszeg(b, 3), 6);

    pont += ellenoriz_int("Teszt 3",
                          max_reszosszeg(c, 3), -2);

    pont += ellenoriz_int("Teszt 4",
                          max_reszosszeg(d, 3), 9);

    pont += ellenoriz_int("Teszt 5",
                          max_reszosszeg(e, 3), 0);

    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 15. TESZT
 ============================================================
 */

int teszt15(void)
{
    int pont = 0;

    int a[] = { 1, 2, 3, 2, 3, 4, 5 };
    int b[] = { 5, 4, 3 };
    int c[] = { 1, 2, 3, 4, 5 };
    int d[] = { 1, 1, 2, 3 };
    int e[] = { 3, -1, 0, 1, 2, -5, 6 };

    printf("\n=== 15. LEGHOSSZABB NOVEKVO SZAKASZ ===\n");

    pont += ellenoriz_int("Teszt 1",
                          leghosszabb_novekvo(a, 7), 4);

    pont += ellenoriz_int("Teszt 2",
                          leghosszabb_novekvo(b, 3), 1);

    pont += ellenoriz_int("Teszt 3",
                          leghosszabb_novekvo(c, 5), 5);

    pont += ellenoriz_int("Teszt 4",
                          leghosszabb_novekvo(d, 4), 3);

    pont += ellenoriz_int("Teszt 5",
                          leghosszabb_novekvo(e, 7), 4);

    printf("Pont: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 FOPROGRAM
 ============================================================
 */

int main(void)
{
    int osszpont = 0;

    printf("========================================\n");
    printf("       C - ALGORITMUS FELADATSOR\n");
    printf("========================================\n");

    osszpont += teszt1();
    osszpont += teszt2();
    osszpont += teszt3();
    osszpont += teszt4();
    osszpont += teszt5();
    osszpont += teszt6();
    osszpont += teszt7();
    osszpont += teszt8();
    osszpont += teszt9();
    osszpont += teszt10();
    osszpont += teszt11();
    osszpont += teszt12();
    osszpont += teszt13();
    osszpont += teszt14();
    osszpont += teszt15();


    printf("\n\n");
    printf("========================================\n");
    printf("              VEGSO EREDMENY\n");
    printf("========================================\n");

    printf("\nOSSZPONTSZAM: %d / 150\n", osszpont);

    printf("Sikeres tesztek: %d / 75\n",
           osszpont / 2);

    printf("Hibas tesztek:   %d / 75\n",
           (150 - osszpont) / 2);


    if (osszpont == 150)
    {
        printf("\nMinden teszt sikeres!\n");
    }

    printf("\n========================================\n");

    return 0;
}
