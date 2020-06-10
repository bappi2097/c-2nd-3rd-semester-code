#include <stdio.h>
main()
{
    char a;
    printf("\nEnter a alphabet:");
    scanf("%c",&a);
    switch(a)
    {
        case 'a':
            case 'e':
                case 'i':
                    case 'o':
                        case 'u':
                            case 'A':
                                case 'E':
                                    case 'I':
                                        case 'O':
                                            case 'U':
                                                printf("%c is vowel",a);
                                                break;
                                                default:
                                                    printf("%c is consonent",a);
                                                    break;
    }
    return 0;
}
