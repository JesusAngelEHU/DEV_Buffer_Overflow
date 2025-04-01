#include <stdio.h>
#include <string.h>
#include <unistd.h>
    void function (unsigned char *input){
        char buffer [64];
        strcpy (buffer,input);
        setuid(0);
	    char cmd[] = "/bin/sh";
    	execv(cmd, NULL);
}

int main ( int argc , char *argv[]) {
    if ( argc > 1) {
        function ( argv [1]) ;
    }
    else printf (" Usage : %s <input >\n", argv [0]) ;
return (0) ;
}
