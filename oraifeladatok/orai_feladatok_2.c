/*
 = *===========================================================
 C PROGRAMOZAS - TOMB FELADATOK
 ============================================================

 Ebben a fajlban 5, egyre nehezedo tombos feladat talalhato.

 SZABALYOK:

 1. Csak a TODO-val jelolt reszeket modositsd!
 2. A tesztelo fuggvenyeket NE modositsd!
 3. A main() fuggvenyt NE modositsd!
 4. Minden feladat 10 pontot er.
 5. Minden feladatnal 5 teszt fut le.
 6. Egy sikeres teszt 2 pontot er.
 7. A teljes feladatsor maximum 50 pont.

 A program futtataskor kiirja:
 - melyik teszt sikeres,
- melyik teszt hibas,
- az egyes feladatok pontszamat,
- a teljes pontszamot.

============================================================
*/

#include <stdio.h>


/*
 = *===========================================================
 1. FELADAT - TOMB ELEMEINEK OSSZEGE
 ============================================================

 Keszits egy tomb_osszeg() nevu fuggvenyt.

 A fuggveny egy egesz szamokat tartalmazo tombot es
 annak meretet kapja parameterkent.

 A feladat:
 Add ossze a tomb minden elemet, majd add vissza az osszeget.

 Pelda:

 int tomb[] = { 2, 5, 3, 10 };

 tomb_osszeg(tomb, 4) -> 20

 Masik pelda:

 int tomb[] = { -5, 10, -2 };

 tomb_osszeg(tomb, 3) -> 3

 A tomb elemein for ciklussal haladj vegig.

 Maximum pontszam: 10 pont.
 ============================================================
 */

int tomb_osszeg(const int tomb[], int meret)
{
    int osszeg = 0;

    // TODO: ide ird az 1. feladat megoldasat


    return osszeg;
}


/*
 = *===========================================================
 2. FELADAT - ATLAGNAL NAGYOBB ELEMEK
 ============================================================

 Keszits egy atlag_felett() nevu fuggvenyt.

 A fuggveny egy egesz szamokat tartalmazo tombot es
 annak meretet kapja parameterkent.

 A feladat ket reszbol all:

 1. Szamitsd ki a tomb elemeinek atlagat.
 2. Szamold meg, hany elem nagyobb az atlagnal.

 A fuggveny ezt a darabszamot adja vissza.

 Pelda:

 int tomb[] = { 2, 4, 6, 8 };

 Atlag:
 (2 + 4 + 6 + 8) / 4 = 5

 Az 5-nel nagyobb elemek:
 6 es 8

 Ezert:

 atlag_felett(tomb, 4) -> 2

 FIGYELEM:
 Az atlagot valos szamkent szamold!

 Maximum pontszam: 10 pont.
 ============================================================
 */

int atlag_felett(const int tomb[], int meret)
{
    // TODO: ide ird a 2. feladat megoldasat


    return 0;
}


/*
 = *===========================================================
 3. FELADAT - TOMB MEGFORDITASA
 ============================================================

 Keszits egy megfordit() nevu fuggvenyt.

 A fuggveny egy egesz szamokat tartalmazo tombot es
 annak meretet kapja parameterkent.

 A fuggveny forditsa meg a tomb elemeinek sorrendjet.

 Pelda:

 Eredeti tomb:

 { 1, 2, 3, 4, 5 }

 A fuggveny lefutasa utan:

 { 5, 4, 3, 2, 1 }


 FONTOS:

 Nem eleg visszafele kiirni a tombot!

 Maganak a tombnek kell megvaltoznia.


 Tipp:

 Az elso es az utolso elemet csereld meg.

 Utana:

 a masodik es az utolso elotti elemet,

es igy tovabb.


Pelda csere:

int temp = tomb[0];

tomb[0] = tomb[4];

tomb[4] = temp;


A fuggvenynek nincs visszateresi erteke.

Maximum pontszam: 10 pont.
============================================================
*/

void megfordit(int tomb[], int meret)
{
    // TODO: ide ird a 3. feladat megoldasat

}


/*
 = *===========================================================
 4. FELADAT - MASODIK LEGNAGYOBB ELEM
 ============================================================

 Keszits egy masodik_legnagyobb() nevu fuggvenyt.

 A fuggveny egy egesz szamokat tartalmazo tombot es
 annak meretet kapja parameterkent.

 Keresd meg a tomb MASODIK LEGNAGYOBB KULONBOZO elemet.

 Pelda:

 { 4, 8, 2, 10, 6 }

 Legnagyobb:
 10

 Masodik legnagyobb:
 8

 Ezert:

 masodik_legnagyobb(tomb, 5) -> 8


 FIGYELEM!

 Az azonos ertekek nem szamitanak kulonbozo elemeknek.

 Pelda:

 { 10, 10, 8, 5 }

 A legnagyobb ertek 10.

 A masodik legnagyobb KULONBOZO ertek 8.


 FELTETEL:

 A tesztekben mindig lesz legalabb ket kulonbozo szam.

 A tombben negativ szamok is lehetnek.


 Pelda:

 { -10, -3, -20, -5 }

 A legnagyobb:
 -3

 A masodik legnagyobb:
 -5


 Maximum pontszam: 10 pont.
 ============================================================
 */

int masodik_legnagyobb(const int tomb[], int meret)
{
    // TODO: ide ird a 4. feladat megoldasat


    return 0;
}


/*
 = *===========================================================
 5. FELADAT - TOMB RENDEZESE
 ============================================================

 Keszits egy rendez() nevu fuggvenyt.

 A fuggveny egy egesz szamokat tartalmazo tombot es
 annak meretet kapja parameterkent.

 A tomb elemeit novekvo sorrendbe kell rendezni.

 Pelda:

 Eredeti tomb:

 { 5, 2, 8, 1, 3 }

 Rendezes utan:

 { 1, 2, 3, 5, 8 }


 A rendezeshez hasznalj ket egymasba agyazott ciklust.

 Pelda gondolatmenet:

 Hasonlitsd ossze a tomb elemeit.

 Ha egy korabbi elem nagyobb, mint egy kesobbi elem,
akkor csereld meg oket.


Pelda csere:

if (tomb[i] > tomb[j])
{
int temp = tomb[i];

tomb[i] = tomb[j];

tomb[j] = temp;
}


FONTOS:

Nem eleg novekvo sorrendben kiirni az elemeket.

Maganak a tombnek kell rendezett allapotba kerulnie.


Maximum pontszam: 10 pont.
============================================================
*/

void rendez(int tomb[], int meret)
{
    // TODO: ide ird az 5. feladat megoldasat

}


/*
 = *===========================================================
 TESZTELO RENDSZER
 ============================================================

 AZ EZ ALATTI KODOT NE MODOSITSD!

 ============================================================
 */


/*
 - *-----------------------------------------------------------
 Segedfuggveny: ket tomb osszehasonlitasa
 ------------------------------------------------------------
 */

int tombok_egyeznek(const int a[], const int b[], int meret)
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


/*
 - *-----------------------------------------------------------
 Segedfuggveny: tomb kiirasa
 ------------------------------------------------------------
 */

void tomb_kiir(const int tomb[], int meret)
{
    int i;

    printf("{ ");

    for (i = 0; i < meret; i++)
    {
        printf("%d", tomb[i]);

        if (i < meret - 1)
        {
            printf(", ");
        }
    }

    printf(" }");
}


/*
 = *===========================================================
 1. FELADAT TESZT
 ============================================================
 */

int teszt1(void)
{
    int pont = 0;

    int a[] = { 1, 2, 3, 4 };
    int b[] = { 10, 20, 30 };
    int c[] = { -5, 5 };
    int d[] = { -1, -2, -3, -4 };
    int e[] = { 100 };

    int kapott;
    int vart;

    printf("\n========================================\n");
    printf("1. FELADAT - TOMB OSSZEGE\n");
    printf("========================================\n");


    kapott = tomb_osszeg(a, 4);
    vart = 10;

    if (kapott == vart)
    {
        printf("[OK] Teszt 1\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 1\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    kapott = tomb_osszeg(b, 3);
    vart = 60;

    if (kapott == vart)
    {
        printf("[OK] Teszt 2\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 2\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    kapott = tomb_osszeg(c, 2);
    vart = 0;

    if (kapott == vart)
    {
        printf("[OK] Teszt 3\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 3\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    kapott = tomb_osszeg(d, 4);
    vart = -10;

    if (kapott == vart)
    {
        printf("[OK] Teszt 4\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 4\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    kapott = tomb_osszeg(e, 1);
    vart = 100;

    if (kapott == vart)
    {
        printf("[OK] Teszt 5\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 5\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    printf("1. feladat pontszama: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 2. FELADAT TESZT
 ============================================================
 */

int teszt2(void)
{
    int pont = 0;

    int a[] = { 2, 4, 6, 8 };
    int b[] = { 1, 2, 3 };
    int c[] = { 10, 10, 10 };
    int d[] = { -10, -5, 0, 5, 10 };
    int e[] = { 1, 1, 1, 1, 10 };

    int kapott;
    int vart;

    printf("\n========================================\n");
    printf("2. FELADAT - ATLAGNAL NAGYOBB ELEMEK\n");
    printf("========================================\n");


    kapott = atlag_felett(a, 4);
    vart = 2;

    if (kapott == vart)
    {
        printf("[OK] Teszt 1\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 1\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    kapott = atlag_felett(b, 3);
    vart = 1;

    if (kapott == vart)
    {
        printf("[OK] Teszt 2\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 2\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    kapott = atlag_felett(c, 3);
    vart = 0;

    if (kapott == vart)
    {
        printf("[OK] Teszt 3\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 3\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    kapott = atlag_felett(d, 5);
    vart = 2;

    if (kapott == vart)
    {
        printf("[OK] Teszt 4\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 4\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    kapott = atlag_felett(e, 5);
    vart = 1;

    if (kapott == vart)
    {
        printf("[OK] Teszt 5\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 5\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    printf("2. feladat pontszama: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 3. FELADAT TESZT
 ============================================================
 */

int teszt3(void)
{
    int pont = 0;

    int a[] = { 1, 2, 3, 4, 5 };
    int va[] = { 5, 4, 3, 2, 1 };

    int b[] = { 10, 20, 30, 40 };
    int vb[] = { 40, 30, 20, 10 };

    int c[] = { 7 };
    int vc[] = { 7 };

    int d[] = { -1, -2, -3 };
    int vd[] = { -3, -2, -1 };

    int e[] = { 1, 2, 2, 3 };
    int ve[] = { 3, 2, 2, 1 };


    printf("\n========================================\n");
    printf("3. FELADAT - TOMB MEGFORDITASA\n");
    printf("========================================\n");


    megfordit(a, 5);

    if (tombok_egyeznek(a, va, 5))
    {
        printf("[OK] Teszt 1\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 1\n");

        printf("        Vart:   ");
        tomb_kiir(va, 5);

        printf("\n        Kapott: ");
        tomb_kiir(a, 5);

        printf("\n");
    }


    megfordit(b, 4);

    if (tombok_egyeznek(b, vb, 4))
    {
        printf("[OK] Teszt 2\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 2\n");

        printf("        Vart:   ");
        tomb_kiir(vb, 4);

        printf("\n        Kapott: ");
        tomb_kiir(b, 4);

        printf("\n");
    }


    megfordit(c, 1);

    if (tombok_egyeznek(c, vc, 1))
    {
        printf("[OK] Teszt 3\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 3\n");

        printf("        Vart:   ");
        tomb_kiir(vc, 1);

        printf("\n        Kapott: ");
        tomb_kiir(c, 1);

        printf("\n");
    }


    megfordit(d, 3);

    if (tombok_egyeznek(d, vd, 3))
    {
        printf("[OK] Teszt 4\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 4\n");

        printf("        Vart:   ");
        tomb_kiir(vd, 3);

        printf("\n        Kapott: ");
        tomb_kiir(d, 3);

        printf("\n");
    }


    megfordit(e, 4);

    if (tombok_egyeznek(e, ve, 4))
    {
        printf("[OK] Teszt 5\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 5\n");

        printf("        Vart:   ");
        tomb_kiir(ve, 4);

        printf("\n        Kapott: ");
        tomb_kiir(e, 4);

        printf("\n");
    }


    printf("3. feladat pontszama: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 4. FELADAT TESZT
 ============================================================
 */

int teszt4(void)
{
    int pont = 0;

    int a[] = { 4, 8, 2, 10, 6 };
    int b[] = { 10, 10, 8, 5 };
    int c[] = { -10, -3, -20, -5 };
    int d[] = { 1, 100 };
    int e[] = { 5, 2, 9, 9, 8, 4 };

    int kapott;
    int vart;

    printf("\n========================================\n");
    printf("4. FELADAT - MASODIK LEGNAGYOBB\n");
    printf("========================================\n");


    kapott = masodik_legnagyobb(a, 5);
    vart = 8;

    if (kapott == vart)
    {
        printf("[OK] Teszt 1\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 1\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    kapott = masodik_legnagyobb(b, 4);
    vart = 8;

    if (kapott == vart)
    {
        printf("[OK] Teszt 2\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 2\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    kapott = masodik_legnagyobb(c, 4);
    vart = -5;

    if (kapott == vart)
    {
        printf("[OK] Teszt 3\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 3\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    kapott = masodik_legnagyobb(d, 2);
    vart = 1;

    if (kapott == vart)
    {
        printf("[OK] Teszt 4\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 4\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    kapott = masodik_legnagyobb(e, 6);
    vart = 8;

    if (kapott == vart)
    {
        printf("[OK] Teszt 5\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 5\n");
        printf("        Vart:   %d\n", vart);
        printf("        Kapott: %d\n", kapott);
    }


    printf("4. feladat pontszama: %d / 10\n", pont);

    return pont;
}


/*
 = *===========================================================
 5. FELADAT TESZT
 ============================================================
 */

int teszt5(void)
{
    int pont = 0;

    int a[] = { 5, 2, 8, 1, 3 };
    int va[] = { 1, 2, 3, 5, 8 };

    int b[] = { 10, 5, 0, -5 };
    int vb[] = { -5, 0, 5, 10 };

    int c[] = { 4, 4, 2, 2, 1 };
    int vc[] = { 1, 2, 2, 4, 4 };

    int d[] = { 7 };
    int vd[] = { 7 };

    int e[] = { -3, 10, 2, -8, 0, 5 };
    int ve[] = { -8, -3, 0, 2, 5, 10 };


    printf("\n========================================\n");
    printf("5. FELADAT - TOMB RENDEZESE\n");
    printf("========================================\n");


    rendez(a, 5);

    if (tombok_egyeznek(a, va, 5))
    {
        printf("[OK] Teszt 1\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 1\n");

        printf("        Vart:   ");
        tomb_kiir(va, 5);

        printf("\n        Kapott: ");
        tomb_kiir(a, 5);

        printf("\n");
    }


    rendez(b, 4);

    if (tombok_egyeznek(b, vb, 4))
    {
        printf("[OK] Teszt 2\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 2\n");

        printf("        Vart:   ");
        tomb_kiir(vb, 4);

        printf("\n        Kapott: ");
        tomb_kiir(b, 4);

        printf("\n");
    }


    rendez(c, 5);

    if (tombok_egyeznek(c, vc, 5))
    {
        printf("[OK] Teszt 3\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 3\n");

        printf("        Vart:   ");
        tomb_kiir(vc, 5);

        printf("\n        Kapott: ");
        tomb_kiir(c, 5);

        printf("\n");
    }


    rendez(d, 1);

    if (tombok_egyeznek(d, vd, 1))
    {
        printf("[OK] Teszt 4\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 4\n");

        printf("        Vart:   ");
        tomb_kiir(vd, 1);

        printf("\n        Kapott: ");
        tomb_kiir(d, 1);

        printf("\n");
    }


    rendez(e, 6);

    if (tombok_egyeznek(e, ve, 6))
    {
        printf("[OK] Teszt 5\n");
        pont += 2;
    }
    else
    {
        printf("[HIBAS] Teszt 5\n");

        printf("        Vart:   ");
        tomb_kiir(ve, 6);

        printf("\n        Kapott: ");
        tomb_kiir(e, 6);

        printf("\n");
    }


    printf("5. feladat pontszama: %d / 10\n", pont);

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
    printf("          C - TOMB FELADATSOR\n");
    printf("========================================\n");

    osszpont += teszt1();
    osszpont += teszt2();
    osszpont += teszt3();
    osszpont += teszt4();
    osszpont += teszt5();


    printf("\n\n");
    printf("========================================\n");
    printf("              VEGSO EREDMENY\n");
    printf("========================================\n");

    printf("\nOSSZPONTSZAM: %d / 50\n", osszpont);

    printf("\n");

    printf("Sikeres tesztek: %d / 25\n", osszpont / 2);

    printf("Hibas tesztek:   %d / 25\n",
           (50 - osszpont) / 2);


    if (osszpont == 50)
    {
        printf("\nMinden teszt sikeres!\n");
    }

    printf("\n========================================\n");

    return 0;
}
