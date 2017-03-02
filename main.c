
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    char block;
    int input,output,tmp;
    
    input = open("text.txt", O_RDONLY);
    output = open("text1.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
    
    while((tmp = read(input, &block, sizeof(block)) > 0)){
        write(output, &block, tmp);
    }
    return 0;
}
