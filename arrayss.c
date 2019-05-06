#include <stdio.h>
#include <string.h>


char track[][80] = {
    "I left hear in medical school" ,
    "New york is where my heart is",
    "Dancing in the field",
    "From here to marternity",
    "The girl from Iwo Jima",
};

void find_track(char search_for[ ])
{
    int i;
    for (i=0; i < 5; i++) {
        if(strstr(track[i],search_for))
        printf("Tracks %i: '%s'\n", i, track[i]);

    }
}

int main()
{
    char search_for[80];
    printf("Search for:");
    scanf("%79s" , search_for);
    search_for[strlen(search_for) - 1] = '\0';
    find_track(search_for);
    return 0;
}