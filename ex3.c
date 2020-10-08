#include<stdio.h>


int main(){
int arr [ 2 ] [ 3 ];
		int hàng, col;
	for (row = 0 ; row < 2 ; row ++)
	{
		for (col = 0 ; col < 3 ; col ++)
		{
			printf ( " \ n Nh?p s? vào [ % d ] [ % d ]: " , row, col);
			scanf ( " % d " , & arr [row] [col]);
		}
	}
	for (row = 0 ; row < 2 ; row ++)
	{
		for (col = 0 ; col < 3 ; col ++)
		{
			printf ( " \ n S? t?i [ % d ] [ % d ] là % d " , row, col, arr [row] [col]);
		}
	}
}
