main10try1()
{
	int age;
	char name[10];
	printf("\nEnter your name : ");
	scanf("%s", &name);
	printf("\nEnter your age : ");
	scanf("%d", &age);
	
	for(;age>0;age--)
	{
		printf("%s\t", name);
	}
}
