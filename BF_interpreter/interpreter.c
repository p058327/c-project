#include "interpreter.h"


int bf_signs(char* software)

{
    int array_size = 30000;
    int counter = 0;

    brain* brainf = malloc(sizeof(brain));
    brainf->code = software;
    brainf->memory = malloc(array_size * sizeof(char));

    char *pointer = brainf->code;
    char *memory = brainf->memory;
    
    while(*pointer != '\0'){

    switch (*pointer)
    {
    case '>':
        ++(memory);
        break;
    case '<':
        --(memory);
        // printf("%s\n", "AAAAAA");
        break;
    case '+':
        ++(*memory);
        break;
    case '-':
        --(*memory);
        break;
    case '.':
        printf("%c", *memory);
        break;
    case '[':
        if (!*memory)
        {
            ++counter;
            while (*pointer !=']' || counter > 0)
                {
                    if (*pointer ==']')
                    {
                        --counter;
                    }
                    if (*pointer =='[')
                    {
                        ++counter;
                    }
                    ++pointer;
                };
            --pointer;
        };       
        break;
    case ']':
        if (*memory)

        {
            --counter;
            while (*pointer != '[' || counter > 0)
            {
                if (*pointer =='[')
                    {
                        --counter;
                    }
                if (*pointer ==']')
                {
                    ++counter;
                }
                --pointer;
            }            
        };
        break;
    default:
        break;
    }
    ++pointer;
    }
    free(brainf->memory);
    free(brainf);
};
