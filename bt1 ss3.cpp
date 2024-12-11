#include <stdio.h>
int main(){
	char name[3]; 
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);
    printf("Xin chào %s", name);

    return 0;
}  
