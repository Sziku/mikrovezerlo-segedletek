#include <stdio.h>

/*
=============================================================
 C ALAPOK - MATEMATIKAI ES ALGORITMUS DOLGOZAT
=============================================================

Ido: 90 perc
Maximum pontszam: 20.00 pont

SZABALYOK:
- A megoldasokat a TODO-val jelolt fuggvenyekben kell megirni.
- A main() fuggvenyt es a teszteket NE modositsd!
- Ne hozz letre uj fuggvenyeket!
- A tomboket indexelessel kezeld.
- A tesztek normal es specialis eseteket is ellenoriznek.

Jegyek:
5: 18.00 - 20.00 pont
4: 16.00 - 17.99 pont
3: 13.00 - 15.99 pont
2: 10.00 - 12.99 pont
1:  0.00 -  9.99 pont
=============================================================
*/


/*
=============================================================
1. FELADAT - LINEARIS EGYENLET                     2.50 pont
=============================================================

Oldd meg az alabbi alaku egyenleteket:

    a * x + b = 0

A tombokban egyszerre tobb teszteset erkezik.
Minden i indexhez allitsd be a statusz[i] es x[i] erteket.

statusz jelentese:

0 = nincs megoldas
1 = pontosan egy megoldas van
2 = vegtelen sok megoldas van

Ha pontosan egy megoldas van:
    x = -b / a

Ha nincs megoldas vagy vegtelen sok megoldas van:
    x = 0.0

Pelda:
a = 2, b = -6
2*x - 6 = 0
x = 3

FONTOS:
- valos osztast hasznalj
- kezeld az a == 0 esetet
=============================================================
*/
void linearis_egyenlet(
    const int a[],
    const int b[],
    int meret,
    int statusz[],
    double x[])
{
    /* TODO - 1. FELADAT */

}


/*
=============================================================
2. FELADAT - TORT EGYSZERUSITESE                   3.00 pont
=============================================================

Minden i indexhez tartozik egy tort:

    szamlalo[i] / nevezo[i]

Feladat:
- ellenorizd, hogy a nevezo nem 0
- egyszerusitsd a tortet a leheto legjobban
- a nevezo mindig pozitiv legyen

Ha a nevezo 0:
    statusz[i] = 0
    uj_szamlalo[i] = 0
    uj_nevezo[i] = 0

Ha a tort ervenyes:
    statusz[i] = 1

Pelda:
 6 / 8   ->  3 / 4
-8 / 12  -> -2 / 3
 4 / -6  -> -2 / 3
 0 / -7  ->  0 / 1

Az egyszerusiteshez hasznalhatod az euklideszi algoritmust,
de ne hozz letre kulon fuggvenyt.
=============================================================
*/
void tort_egyszerusit(
    const int szamlalo[],
    const int nevezo[],
    int meret,
    int statusz[],
    int uj_szamlalo[],
    int uj_nevezo[])
{
    /* TODO - 2. FELADAT */

}


/*
=============================================================
3. FELADAT - SZAMJEGYEK ELEMZESE                  3.50 pont
=============================================================

Minden szamhoz hatarozd meg:

- hany szamjegybol all
- mennyi a szamjegyeinek osszege
- mennyi a szamjegyek forditott sorrendjebol kapott szam
- palindrom-e

A db, osszeg es forditott meghatarozasakor a negativ elojelet
hagyd figyelmen kivul.

palindrom:
1 = igen
0 = nem

A negativ szamot NE tekintsd palindromnak.

A 0:
- 1 darab szamjegy
- szamjegyosszege 0
- forditottja 0
- palindrom

Pelda:
120 -> db=3, osszeg=3, forditott=21, palindrom=0
1221 -> db=4, osszeg=6, forditott=1221, palindrom=1

Ne alakitsd a szamot szovegge!
=============================================================
*/
void szamjegy_elemzes(
    const int szam[],
    int meret,
    int db[],
    int osszeg[],
    int forditott[],
    int palindrom[])
{
    /* TODO - 3. FELADAT */

}


/*
=============================================================
4. FELADAT - OSZTOK ELEMZESE                     4.00 pont
=============================================================

Minden szamhoz hatarozd meg:

- pozitiv osztoinak darabszamat
- VALODI osztoinak osszeget
  (a szamot magat nem szamitjuk bele)
- a szam tipusat

tipus:

0 = ervenytelen (szam <= 0)
1 = primszam
2 = tokeletes szam
3 = hianyos szam
4 = bovelkedo szam

Definiciok:

prim:
  pontosan ket pozitiv osztoja van

tokeletes:
  a valodi osztoinak osszege megegyezik a szammal

hianyos:
  a valodi osztoinak osszege kisebb a szamnal

bovelkedo:
  a valodi osztoinak osszege nagyobb a szamnal

Pelda:
6 osztoi: 1, 2, 3, 6
oszto_db = 4
valodi_osszeg = 1 + 2 + 3 = 6
tipus = 2
=============================================================
*/
void oszto_elemzes(
    const int szam[],
    int meret,
    int oszto_db[],
    int valodi_osszeg[],
    int tipus[])
{
    /* TODO - 4. FELADAT */

}


/*
=============================================================
5. FELADAT - RENDEZES ES DUPLIKATUMOK TORLESE     7.00 pont
=============================================================

A fuggveny egyetlen tombot kap.

Feladat:

1. Rendezd a tomb elso 'meret' elemet NOVeKVO sorrendbe.
2. Tavolitsd el a duplikalt ertekeket.
3. A kulonbozo elemek a tomb ELEJEN, novekvo sorrendben
   szerepeljenek.
4. A fuggveny adja vissza a kulonbozo elemek szamat.

Nem kell a tomb maradek reszet torolni vagy nullazni.

Pelda:

{ 5, 2, 5, 1, 3, 2 }

rendezes utan:
{ 1, 2, 2, 3, 5, 5 }

duplikatumok eltavolitasa utan a tomb eleje:
{ 1, 2, 3, 5, ... }

visszateresi ertek: 4

Specialis eset:
Ha meret == 0, a fuggveny 0-t adjon vissza.

NE hasznald a qsort() fuggvenyt!
Hasznalhatsz buborek- vagy kivalasztasos rendezest.
=============================================================
*/
int rendez_duplikatum(int tomb[], int meret)
{
    /* TODO - 5. FELADAT */

    return -1;
}


int main(void)
{
    double osszpont = 0.0;

    printf("=============================================\n");
    printf(" C ALAPOK - MATEMATIKAI ES ALGORITMUS TESZT\n");
    printf("=============================================\n");
    printf("Ido: 90 perc | Maximum: 20.00 pont\n\n");


    /* ==========================================================
       1. FELADAT TESZTJEI                               2.50 pont
       ========================================================== */
    {
        int a[5] = { 2, -4, 0, 0, 5 };
        int b[5] = { -6, -8, 7, 0, 0 };

        int statusz[5] = { -1, -1, -1, -1, -1 };
        double x[5] = { -999, -999, -999, -999, -999 };

        linearis_egyenlet(a, b, 5, statusz, x);

        int vart_statusz[5] = { 1, 1, 0, 2, 1 };
        double vart_x[5] = { 3.0, -2.0, 0.0, 0.0, 0.0 };
        double pontok[5] = { 0.25, 0.35, 0.50, 0.65, 0.75 };
        double fpont = 0.0;

        printf("=== 1. LINEARIS EGYENLET ===\n");

        for (int i = 0; i < 5; i++)
        {
            double diff = x[i] - vart_x[i];
            if (diff < 0)
                diff = -diff;

            if (statusz[i] == vart_statusz[i] && diff < 0.000001)
            {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else
            {
                printf("[HIBAS] Teszt %d  vart: statusz=%d x=%.2f | kapott: statusz=%d x=%.2f\n",
                    i + 1, vart_statusz[i], vart_x[i], statusz[i], x[i]);
            }
        }

        printf("1. feladat: %.2f / 2.50\n\n", fpont);
        osszpont += fpont;
    }


    /* ==========================================================
       2. FELADAT TESZTJEI                               3.00 pont
       ========================================================== */
    {
        int szamlalo[5] = { 6, -8, 0, 5, -4 };
        int nevezo[5] = { 8, 12, -7, 0, -6 };

        int statusz[5] = { -1, -1, -1, -1, -1 };
        int uj_szamlalo[5] = { -999, -999, -999, -999, -999 };
        int uj_nevezo[5] = { -999, -999, -999, -999, -999 };

        tort_egyszerusit(
            szamlalo, nevezo, 5,
            statusz, uj_szamlalo, uj_nevezo);

        int vart_statusz[5] = { 1, 1, 1, 0, 1 };
        int vart_szamlalo[5] = { 3, -2, 0, 0, 2 };
        int vart_nevezo[5] = { 4, 3, 1, 0, 3 };
        double pontok[5] = { 0.35, 0.45, 0.55, 0.75, 0.90 };
        double fpont = 0.0;

        printf("=== 2. TORT EGYSZERUSITESE ===\n");

        for (int i = 0; i < 5; i++)
        {
            if (statusz[i] == vart_statusz[i] &&
                uj_szamlalo[i] == vart_szamlalo[i] &&
                uj_nevezo[i] == vart_nevezo[i])
            {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else
            {
                printf("[HIBAS] Teszt %d\n", i + 1);
                printf("        vart:   statusz=%d tort=%d/%d\n",
                    vart_statusz[i], vart_szamlalo[i], vart_nevezo[i]);
                printf("        kapott: statusz=%d tort=%d/%d\n",
                    statusz[i], uj_szamlalo[i], uj_nevezo[i]);
            }
        }

        printf("2. feladat: %.2f / 3.00\n\n", fpont);
        osszpont += fpont;
    }


    /* ==========================================================
       3. FELADAT TESZTJEI                               3.50 pont
       ========================================================== */
    {
        int szam[5] = { 7, 1234, 0, -121, 1001 };

        int db[5] = { -1, -1, -1, -1, -1 };
        int osszeg[5] = { -1, -1, -1, -1, -1 };
        int forditott[5] = { -1, -1, -1, -1, -1 };
        int palindrom[5] = { -1, -1, -1, -1, -1 };

        szamjegy_elemzes(
            szam, 5,
            db, osszeg, forditott, palindrom);

        int vart_db[5] = { 1, 4, 1, 3, 4 };
        int vart_osszeg[5] = { 7, 10, 0, 4, 2 };
        int vart_forditott[5] = { 7, 4321, 0, 121, 1001 };
        int vart_palindrom[5] = { 1, 0, 1, 0, 1 };

        double pontok[5] = { 0.40, 0.55, 0.65, 0.85, 1.05 };
        double fpont = 0.0;

        printf("=== 3. SZAMJEGYEK ELEMZESE ===\n");

        for (int i = 0; i < 5; i++)
        {
            if (db[i] == vart_db[i] &&
                osszeg[i] == vart_osszeg[i] &&
                forditott[i] == vart_forditott[i] &&
                palindrom[i] == vart_palindrom[i])
            {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else
            {
                printf("[HIBAS] Teszt %d\n", i + 1);
                printf("        vart:   db=%d osszeg=%d forditott=%d palindrom=%d\n",
                    vart_db[i], vart_osszeg[i], vart_forditott[i], vart_palindrom[i]);
                printf("        kapott: db=%d osszeg=%d forditott=%d palindrom=%d\n",
                    db[i], osszeg[i], forditott[i], palindrom[i]);
            }
        }

        printf("3. feladat: %.2f / 3.50\n\n", fpont);
        osszpont += fpont;
    }


    /* ==========================================================
       4. FELADAT TESZTJEI                               4.00 pont
       ========================================================== */
    {
        int szam[5] = { 13, 6, 12, 8, 0 };

        int oszto_db[5] = { -1, -1, -1, -1, -1 };
        int valodi_osszeg[5] = { -1, -1, -1, -1, -1 };
        int tipus[5] = { -1, -1, -1, -1, -1 };

        oszto_elemzes(
            szam, 5,
            oszto_db, valodi_osszeg, tipus);

        int vart_db[5] = { 2, 4, 6, 4, 0 };
        int vart_osszeg[5] = { 1, 6, 16, 7, 0 };
        int vart_tipus[5] = { 1, 2, 4, 3, 0 };

        double pontok[5] = { 0.45, 0.65, 0.80, 0.90, 1.20 };
        double fpont = 0.0;

        printf("=== 4. OSZTOK ELEMZESE ===\n");

        for (int i = 0; i < 5; i++)
        {
            if (oszto_db[i] == vart_db[i] &&
                valodi_osszeg[i] == vart_osszeg[i] &&
                tipus[i] == vart_tipus[i])
            {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else
            {
                printf("[HIBAS] Teszt %d\n", i + 1);
                printf("        vart:   oszto_db=%d valodi_osszeg=%d tipus=%d\n",
                    vart_db[i], vart_osszeg[i], vart_tipus[i]);
                printf("        kapott: oszto_db=%d valodi_osszeg=%d tipus=%d\n",
                    oszto_db[i], valodi_osszeg[i], tipus[i]);
            }
        }

        printf("4. feladat: %.2f / 4.00\n\n", fpont);
        osszpont += fpont;
    }


    /* ==========================================================
       5. FELADAT TESZTJEI                               7.00 pont
       ========================================================== */
    {
        int tomb[6][6] = {
            { 5, 2, 5, 1, 3, 2 },
            { 1, 2, 3, 4, 5, 6 },
            { 6, 5, 4, 3, 2, 1 },
            { -2, -2, 0, 3, 3, -2 },
            { 7, 7, 7, 7, 7, 0 },
            { 99, 88, 77, 66, 55, 44 }
        };

        int meret[6] = { 6, 6, 6, 6, 5, 0 };
        int uj_meret[6];

        for (int i = 0; i < 6; i++)
        {
            uj_meret[i] = rendez_duplikatum(tomb[i], meret[i]);
        }

        int vart[6][6] = {
            { 1, 2, 3, 5, 0, 0 },
            { 1, 2, 3, 4, 5, 6 },
            { 1, 2, 3, 4, 5, 6 },
            { -2, 0, 3, 0, 0, 0 },
            { 7, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0 }
        };

        int vart_meret[6] = { 4, 6, 6, 3, 1, 0 };
        double pontok[6] = { 0.50, 0.75, 0.90, 1.35, 1.50, 2.00 };
        double fpont = 0.0;

        printf("=== 5. RENDEZES ES DUPLIKATUM TORLES ===\n");

        for (int i = 0; i < 6; i++)
        {
            int jo = 1;

            if (uj_meret[i] != vart_meret[i])
            {
                jo = 0;
            }
            else
            {
                for (int j = 0; j < vart_meret[i]; j++)
                {
                    if (tomb[i][j] != vart[i][j])
                    {
                        jo = 0;
                    }
                }
            }

            if (jo)
            {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else
            {
                printf("[HIBAS] Teszt %d\n", i + 1);
                printf("        vart uj meret: %d | kapott: %d\n",
                    vart_meret[i], uj_meret[i]);

                printf("        vart tomb eleje:   { ");
                for (int j = 0; j < vart_meret[i]; j++)
                {
                    printf("%d", vart[i][j]);
                    if (j < vart_meret[i] - 1)
                        printf(", ");
                }
                printf(" }\n");

                if (uj_meret[i] >= 0 && uj_meret[i] <= 6)
                {
                    printf("        kapott tomb eleje: { ");
                    for (int j = 0; j < uj_meret[i]; j++)
                    {
                        printf("%d", tomb[i][j]);
                        if (j < uj_meret[i] - 1)
                            printf(", ");
                    }
                    printf(" }\n");
                }
            }
        }

        printf("5. feladat: %.2f / 7.00\n\n", fpont);
        osszpont += fpont;
    }


    /* ==========================================================
       VEGSO EREDMENY
       ========================================================== */

    int jegy;

    if (osszpont >= 18.0 - 0.000001)
    {
        jegy = 5;
    }
    else if (osszpont >= 16.0 - 0.000001)
    {
        jegy = 4;
    }
    else if (osszpont >= 13.0 - 0.000001)
    {
        jegy = 3;
    }
    else if (osszpont >= 10.0 - 0.000001)
    {
        jegy = 2;
    }
    else
    {
        jegy = 1;
    }

    printf("=============================================\n");
    printf("VEGSO EREDMENY\n");
    printf("=============================================\n");
    printf("Pontszam: %.2f / 20.00\n", osszpont);
    printf("Erdemjegy: %d\n", jegy);
    printf("\nPonthatarok:\n");
    printf("5: 18.00 - 20.00\n");
    printf("4: 16.00 - 17.99\n");
    printf("3: 13.00 - 15.99\n");
    printf("2: 10.00 - 12.99\n");
    printf("1:  0.00 -  9.99\n");
    printf("=============================================\n");

    return 0;
}
