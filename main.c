#include <stdio.h>

void user_info();

void pobieranieDanych(double *a, double *b, char *dzialanie);

void wyswietlenieWynikow(double a, double b, char dzialanie);

int main() {

    double a , b;
    char dzialanie;

    user_info();

    pobieranieDanych(&a, &b, &dzialanie);

    wyswietlenieWynikow(a, b, dzialanie);

    return 0;
}

void wyswietlenieWynikow(double a, double b, char dzialanie) {
    switch (dzialanie)
    {
        case '+':
            printf("%lf", a + b);
            break;
        case '-':
            printf("%lf", a - b);
            break;
        case '*':
            printf("%lf", a * b);
            break;
            case '/':
                if (!b){
                    printf("nie można dzielić przez zero");
                } else{
                    printf("%lf", a / b);
                    break;
                }
        default:
            printf("nieznana akcja");

    }
}

void pobieranieDanych(double *a, double *b, char *dzialanie) {
    printf("Podaj pierwszą liczbę ");
    scanf(" %lf", a);

    printf("podaj drugą liczbe ");
    scanf(" %lf", b);

    printf("Podaj działanie ");
    scanf(" %c", dzialanie);
}

void user_info() { printf("Kalkulator\n Możliwe działania to:\nmnożenie *\ndodawanie +\nodejmowanie-\ndzielenie/\n "); }