/* Generated by ./xlat/gen.sh from ./xlat/netfilter_versions.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NFNETLINK_V0) || (defined(HAVE_DECL_NFNETLINK_V0) && HAVE_DECL_NFNETLINK_V0)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFNETLINK_V0) == (0), "NFNETLINK_V0 != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFNETLINK_V0 0
#endif
#if defined(NFNETLINK_V1) || (defined(HAVE_DECL_NFNETLINK_V1) && HAVE_DECL_NFNETLINK_V1)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFNETLINK_V1) == (1), "NFNETLINK_V1 != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFNETLINK_V1 1
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat netfilter_versions in mpers mode

# else

static
const struct xlat netfilter_versions[] = {
 XLAT(NFNETLINK_V0),
 XLAT(NFNETLINK_V1),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
