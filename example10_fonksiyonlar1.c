#include<stdio.h>
int main()
{
  int a,sonuc;
  int kara1(int a);
  printf("a kenarını giriniz :");
  scanf("%d",&a);
  sonuc=kara1(a);
  printf("karenin alanı %d",sonuc);
  return 0;
}
kara1(c)
int c;
{
	int karaAlan;
	karaAlan=c*c;
	return karaAlan;
}
