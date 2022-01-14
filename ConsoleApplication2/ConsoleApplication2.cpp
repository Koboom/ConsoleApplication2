#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>

void main()
{
	
	char kullaniciadi[20];
	int sifre = 987;
	int x;
	int secenek;
	float para=10000;


	printf("YukselBank'a Hosgeldiniz:\n\n\n");
	printf("Lutfen kullanici adini giriniz: ");
	gets_s(kullaniciadi);
	printf("Lutfen sifrenizi giriniz: ");
	scanf_s("%d", &sifre);

	while (sifre!=987)
	{
		printf("Yanlis sifre girildi: \n");
		printf("Lutfen sifrenizi giriniz: ");
		scanf_s("%d", &sifre);
		if (sifre == 987)
		{
			break;
		}
	}

	printf("Sifre dogrulandi... \n\n");
	printf("Lutfen bekleyiniz...\n\n");
	Sleep(2000);


	
	printf("\tMENU\n");
	printf("*******************\n");
	printf("1-Bakiye Sorgulama\n");
	printf("2-Para Yatirma\n");
	printf("3-Para Cekme\n");
	printf("4/Para Gonderme\n");
	printf("5-EXIT\n\n");


	printf("Lutfen Seciniz: ");

	scanf_s("%d", &secenek);

	while (secenek!=1 && secenek!=2 && secenek!=3 && secenek!=4 && secenek!=5)
	{
		printf("Lutfen 1,2,3,4 ve 5 sayilarindan birisini seciniz: \n");

		printf("\tMENU\n");
		printf("*******************\n");
		printf("1-Bakiye Sorgulama\n");
		printf("2-Para Yatirma\n");
		printf("3-Para Cekme\n");
		printf("4/Para Gonderme\n");
		printf("5-EXIT\n\n");

		if (secenek == 1 && secenek == 2 && secenek == 3 && secenek == 4 && secenek == 5)
		{
			break;
		}
	}

	switch (secenek)
	{
	case 1:
		printf("Bakiye Tutari: %.2f TL\n", para);
		break;

	case 2:
		printf("Para miktarini giriniz: ");
		scanf_s("%d", &x);

		while (x<0)
		{
			printf("Negatif sayi girdiniz...\n");
			printf("Para miktarini giriniz: ");
			scanf_s("%d", &x);

			if (x > 0)
			{
				break;
			}
			
		}

		printf("Bakiye Tutari: %.2f TL\n", para = para + x);
		break;
	case 3:
		printf("Cekmek istediğiniz tutari giriniz: ");
		scanf_s("%d", &x);
		while (x>para)
		{
			printf("Hesabinizda yeterli para yok... \n");
			printf("Cekmek istediğiniz tutari giriniz: ");
			scanf_s("%d", &x);

			if (x < para)
			{
				break;
			}
			
		}
		printf("Bakiye tutari: %.2f TL", para = para - x);
		break;

	case 4:
		printf("Gondermek istediğiniz miktari giriniz: ");
		scanf_s("%d", &x);

		while (x>para)
		{
			printf("Hesabinizda yeterli para yok...\n");
			printf("Gondermek istediğiniz miktari giriniz: ");
			scanf_s("%d", &x);

			if (x < para)
			{
				break;
			}
		}
		break;
	case 5:
		printf("Bizi sectiginiz icin tesekkur ederiz...");
		return;
		break;

	default:
		break;
	}


}