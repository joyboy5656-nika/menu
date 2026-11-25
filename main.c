#include <stdio.h>
#include <stdlib.h>
int main()
{
    char index;
    do
    {
        system("clear");
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
        scanf(" %c", &index);
        switch (index)
        {
        case '1':
        {
            system("firefox --new-tab \"https://www.theodinproject.com\" & exit");
            break;
        }
        case '2':
        {
            system("firefox --new-tab \"https://chat.deepseek.com/\"& exit");
            break;
        }
        case '3':
        {
            system("firefox --new-tab \"https://chat.openai.com\"& exit");
            break;
        }
        case '4':
        {
            system("firefox --new-tab \"https://web.whatsapp.com\" & exit");
            break;
        }
        case '5':
        {
            system("firefox --new-tab \"https://github.com\" & exit");
            break;
        }
        case '6':
        {
            system("firefox --new-tab \"https://www.pexels.com\"& exit");
            break;
        }
        case '7':
        {
            system("firefox --new-tab \"https://claude.ai\"& exit");
            break;
        }
        case '8':
        {
            system("firefox --new-tab \"https://www.youtube.com\"& exit");
            break;
        }
        case '9':
        {
            system("firefox --new-tab \"https://www.skillrack.com/faces/ui/profile.xhtml\"&exit");
            break;
        }
        case 'e':
        {
            system("clear");
            return 0;
        }
        }
    } while (index != 'e');
    return 0;
}
