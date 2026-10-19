using System;
using System.Globalization;

class Program
{
    static void Main()
    {
        // Azert allitjuk be, hogy a tort pontok minden gepen ponttal jelenjenek meg.
        CultureInfo.CurrentCulture = CultureInfo.InvariantCulture;

        double osszpont = 0.0;

        Console.WriteLine("=============================================");
        Console.WriteLine(" C# ALAPOK - MATEMATIKAI ES ALGORITMUS TESZT");
        Console.WriteLine("=============================================");
        Console.WriteLine("Ido: 90 perc | Maximum: 20.00 pont");
        Console.WriteLine();

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
            int[] a = { 10, 3, -5, -8, 7 };
            int[] b = { 4, 9, 2, -3, 7 };
            int[] eredmeny = { -999, -999, -999, -999, -999 };

            /* TODO - 1. FELADAT */


            /* TESZTEK - NE MODOSITSD */
            int[] vart = { 6, 6, 7, 5, 0 };
            double[] pontok = { 0.10, 0.15, 0.30, 0.25, 0.20 };
            double fpont = 0.0;

            Console.WriteLine("=== 1. ABSZOLUT KULONBSEG ===");
            for (int i = 0; i < 5; i++)
            {
                if (eredmeny[i] == vart[i])
                {
                    Console.WriteLine($"[OK] Teszt {i + 1}  +{pontok[i]:F2} pont");
                    fpont += pontok[i];
                }
                else
                {
                    Console.WriteLine($"[HIBAS] Teszt {i + 1}  vart={vart[i]} kapott={eredmeny[i]}");
                }
            }

            Console.WriteLine($"1. feladat: {fpont:F2} / 1.00");
            Console.WriteLine();
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
           C#-ban is egesz osztas tortenik, ha mindket operandus int.
        */
        {
            int[] a = { 10, -9, 0, 7, 5 };
            int[] b = { 2, 3, 5, 2, 0 };
            int[] statusz = { -1, -1, -1, -1, -1 };
            double[] eredmeny = { -999, -999, -999, -999, -999 };

            /* TODO - 2. FELADAT */


            /* TESZTEK - NE MODOSITSD */
            int[] vartStatusz = { 1, 1, 1, 1, 0 };
            double[] vart = { 5.0, -3.0, 0.0, 3.5, 0.0 };
            double[] pontok = { 0.15, 0.20, 0.20, 0.25, 0.40 };
            double fpont = 0.0;

            Console.WriteLine("=== 2. BIZTONSAGOS OSZTAS ===");
            for (int i = 0; i < 5; i++)
            {
                double diff = eredmeny[i] - vart[i];
                if (diff < 0)
                    diff = -diff;

                if (statusz[i] == vartStatusz[i] && diff < 0.000001)
                {
                    Console.WriteLine($"[OK] Teszt {i + 1}  +{pontok[i]:F2} pont");
                    fpont += pontok[i];
                }
                else
                {
                    Console.WriteLine(
                        $"[HIBAS] Teszt {i + 1}  vart: statusz={vartStatusz[i]} eredmeny={vart[i]:F2} | " +
                        $"kapott: statusz={statusz[i]} eredmeny={eredmeny[i]:F2}");
                }
            }

            Console.WriteLine($"2. feladat: {fpont:F2} / 1.20");
            Console.WriteLine();
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
            int[] a = { 3, 5, 4, 1, 0 };
            int[] b = { 3, 5, 5, 2, 4 };
            int[] c = { 3, 8, 6, 3, 4 };
            int[] tipus = { -1, -1, -1, -1, -1 };

            /* TODO - 3. FELADAT */


            /* TESZTEK - NE MODOSITSD */
            int[] vart = { 3, 2, 1, 0, 0 };
            double[] pontok = { 0.20, 0.20, 0.25, 0.35, 0.40 };
            double fpont = 0.0;

            Console.WriteLine("=== 3. HAROMSZOG ===");
            for (int i = 0; i < 5; i++)
            {
                if (tipus[i] == vart[i])
                {
                    Console.WriteLine($"[OK] Teszt {i + 1}  +{pontok[i]:F2} pont");
                    fpont += pontok[i];
                }
                else
                {
                    Console.WriteLine($"[HIBAS] Teszt {i + 1}  vart={vart[i]} kapott={tipus[i]}");
                }
            }

            Console.WriteLine($"3. feladat: {fpont:F2} / 1.40");
            Console.WriteLine();
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
            int[] szam = { 7, 1234, 0, -502, 10001 };
            int[] db = { -1, -1, -1, -1, -1 };
            int[] osszeg = { -1, -1, -1, -1, -1 };

            /* TODO - 4. FELADAT */


            /* TESZTEK - NE MODOSITSD */
            int[] vartDb = { 1, 4, 1, 3, 5 };
            int[] vartOsszeg = { 7, 10, 0, 7, 2 };
            double[] pontok = { 0.20, 0.25, 0.30, 0.35, 0.50 };
            double fpont = 0.0;

            Console.WriteLine("=== 4. SZAMJEGYEK ELEMZESE ===");
            for (int i = 0; i < 5; i++)
            {
                if (db[i] == vartDb[i] && osszeg[i] == vartOsszeg[i])
                {
                    Console.WriteLine($"[OK] Teszt {i + 1}  +{pontok[i]:F2} pont");
                    fpont += pontok[i];
                }
                else
                {
                    Console.WriteLine(
                        $"[HIBAS] Teszt {i + 1}  vart: db={vartDb[i]} osszeg={vartOsszeg[i]} | " +
                        $"kapott: db={db[i]} osszeg={osszeg[i]}");
                }
            }

            Console.WriteLine($"4. feladat: {fpont:F2} / 1.60");
            Console.WriteLine();
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
            int[] a = { 48, 17, 0, -24, 0 };
            int[] b = { 18, 13, 5, 18, 0 };
            int[] eredmeny = { -1, -1, -1, -1, -1 };

            /* TODO - 5. FELADAT */


            /* TESZTEK - NE MODOSITSD */
            int[] vart = { 6, 1, 5, 6, 0 };
            double[] pontok = { 0.20, 0.30, 0.35, 0.40, 0.55 };
            double fpont = 0.0;

            Console.WriteLine("=== 5. LNKO ===");
            for (int i = 0; i < 5; i++)
            {
                if (eredmeny[i] == vart[i])
                {
                    Console.WriteLine($"[OK] Teszt {i + 1}  +{pontok[i]:F2} pont");
                    fpont += pontok[i];
                }
                else
                {
                    Console.WriteLine($"[HIBAS] Teszt {i + 1}  vart={vart[i]} kapott={eredmeny[i]}");
                }
            }

            Console.WriteLine($"5. feladat: {fpont:F2} / 1.80");
            Console.WriteLine();
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
            int[] szam = { 2, 17, 25, 1, -7, 97 };
            int[] eredmeny = { -1, -1, -1, -1, -1, -1 };

            /* TODO - 6. FELADAT */


            /* TESZTEK - NE MODOSITSD */
            int[] vart = { 1, 1, 0, 0, 0, 1 };
            double[] pontok = { 0.15, 0.25, 0.30, 0.35, 0.35, 0.60 };
            double fpont = 0.0;

            Console.WriteLine("=== 6. PRIMSZAM ===");
            for (int i = 0; i < 6; i++)
            {
                if (eredmeny[i] == vart[i])
                {
                    Console.WriteLine($"[OK] Teszt {i + 1}  +{pontok[i]:F2} pont");
                    fpont += pontok[i];
                }
                else
                {
                    Console.WriteLine($"[HIBAS] Teszt {i + 1}  vart={vart[i]} kapott={eredmeny[i]}");
                }
            }

            Console.WriteLine($"6. feladat: {fpont:F2} / 2.00");
            Console.WriteLine();
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
            int[,] tomb =
            {
                { 1, 2, 3, 4, 5, 0 },
                { -5, -2, -9, -1, 0, 0 },
                { 7, 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0, 0 },
                { 99, 88, 77, 66, 55, 44 }
            };

            int[] meret = { 5, 4, 1, 3, 0 };

            int[] statusz = { -1, -1, -1, -1, -1 };
            int[] minimum = { -999, -999, -999, -999, -999 };
            int[] maximum = { -999, -999, -999, -999, -999 };
            int[] osszeg = { -999, -999, -999, -999, -999 };

            /* TODO - 7. FELADAT */


            /* TESZTEK - NE MODOSITSD */
            int[] vartStatusz = { 1, 1, 1, 1, 0 };
            int[] vartMin = { 1, -9, 7, 0, 0 };
            int[] vartMax = { 5, -1, 7, 0, 0 };
            int[] vartOsszeg = { 15, -17, 7, 0, 0 };
            double[] pontok = { 0.30, 0.35, 0.40, 0.50, 0.65 };
            double fpont = 0.0;

            Console.WriteLine("=== 7. TOMB STATISZTIKA ===");
            for (int i = 0; i < 5; i++)
            {
                if (statusz[i] == vartStatusz[i] &&
                    minimum[i] == vartMin[i] &&
                    maximum[i] == vartMax[i] &&
                    osszeg[i] == vartOsszeg[i])
                {
                    Console.WriteLine($"[OK] Teszt {i + 1}  +{pontok[i]:F2} pont");
                    fpont += pontok[i];
                }
                else
                {
                    Console.WriteLine($"[HIBAS] Teszt {i + 1}");
                    Console.WriteLine(
                        $"        vart:   statusz={vartStatusz[i]} min={vartMin[i]} max={vartMax[i]} osszeg={vartOsszeg[i]}");
                    Console.WriteLine(
                        $"        kapott: statusz={statusz[i]} min={minimum[i]} max={maximum[i]} osszeg={osszeg[i]}");
                }
            }

            Console.WriteLine($"7. feladat: {fpont:F2} / 2.20");
            Console.WriteLine();
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
            int[,] tomb =
            {
                { 4, 8, 2, 10, 6, 0 },
                { 10, 10, 8, 5, 0, 0 },
                { -10, -3, -20, -5, 0, 0 },
                { 7, 7, 7, 0, 0, 0 },
                { 5, 0, 0, 0, 0, 0 }
            };

            int[] meret = { 5, 4, 4, 3, 1 };
            int[] statusz = { -1, -1, -1, -1, -1 };
            int[] eredmeny = { -999, -999, -999, -999, -999 };

            /* TODO - 8. FELADAT */


            /* TESZTEK - NE MODOSITSD */
            int[] vartStatusz = { 1, 1, 1, 0, 0 };
            int[] vart = { 8, 8, -5, 0, 0 };
            double[] pontok = { 0.30, 0.40, 0.45, 0.55, 0.70 };
            double fpont = 0.0;

            Console.WriteLine("=== 8. MASODIK LEGNAGYOBB ===");
            for (int i = 0; i < 5; i++)
            {
                if (statusz[i] == vartStatusz[i] && eredmeny[i] == vart[i])
                {
                    Console.WriteLine($"[OK] Teszt {i + 1}  +{pontok[i]:F2} pont");
                    fpont += pontok[i];
                }
                else
                {
                    Console.WriteLine(
                        $"[HIBAS] Teszt {i + 1}  vart: statusz={vartStatusz[i]} eredmeny={vart[i]} | " +
                        $"kapott: statusz={statusz[i]} eredmeny={eredmeny[i]}");
                }
            }

            Console.WriteLine($"8. feladat: {fpont:F2} / 2.40");
            Console.WriteLine();
            osszpont += fpont;
        }

        /* ==========================================================
           9. FELADAT - TOMB RENDEZESE                        2.70 pont
           ==========================================================

           Rendezd mind az ot teszttombot novekvo sorrendbe.
           Csak a meret[i] darab elemet rendezd.

           Ne hasznald az Array.Sort()-ot.
           Hasznalhatsz peldaul buborek- vagy kivalasztasos rendezest.
        */
        {
            int[,] tomb =
            {
                { 5, 2, 8, 1, 3, 0 },
                { 1, 2, 3, 4, 5, 0 },
                { 5, 4, 3, 2, 1, 0 },
                { 4, 4, -2, 7, -2, 0 },
                { 9, 0, 0, 0, 0, 0 }
            };

            int[] meret = { 5, 5, 5, 5, 1 };
            int[] feldolgozva = { 0, 0, 0, 0, 0 };

            /* TODO - 9. FELADAT

               Ha egy tesztsort rendeztel, allitsd be:
               feldolgozva[i] = 1;
            */


            /* TESZTEK - NE MODOSITSD */
            int[,] vart =
            {
                { 1, 2, 3, 5, 8, 0 },
                { 1, 2, 3, 4, 5, 0 },
                { 1, 2, 3, 4, 5, 0 },
                { -2, -2, 4, 4, 7, 0 },
                { 9, 0, 0, 0, 0, 0 }
            };

            double[] pontok = { 0.30, 0.45, 0.50, 0.80, 0.65 };
            double fpont = 0.0;

            Console.WriteLine("=== 9. RENDEZES ===");
            for (int i = 0; i < 5; i++)
            {
                bool jo = true;

                for (int j = 0; j < meret[i]; j++)
                {
                    if (tomb[i, j] != vart[i, j])
                    {
                        jo = false;
                    }
                }

                if (jo && feldolgozva[i] == 1)
                {
                    Console.WriteLine($"[OK] Teszt {i + 1}  +{pontok[i]:F2} pont");
                    fpont += pontok[i];
                }
                else
                {
                    Console.WriteLine($"[HIBAS] Teszt {i + 1}");
                }
            }

            Console.WriteLine($"9. feladat: {fpont:F2} / 2.70");
            Console.WriteLine();
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
            int[,] tomb =
            {
                { 1, 2, 3, 2, 3, 4, 5, 0 },
                { 5, 4, 3, 0, 0, 0, 0, 0 },
                { 1, 2, 3, 4, 5, 0, 0, 0 },
                { 1, 1, 2, 3, 0, 0, 0, 0 },
                { -3, -2, -1, 0, -5, -4, -3, -2 }
            };

            int[] meret = { 7, 3, 5, 4, 8 };
            int[] eredmeny = { -1, -1, -1, -1, -1 };

            /* TODO - 10. FELADAT */


            /* TESZTEK - NE MODOSITSD */
            int[] vart = { 4, 1, 5, 3, 4 };
            double[] pontok = { 0.40, 0.60, 0.70, 0.90, 1.10 };
            double fpont = 0.0;

            Console.WriteLine("=== 10. LEGHOSSZABB NOVEKVO SZAKASZ ===");
            for (int i = 0; i < 5; i++)
            {
                if (eredmeny[i] == vart[i])
                {
                    Console.WriteLine($"[OK] Teszt {i + 1}  +{pontok[i]:F2} pont");
                    fpont += pontok[i];
                }
                else
                {
                    Console.WriteLine($"[HIBAS] Teszt {i + 1}  vart={vart[i]} kapott={eredmeny[i]}");
                }
            }

            Console.WriteLine($"10. feladat: {fpont:F2} / 3.70");
            Console.WriteLine();
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

        Console.WriteLine("=============================================");
        Console.WriteLine("VEGSO EREDMENY");
        Console.WriteLine("=============================================");
        Console.WriteLine($"Pontszam: {osszpont:F2} / 20.00");
        Console.WriteLine($"Erdemjegy: {jegy}");
        Console.WriteLine("=============================================");
    }
}
