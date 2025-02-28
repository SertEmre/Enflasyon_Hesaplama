#include <stdio.h>
#include <math.h>

int main() {
float fiyat,enflasyonOrani,gelecektekiFiyat,gecmisFiyat;
int yilSayisi;
char secim;

printf("------ENFLASYON HESAPLAMA------\n");

printf("Gecmisteki fiyati mi yoksa gelecekteki fiyati mi hesaplamak istersiniz? (Gelecek:X Gecmis:Y): ");
scanf(" %c", &secim);

if (secim == 'X' || secim == 'x') {
    printf("Gelecekteki tahmini fiyati girin: ");
    scanf("%f",&fiyat);
    printf("Enflasyon oranini %% olarak girin: ");
    scanf("%f",&enflasyonOrani);
    enflasyonOrani /= 100;

    printf("Kac yil sonraki fiyati hesaplamak istersiniz? ");
    scanf("%d", &yilSayisi);

    gelecektekiFiyat = fiyat * pow(1 + enflasyonOrani, yilSayisi);
    printf("Gelecekteki fiyat: %.2f\n", gelecektekiFiyat);
}
else if (secim == 'Y' || secim == 'y') {
        printf("Gecmisteki fiyati giriniz: ");
        scanf("%f", &fiyat);
        printf("Enflasyon oranini %%  olarak girin: ");
        scanf("%f", &enflasyonOrani);
        enflasyonOrani /= 100;

        printf("Kac yil önceki fiyati hesaplamak istersiniz?: ");
        scanf("%d", &yilSayisi);

        gecmisFiyat = fiyat / pow(1 + enflasyonOrani, yilSayisi);
        printf("Gecmisteki fiyat: %.2f\n", gecmisFiyat);
    }
else {
        printf("Gecersiz seçim!\n");
    }

    return 0;
}
