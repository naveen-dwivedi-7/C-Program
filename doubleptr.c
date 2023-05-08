#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
   char **ptr;
  char *array[] = { "The quick",
                  "brown fox",
                  "jumps over",
                  "the lazy dog." };
ptr=array;

printf("%s\n",*ptr);
printf("%s\n",*(ptr+1));
printf("%c\n",**ptr);
printf("%c\n",*(*(ptr+1)));
// printf("%c\n",*((*ptr)+1));
      while(*ptr) {
        printf("%s\n",*ptr);
        ptr++;
}
exit(0);
   

}

/*output- The quick
brown fox
T
b
The quick
brown fox
jumps over
the lazy dog.
∟ a
dP@

Ç a
ë├Φ╤( */