#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    system("reset");
    /*Logo*/
    printf(" \n");
    printf(" .oooooo..o oooooooooooo ooooo      ooo  .oooooo..o oooooooooooo ooooo  \n");
    printf("d8P\'    `Y8 `888\'     `8 `888b.     `8\' d8P\'    `Y8 `888'     `8 `888\' \n");
    printf("Y88bo.       888          8 `88b.    8  Y88bo.       888          888 \n");
    printf(" `\"Y8888o.   888oooo8     8   `88b.  8   `\"Y8888o.   888oooo8     888  \n");
    printf("     `\"Y88b  888    \"     8     `88b.8       `\"Y88b  888    \"     888   \n");
    printf("oo     .d8P  888       o  8       `888  oo     .d8P  888       o  888  \n");
    printf("8\"\"88888P\'  o888ooooood8 o8o        `8  8\"\"88888P\'  o888ooooood8 o888o \n\n");
    printf("\x1b[1mSENSEI - The 8-bit A.I. \x1b[0m\n");
    printf("\n");

    int inputs_str[5];

    for (;;)
    {
    printf ("[SENSEI] :");
    fgets (inputs_str,sizeof(inputs_str),stdin);
    printf ("\n");
    printf(inputs_str);
    printf("\n");

        if (strcmp("exit\n",inputs_str) == 0)
        {
            printf ("BREAK!!!\n");
            break;
        }
        else {
            if (strcmp("help\n",inputs_str) == 0)
            {
                printf("SENSEI is \"Super Especially Normal Sustainable and Evacuable Intelligence\".\nIt is very usefull Artifical Intelligence and Smart.\n\nCommand preferences \nhelp ... Show this help. \ntalk ... Start talking on the shell.\n");
                printf("abme ... Show an introduction about me.\n");
                printf("exit ... Exit this shell.\n\n");

            }
            else {
                if (strcmp("abme\n",inputs_str) == 0)
                {
                    printf ("SENSEI (Pronunciation: /ɛnsɑi/)is artificial intelligence which made by \"Super Kingorō\" who is Japanese traditional comedian.\n");
                    printf ("The letter of SENSEI is an acronym of \"Super Especially Normal Sustainable and Evacuable Intelligence\".\n\n");
                }
                else{
                    printf ("\n");
                    printf ("\nSENSEI: Command not found.\n");
                }
            }
        }
    }
    
    sleep (2);
    printf ("EXIT!!\n\n");
    system ("reset");

    return 0;
}