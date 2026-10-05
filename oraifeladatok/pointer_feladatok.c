/*
============================================================
              C PROGRAMOZAS - POINTER FELADATOK
============================================================

Ebben a fajlban 10, egyre nehezedo pointeres feladat van.

SZABALYOK:

1. Csak a TODO-val jelolt reszeket modositsd!
2. A tesztelo kodot NE modositsd!
3. A main() fuggvenyt NE modositsd!
4. Minden feladat 10 pontot er.
5. Minden feladatnal 5 teszt fut.
6. Egy sikeres teszt 2 pont.
7. Maximum pontszam: 100 pont.

FIGYELEM!

Pointereknel egy hibas cim hasznalata a program
leallasat is okozhatja.

============================================================
*/

#include <stdio.h>
#include <stdlib.h>

/*
============================================================
1. FELADAT - ERTEK NOVELESE POINTERREL
============================================================

Keszits egy novel() nevu fuggvenyt.

A fuggveny egy int tipusu valtozo CIMET kapja meg.

A feladat:
A pointeren keresztul noveld meg a valtozo erteket 1-gyel.

Pelda:

int x = 5;

novel(&x);

Ezutan:

x == 6


Tipp:

A pointer altal mutatott ertek:

*pointer


Maximum pontszam: 10 pont.
============================================================
*/

void novel(int* szam)
{
    // TODO: ide ird az 1. feladat megoldasat

}

/*
============================================================
2. FELADAT - KET VALTOZO CSEREJE
============================================================

Keszits egy csere() nevu fuggvenyt.

A fuggveny ket int valtozo cimet kapja meg.

Csereld meg a ket valtozo erteket!

Pelda:

int a = 5;
int b = 10;

csere(&a, &b);

Ezutan:

a == 10
b == 5


Tipp:

Szukseg lesz egy ideiglenes valtozora.

Pelda:

int temp;


Maximum pontszam: 10 pont.
============================================================
*/

void csere(int* a, int* b)
{
    // TODO: ide ird a 2. feladat megoldasat

}

/*
============================================================
3. FELADAT - TOMB OSSZEGE POINTERREL
============================================================

Keszits egy pointer_osszeg() nevu fuggvenyt.

A fuggveny kap:

- egy tomb elso elemehez mutato pointert
- a tomb meretet

Add ossze a tomb elemeit POINTER hasznalataval.

Pelda:

int tomb[] = { 2, 4, 6 };

pointer_osszeg(tomb, 3) -> 12


Probald meg a megoldast tomb[index] hasznalata nelkul!

Hasznalhatsz ilyeneket:

*pointer
pointer++
*(pointer + i)


Maximum pontszam: 10 pont.
============================================================
*/

int pointer_osszeg(const int* tomb, int meret)
{
    int osszeg = 0;

    // TODO: ide ird a 3. feladat megoldasat

    return osszeg;
}

/*
============================================================
4. FELADAT - MINIMUM ES MAXIMUM POINTERREL
============================================================

Keszits egy min_max() nevu fuggvenyt.

A fuggveny negy parameter kap:

1. tomb
2. tomb merete
3. minimum valtozo cime
4. maximum valtozo cime


A fuggveny keresse meg a tomb:

- legkisebb elemet
- legnagyobb elemet

Az eredmenyt a min es max pointereken keresztul add vissza.


Pelda:

int tomb[] = { 4, 8, 2, 10 };

int minimum;
int maximum;

min_max(tomb, 4, &minimum, &maximum);


Ezutan:

minimum == 2
maximum == 10


Maximum pontszam: 10 pont.
============================================================
*/

void min_max(const int* tomb, int meret, int* minimum, int* maximum)
{
    // TODO: ide ird a 4. feladat megoldasat
}

/*
============================================================
5. FELADAT - HATARNAL NAGYOBB ELEMEK
============================================================

Keszits egy nagyobb_mint() nevu fuggvenyt.

A fuggveny kap:

- egy tombot
- a tomb meretet
- egy hatarerteket

Szamold meg, hany elem NAGYOBB a hatarerteknel.

A tomb elemeit pointerrel vizsgald!


Pelda:

int tomb[] = { 2, 8, 3, 10, 5 };

nagyobb_mint(tomb, 5, 5) -> 2

Mert:

8 > 5
10 > 5


Maximum pontszam: 10 pont.
============================================================
*/

int nagyobb_mint(const int* tomb, int meret, int hatar)
{
    int db = 0;

    // TODO: ide ird az 5. feladat megoldasat

    return db;
}

/*
============================================================
6. FELADAT - TOMB MASOLASA POINTERREL
============================================================

Keszits egy masol() nevu fuggvenyt.

A fuggveny kap:

- egy forras tombot
- egy cel tombot
- a tomb meretet

Masold at a forras tomb minden elemet a cel tombbe.

Pelda:

forras:

{ 2, 4, 6 }

masolas utan a cel:

{ 2, 4, 6 }


A masolashoz pointereket hasznalj.


Maximum pontszam: 10 pont.
============================================================
*/

void masol(const int* forras, int* cel, int meret)
{
    // TODO: ide ird a 6. feladat megoldasat
}

/*
============================================================
7. FELADAT - TOMB MEGFORDITASA POINTEREKKEL
============================================================

Keszits egy megfordit() nevu fuggvenyt.

A fuggveny egy tombot es annak meretet kapja.

Forditsd meg a tomb elemeinek sorrendjet!


Pelda:

{ 1, 2, 3, 4, 5 }

eredmeny:

{ 5, 4, 3, 2, 1 }


Hasznalj ket pointert!

Az egyik mutasson a tomb elejere.

A masik mutasson a tomb vegere.

Ezutan haladjanak egymas fele.


Pelda:

int* bal = tomb;

int* jobb = tomb + meret - 1;


Maximum pontszam: 10 pont.
============================================================
*/

void megfordit(int* tomb, int meret)
{
    // TODO: ide ird a 7. feladat megoldasat
}

/*
============================================================
8. FELADAT - ELEM KERESESE
============================================================

Keszits egy keres() nevu fuggvenyt.

A fuggveny kap:

- egy tombot
- a tomb meretet
- egy keresett szamot

A fuggveny adjon vissza egy POINTERT arra az elemre,
ahol a keresett szam ELOSZOR megtalalhato.


Pelda:

int tomb[] = { 5, 2, 8, 2 };

int* p = keres(tomb, 4, 2);


A pointernek a masodik elemre kell mutatnia.


Ha az elem nincs benne a tombben:

return NULL;


Pelda:

keres(tomb, 4, 100) -> NULL


Maximum pontszam: 10 pont.
============================================================
*/

const int* keres(const int* tomb, int meret, int keresett)
{
    // TODO: ide ird a 8. feladat megoldasat

    return NULL;
}

/*
============================================================
9. FELADAT - STRING HOSSZA POINTERREL
============================================================

Keszits egy szoveghossz() nevu fuggvenyt.

A fuggveny egy karakterlanc elso karakterere mutato
pointert kap.

Szamold meg, hany karakterbol all a szoveg.

NE hasznald a strlen() fuggvenyt!


Pelda:

"alma"

eredmeny:

4


A karakterlanc veget a:

'\0'

karakter jelzi.


Pelda megoldasi gondolat:

amig (*pointer != '\0')
{
    ...
}


Maximum pontszam: 10 pont.
============================================================
*/

int szoveghossz(const char* szoveg)
{
    int hossz = 0;

    // TODO: ide ird a 9. feladat megoldasat

    return hossz;
}

/*
============================================================
10. FELADAT - DINAMIKUS TOMB POINTERREL
============================================================

Keszits egy pozitivak_masolasa() nevu fuggvenyt.

A fuggveny kap:

- egy egesz szamokat tartalmazo tombot
- a tomb meretet
- egy uj_meret nevu valtozo cimet


A feladat:

1. Szamold meg a pozitiv elemeket.

2. Foglalj pontosan akkora uj tombot malloc() segitsegevel,
   ahany pozitiv elem van.

3. Masold bele az uj tombbe a pozitiv szamokat.

4. Az uj_meret pointeren keresztul add vissza az uj tomb
   meretet.

5. A fuggveny az uj tomb cimével terjen vissza.


Pelda:

eredeti tomb:

{ -2, 5, 0, 8, -3, 10 }

eredmeny:

{ 5, 8, 10 }

uj_meret:

3


Ha nincs pozitiv elem:

*uj_meret = 0;

return NULL;


Pelda memoriafoglalas:

int* uj_tomb = malloc(db * sizeof(int));


FONTOS:

A malloc() altal letrehozott memoria kesobb free()
segitsegevel felszabaditando.


Maximum pontszam: 10 pont.
============================================================
*/

int* pozitivak_masolasa(const int* tomb, int meret, int* uj_meret)
{
    // TODO: ide ird a 10. feladat megoldasat

    *uj_meret = 0;

    return NULL;
}

/*
============================================================
                  TESZTELO RENDSZER
============================================================

AZ EZ ALATTI KODOT NE MODOSITSD!

============================================================
*/

int tombok_egyeznek(const int* a, const int* b, int meret)
{
    int i;

    for (i = 0; i < meret; i++) {
        if (*(a + i) != *(b + i)) {
            return 0;
        }
    }

    return 1;
}

void tomb_kiir(const int* tomb, int meret)
{
    int i;

    printf("{ ");

    for (i = 0; i < meret; i++) {
        printf("%d", *(tomb + i));

        if (i < meret - 1) {
            printf(", ");
        }
    }

    printf(" }");
}

/*
============================================================
1. FELADAT TESZT
============================================================
*/

int teszt1(void)
{
    int eredeti[] = { 0, 5, -2, 99, -100 };
    int vart[] = { 1, 6, -1, 100, -99 };

    int pont = 0;
    int i;

    printf("\n========================================\n");
    printf("1. FELADAT - ERTEK NOVELESE\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        int x = eredeti[i];

        novel(&x);

        if (x == vart[i]) {
            printf("[OK] %d -> %d\n", eredeti[i], x);
            pont += 2;
        } else {
            printf("[HIBAS] %d novelese\n", eredeti[i]);
            printf("        Vart:   %d\n", vart[i]);
            printf("        Kapott: %d\n", x);
        }
    }

    printf("Pontszam: %d / 10\n", pont);

    return pont;
}

/*
============================================================
2. FELADAT TESZT
============================================================
*/

int teszt2(void)
{
    int a[] = { 1, 10, -5, 0, 100 };
    int b[] = { 2, -4, 8, 0, -100 };

    int vart_a[] = { 2, -4, 8, 0, -100 };
    int vart_b[] = { 1, 10, -5, 0, 100 };

    int pont = 0;
    int i;

    printf("\n========================================\n");
    printf("2. FELADAT - CSERE\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        int x = a[i];
        int y = b[i];

        csere(&x, &y);

        if (x == vart_a[i] && y == vart_b[i]) {
            printf("[OK] Teszt %d\n", i + 1);
            pont += 2;
        } else {
            printf("[HIBAS] Teszt %d\n", i + 1);
            printf("        Vart:   %d, %d\n",
                vart_a[i], vart_b[i]);

            printf("        Kapott: %d, %d\n",
                x, y);
        }
    }

    printf("Pontszam: %d / 10\n", pont);

    return pont;
}

/*
============================================================
3. FELADAT TESZT
============================================================
*/

int teszt3(void)
{
    int pont = 0;

    int a[] = { 1, 2, 3 };
    int b[] = { 10, 20, 30, 40 };
    int c[] = { -5, 5 };
    int d[] = { -1, -2, -3 };
    int e[] = { 100 };

    const int* tombok[] = { a, b, c, d, e };
    int meretek[] = { 3, 4, 2, 3, 1 };
    int vart[] = { 6, 100, 0, -6, 100 };

    int i;

    printf("\n========================================\n");
    printf("3. FELADAT - POINTER OSSZEG\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        int kapott = pointer_osszeg(tombok[i], meretek[i]);

        if (kapott == vart[i]) {
            printf("[OK] Teszt %d\n", i + 1);
            pont += 2;
        } else {
            printf("[HIBAS] Teszt %d\n", i + 1);
            printf("        Vart:   %d\n", vart[i]);
            printf("        Kapott: %d\n", kapott);
        }
    }

    printf("Pontszam: %d / 10\n", pont);

    return pont;
}

/*
============================================================
4. FELADAT TESZT
============================================================
*/

int teszt4(void)
{
    int pont = 0;

    int a[] = { 4, 8, 2, 10 };
    int b[] = { -5, -20, -1 };
    int c[] = { 7 };
    int d[] = { 5, 5, 5 };
    int e[] = { -10, 100, 0, 25 };

    const int* tombok[] = { a, b, c, d, e };
    int meretek[] = { 4, 3, 1, 3, 4 };

    int vart_min[] = { 2, -20, 7, 5, -10 };
    int vart_max[] = { 10, -1, 7, 5, 100 };

    int i;

    printf("\n========================================\n");
    printf("4. FELADAT - MINIMUM ES MAXIMUM\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        int minimum = 0;
        int maximum = 0;

        min_max(tombok[i], meretek[i],
            &minimum, &maximum);

        if (minimum == vart_min[i] && maximum == vart_max[i]) {
            printf("[OK] Teszt %d\n", i + 1);
            pont += 2;
        } else {
            printf("[HIBAS] Teszt %d\n", i + 1);

            printf("        Vart:   min=%d max=%d\n",
                vart_min[i], vart_max[i]);

            printf("        Kapott: min=%d max=%d\n",
                minimum, maximum);
        }
    }

    printf("Pontszam: %d / 10\n", pont);

    return pont;
}

/*
============================================================
5. FELADAT TESZT
============================================================
*/

int teszt5(void)
{
    int pont = 0;

    int a[] = { 2, 8, 3, 10, 5 };
    int b[] = { 1, 2, 3 };
    int c[] = { -5, -1, 0, 5 };
    int d[] = { 10, 10, 10 };
    int e[] = { 100 };

    const int* tombok[] = { a, b, c, d, e };
    int meretek[] = { 5, 3, 4, 3, 1 };
    int hatar[] = { 5, 0, -2, 10, 50 };

    int vart[] = { 2, 3, 3, 0, 1 };

    int i;

    printf("\n========================================\n");
    printf("5. FELADAT - HATARNAL NAGYOBB\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        int kapott = nagyobb_mint(tombok[i],
            meretek[i],
            hatar[i]);

        if (kapott == vart[i]) {
            printf("[OK] Teszt %d\n", i + 1);
            pont += 2;
        } else {
            printf("[HIBAS] Teszt %d\n", i + 1);
            printf("        Vart:   %d\n", vart[i]);
            printf("        Kapott: %d\n", kapott);
        }
    }

    printf("Pontszam: %d / 10\n", pont);

    return pont;
}

/*
============================================================
6. FELADAT TESZT
============================================================
*/

int teszt6(void)
{
    int pont = 0;

    int a[] = { 1, 2, 3 };
    int b[] = { 10, 20, 30, 40 };
    int c[] = { -5, 5 };
    int d[] = { 7 };
    int e[] = { -1, -2, -3, -4, -5 };

    const int* tombok[] = { a, b, c, d, e };
    int meretek[] = { 3, 4, 2, 1, 5 };

    int i;

    printf("\n========================================\n");
    printf("6. FELADAT - TOMB MASOLASA\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        int cel[10] = { 0 };

        masol(tombok[i], cel, meretek[i]);

        if (tombok_egyeznek(tombok[i], cel, meretek[i])) {
            printf("[OK] Teszt %d\n", i + 1);
            pont += 2;
        } else {
            printf("[HIBAS] Teszt %d\n", i + 1);

            printf("        Vart:   ");
            tomb_kiir(tombok[i], meretek[i]);

            printf("\n        Kapott: ");
            tomb_kiir(cel, meretek[i]);

            printf("\n");
        }
    }

    printf("Pontszam: %d / 10\n", pont);

    return pont;
}

/*
============================================================
7. FELADAT TESZT
============================================================
*/

int teszt7(void)
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

    int* tombok[] = { a, b, c, d, e };
    int* vart[] = { va, vb, vc, vd, ve };

    int meretek[] = { 5, 4, 1, 3, 4 };

    int i;

    printf("\n========================================\n");
    printf("7. FELADAT - MEGFORDITAS\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        megfordit(tombok[i], meretek[i]);

        if (tombok_egyeznek(
                tombok[i],
                vart[i],
                meretek[i])) {
            printf("[OK] Teszt %d\n", i + 1);
            pont += 2;
        } else {
            printf("[HIBAS] Teszt %d\n", i + 1);

            printf("        Vart:   ");
            tomb_kiir(vart[i], meretek[i]);

            printf("\n        Kapott: ");
            tomb_kiir(tombok[i], meretek[i]);

            printf("\n");
        }
    }

    printf("Pontszam: %d / 10\n", pont);

    return pont;
}

/*
============================================================
8. FELADAT TESZT
============================================================
*/

int teszt8(void)
{
    int pont = 0;

    int tomb[] = { 5, 2, 8, 2, 9 };

    int keresett[] = { 5, 2, 9, 100, 8 };

    const int* vart[] = {
        &tomb[0],
        &tomb[1],
        &tomb[4],
        NULL,
        &tomb[2]
    };

    int i;

    printf("\n========================================\n");
    printf("8. FELADAT - KERESES\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        const int* kapott = keres(tomb, 5, keresett[i]);

        if (kapott == vart[i]) {
            printf("[OK] %d keresese\n", keresett[i]);
            pont += 2;
        } else {
            printf("[HIBAS] %d keresese\n", keresett[i]);

            if (vart[i] == NULL) {
                printf("        Vart: NULL\n");
            } else {
                printf("        Vart index: %lld\n",
                    (long long)(vart[i] - tomb));
            }

            if (kapott == NULL) {
                printf("        Kapott: NULL\n");
            } else if (kapott >= tomb && kapott < tomb + 5) {
                printf("        Kapott index: %lld\n",
                    (long long)(kapott - tomb));
            } else {
                printf("        Kapott: hibas pointer\n");
            }
        }
    }

    printf("Pontszam: %d / 10\n", pont);

    return pont;
}

/*
============================================================
9. FELADAT TESZT
============================================================
*/

int teszt9(void)
{
    int pont = 0;

    const char* szovegek[] = {
        "",
        "alma",
        "Hello",
        "C program",
        "12345"
    };

    int vart[] = {
        0,
        4,
        5,
        9,
        5
    };

    int i;

    printf("\n========================================\n");
    printf("9. FELADAT - STRING HOSSZA\n");
    printf("========================================\n");

    for (i = 0; i < 5; i++) {
        int kapott = szoveghossz(szovegek[i]);

        if (kapott == vart[i]) {
            printf("[OK] \"%s\" -> %d\n",
                szovegek[i],
                kapott);

            pont += 2;
        } else {
            printf("[HIBAS] \"%s\"\n",
                szovegek[i]);

            printf("        Vart:   %d\n", vart[i]);
            printf("        Kapott: %d\n", kapott);
        }
    }

    printf("Pontszam: %d / 10\n", pont);

    return pont;
}

/*
============================================================
10. FELADAT TESZT
============================================================
*/

int pozitiv_teszt(
    const int* tomb,
    int meret,
    const int* vart,
    int vart_meret)
{
    int uj_meret = -1;

    int* kapott = pozitivak_masolasa(
        tomb,
        meret,
        &uj_meret);

    int jo = 1;

    if (uj_meret != vart_meret) {
        jo = 0;
    }

    if (vart_meret == 0) {
        if (kapott != NULL) {
            jo = 0;
        }
    } else {
        if (kapott == NULL) {
            jo = 0;
        } else if (!tombok_egyeznek(
                       kapott,
                       vart,
                       vart_meret)) {
            jo = 0;
        }
    }

    if (kapott != NULL) {
        free(kapott);
    }

    return jo;
}

int teszt10(void)
{
    int pont = 0;

    int a[] = { 1, -2, 3, 0, 5 };
    int va[] = { 1, 3, 5 };

    int b[] = { -1, -2, -3 };

    int c[] = { 7 };
    int vc[] = { 7 };

    int d[] = { 0, 1, 0, 2 };
    int vd[] = { 1, 2 };

    int e[] = { -5, 10, -1, 20, 30 };
    int ve[] = { 10, 20, 30 };

    printf("\n========================================\n");
    printf("10. FELADAT - DINAMIKUS MEMORIA\n");
    printf("========================================\n");

    if (pozitiv_teszt(a, 5, va, 3)) {
        printf("[OK] Teszt 1\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 1\n");
    }

    if (pozitiv_teszt(b, 3, NULL, 0)) {
        printf("[OK] Teszt 2\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 2\n");
    }

    if (pozitiv_teszt(c, 1, vc, 1)) {
        printf("[OK] Teszt 3\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 3\n");
    }

    if (pozitiv_teszt(d, 4, vd, 2)) {
        printf("[OK] Teszt 4\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 4\n");
    }

    if (pozitiv_teszt(e, 5, ve, 3)) {
        printf("[OK] Teszt 5\n");
        pont += 2;
    } else {
        printf("[HIBAS] Teszt 5\n");
    }

    printf("Pontszam: %d / 10\n", pont);

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
    printf("        C - POINTER FELADATSOR\n");
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

    printf("\nSikeres tesztek: %d / 50\n",
        osszpont / 2);

    printf("Hibas tesztek:   %d / 50\n",
        (100 - osszpont) / 2);

    if (osszpont == 100) {
        printf("\nMinden teszt sikeres!\n");
    }

    printf("\n========================================\n");

    return 0;
}
