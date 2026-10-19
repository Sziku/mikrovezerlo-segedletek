#include <stdio.h>

int main(void)
{
    double osszpont = 0.0;

    printf("=============================================\n");
    printf(" C ALAPOK - MATEMATIKAI ES ALGORITMUS TESZT\n");
    printf("=============================================\n");
    printf("Ido: 90 perc | Maximum: 20.00 pont\n\n");

    /* ==========================================================
       1. FELADAT - ABSZOLUT KULONBSEG                    1.00 pont
       ==========================================================

       Adott ket egesz szam. Szamitsd ki a ket szam abszolut
       kulonbseget minden tesztesetre.

       Pelda:
       a = 8, b = 3 -> 5
       a = 3, b = 8 -> 5

       Az eredmenyeket az eredmeny tombbe ird.
       Csak a TODO reszt modositsd!
    */
    {
        int a[5] = { 10, 3, -5, -8, 7 };
        int b[5] = { 4, 9, 2, -3, 7 };
        int eredmeny[5] = { -999, -999, -999, -999, -999 };

        /* TODO - 1. FELADAT */


        /* TESZTEK - NE MODOSITSD */
        int vart[5] = { 6, 6, 7, 5, 0 };
        double pontok[5] = { 0.10, 0.15, 0.30, 0.25, 0.20 };
        double fpont = 0.0;

        printf("=== 1. ABSZOLUT KULONBSEG ===\n");
        for (int i = 0; i < 5; i++) {
            if (eredmeny[i] == vart[i]) {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else {
                printf("[HIBAS] Teszt %d  vart=%d kapott=%d\n",
                    i + 1, vart[i], eredmeny[i]);
            }
        }
        printf("1. feladat: %.2f / 1.00\n\n", fpont);
        osszpont += fpont;
    }

    /* ==========================================================
       2. FELADAT - BIZTONSAGOS OSZTAS                    1.20 pont
       ==========================================================

       Minden tesztesetben oszd el az a erteket b-vel.

       Ha b nem 0:
         statusz = 1
         eredmeny = a / b valos osztassal

       Ha b == 0:
         statusz = 0
         eredmeny = 0.0

       Figyelj arra, hogy 7 / 2 eredmenye 3.5 legyen!
    */
    {
        int a[5] = { 10, -9, 0, 7, 5 };
        int b[5] = { 2, 3, 5, 2, 0 };
        int statusz[5] = { -1, -1, -1, -1, -1 };
        double eredmeny[5] = { -999, -999, -999, -999, -999 };

        /* TODO - 2. FELADAT */


        /* TESZTEK - NE MODOSITSD */
        int vart_statusz[5] = { 1, 1, 1, 1, 0 };
        double vart[5] = { 5.0, -3.0, 0.0, 3.5, 0.0 };
        double pontok[5] = { 0.15, 0.20, 0.20, 0.25, 0.40 };
        double fpont = 0.0;

        printf("=== 2. BIZTONSAGOS OSZTAS ===\n");
        for (int i = 0; i < 5; i++) {
            double diff = eredmeny[i] - vart[i];
            if (diff < 0) diff = -diff;

            if (statusz[i] == vart_statusz[i] && diff < 0.000001) {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else {
                printf("[HIBAS] Teszt %d  vart: statusz=%d eredmeny=%.2f | kapott: statusz=%d eredmeny=%.2f\n",
                    i + 1, vart_statusz[i], vart[i], statusz[i], eredmeny[i]);
            }
        }
        printf("2. feladat: %.2f / 1.20\n\n", fpont);
        osszpont += fpont;
    }

    /* ==========================================================
       3. FELADAT - HAROMSZOG VIZSGALATA                  1.40 pont
       ==========================================================

       A harom oldal alapjan add meg a haromszog tipusat:

       0 = ervenytelen oldalhosszak / nem szerkesztheto haromszog
       1 = altalanos haromszog
       2 = egyenlo szaru haromszog
       3 = szabalyos haromszog

       Ervenytelen, ha barmelyik oldal <= 0, vagy nem teljesul a
       haromszog-egyenlotlenseg.
    */
    {
        int a[5] = { 3, 5, 4, 1, 0 };
        int b[5] = { 3, 5, 5, 2, 4 };
        int c[5] = { 3, 8, 6, 3, 4 };
        int tipus[5] = { -1, -1, -1, -1, -1 };

        /* TODO - 3. FELADAT */


        /* TESZTEK - NE MODOSITSD */
        int vart[5] = { 3, 2, 1, 0, 0 };
        double pontok[5] = { 0.20, 0.20, 0.25, 0.35, 0.40 };
        double fpont = 0.0;

        printf("=== 3. HAROMSZOG ===\n");
        for (int i = 0; i < 5; i++) {
            if (tipus[i] == vart[i]) {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else {
                printf("[HIBAS] Teszt %d  vart=%d kapott=%d\n",
                    i + 1, vart[i], tipus[i]);
            }
        }
        printf("3. feladat: %.2f / 1.40\n\n", fpont);
        osszpont += fpont;
    }

    /* ==========================================================
       4. FELADAT - SZAMJEGYEK ELEMZESE                   1.60 pont
       ==========================================================

       Minden szamhoz hatarozd meg:
       - hany szamjegybol all
       - mennyi a szamjegyeinek osszege

       A negativ elojelet ne szamold szamjegynek.
       A 0 egy darab szamjegy, szamjegyosszege 0.
    */
    {
        int szam[5] = { 7, 1234, 0, -502, 10001 };
        int db[5] = { -1, -1, -1, -1, -1 };
        int osszeg[5] = { -1, -1, -1, -1, -1 };

        /* TODO - 4. FELADAT */


        /* TESZTEK - NE MODOSITSD */
        int vart_db[5] = { 1, 4, 1, 3, 5 };
        int vart_osszeg[5] = { 7, 10, 0, 7, 2 };
        double pontok[5] = { 0.20, 0.25, 0.30, 0.35, 0.50 };
        double fpont = 0.0;

        printf("=== 4. SZAMJEGYEK ELEMZESE ===\n");
        for (int i = 0; i < 5; i++) {
            if (db[i] == vart_db[i] && osszeg[i] == vart_osszeg[i]) {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else {
                printf("[HIBAS] Teszt %d  vart: db=%d osszeg=%d | kapott: db=%d osszeg=%d\n",
                    i + 1, vart_db[i], vart_osszeg[i], db[i], osszeg[i]);
            }
        }
        printf("4. feladat: %.2f / 1.60\n\n", fpont);
        osszpont += fpont;
    }

    /* ==========================================================
       5. FELADAT - LEGNAGYOBB KOZOS OSZTO                1.80 pont
       ==========================================================

       Szamitsd ki az a es b szamok legnagyobb kozos osztojat.
       Negativ szamoknal az elojelet hagyd figyelmen kivul.

       Specialis esetek:
       LNKO(0, 5) = 5
       LNKO(5, 0) = 5
       LNKO(0, 0) = 0

       Hasznalhatod az euklideszi algoritmust.
    */
    {
        int a[5] = { 48, 17, 0, -24, 0 };
        int b[5] = { 18, 13, 5, 18, 0 };
        int eredmeny[5] = { -1, -1, -1, -1, -1 };

        /* TODO - 5. FELADAT */


        /* TESZTEK - NE MODOSITSD */
        int vart[5] = { 6, 1, 5, 6, 0 };
        double pontok[5] = { 0.20, 0.30, 0.35, 0.40, 0.55 };
        double fpont = 0.0;

        printf("=== 5. LNKO ===\n");
        for (int i = 0; i < 5; i++) {
            if (eredmeny[i] == vart[i]) {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else {
                printf("[HIBAS] Teszt %d  vart=%d kapott=%d\n",
                    i + 1, vart[i], eredmeny[i]);
            }
        }
        printf("5. feladat: %.2f / 1.80\n\n", fpont);
        osszpont += fpont;
    }

    /* ==========================================================
       6. FELADAT - PRIMSZAM VIZSGALAT                    2.00 pont
       ==========================================================

       Minden szamnal add meg:
       1 = primszam
       0 = nem primszam

       A 2 primszam.
       A 0, 1 es a negativ szamok nem primszamok.
    */
    {
        int szam[6] = { 2, 17, 25, 1, -7, 97 };
        int eredmeny[6] = { -1, -1, -1, -1, -1, -1 };

        /* TODO - 6. FELADAT */


        /* TESZTEK - NE MODOSITSD */
        int vart[6] = { 1, 1, 0, 0, 0, 1 };
        double pontok[6] = { 0.15, 0.25, 0.30, 0.35, 0.35, 0.60 };
        double fpont = 0.0;

        printf("=== 6. PRIMSZAM ===\n");
        for (int i = 0; i < 6; i++) {
            if (eredmeny[i] == vart[i]) {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else {
                printf("[HIBAS] Teszt %d  vart=%d kapott=%d\n",
                    i + 1, vart[i], eredmeny[i]);
            }
        }
        printf("6. feladat: %.2f / 2.00\n\n", fpont);
        osszpont += fpont;
    }

    /* ==========================================================
       7. FELADAT - TOMB STATISZTIKA                     2.20 pont
       ==========================================================

       Ot kulonbozo teszttomb van. Minden sor egy kulon teszteset.
       A meret tomb mondja meg, hany elemet kell feldolgozni.

       Hatarozd meg minden tesztesetnel:
       - statusz: 1, ha a meret > 0, kulonben 0
       - minimum
       - maximum
       - osszeg

       Ha meret == 0:
       statusz = 0
       minimum = maximum = osszeg = 0
    */
    {
        int tomb[5][6] = {
            { 1, 2, 3, 4, 5, 0 },
            { -5, -2, -9, -1, 0, 0 },
            { 7, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0 },
            { 99, 88, 77, 66, 55, 44 }
        };
        int meret[5] = { 5, 4, 1, 3, 0 };

        int statusz[5] = { -1, -1, -1, -1, -1 };
        int minimum[5] = { -999, -999, -999, -999, -999 };
        int maximum[5] = { -999, -999, -999, -999, -999 };
        int osszeg[5] = { -999, -999, -999, -999, -999 };

        /* TODO - 7. FELADAT */


        /* TESZTEK - NE MODOSITSD */
        int vart_statusz[5] = { 1, 1, 1, 1, 0 };
        int vart_min[5] = { 1, -9, 7, 0, 0 };
        int vart_max[5] = { 5, -1, 7, 0, 0 };
        int vart_osszeg[5] = { 15, -17, 7, 0, 0 };
        double pontok[5] = { 0.30, 0.35, 0.40, 0.50, 0.65 };
        double fpont = 0.0;

        printf("=== 7. TOMB STATISZTIKA ===\n");
        for (int i = 0; i < 5; i++) {
            if (statusz[i] == vart_statusz[i] &&
                minimum[i] == vart_min[i] &&
                maximum[i] == vart_max[i] &&
                osszeg[i] == vart_osszeg[i]) {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else {
                printf("[HIBAS] Teszt %d\n", i + 1);
                printf("        vart:   statusz=%d min=%d max=%d osszeg=%d\n",
                    vart_statusz[i], vart_min[i], vart_max[i], vart_osszeg[i]);
                printf("        kapott: statusz=%d min=%d max=%d osszeg=%d\n",
                    statusz[i], minimum[i], maximum[i], osszeg[i]);
            }
        }
        printf("7. feladat: %.2f / 2.20\n\n", fpont);
        osszpont += fpont;
    }

    /* ==========================================================
       8. FELADAT - MASODIK LEGNAGYOBB KULONBOZO ELEM     2.40 pont
       ==========================================================

       Keresd meg minden teszttomb masodik legnagyobb KULONBOZO
       elemet.

       Ha nincs legalabb ket kulonbozo elem:
       statusz = 0
       eredmeny = 0

       Ha van:
       statusz = 1
       eredmeny = a masodik legnagyobb kulonbozo elem
    */
    {
        int tomb[5][6] = {
            { 4, 8, 2, 10, 6, 0 },
            { 10, 10, 8, 5, 0, 0 },
            { -10, -3, -20, -5, 0, 0 },
            { 7, 7, 7, 0, 0, 0 },
            { 5, 0, 0, 0, 0, 0 }
        };
        int meret[5] = { 5, 4, 4, 3, 1 };
        int statusz[5] = { -1, -1, -1, -1, -1 };
        int eredmeny[5] = { -999, -999, -999, -999, -999 };

        /* TODO - 8. FELADAT */


        /* TESZTEK - NE MODOSITSD */
        int vart_statusz[5] = { 1, 1, 1, 0, 0 };
        int vart[5] = { 8, 8, -5, 0, 0 };
        double pontok[5] = { 0.30, 0.40, 0.45, 0.55, 0.70 };
        double fpont = 0.0;

        printf("=== 8. MASODIK LEGNAGYOBB ===\n");
        for (int i = 0; i < 5; i++) {
            if (statusz[i] == vart_statusz[i] && eredmeny[i] == vart[i]) {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else {
                printf("[HIBAS] Teszt %d  vart: statusz=%d eredmeny=%d | kapott: statusz=%d eredmeny=%d\n",
                    i + 1, vart_statusz[i], vart[i], statusz[i], eredmeny[i]);
            }
        }
        printf("8. feladat: %.2f / 2.40\n\n", fpont);
        osszpont += fpont;
    }

    /* ==========================================================
       9. FELADAT - TOMB RENDEZESE                        2.70 pont
       ==========================================================

       Rendezd mind az ot teszttombot novekvo sorrendbe.
       Csak a meret[i] darab elemet rendezd.

       Ne hasznalj qsort()-ot.
       Hasznalhatsz peldaul buborek- vagy kivalasztasos rendezest.
    */
    {
        int tomb[5][6] = {
            { 5, 2, 8, 1, 3, 0 },
            { 1, 2, 3, 4, 5, 0 },
            { 5, 4, 3, 2, 1, 0 },
            { 4, 4, -2, 7, -2, 0 },
            { 9, 0, 0, 0, 0, 0 }
        };
        int meret[5] = { 5, 5, 5, 5, 1 };
        int feldolgozva[5] = { 0, 0, 0, 0, 0 };

        /* TODO - 9. FELADAT

           Ha egy tesztsort rendeztel, allitsd be:
           feldolgozva[i] = 1;
        */


        /* TESZTEK - NE MODOSITSD */
        int vart[5][6] = {
            { 1, 2, 3, 5, 8, 0 },
            { 1, 2, 3, 4, 5, 0 },
            { 1, 2, 3, 4, 5, 0 },
            { -2, -2, 4, 4, 7, 0 },
            { 9, 0, 0, 0, 0, 0 }
        };
        double pontok[5] = { 0.30, 0.45, 0.50, 0.80, 0.65 };
        double fpont = 0.0;

        printf("=== 9. RENDEZES ===\n");
        for (int i = 0; i < 5; i++) {
            int jo = 1;
            for (int j = 0; j < meret[i]; j++) {
                if (tomb[i][j] != vart[i][j]) {
                    jo = 0;
                }
            }

            if (jo && feldolgozva[i] == 1) {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else {
                printf("[HIBAS] Teszt %d\n", i + 1);
            }
        }
        printf("9. feladat: %.2f / 2.70\n\n", fpont);
        osszpont += fpont;
    }

    /* ==========================================================
       10. FELADAT - LEGHOSSZABB SZIGORUAN NOVEKVO SZAKASZ 3.70 pont
       ==========================================================

       Keresd meg minden teszttombben a leghosszabb olyan EGYMAST
       KOVETO szakasz hosszat, ahol minden kovetkezo elem nagyobb
       az elozonel.

       Pelda:
       { 1, 2, 3, 2, 3, 4, 5 } -> 4
       mert a leghosszabb szakasz: 2, 3, 4, 5

       Az egyenlo elemek megszakitjak a novekvo szakaszt.

       Ha meret == 0, az eredmeny 0.
    */
    {
        int tomb[5][8] = {
            { 1, 2, 3, 2, 3, 4, 5, 0 },
            { 5, 4, 3, 0, 0, 0, 0, 0 },
            { 1, 2, 3, 4, 5, 0, 0, 0 },
            { 1, 1, 2, 3, 0, 0, 0, 0 },
            { -3, -2, -1, 0, -5, -4, -3, -2 }
        };
        int meret[5] = { 7, 3, 5, 4, 8 };
        int eredmeny[5] = { -1, -1, -1, -1, -1 };

        /* TODO - 10. FELADAT */


        /* TESZTEK - NE MODOSITSD */
        int vart[5] = { 4, 1, 5, 3, 4 };
        double pontok[5] = { 0.40, 0.60, 0.70, 0.90, 1.10 };
        double fpont = 0.0;

        printf("=== 10. LEGHOSSZABB NOVEKVO SZAKASZ ===\n");
        for (int i = 0; i < 5; i++) {
            if (eredmeny[i] == vart[i]) {
                printf("[OK] Teszt %d  +%.2f pont\n", i + 1, pontok[i]);
                fpont += pontok[i];
            }
            else {
                printf("[HIBAS] Teszt %d  vart=%d kapott=%d\n",
                    i + 1, vart[i], eredmeny[i]);
            }
        }
        printf("10. feladat: %.2f / 3.70\n\n", fpont);
        osszpont += fpont;
    }

    /* ==========================================================
       VEGSO EREDMENY
       ========================================================== */

    int jegy;

    if (osszpont >= 18.0 - 0.000001) {
        jegy = 5;
    }
    else if (osszpont >= 16.0 - 0.000001) {
        jegy = 4;
    }
    else if (osszpont >= 13.0 - 0.000001) {
        jegy = 3;
    }
    else if (osszpont >= 10.0 - 0.000001) {
        jegy = 2;
    }
    else {
        jegy = 1;
    }

    printf("=============================================\n");
    printf("VEGSO EREDMENY\n");
    printf("=============================================\n");
    printf("Pontszam: %.2f / 20.00\n", osszpont);
    printf("Erdemjegy: %d\n", jegy);
    printf("=============================================\n");

    return 0;
}
