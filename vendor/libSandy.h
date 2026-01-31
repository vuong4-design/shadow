#ifndef LIBSANDY_H
#define LIBSANDY_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void libSandy_applyProfile(const char *profile);
bool libSandy_works(void);

#ifdef __cplusplus
}
#endif

#endif
