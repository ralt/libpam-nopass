#include <security/pam_modules.h>
#include <stdlib.h>

#define SUCCESS() const char *user; \
	int retval; \
	retval = pam_get_user(pamh, &user, NULL); \
	if (retval != PAM_SUCCESS) \
	{ \
		return retval; \
	} \
	return PAM_SUCCESS;


PAM_EXTERN int pam_sm_setcred( pam_handle_t *pamh, int flags, int argc, const char **argv ) {
	SUCCESS()
}

PAM_EXTERN int pam_sm_authenticate( pam_handle_t *pamh, int flags,int argc, const char **argv ) {
	SUCCESS()
}
