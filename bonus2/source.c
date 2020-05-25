
int language = 0;


int greetuser(char *user) {

    char buf[64];

    if (language == 1)
        strcat(buf, "Hyvää päivää ");  
    else if (language == 2)
        strcat(buf, "Goedemiddag! ");
    else
    	strcat(buf, "Hello ");

    puts(strcat(buf, user));

	return 0;

}

int main(int argc, char **argv2) {

	char buf[72];
	char *lang;

	if (argc == 3) {
		memset(buf, 0, 19)
		strncpy(buf, argv[1], 40);
		strncpy(&buf[40], argv[1], 32);
		lang = getenv("LANG");
		if (memcmp(env, "fi", 2) == 0) {
			language = 1;
		} else if (memcmp(env, "nl", 2) == 0) {
			language = 2;
		}
		return (greetuser(buf));
	}
	return 1;
}