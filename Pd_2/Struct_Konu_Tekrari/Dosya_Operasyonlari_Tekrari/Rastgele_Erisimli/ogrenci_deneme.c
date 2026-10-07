#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Ogrenci
{
    int numara;
    char isim[20];
    float not;
} ogrenci;

void dosyaOlustur();
void ogrenciEkle();
void ogrenciSil();
void ogrenciListele();
void cikis();

int main()
{

    int secim;

    printf("\n--------------Ogrenci Liste Sistemi--------------\n\n");
    while (1)
    {
        printf("\nYapmak istediginiz islemi secin: \n");
        printf("1)Dosya Olustur\n");
        printf("2)Ogrenci Ekle\n");
        printf("3)Ogrenci Sil\n");
        printf("4)Ogrenci Listele\n");
        printf("5)Cikis\n");

        scanf("%d", &secim);

        switch (secim)
        {
        case 1:
            dosyaOlustur();
            break;
        case 2:
            ogrenciEkle();
            break;
        case 3:
            ogrenciSil();
            break;
        case 4:
            ogrenciListele();
            break;
        case 5:
            cikis();
            break;
        }
    }

    return 0;
}

void dosyaOlustur()
{
    ogrenci ogr = {0, "", 0.0}; // boş öğrenci oluşturuyoruz
    FILE *dosya;
    dosya = fopen("OgrenciListe.txt", "w");

    if (dosya == NULL)
    {
        printf("\nDosya olusturma basarisiz!\n\n");
        return;
    }
    else
    {
        for (int i = 0; i < 100; i++)
        {
            fwrite(&ogr, sizeof(ogrenci), 1, dosya);
        }
        printf("\nDosya olusturma basarili!\n");
        fclose(dosya);
    }
}

void ogrenciEkle()
{
    ogrenci ogr;
    FILE *dosya;

    dosya = fopen("OgrenciListe.txt", "r+");
    if (dosya == NULL)
    {
        printf("\nDosya olusturma basarisiz!\n\n");
        return;
    }
    else
    {
        printf("\nOgrenci Bilgilerini Ekle: \n");

        printf("Ogrenci No: ");
        scanf("%d", &ogr.numara);

        printf("Isim: ");
        scanf("%s", ogr.isim);

        printf("Not: ");
        scanf("%f", &ogr.not);

        fseek(dosya, (ogr.numara - 1) * sizeof(ogrenci), SEEK_SET);
        fwrite(&ogr, sizeof(ogrenci), 1, dosya);
    }
    printf("\nOgrenci Ekleme Basarili!\n\n");
    fclose(dosya);
}

void ogrenciListele()
{
    ogrenci ogr;
    FILE *dosya;

    dosya = fopen("OgrenciListe.txt", "r");
    if (dosya == NULL)
    {
        printf("\nDosya Acilamadi!\n\n");
        return;
    }
    else
    {
        printf("\n");
        printf("%-10s %-20s %-10s\n", "NO", "ISIM", "NOT");
        printf("--------------------------------------\n");
        while (fread(&ogr, sizeof(ogrenci), 1, dosya) == 1)
        {
            if (ogr.numara != 0)
            {
                printf("%-10d %-20s %-10.2f\n", ogr.numara, ogr.isim, ogr.not);
            }
        }
    }
    fclose(dosya);
}

void ogrenciSil()
{
    int silinecekNumara;
    ogrenci ogr;
    ogrenci bosOgr = {0, "", 0.0};
    FILE *dosya;

    dosya = fopen("OgrenciListe.txt", "r+");
    if (dosya == NULL)
    {
        printf("\nDosya Acilamadi\n\n");
        return;
    }
    else
    {
        printf("\nSilmek istediginiz ogrencinin numarasini girin: ");
        scanf("%d", &silinecekNumara);

        fseek(dosya, (silinecekNumara - 1) * sizeof(ogrenci), SEEK_SET);
        fwrite(&bosOgr, sizeof(ogrenci), 1, dosya);
    }
    printf("\n%d Numarali Ogrenci Silme Basarili!\n\n", silinecekNumara);
    fclose(dosya);
}

void cikis()
{
    printf("\nCikis Yapiliyor..\n\n");
    exit(0);
}