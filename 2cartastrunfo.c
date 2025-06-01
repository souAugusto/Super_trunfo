#include <stdio.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>
#endif
// queria que o código fosse capaz de ler caracteres especiais

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    #endif

    // Carta 1
    char codigo[50], estado[10], cidade[30];
    int popula, ponto;
    float area, pib;

    // Carta 2
    char codigo2[50], estado2[10], cidade2[30];
    int popula2, ponto2;
    float area2, pib2;

    // Entrada - Carta 1
    printf("========== Cadastro da Carta 1 ==========\n\n");
    printf("Estado: ");
    scanf("%s", estado);
    printf("Código: ");
    scanf("%s", codigo);
    printf("Nome da cidade: ");
    scanf("%s", cidade);
    printf("População: ");
    scanf("%d", &popula);
    printf("Área (km²): ");
    scanf("%f", &area);
    printf("PIB (R$ milhões): ");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &ponto);

    printf("\n\n");

    // Entrada - Carta 2
    printf("========== Cadastro da Carta 2 ==========\n\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &popula2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (R$ milhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &ponto2);

    // Cálculo das métricas
    float densidade = popula / area;
    float pibper = (pib * 1000000) / popula; // Convertendo para reais
    float densidade2 = popula2 / area2;
    float pibper2 = (pib2 * 1000000) / popula2;

    // Exibição formatada
    printf("\n\n================= CARTA 1 =================\n");
    printf("📍 Estado: %s\n", estado);
    printf("🔢 Código: %s\n", codigo);
    printf("🏙️ Cidade: %s\n", cidade);
    printf("👥 População: %d habitantes\n", popula);
    printf("📏 Área: %.2f km²\n", area);
    printf("💰 PIB: R$ %.2f milhões\n", pib);
    printf("💵 PIB per capita: R$ %.2f\n", pibper);
    printf("📊 Densidade populacional: %.2f hab/km²\n", densidade);
    printf("🏞️ Pontos turísticos: %d\n", ponto);

    printf("\n================= CARTA 2 =================\n");
    printf("📍 Estado: %s\n", estado2);
    printf("🔢 Código: %s\n", codigo2);
    printf("🏙️ Cidade: %s\n", cidade2);
    printf("👥 População: %d habitantes\n", popula2);
    printf("📏 Área: %.2f km²\n", area2);
    printf("💰 PIB: R$ %.2f milhões\n", pib2);
    printf("💵 PIB per capita: R$ %.2f\n", pibper2);
    printf("📊 Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("🏞️ Pontos turísticos: %d\n", ponto2);

    printf("\n===========================================\n");

    return 0;
}
