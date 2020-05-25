int main(int argc, char **argv) 
{
    FILE *file = fopen("/home/user/end/.pass", "r")
    char buf[132];

    memset(buf, 0, 33);
    if (argc == 2 && file != NULL) 
    {
        fread(buf, 1, 66, file);
        buf[atoi(argv[1])] = 0;
        fread(&buf[66], 1, 0x41, file);
        fclose(file);

        if (strcmp(buf, argv[1]) == 0)
            system("/bin/sh");
        else
            puts(&buf[66]);
        return 0;
    }
    return -1;
}

