#include "interpreter.h"


int bf_signs(char* software)

{
    int array_size = 30000;
    // int i = 0;

    brain* brainf = malloc(sizeof(brain));
    brainf->code = software;
    brainf->memory = malloc(array_size * sizeof(char));
    // brainf->code_ptr = 0;
    // brainf->memory_ptr = 0;

    // for (i = 0; i < 30000; ++i)
    // {
    //     brainf->memory[i] = 0;
    // }
    // printf("%c\n", brainf->memory[0]);

    while(*brainf->code != '\0'){

    switch (*brainf->code)
    {
    case '>':
        ++(brainf->memory);
        break;
    case '<':
        --(brainf->memory);
        break;
    case '+':
        ++(*brainf->memory);
        // printf("%s\n", "AAAAAA");
        break;
    case '-':
        --(*brainf->memory);
        break;
    case '.':
        printf("%c", *brainf->memory);
        break;
    case '[':
        if (!*brainf->memory)
        {
            while (*brainf->code !=']')
                {
                    ++brainf->code;
                };
                --brainf->code;
        };       
        break;
    case ']':
        if (*brainf->memory)
        {
            while (*brainf->code !='[')
            {
                --brainf->code;
            }            
        };
        break;
    default:
        break;
    }
    ++brainf->code;
    }
    free(brainf->memory);
    free(brainf);
};
