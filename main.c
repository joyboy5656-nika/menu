#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    const char *arr[9] = {
        "firefox --new-tab \"https://www.theodinproject.com\" 2>/dev/null &",
        "firefox --new-tab \"https://chat.deepseek.com/\" 2>/dev/null &",
        "firefox --new-tab \"https://chat.openai.com\" 2>/dev/null &",
        "firefox --new-tab \"https://web.whatsapp.com\" 2>/dev/null &",
        "firefox --new-tab \"https://github.com\" 2>/dev/null &",
        "firefox --new-tab \"https://www.pexels.com\" 2>/dev/null &",
        "firefox --new-tab \"https://claude.ai\" 2>/dev/null &",
        "firefox --new-tab \"https://www.youtube.com\" 2>/dev/null &",
        "firefox --new-tab \"https://www.skillrack.com/faces/ui/profile.xhtml\" 2>/dev/null &"};

    if (argc != 1)
    {
        for (int i = 1; i < argc; i++)
        {
            char *end;
            long n = strtol(argv[i], &end, 10);
            if (*end != '\0' || n < 1 || n > 9)
            {
                printf("wrong Index!!\n");
                continue;
            }
            if (system(arr[n - 1]) != 0)
                fprintf(stderr, "failed to run: %s\n", arr[n - 1]);
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
                   "\n9.  skillRack"
                   "\n0.  exit\n");
            printf("enter the index: ");
            fflush(stdout);
            scanf(" %c", &index);
            if (index >= '1' && index <= '9')
                system(arr[(index - '0') - 1]);
            else if (index != 'e' && index != '0')
                printf("wrong Index!!\n");
            system("clear");
        } while (index != 'e' && index != '0');
    }
}