#define _GNU_SOURCE
#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/types.h>

#include <security/pam_appl.h>

#ifdef FOR_PAM
static int my_conv(int num_msg, const struct pam_message **msg,
                struct pam_response **resp, void *appdata_ptr)
{
    return PAM_CONV_ERR;
}

static const struct pam_conv my_pam_conv = {
	.conv = my_conv,
};
#endif

static void print_uids(void)
{
	uid_t ruid, euid, suid;

	if (getresuid(&ruid, &euid, &suid) < 0)
		err(1, "getresuid");

	printf("R=%u E=%u S=%u\n", ruid, euid, suid);
}

int main(void)
{
	print_uids();

	return 0;
}
