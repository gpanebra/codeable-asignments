#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = " ";
    do
    {
        text = get_string("\nText: ");
        int l = 0;
        int w = 0;
        bool w_switch = true;
        int s = 0;
        bool s_switch = true;
        double index = 0;

        for (size_t i = 0; i < strlen(text); i++)
        {
            if (isalpha(text[i]))
            {
                l++;
                if (w_switch == true)
                {
                    w++;
                    w_switch = false;
                }

                if (s_switch == true)
                {
                    s++;
                    s_switch = false;
                }
            }
            else if (text[i] == ' ')
            {
                w_switch = true;
            }
            else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            {
                s_switch = true;
            }
        }
        //Testing counters
        //printf("Letters: %d. Words: %d Sentences: %d", l, w, s);
        double L = 100 * l / w;
        double S = 100 * s / w;
        index = (0.0588 * L) - (0.296 * S) - 15.8;
        if (index < 1)
        {
            printf("Before Grade 1");
        }
        else if (index > 16)
        {
            printf("Grade 16+");
        }
        else
        {
            printf("Grade: %d", (int)round(index));
        }

    } while (true);
}