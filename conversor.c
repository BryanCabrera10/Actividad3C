#include <stdio.h>

void convertir_moneda(float cantidad, float tasa_cambio, const char* moneda_base, const char* moneda_objetivo) {
    float resultado = cantidad * tasa_cambio;
    printf("%.2f %s equivalen a %.2f %s\n", cantidad, moneda_base, resultado, moneda_objetivo);
}

int main() {
    int opcion;
    float cantidad;

    // Tasas de cambio (Ejemplo: USD a EUR, USD a JPY, etc.)
    float tasa_usd_eur = 0.92;   // 1 USD = 0.92 EUR
    float tasa_usd_jpy = 134.25; // 1 USD = 134.25 JPY
    float tasa_eur_usd = 1.09;   // 1 EUR = 1.09 USD
    float tasa_jpy_usd = 0.0074; // 1 JPY = 0.0074 USD

    printf("Conversor de Monedas\n");
    printf("Seleccione la moneda base:\n");
    printf("1. USD (Dólar estadounidense)\n");
    printf("2. EUR (Euro)\n");
    printf("3. JPY (Yen japonés)\n");
    printf("Ingrese el número de opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1: // USD
            printf("Seleccione la moneda objetivo:\n");
            printf("1. EUR (Euro)\n");
            printf("2. JPY (Yen japonés)\n");
            printf("Ingrese el número de opción: ");
            int sub_opcion_usd;
            scanf("%d", &sub_opcion_usd);

            if (sub_opcion_usd == 1) {
                convertir_moneda(cantidad, tasa_usd_eur, "USD", "EUR");
            } else if (sub_opcion_usd == 2) {
                convertir_moneda(cantidad, tasa_usd_jpy, "USD", "JPY");
            } else {
                printf("Opción no válida.\n");
            }
            break;
        
        case 2: // EUR
            printf("Seleccione la moneda objetivo:\n");
            printf("1. USD (Dólar estadounidense)\n");
            printf("Ingrese el número de opción: ");
            int sub_opcion_eur;
            scanf("%d", &sub_opcion_eur);

            if (sub_opcion_eur == 1) {
                convertir_moneda(cantidad, tasa_eur_usd, "EUR", "USD");
            } else {
                printf("Opción no válida.\n");
            }
            break;

        case 3: // JPY
            printf("Seleccione la moneda objetivo:\n");
            printf("1. USD (Dólar estadounidense)\n");
            printf("Ingrese el número de opción: ");
            int sub_opcion_jpy;
            scanf("%d", &sub_opcion_jpy);

            if (sub_opcion_jpy == 1) {
                convertir_moneda(cantidad, tasa_jpy_usd, "JPY", "USD");
            } else {
                printf("Opción no válida.\n");
            }
            break;

        default:
            printf("Opción no válida.\n");
    }

    return 0;
}
