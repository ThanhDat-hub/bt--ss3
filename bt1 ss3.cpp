#include <stdio.h>
int main(){
	char name[3]; 
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);
    printf("Xin ch�o %s", name);

    return 0;
}  
