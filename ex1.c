void  main11ex2 ()
{
	int ary [ 10 ];
	int i, t?ng s?, cao;
	cho (i = 0 ; i < 10 ; i ++)
	{
		printf ( " \ n Nh?p gi� tr?: % d : " , i + 1 );
		scanf ( " % d " , & ary [i]);
	}
	/ * Hi?n th? gi� tr? cao nh?t trong s? c�c gi� tr? d� nh?p * /
	cao = ary [ 0 ];
	cho (i = 1 ; i < 10 ; i ++)
	{
		if (ary [i]> high)
		cao = ary [i];
	}
	printf ( " \ n Gi� tr? cao nh?t du?c nh?p l� % d " , high);
	/ * in gi� tr? trung b�nh d� nh?p cho ary [10] * /
	cho (i = 0 , t?ng = 0 ; i < 10 ; i ++)
		t?ng = total + ary [i];
	printf ( " \ n Gi� tr? trung b�nh c?a c�c ph?n t? c?a ary l� % d " , total / i);
}
