#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    float desVol, rotMin, vasHid, volMax, temNec;

    printf("Informe o deslocamento volumetrico(cm�): ");
    scanf("%f", &desVol);

    printf("Informe a quantidade de rota��es por minuto: ");
    scanf("%f", &rotMin);

    vasHid = desVol*rotMin;
    printf("A vas�o da bomba hidr�ulica � de: %.2f(cm�/min)", vasHid);

    printf("\n\nInforme o volume m�ximo do reservat�rio(L): ");
    scanf("%f", &volMax);

    temNec = (volMax*1000)/vasHid;
    printf("O tempo necessario para encher o reservat�rio � de: %.2f(min)", temNec);
}