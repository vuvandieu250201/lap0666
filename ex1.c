void  main11ex2 ()
{
	int ary [ 10 ];
	int i, t?ng s?, cao;
	cho (i = 0 ; i < 10 ; i ++)
	{
		printf ( " \ n Nh?p giá tr?: % d : " , i + 1 );
		scanf ( " % d " , & ary [i]);
	}
	/ * Hi?n th? giá tr? cao nh?t trong s? các giá tr? dã nh?p * /
	cao = ary [ 0 ];
	cho (i = 1 ; i < 10 ; i ++)
	{
		if (ary [i]> high)
		cao = ary [i];
	}
	printf ( " \ n Giá tr? cao nh?t du?c nh?p là % d " , high);
	/ * in giá tr? trung bình dã nh?p cho ary [10] * /
	cho (i = 0 , t?ng = 0 ; i < 10 ; i ++)
		t?ng = total + ary [i];
	printf ( " \ n Giá tr? trung bình c?a các ph?n t? c?a ary là % d " , total / i);
}
