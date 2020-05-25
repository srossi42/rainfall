char *p(char *dst, char* sep) {

	char buf[4096];

	puts(sep);
	read (0, buf, 4096);
	*strchr(buf, '\n') = '\0';
	return strncpy(dst, buf, 20);
}

char *pp(char *buf) {
	char str[20];
	char str2[20];
	int len;

	p(str, " - ");
	p(str2, " - ");

	strcpy(buf, str);

	len = strlen(buf);
	buf[len] = ' ':
	buf[len+1] = '\0':
	
	return strcat(buf, str2);
}

int main (void) {
	char buf[42];

	pp(buf)
	puts(buf);
	return 0;
}