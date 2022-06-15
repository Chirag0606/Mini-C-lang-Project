#include <stdio.h>

int main()
{
    FILE *p = NULL;
    char category;
    char str;
    int tempChoice;
    int currencyChoice;
    int massChoice;
    int userinputF;            // User inputted Fahreinheit;
    int userinputC;            // User inputted Celsius;
    int userinputK;            // User inputted Kelvin;
    int userinputUSDtoEuro;    // User inputted for USD to EURO;
    int userinputUSDtoJPY;     // User inputted for USD to JPY;
    int userinputUSDtoRMB;     // User inputted for USD to RMB;
    int userinputUSDtoINR;     // User inputted for USD to INR;
    int userinputOunce;        // User inputted for Ounce;
    int userinputGram;         // User inputted for Gram;
    float fahrenheitToCelcius; // variable that stores the converted F->C;
    float fahrenheitToKelvin;  // variable that stores the converted F->K;
    float celciusToFahrenheit; // variable that stores the converted C->F;
    float celciusToKelvin;     // variable that stores the converted C->K;
    float kelvinToCelsius;     // variable that stores the converted K->C;
    float kelvinToFahrenheit;  // variable that stores the converted K->F;
    float USDtoEURO;           // stores the converted USD->EURO;
    float USDtoJPY;            // stores the converted USD->JPY;
    float USDtoINR;            // stores the converted USD->RMB;
    float USDtoRMB;            // stores the converted USD->INR;
    float ounceToPounds;       // stores the converted Ounce->Pounds;
    float gramsToPounds;       // stores the vonerted Grams->Pounds;
    float gramsToKilo;         // stores the vonerted Grams->Kilo;

    printf("Welcome to Unit Converter! \n");
    printf("Here is a list of conversation to choose from: \n");
    printf("Temperature(T),Currency(C),Mass(M),Distance(D) \n");
    printf("Please enter the letter you want to convert.\n");
    printf("If you want to check the history please choose (H) \n");
    scanf("%c", &category);

    if (category == 'T' || category == 't')
    {
        printf("Welcome to Temperature Converter! \n");
    temp:
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for Fahrenheit to Celsius. \n");
        printf("Enter 2 for Fahrenheit to Kelvin. \n");
        printf("Enter 3 for Celsius to Fahrenheit. \n");
        printf("Enter 4 for Celsius to Kelvin. \n");
        printf("Enter 5 for Kelvin to Celsius. \n");
        printf("Enter 6 for Kelvin to Fahrenheit. \n");
        scanf("%d", &tempChoice);
        if (tempChoice == 1)
        {
            p = fopen("history.txt", "a+");
            printf("Please enter the Fahrenheit degree: \n");
            scanf("%d", &userinputF);
            fprintf(p, "Fahrenheit to Celsius\n");
            fprintf(p, "Please enter the Fahrenheit degree: %d \n", userinputF);
            fahrenheitToCelcius = (float)((userinputF - 32) * (5.0 / 9.0));
            printf("Celcius: %f", fahrenheitToCelcius);
            fprintf(p, "Celcius: %f \n", fahrenheitToCelcius);
            fclose(p);
        }
        else if (tempChoice == 2)
        {
            p = fopen("history.txt", "a+");
            printf("Please enter the Fahrenheit degree: \n");
            scanf("%d", &userinputF);
            fprintf(p, "Fahrenheit to Kelvin\n");
            fprintf(p, "Please enter the Fahrenheit degree: %d \n", userinputF);
            fahrenheitToKelvin = (float)((userinputF - 32) * (5.0 / 9.0) + 273.15);
            printf("kelvin: %f", fahrenheitToKelvin);
            fprintf(p, "Kelvin: %f \n", fahrenheitToKelvin);
            fclose(p);
        }
        else if (tempChoice == 3)
        {
            p = fopen("history.txt", "a+");
            printf("Please enter the Celcius degree: \n");
            scanf("%d", &userinputC);
            fprintf(p, "Celsius to Fahrenheit\n");
            fprintf(p, "Please enter the Celsius degree: %d \n", userinputC);
            celciusToFahrenheit = (float)((9.0 / 5.0) * userinputC + 32);
            printf("Fahrenheit: %f", celciusToFahrenheit);
            fprintf(p, "Fahrenheit: %f \n", celciusToFahrenheit);
            fclose(p);
        }
        else if (tempChoice == 4)
        {
            p = fopen("history.txt", "a+");
            printf("Please enter the Celcius degree: \n");
            scanf("%d", &userinputC);
            fprintf(p, "Celsius to Kelvin\n");
            fprintf(p, "Please enter the Celsius degree: %d \n", userinputC);
            celciusToKelvin = (float)(userinputC + 273.15);
            printf("Fahrenheit: %f", celciusToKelvin);
            fprintf(p, "Fahrenheit: %f \n", celciusToKelvin);
            fclose(p);
        }
        else if (tempChoice == 5)
        {
            p = fopen("history.txt", "a+");
            printf("Please enter the Kelvin degree: \n");
            scanf("%d", &userinputK);
            fprintf(p, "Kelvin to Celsius\n");
            fprintf(p, "Please enter the Kelvin degree: %d \n", userinputK);
            kelvinToCelsius = (userinputK - 273.14);
            printf("Celsius: %f", kelvinToCelsius);
            fprintf(p, "Celsius: %f \n", kelvinToCelsius);
            fclose(p);
        }
        else if (tempChoice == 6)
        {
            p = fopen("history.txt", "a+");
            printf("Please enter the Kelvin degree: \n");
            scanf("%d", &userinputK);
            fprintf(p, "Kelvin to Fahrenheit\n");
            fprintf(p, "Please enter the Kelvin degree: %d \n", userinputK);
            kelvinToFahrenheit = (float)((userinputK - 273.15) * (9.0 / 5.0) + 32);
            printf("Fahrenheit: %f", kelvinToFahrenheit);
            fprintf(p, "Fahrenheit: %f \n", kelvinToFahrenheit);
            fclose(p);
        }
        else
        {
            printf("Please enter the correct choice. \n");
            goto temp;
        }
    }
    else if (category == 'C' || category == 'c')
    {
        printf("Welcome to Currency Converter! \n");
    curr:
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for USD to Euro. \n");
        printf("Enter 2 for USD to JPY. \n");
        printf("Enter 3 for USD to RMB. \n");
        printf("Enter 4 for USD to INR. \n");
        scanf("%d", &currencyChoice);
        if (currencyChoice == 1)
        {
            p = fopen("history.txt", "a+");
            printf("Please enter the USD amount: \n");
            scanf("%d", &userinputUSDtoEuro);
            fprintf(p, "USD to EURO\n");
            fprintf(p, "Please enter the USD amount: %d \n", userinputUSDtoEuro);
            USDtoEURO = userinputUSDtoEuro * 0.95;
            printf("Euro: %.2f", USDtoEURO);
            fprintf(p, "Euro: %.2f \n", USDtoEURO);
            fclose(p);
        }
        else if (currencyChoice == 2)
        {
            p = fopen("history.txt", "a+");
            printf("Please enter the USD amount: \n");
            scanf("%d", &userinputUSDtoJPY);
            fprintf(p, "USD to JPY\n");
            fprintf(p, "Please enter the USD amount: %d \n", userinputUSDtoJPY);
            USDtoJPY = userinputUSDtoJPY * 134.42;
            printf("JPY: %.2f", USDtoJPY);
            fprintf(p, "JPY: %.2f \n", USDtoJPY);
            fclose(p);
        }
        else if (currencyChoice == 3)
        {
            p = fopen("history.txt", "a+");
            printf("Please enter the USD amount: \n");
            scanf("%d", &userinputUSDtoRMB);
            fprintf(p, "USD to RMB\n");
            fprintf(p, "Please enter the USD amount: %d \n", userinputUSDtoRMB);
            USDtoRMB = userinputUSDtoRMB * 6.71;
            printf("RMB: %.2f", USDtoRMB);
            fprintf(p, "RMB: %.2f \n", USDtoRMB);
            fclose(p);
        }
        else if (currencyChoice == 4)
        {
            p = fopen("history.txt", "a+");
            printf("Please enter the USD amount: \n");
            scanf("%d", &userinputUSDtoINR);
            fprintf(p, "USD to INR\n");
            fprintf(p, "Please enter the USD amount: %d \n", userinputUSDtoINR);
            USDtoINR = userinputUSDtoINR * 78.14;
            printf("INR: %.2f", USDtoINR);
            fprintf(p, "INR: %.2f \n", USDtoINR);
            fclose(p);
        }
        else
        {
            printf("Please enter correct choice. \n");
            goto curr;
        }
    }
    else if (category == 'M' || category == 'm')
    {
        printf("Welcome to Mass Converter! \n");
    mass:
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for ounces to pounds. \n");
        printf("Enter 2 for gram to pounds. \n");
        printf("Enter 3 for grams to kilogram. \n");
        scanf("%d", &massChoice);
        if (massChoice == 1)
        {
            p = fopen("history.txt", "a+");
            printf("Please enter the ounce amount: \n");
            scanf("%d", &userinputOunce);
            fprintf(p, "Ounces to Pounds\n");
            fprintf(p, "Please enter the ounce amount: %d \n", userinputOunce);
            ounceToPounds = userinputOunce * 0.0625;
            printf("Pounds: %.2f", ounceToPounds);
            fprintf(p, "Pounds: %.2f \n", ounceToPounds);
            fclose(p);
        }
        else if (massChoice == 2)
        {
            p = fopen("history.txt", "a+");
            printf("Please enter the gram amount: \n");
            scanf("%d", &userinputGram);
            fprintf(p, "Gram to Pounds\n");
            fprintf(p, "Please enter the gram amount: %d \n", userinputGram);
            gramsToPounds = userinputGram * 0.00220462;
            printf("Pounds: %.2f", gramsToPounds);
            fprintf(p, "Pounds: %.2f \n", gramsToPounds);
            fclose(p);
        }
        else if (massChoice == 3)
        {
            p = fopen("history.txt", "a+");
            printf("Please enter the gram amount: \n");
            scanf("%d", &userinputGram);
            fprintf(p, "Gram to Kilogram\n");
            fprintf(p, "Please enter the gram amount: %d \n", userinputGram);
            gramsToKilo = userinputGram * 0.001;
            printf("Kilogram: %.2f", gramsToKilo);
            fprintf(p, "KIlogram: %.2f \n", gramsToKilo);
            fclose(p);
        }
        else
        {
            printf("Please enter the correct choice. \n");
            goto mass;
        }
    }
    else if (category == 'H' || category == 'h')
    {
        p = fopen("history.txt", "r");
        while ((str = fgetc(p)) != EOF)
        {
            printf("%c", str);
        }
        fclose(p);
    }

    return 0;
}