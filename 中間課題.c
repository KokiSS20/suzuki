#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int main() {
    char password[MAX_SIZE];
    int len;
    
    printf("パスワードを入力してください: ");
    if (fgets(password, MAX_SIZE, stdin) == NULL) {
        return 1;
    }
    
    len = strlen(password);
    if (len > 0 && password[len - 1] == '\n') {
        password[len - 1] = '\0';
        len--;
    }

    int has_upper = 0; 
    int has_lower = 0; 
    
    for (int i = 0; i < len; i++) {
        char c = password[i];

    
        if (isupper(c)) {
            has_upper = 1;
        } 
        

        if (islower(c)) {
            has_lower = 1;
        }

    }


    printf("\n--- 強度判定結果 ---\n");
    int strong_count = 0; 

    if (len >= 8) {
        printf(" 基準 ① (長さ): 8文字以上を満たしています。\n");
        strong_count++;
    } else {
        printf(" 改善点 ①: 長さが8文字未満です。\n");
    }


    if (has_upper && has_lower) {
        printf(" 基準 ② (文字種): 大文字と小文字の両方を含んでいます。\n");
        strong_count++;
    } else {
        printf(" 改善点 ②: 大文字と小文字の両方を含んでいません。\n");
    }

    
    if (strong_count == 2) {
        printf(" 結論：このパスワードは強いパスワードです！\n");
    } else {
        printf(" 結論：このパスワードは基準を完全に満たしていません。\n");
    }
    
    return 0;
}