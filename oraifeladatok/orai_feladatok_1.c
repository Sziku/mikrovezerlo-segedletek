/*
============================================================
                 C PROGRAMOZASI GYAKORLAT
============================================================

Ebben a fajlban 10 programozasi feladat talalhato.

SZABALYOK:

1. Csak a TODO-val jelolt reszeket modositsd!
2. A tesztelo fuggvenyeket NE modositsd!
3. A main() fuggvenyt NE modositsd!
4. Minden feladat 10 pontot er.
5. Minden feladatnal 5 teszt fut le.
6. Egy sikeres teszt 2 pontot er.
7. A teljes feladatsor maximum 100 pont.

A program futtataskor megmutatja:
- melyik teszt sikeres,
- melyik teszt hibas,
- az egyes feladatok pontszamat,
- a teljes pontszamot.

============================================================
*/

#include <math.h>
#include <stdio.h>
#include <string.h>

/*
============================================================
1. FELADAT - KET SZAM OSSZEADASA
============================================================

Keszits egy osszeg() nevu fuggvenyt, amely ket egesz
szamot kap parameterkent, es visszaadja a ket szam osszeget.

Pelda:

osszeg(2, 3) -> 5
osszeg(10, -4) -> 6

Maximum pontszam: 10 pont.
============================================================
*/

int osszeg(int a, int b)
{
    // TODO: ide ird az 1. feladat megoldasat

    return 0;
}

/*
============================================================
2. FELADAT - HAROM SZAM ATLAGA
============================================================

Keszits egy atlag() nevu fuggvenyt, amely harom valos
szamot kap parameterkent, es visszaadja azok szamtani atlagat.

Pelda:

atlag(2, 4, 6) -> 4.0
atlag(10, 20, 30) -> 20.0

Maximum pontszam: 10 pont.
============================================================
*/

double atlag(double a, double b, double c)
{
    // TODO: ide ird a 2. feladat megoldasat

    return 0;
}

/*
============================================================
3. FELADAT - A NAGYOBB SZAM
============================================================

Keszits egy nagyobb() nevu fuggvenyt, amely ket egesz
szamot kap parameterkent.

A fuggveny adja vissza a ket szam kozul a nagyobbat.

Ha a ket szam egyenlo, akkor az adott szamot adja vissza.

Pelda:

nagyobb(3, 8) -> 8
nagyobb(10, 2) -> 10
nagyobb(5, 5) -> 5

A megoldashoz hasznalj if vagy if-else szerkezetet.

Maximum pontszam: 10 pont.
============================================================
*/

int nagyobb(int a, int b)
{
    // TODO: ide ird a 3. feladat megoldasat

    return 0;
}

/*
============================================================
4. FELADAT - EGY SZAM ELOJELE
============================================================

Keszits egy elojel() nevu fuggvenyt.

A fuggveny egy egesz szamot kap parameterkent.

Visszateresi erteke:

pozitiv szam eseten:  1
nulla eseten:         0
negativ szam eseten: -1

Pelda:

elojel(20) -> 1
elojel(-5) -> -1
elojel(0) -> 0

Hasznalj if / else if / else szerkezetet.

Maximum pontszam: 10 pont.
============================================================
*/

int elojel(int szam)
{
    // TODO: ide ird a 4. feladat megoldasat

    return 0;
}

/*
============================================================
5. FELADAT - OSZTALYZAT ERTEKELESE
============================================================

Keszits egy ertekeles() nevu fuggvenyt.

A fuggveny egy osztalyzatot kap parameterkent.

A visszateresi ertek:

1 -> "elegtelen"
2 -> "elegseges"
3 -> "kozepes"
4 -> "jo"
5 -> "jeles"

Minden mas szam eseten:

"hibas"

A megoldashoz switch szerkezetet hasznalj.

Pelda:

ertekeles(5) -> "jeles"
ertekeles(2) -> "elegseges"
ertekeles(8) -> "hibas"

Maximum pontszam: 10 pont.
============================================================
*/

const char* ertekeles(int jegy)
{
    // TODO: ide ird az 5. feladat megoldasat

    return "hibas";
}

/*
============================================================
6. FELADAT - SZAMOK OSSZEGE 1-TOL N-IG
============================================================

Keszits egy osszeg_n() nevu fuggvenyt.

A fuggveny egy pozitiv egesz n szamot kap.

Szamitsd ki az 1-tol n-ig levo egesz szamok osszeget.

Pelda:

n = 5

1 + 2 + 3 + 4 + 5 = 15

Tehat:

osszeg_n(5) -> 15

A megoldashoz for ciklust hasznalj.

Ne hasznald az n * (n + 1) / 2 kepletet!

Maximum pontszam: 10 pont.
============================================================
*/

int osszeg_n(int n)
{
    int eredmeny = 0;

    // TODO: ide ird a 6. feladat megoldasat

    return eredmeny;
}

/*
============================================================
7. FELADAT - FAKTORIALIS
============================================================

Keszits egy faktorialis() nevu fuggvenyt.

A faktorialis jelentese:

5! = 5 * 4 * 3 * 2 * 1 = 120

Tovabba:

0! = 1
1! = 1

Pelda:

faktorialis(3) -> 6
faktorialis(5) -> 120

A feladatot ciklussal oldd meg.

Maximum pontszam: 10 pont.
============================================================
*/

long long faktorialis(int n)
{
    long long eredmeny = 1;

    // TODO: ide ird a 7. feladat megoldasat

    return eredmeny;
}

/*
============================================================
8. FELADAT - TOMB ELEMEINEK OSSZEGE
============================================================

Keszits egy tomb_osszeg() nevu fuggvenyt.

A fuggveny egy egesz szamokat tartalmazo tombot es
a tomb meretet kapja parameterkent.

Add ossze a tomb osszes elemet, majd add vissza
az eredmenyt.

Pelda:

int tomb[] = {1, 2, 3, 4};

tomb_osszeg(tomb, 4) -> 10

A tomb elemein ciklussal haladj vegig.

Maximum pontszam: 10 pont.
============================================================
*/

int tomb_osszeg(const int tomb[], int meret)
{
    int eredmeny = 0;

    // TODO: ide ird a 8. feladat megoldasat

    return eredmeny;
}

/*
============================================================
9. FELADAT - LEGNAGYOBB TOMB ELEM
============================================================

Keszits egy maximum() nevu fuggvenyt.

A fuggveny egy egesz szamokat tartalmazo tombot es
annak meretet kapja parameterkent.

Keresd meg es add vissza a tomb legnagyobb elemet.

Pelda:

int tomb[] = {3, 8, 2, 10, 5};

maximum(tomb, 5) -> 10

FIGYELEM!

A tombben negativ szamok is lehetnek.

Pelda:

{-10, -3, -20}

A maximum: -3

Tipp:
A maximum kezdoerteke lehet a tomb elso eleme.

Maximum pontszam: 10 pont.
============================================================
*/

int maximum(const int tomb[], int meret)
{
    // TODO: ide ird a 9. feladat megoldasat

    return 0;
}

/*
============================================================
10. FELADAT - MAGANHANGZOK MEGSZAMLALASA
============================================================

Keszits egy maganhangzok() nevu fuggvenyt.

A fuggveny egy szoveget kap parameterkent.

Szamold meg, hogy hany angol maganhangzo szerepel
a szovegben.

A vizsgalt karakterek:

a, e, i, o, u
A, E, I, O, U

A kis- es nagybetuket egyarant szamold.

Pelda:

"alma" -> 2
"HELLO" -> 2
"xyz" -> 0

A karakterlanc karakterein ciklussal haladj vegig.

A karakterlanc veget a '\0' karakter jelzi.

Maximum pontszam: 10 pont.
============================================================
*/

int maganhangzok(const char szoveg[])
{
    int db = 0;

    // TODO: ide ird a 10. feladat megoldasat

    return db;
}

/*
============================================================
                 TESZTELO RENDSZER
============================================================

AZ EZ ALATTI KODOT NE MODOSITSD!

============================================================
*/

int teszt1(void)
{
    int pont = 0;
    int a[] = { 2, 10, -5, 0, -8 };
    int b[] = { 3, -4, 2, 0, -7 };
    int vart[] = { 5, 6, -3, 0, -15 };
    int i;

    printf("\n========================================\n");
    printf("1. FELADAT - OSSZEADAS\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        int kapott = osszeg(a[i], b[i]);

        if (kapott == vart[i]) {
            printf("[OK] %d + %d = %d\n",
                a[i], b[i], kapott);

            pont += 2;
        } else {
            printf("[HIBAS] %d + %d\n", a[i], b[i]);
            printf("        Vart:   %d\n", vart[i]);
            printf("        Kapott: %d\n", kapott);
        }
    }

    printf("1. feladat pontszama: %d / 10\n", pont);

    return pont;
}

int teszt2(void)
{
    int pont = 0;

    double a[] = { 2, 10, -5, 1, 2.5 };
    double b[] = { 4, 20, 0, 2, 3.5 };
    double c[] = { 6, 30, 5, 3, 6 };
    double vart[] = { 4, 20, 0, 2, 4 };

    int i;

    printf("\n========================================\n");
    printf("2. FELADAT - ATLAG\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        double kapott = atlag(a[i], b[i], c[i]);

        if (fabs(kapott - vart[i]) < 0.001) {
            printf("[OK] atlag(%.1f, %.1f, %.1f) = %.2f\n",
                a[i], b[i], c[i], kapott);

            pont += 2;
        } else {
            printf("[HIBAS] atlag(%.1f, %.1f, %.1f)\n",
                a[i], b[i], c[i]);

            printf("        Vart:   %.2f\n", vart[i]);
            printf("        Kapott: %.2f\n", kapott);
        }
    }

    printf("2. feladat pontszama: %d / 10\n", pont);

    return pont;
}

int teszt3(void)
{
    int pont = 0;

    int a[] = { 2, 15, -2, 5, 0 };
    int b[] = { 7, 3, -8, 5, -10 };
    int vart[] = { 7, 15, -2, 5, 0 };

    int i;

    printf("\n========================================\n");
    printf("3. FELADAT - NAGYOBB SZAM\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        int kapott = nagyobb(a[i], b[i]);

        if (kapott == vart[i]) {
            printf("[OK] nagyobb(%d, %d) = %d\n",
                a[i], b[i], kapott);

            pont += 2;
        } else {
            printf("[HIBAS] nagyobb(%d, %d)\n", a[i], b[i]);
            printf("        Vart:   %d\n", vart[i]);
            printf("        Kapott: %d\n", kapott);
        }
    }

    printf("3. feladat pontszama: %d / 10\n", pont);

    return pont;
}

int teszt4(void)
{
    int pont = 0;

    int szam[] = { 10, -10, 0, 1, -1000 };
    int vart[] = { 1, -1, 0, 1, -1 };

    int i;

    printf("\n========================================\n");
    printf("4. FELADAT - ELOJEL\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        int kapott = elojel(szam[i]);

        if (kapott == vart[i]) {
            printf("[OK] elojel(%d) = %d\n",
                szam[i], kapott);

            pont += 2;
        } else {
            printf("[HIBAS] elojel(%d)\n", szam[i]);
            printf("        Vart:   %d\n", vart[i]);
            printf("        Kapott: %d\n", kapott);
        }
    }

    printf("4. feladat pontszama: %d / 10\n", pont);

    return pont;
}

int teszt5(void)
{
    int pont = 0;

    int jegy[] = { 1, 2, 3, 4, 5 };

    const char* vart[] = {
        "elegtelen",
        "elegseges",
        "kozepes",
        "jo",
        "jeles"
    };

    int i;

    printf("\n========================================\n");
    printf("5. FELADAT - OSZTALYZAT\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        const char* kapott = ertekeles(jegy[i]);

        if (strcmp(kapott, vart[i]) == 0) {
            printf("[OK] %d -> %s\n",
                jegy[i], kapott);

            pont += 2;
        } else {
            printf("[HIBAS] jegy: %d\n", jegy[i]);
            printf("        Vart:   %s\n", vart[i]);
            printf("        Kapott: %s\n", kapott);
        }
    }

    printf("5. feladat pontszama: %d / 10\n", pont);

    return pont;
}

int teszt6(void)
{
    int pont = 0;

    int n[] = { 1, 2, 5, 10, 100 };
    int vart[] = { 1, 3, 15, 55, 5050 };

    int i;

    printf("\n========================================\n");
    printf("6. FELADAT - OSSZEG 1-TOL N-IG\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        int kapott = osszeg_n(n[i]);

        if (kapott == vart[i]) {
            printf("[OK] 1..%d osszege = %d\n",
                n[i], kapott);

            pont += 2;
        } else {
            printf("[HIBAS] n = %d\n", n[i]);
            printf("        Vart:   %d\n", vart[i]);
            printf("        Kapott: %d\n", kapott);
        }
    }

    printf("6. feladat pontszama: %d / 10\n", pont);

    return pont;
}

int teszt7(void)
{
    int pont = 0;

    int n[] = { 0, 1, 3, 5, 10 };

    long long vart[] = {
        1,
        1,
        6,
        120,
        3628800
    };

    int i;

    printf("\n========================================\n");
    printf("7. FELADAT - FAKTORIALIS\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        long long kapott = faktorialis(n[i]);

        if (kapott == vart[i]) {
            printf("[OK] %d! = %lld\n",
                n[i], kapott);

            pont += 2;
        } else {
            printf("[HIBAS] %d!\n", n[i]);
            printf("        Vart:   %lld\n", vart[i]);
            printf("        Kapott: %lld\n", kapott);
        }
    }

    printf("7. feladat pontszama: %d / 10\n", pont);

    return pont;
}

int teszt8(void)
{
    int pont = 0;

    int a[] = { 1, 2, 3 };
    int b[] = { 10, 20, 30, 40 };
    int c[] = { -5, 5 };
    int d[] = { 7 };
    int e[] = { -1, -2, -3, -4 };

    int kapott;

    printf("\n========================================\n");
    printf("8. FELADAT - TOMB OSSZEGE\n");
    printf("========================================\n");

    kapott = tomb_osszeg(a, 3);

    if (kapott == 6) {
        printf("[OK] Teszt 1\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 1\n");
        printf("        Vart:   6\n");
        printf("        Kapott: %d\n", kapott);
    }

    kapott = tomb_osszeg(b, 4);

    if (kapott == 100) {
        printf("[OK] Teszt 2\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 2\n");
        printf("        Vart:   100\n");
        printf("        Kapott: %d\n", kapott);
    }

    kapott = tomb_osszeg(c, 2);

    if (kapott == 0) {
        printf("[OK] Teszt 3\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 3\n");
        printf("        Vart:   0\n");
        printf("        Kapott: %d\n", kapott);
    }

    kapott = tomb_osszeg(d, 1);

    if (kapott == 7) {
        printf("[OK] Teszt 4\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 4\n");
        printf("        Vart:   7\n");
        printf("        Kapott: %d\n", kapott);
    }

    kapott = tomb_osszeg(e, 4);

    if (kapott == -10) {
        printf("[OK] Teszt 5\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 5\n");
        printf("        Vart:   -10\n");
        printf("        Kapott: %d\n", kapott);
    }

    printf("8. feladat pontszama: %d / 10\n", pont);

    return pont;
}

int teszt9(void)
{
    int pont = 0;

    int a[] = { 1, 5, 3 };
    int b[] = { 100, 20, 30 };
    int c[] = { -10, -3, -20 };
    int d[] = { 7 };
    int e[] = { 2, 9, 4, 15, 3 };

    int kapott;

    printf("\n========================================\n");
    printf("9. FELADAT - MAXIMUM\n");
    printf("========================================\n");

    kapott = maximum(a, 3);

    if (kapott == 5) {
        printf("[OK] Teszt 1\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 1\n");
        printf("        Vart:   5\n");
        printf("        Kapott: %d\n", kapott);
    }

    kapott = maximum(b, 3);

    if (kapott == 100) {
        printf("[OK] Teszt 2\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 2\n");
        printf("        Vart:   100\n");
        printf("        Kapott: %d\n", kapott);
    }

    kapott = maximum(c, 3);

    if (kapott == -3) {
        printf("[OK] Teszt 3\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 3\n");
        printf("        Vart:   -3\n");
        printf("        Kapott: %d\n", kapott);
    }

    kapott = maximum(d, 1);

    if (kapott == 7) {
        printf("[OK] Teszt 4\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 4\n");
        printf("        Vart:   7\n");
        printf("        Kapott: %d\n", kapott);
    }

    kapott = maximum(e, 5);

    if (kapott == 15) {
        printf("[OK] Teszt 5\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 5\n");
        printf("        Vart:   15\n");
        printf("        Kapott: %d\n", kapott);
    }

    printf("9. feladat pontszama: %d / 10\n", pont);

    return pont;
}

int teszt10(void)
{
    int pont = 0;

    const char* szoveg[] = {
        "alma",
        "program",
        "HELLO",
        "xyz",
        "Education"
    };

    int vart[] = { 2, 2, 2, 0, 5 };

    int i;

    printf("\n========================================\n");
    printf("10. FELADAT - MAGANHANGZOK\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        int kapott = maganhangzok(szoveg[i]);

        if (kapott == vart[i]) {
            printf("[OK] \"%s\" -> %d\n",
                szoveg[i], kapott);

            pont += 2;
        } else {
            printf("[HIBAS] \"%s\"\n", szoveg[i]);
            printf("        Vart:   %d\n", vart[i]);
            printf("        Kapott: %d\n", kapott);
        }
    }

    printf("10. feladat pontszama: %d / 10\n", pont);

    return pont;
}

/*
============================================================
                     FOPROGRAM
============================================================
*/

int main(void)
{
    int osszpont = 0;

    printf("========================================\n");
    printf("       C PROGRAMOZASI FELADATSOR\n");
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

    printf("\n\n");
    printf("========================================\n");
    printf("              VEGSO EREDMENY\n");
    printf("========================================\n");

    printf("\nOSSZPONTSZAM: %d / 100\n", osszpont);

    printf("\n");

    if (osszpont == 100) {
        printf("Minden teszt sikeres!\n");
    } else {
        printf("Hibas tesztek szama: %d\n",
            (100 - osszpont) / 2);

        printf("Sikeres tesztek szama: %d / 50\n",
            osszpont / 2);
    }

    printf("\n========================================\n");

    return 0;
}
