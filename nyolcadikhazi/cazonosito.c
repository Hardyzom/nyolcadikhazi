#include <stdio.h>
#include <ctype.h>

int azonositoe(const char* bemenet){

    if (!bemenet || !isalpha(bemenet[0])) {
        return 0;
    }
    int i = 1;
    while (bemenet[i]) {
        if (!isalnum(bemenet[i]) && bemenet[i] != '_') {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){

    char str[100];
    
    while(1){
        printf("Adj meg sztringeket '*' végjelig!");
        scanf("%s", str);
        if (str[0] == '*') {
            break;
        }
        if (azonositoe(str)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
