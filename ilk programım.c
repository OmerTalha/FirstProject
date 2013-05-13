/*  4 küçük sýnavýn kanaat notu þeklinde deðerlendirilmesine iliþkin programdýr. */

# include <stdio.h>
int main ()
{
	int KS1, KS2, KS3, KS4, ON, KN ;
	printf ("4 kucuk sinavin notlarini giriniz: ");
	scanf ("%d%d%d%d", &KS1, &KS2, &KS3, &KS4);

	ON = (KS1+KS2+KS3+KS4)/4 ;
		
		if ( ON >= 50 )
			KN = ON*0.8;
		if ( ON < 50 )
			KN = ON*0.6;

		printf ("Kanaat notu = %d", KN);
	_getch();
	return 0;
}

/* öðrenci numaram: 0401050053 */