#include "types.h"
#include "stat.h"
#include "user.h"


int main(void){
    int num = physicalnum();
    if(num == 0){
        printf(1,"La direccion no es válida");
        exit();
    }
    else{
        printf(1,"La direccion fisica es: %x", num);
        exit();
    }

}