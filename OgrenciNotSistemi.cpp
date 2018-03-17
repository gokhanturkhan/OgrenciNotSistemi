#include <stdio.h> 
#include<math.h>
#include<conio.h>
void giris(int no[],int Not[],int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("Ogrenci no gir:");
		scanf("%d",&no[i]);
		printf("%d numarali ogrencinin basari notunu gir:",no[i]);
		scanf("%d",&Not[i]);
	}
}
void goruntule(int no[],int Not[],int N)
{
	printf("Ogrenci#\tNotu\n");
	for(int i=0;i<N;i++)
	{
		printf("%8d\t%3d\n",no[i],Not[i]);
	}
}
float ortalama(int Not[],int N)
{
	float t;
	int i;
	t=0;
	for(i=0;i<N;i++)
	t=t+Not[i];
	float ort=t/N;
	return ort;
}
float otele(int no[],int Not[],int N)
{
	int nottoplam=0,ogrsayac=0;
	float ort2;
	for(int i=0;i<N;i++)
{
		if(Not[i]>=20)
		{
			nottoplam+=Not[i];
			ogrsayac++;
		}
	}
	ort2=nottoplam/ogrsayac;
	float arttir=50-ort2;
	if(ort2<50)
{	for(int i=0;i<N;i++)
	{
		if(Not[i]>=30)
		{
				Not[i]+=arttir;
		}
	}
}
}
void sirala(int no[],int Not[],int N)
{
	int gecici;
	for(int j=0;j<N-1;j++)
	{
	for(int i=j+1;i<N;i++)
	{
		if(Not[i]<Not[j])
		{
			gecici=Not[i];
			Not[i]=Not[j];
			Not[j]=gecici;
			gecici=no[i];
			no[i]=no[j];
			no[j]=gecici;
		}
	}}
	printf("\n--Ogrencilerin notlarinin kucukten buyuge siralamasi:--\n");
	for(int j=0;j<N;j++)
	{
		printf("Ogrencinin numarasi:%d   Basari notu:%d\n",no[j],Not[j]);
	}
}
void sirala2(int no[],int Not[],int N)
{
	int gecici;
	for(int j=0;j<N-1;j++)
	{
	for(int i=j+1;i<N;i++)
	{
		if(no[i]<no[j])
		{
			gecici=no[i];
			no[i]=no[j];
			no[j]=gecici;
			gecici=Not[i];
			Not[i]=Not[j];
			Not[j]=gecici;
		}
	}}
	printf("\n--Ogrencilerin numarasinin kucukten buyuge siralamasi:--\n");
	for(int j=0;j<N;j++)
	{
		printf("Ogrencinin numarasi:%d   Basari notu:%d\n",no[j],Not[j]);
	}
}
void standartsapma(int no[],int Not[],int N,int ortalama)
{
	float nottoplam=0,farktoplami;
	for(int i=0;i<N;i++)
{
	nottoplam+=Not[i];
}
	for(int i=0;i<N;i++)
	{
	farktoplami+=pow(Not[i]-ortalama,2);
	}
	printf("\n--Otelenmis basari notlarina ait standart sapma: %f --\n",sqrt(farktoplami/N));
	
}
yatayhistogram(int Not[],int N)
{
int bnot[10]={0};
for(int i=0;i<N;i++)
{
	if(Not[i]>=90)
	{	bnot[0]++;	}
	else if(Not[i]>=80)
	{	bnot[1]++;	}
	else if(Not[i]>=75)
	{	bnot[2]++;	}
	else if(Not[i]>=70)
	{	bnot[3]++;}
	else if(Not[i]>=65)
	{	bnot[4]++;	}
	else if(Not[i]>=60)
	{	bnot[5]++;}
	else if(Not[i]>=55)
	{	bnot[6]++;	}
	else if(Not[i]>=50)
	{	bnot[7]++;	}
	else if(Not[i]>=40)
	{	bnot[8]++;	}
	else
	{	bnot[9]++;	}
	}
	if(bnot[0]>=0)
	{
		printf("A1|");
		for(int i=0;i<bnot[0];i++)
		{
			printf(" *");
		}
		printf("\n");
	}
	if(bnot[1]>=0)
	{
		printf("A2|");
		for(int i=0;i<bnot[1];i++)
		{
			printf(" *");
		}
		printf("\n");
	}
	if(bnot[2]>=0)
	{
		printf("B1|");
		for(int i=0;i<bnot[2];i++)
		{
			printf(" *");
		}	printf("\n");
	}
	if(bnot[3]>=0)
	{
		printf("B2|");
		for(int i=0;i<bnot[3];i++)
		{
			printf(" *");
		}printf("\n");
	}
		if(bnot[4]>=0)
	{
		printf("C1|");
		for(int i=0;i<bnot[4];i++)
		{
			printf(" *");
		}printf("\n");
	}
	if(bnot[5]>=0)
	{
		printf("C2|");
		for(int i=0;i<bnot[5];i++)
		{
			printf(" *");
		}printf("\n");
	}
	if(bnot[6]>=0)
	{
		printf("D1|");
		for(int i=0;i<bnot[6];i++)
		{
			printf(" *");
		}printf("\n");
	}
	if(bnot[7]>=0)
	{
		printf("D2|");
		for(int i=0;i<bnot[7];i++)
		{
			printf(" *");
		}printf("\n");
	}
	if(bnot[8]>=0)
	{
		printf("E |");
		for(int i=0;i<bnot[8];i++)
		{
			printf(" *");
		}printf("\n");
	}
	if(bnot[9]>=0)
	{
		printf("F |");
		for(int i=0;i<bnot[9];i++)
		{
			printf(" *");
		}printf("\n");
}
int max=0;
for(int i=0;i<10;i++)
{
	if(bnot[i]>max)
	{
		max=bnot[i];
	}
	}
printf("--+");
for(int i=1;i<=max;i++)
printf("---");
printf("\n    ");
for(int i=1;i<=max;i++)
printf("%d ",i);
}
dikeyhistogram(int Not[],int N)
{
	int bnot[10]={0};
	for(int i=0;i<N;i++)
{
	if(Not[i]>=90)
	{	bnot[0]++;	}
	else if(Not[i]>=80)
	{	bnot[1]++;	}
	else if(Not[i]>=75)
	{	bnot[2]++;	}
	else if(Not[i]>=70)
	{	bnot[3]++;}
	else if(Not[i]>=65)
	{	bnot[4]++;	}
	else if(Not[i]>=60)
	{	bnot[5]++;}
	else if(Not[i]>=55)
	{	bnot[6]++;	}
	else if(Not[i]>=50)
	{	bnot[7]++;	}
	else if(Not[i]>=40)
	{	bnot[8]++;	}
	else
	{	bnot[9]++;	}
	}
	int max=0;
for(int i=0;i<10;i++)
{
	if(bnot[i]>max)
	{
		max=bnot[i];
	}}
	for(int a=max;0<a;a--)
	{
		if(a<10)
{
		printf(" "); }
		printf("%d|",a);
		for(int j=0;j<10;j++)
		{
			if(bnot[j]==a)
			{
				printf(" * ");
				bnot[j]--;
			}
			else
			printf("   ");
		}
		printf("\n");
	}
	printf("--+-------------------------------+\n");
	printf("    A1 A2 B1 B2 C1 C2 D1 D2 E  F1  ");
}
main()
{
	int N;
	int bnot[10],ogrno[BUFSIZ],bnotu[BUFSIZ];
	float ort;
	printf("Ogrenci sayisini giriniz:");
	scanf("%d",&N);
	giris(ogrno,bnotu,N);
	goruntule(ogrno,bnotu,N);
	ort=ortalama(bnotu,N);
	printf("Not ortalamasi:%5.2f\n",ort);
	if(ort<50)
	{
		otele(ogrno,bnotu,N);
	}
	printf("\n ----Notlarin Otelenmis Hali----\n");
	goruntule(ogrno,bnotu,N);
	ort=ortalama(bnotu,N);
	printf("Not ortalamasi:%5.2f\n",ort);
	sirala(ogrno,bnotu,N);
	sirala2(ogrno,bnotu,N);
	standartsapma(ogrno,bnotu,N,ort);
	printf("\n\n----Basari Notlarinin Yatay Histogram Halinde Dagilim Araliklari---- \n\n");
	yatayhistogram(bnotu,N); 
	printf("\n\n----Basari Notlarinin Dikey Histogram Halinde Dagilim Araliklari---- \n\n");
	dikeyhistogram(bnotu,N);
	_getch();
}

 
