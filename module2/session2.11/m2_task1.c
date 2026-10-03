#include <stdio.h>

main() {
    int likes,*ptrLikes;     

    likes = 100;        
    ptrLikes = &likes;  

    printf("Value of likes: %d\n", likes);

    printf("Value via ptrLikes: %d\n", *ptrLikes);

    printf("Address stored in ptrLikes: %p\n", (void*)ptrLikes);

    printf("Address of likes: %p\n", (void*)&likes);

}

