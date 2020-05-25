char g_buf[69];

void m(void)
{
	printf("%s - %d\n", g_buf, time(0));
}

int	main(int argc, char **argv)
{
	char *s1;
  	char *s2;
  	FILE *flag;

	s1 = (char *)malloc(8);
	*s1 = 1;

	s2 = (char *)malloc(8);
	*s2 = 2;

	strcpy(s1[1], argv[1]);
	strcpy(s2[1], argv[2]);int			*b;

	flag = fopen("/home/user/level8/.pass","r");
	fgets(g_buf, 68, flag);
	puts("~~");
	return 0;
}