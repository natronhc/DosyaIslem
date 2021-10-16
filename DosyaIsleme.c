//Can Ahmet Ayrıer Tarafından Oluşturulmuştur.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h> 
int main(){
    int islem,istek,degistirme;
    char isim[10],yazi[256];
    FILE *fp;     
    tekrar:  
    system("CLS"); 
    printf("\n\t\t\t\t\tDosya Isleme Sistemine Hosgeldiniz\n");
    printf("\n\t\t\tLutfen Yapmak Istediginiz islemi seciniz");
    printf("\n\t\t\tIslem 1: Dosya Olusturma \n\t\t\tIslem 2: Dosya Silme \n\t\t\tIslem 3: Dosyaya Yazi Yazmak \n\n ISLEM  ::: ");
    scanf("%d",&islem); 
    if (islem <=0 || islem > 3) 
    {
        printf("HATALI GIRIS YAPTINIZ\n");
        printf("Tekrar denemek icin lutfen 1'e basiniz(Hayir ise 0'a)  ::: ");
        scanf("%d",&istek);
        if (istek == 1)
        {
            goto tekrar;
        }
        else
        {
            exit(EXIT_SUCCESS); 
        }
    }
    switch (islem)
    {
    case 1:
        printf(" Lutfen Olusturmak istediginiz dosya adini .txt ekleyerek giriniz  ::: ");
        scanf("%s",&isim);
        fp = fopen (isim, "w"); 
        fclose(fp);
        break;
    case 2:
        printf("Lutfen Silmek istediginiz dosya adini .txt ekleyerek giriniz  ::: ");
        scanf("%s",&isim);
        int silme = remove(isim);
        if (silme == 0) 
        {
            printf(" \nDosya Silme Islemi Basariyla Tamamlanmistir ");
        }
        else
        {
            printf(" Dosya Silme Basarisiz Oldu ");
        }
        break;    
    case 3:
        printf(" Lutfen Yazi Yazmak Istediginiz Dosya Adini .txt Ekleyerek Giriniz\n\n Dosya  :::: ");
        scanf("%s",&isim);
        fp = fopen (isim , "a"); 
        printf(" Guzel simdi ne yazmak istersiniz  ::: ");
        fflush(stdin); 
        fgets(yazi,256,stdin);
        fputs(yazi,fp); 
        break;
    }
    printf("\n\n\n Baska bir islem yapmak istermisiniz evet ise 1'e hayir ise 0'a basiniz  ::: ");
    scanf("%d",&istek);
    if (istek == 1)
    {
        goto tekrar; 
    }else{
        exit(EXIT_SUCCESS); 
    }
    getch();
    return 0;
}
