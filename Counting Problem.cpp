#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        char s[100];
        scanf("%s", s);
        
        int counta = 0;
        int countb = 0;
        int countc = 0;
        int length = strlen(s);
        
        for (int j = 0; j < length; j++) {
            if (s[j] == 'A') {
                counta += 1;
            } else if (s[j] == 'B') {
                countb += 1;
            } else if (s[j] == 'C') {
                countc += 1;
            }
        }
        
        if (countb == counta + countc) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
