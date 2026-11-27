#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char command[100];
} array;
void main(int argc, char *argv[])
{
    array arr[9] = {
        "firefox --new-tab \"https://www.theodinproject.com\" &",
        "firefox --new-tab \"https://chat.deepseek.com/\" &",
        "firefox --new-tab \"https://chat.openai.com\" &",
        "firefox --new-tab \"https://web.whatsapp.com\" &",
        "firefox --new-tab \"https://github.com\" &",
        "firefox --new-tab \"https://www.pexels.com\" &",
        "firefox --new-tab \"https://claude.ai\" &",
        "firefox --new-tab \"https://www.youtube.com\" &",
        "firefox --new-tab \"https://www.skillrack.com/faces/ui/profile.xhtml\" &"};
    if (argc != 1)
    {
        for (int i = 1; i < argc; i++)
        {
            if (atoi(argv[i]) <= 9 && atoi(argv[i]) > 0)
            {
                system(arr[atoi(argv[i]) - 1].command);
            }
            else
            {
                printf("wrong Index!!\n");
            }
        }
    }
    else
    {
        char index;
        do
        {
            printf("-----------menu--------"
                   "\n1.  The Odin Project"
                   "\n2.  DeepSeek"
                   "\n3.  ChatGPT"
                   "\n4.  WhatsApp"
                   "\n5.  GitHub"
                   "\n6.  Pexels"
                   "\n7.  Claude"
                   "\n8.  YouTube"
                   "\n9. skillRack\n");
            printf("enter the index:");
            fflush(stdout);
            scanf("%c", &index);
            system(arr[(index - '0') - 1].command);
            system("clear");
        } while (index != 'e');
    }
    return;
}