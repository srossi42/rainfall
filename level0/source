#define _GNU_SOURCE
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int setresuid(uid_t ruid, uid_t euid, uid_t suid);
int setresgid(gid_t rgid, gid_t egid, gid_t sgid);

int main(int argc, char **argv)
{
	int value;
	char *args[2];
	gid_t gid;
	uid_t uid;

	value = atoi(argv[1]);
	if (value == 423)
	{
		args[0] = strdup("/bin/dash");
		args[1] = NULL;
		gid = getegid();
		uid = geteuid();
		setresgid(gid, gid, gid);
		setresuid(uid, uid, uid);
		execv("/bin/dash", args);
	}
	else
	{
		fwrite("No !\n", 5, 1, stdout);
	}
	return (0);
}
