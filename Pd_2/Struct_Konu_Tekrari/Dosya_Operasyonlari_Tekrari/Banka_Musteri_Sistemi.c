#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int accountNo;
    char name[20];
    char surName[25];
    double deposit;
}Customer;

void createFile(); //musteri bilgilerini girecegimiz dosyayı olusturur.
void addCustomers(); //musterileri tek tek dosyaya ekler.
int listIndebtedAccounts(FILE* dosya); //borcu olan musteri sayısını hesaplar.
Customer findMaxDeposit(FILE*); //bakiyesi maksimum olan musterileri bulur.
void transferRecords(FILE*); //bakiyesi 300e eşit veya daha buyuk olan musterileri baska bir dosyaya aktarır.
void updateRecords(FILE*); //musteri bakiyelerini %50 oranında arttırır ve dıger dosyaya aktarılan musterileri de gunceller.
void listCustomers(); //girilen musterileri listeler.

int main(){

    FILE* dosya;
    int borcluSayi;
    int secim;
    printf("\n---------- BANKA MUSTERI SISTEMI ----------\n\n");
    printf("Yapmak Istediginiz Islemi Secin: \n\n");
    while(1){
        printf("1)Dosya Olustur\n");
        printf("2)Musteri Ekle\n");
        printf("3)Musterileri Listele\n");
        printf("4)Borclu Sayisini Gor\n");
        printf("5)Bakiyesi Max Olanlari Bul\n");
        printf("6)Kayıtlari Transfer Et\n");
        printf("7)Bakiyeleri Arttır\n");
        printf("8)Cikis Yap\n");

        scanf("%d", &secim);

        switch(secim){
            case 1:
                createFile();
                break;
            case 2:
                addCustomers();
                break;
            case 3:
                listCustomers();
                break;
            case 4:
                borcluSayi = listIndebtedAccounts(dosya);
                printf("\nBorclu Sayisi-> %d\n\n", borcluSayi);
                break;
            /*case 5:
                findMaxDeposit(dosya);
                break;
            case 6:
                transferRecords(dosya);
                break;
            case 7:
                updateRecords(dosya);
                break;*/
            case 8:
                printf("Cikis Yapiliyor...\n\n");
                return 0;
            default:
                printf("Gecersiz Islem!\n\n");
        }
    }

    fclose(dosya);

    return 0;
}

void createFile(){
    FILE* dosya;

    dosya = fopen("Musteri.dat", "w");
    if(dosya == NULL){
        printf("\nDosya Olusturulamadi!\n\n");
    }
    else{
        printf("\nDosya Olusturma Basarili\n\n");
    }

    //fprintf(dosya, "Hesap No\tIsım\t\t\tSoyisim\t\t\t\tBakiye\n");
    //fprintf(dosya,"---------------------------------------------------------\n");

    fclose(dosya);
}

void addCustomers(){
    FILE* dosya;

    dosya = fopen("Musteri.dat", "a");
    if(dosya == NULL){
        printf("HATA! Dosya Acilamadi\n\n");
    }

    Customer cust;
    printf("\nMusteri Bilgilerini Girin: \n");
        
    printf("Hesap No: ");
    scanf("%d", &cust.accountNo);

    printf("Isim: ");
    scanf("%s", cust.name);

    printf("Soyisim: ");
    scanf("%s", cust.surName);

    printf("Bakiye: ");
    scanf("%lf", &cust.deposit);

    fprintf(dosya, "%-10d %-18s %-15s %5.3lf\n", cust.accountNo, cust.name, cust.surName, cust.deposit);

    printf("\nMusteri Ekleme Basarili\n\n");
    fclose(dosya);
}

void listCustomers(){
    FILE* dosya;

    dosya = fopen("Musteri.dat", "r");
    if(dosya == NULL){
        printf("Dosya Acilamadi!\n");
        return;
    }

    Customer cust;
    printf("\n%-10s %-18s %-15s %5s", "Hesap No", "Isim", "Soyisim", "Bakiye");
    printf("\n----------------------------------------------------------\n");

    while(fscanf(dosya, "%d %s %s %lf", &cust.accountNo, cust.name, cust.surName, &cust.deposit) != EOF){
        printf("%-10d %-18s %-15s %5.3lf\n", cust.accountNo, cust.name, cust.surName, cust.deposit);
    }

    printf("\nListeleme Basarili\n\n");
    fclose(dosya);
}

int listIndebtedAccounts(FILE* dosya){
    int debtedCount = 0;
    
    dosya = fopen("Musteri.dat", "r");
    if(dosya == NULL){
        printf("\nDosya Acilamadi!\n");
        return 1;
    }

    Customer cust;
    while(fscanf(dosya, "%d %s %s %lf", &cust.accountNo, cust.name, cust.surName, &cust.deposit) != EOF){
        if(cust.deposit < 0){
            debtedCount++;
        }
    }
    fclose(dosya);
    return debtedCount;
}