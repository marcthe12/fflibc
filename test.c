#include <string.h>
#include <stdio.h>

int main(int argc,char* argv[argc+1]){
    puts(argv[1]);
    printf("%d\n",strlen(argv[1]));
    return 1;
}
