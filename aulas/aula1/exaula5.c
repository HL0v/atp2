#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonSubstring(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int start = 0;
    int maxLength = 0;
    int dp[len1 + 1][len2 + 1];

    // Inicializa a matriz DP com zeros
    for (int i = 0; i <= len1; i++) {
        for (int j = 0; j <= len2; j++) {
            dp[i][j] = 0;
        }
    }

    // Preenche a matriz DP
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLength) {
                    maxLength = dp[i][j];
                    start = i - maxLength;
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    if (maxLength == 0) {
        return "";
    }

    // Aloca memória para a substring comum
    char *result = (char*)malloc((maxLength + 1) * sizeof(char));
    if (result == NULL) {
        perror("Falha ao alocar memória");
        exit(EXIT_FAILURE);
    }

    // Copia a substring comum para o resultado
    strncpy(result, str1 + start, maxLength);
    result[maxLength] = '\0';

    return result;
}

int main() {
    char str1[100];
    char str2[100];
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    char *result = longestCommonSubstring(str1, str2);

    if (strlen(result) > 0) {
        printf("Maior substring comum: %s\n", result);
    } else {
        printf("Nenhuma substring comum encontrada.\n");
    }

    free(result); // Libera a memória alocada

    return 0;
}