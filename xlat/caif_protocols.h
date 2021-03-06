/* Generated by ./xlat/gen.sh from ./xlat/caif_protocols.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(CAIFPROTO_AT) || (defined(HAVE_DECL_CAIFPROTO_AT) && HAVE_DECL_CAIFPROTO_AT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CAIFPROTO_AT) == (0), "CAIFPROTO_AT != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CAIFPROTO_AT 0
#endif
#if defined(CAIFPROTO_DATAGRAM) || (defined(HAVE_DECL_CAIFPROTO_DATAGRAM) && HAVE_DECL_CAIFPROTO_DATAGRAM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CAIFPROTO_DATAGRAM) == (1), "CAIFPROTO_DATAGRAM != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CAIFPROTO_DATAGRAM 1
#endif
#if defined(CAIFPROTO_DATAGRAM_LOOP) || (defined(HAVE_DECL_CAIFPROTO_DATAGRAM_LOOP) && HAVE_DECL_CAIFPROTO_DATAGRAM_LOOP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CAIFPROTO_DATAGRAM_LOOP) == (2), "CAIFPROTO_DATAGRAM_LOOP != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CAIFPROTO_DATAGRAM_LOOP 2
#endif
#if defined(CAIFPROTO_UTIL) || (defined(HAVE_DECL_CAIFPROTO_UTIL) && HAVE_DECL_CAIFPROTO_UTIL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CAIFPROTO_UTIL) == (3), "CAIFPROTO_UTIL != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CAIFPROTO_UTIL 3
#endif
#if defined(CAIFPROTO_RFM) || (defined(HAVE_DECL_CAIFPROTO_RFM) && HAVE_DECL_CAIFPROTO_RFM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CAIFPROTO_RFM) == (4), "CAIFPROTO_RFM != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CAIFPROTO_RFM 4
#endif
#if defined(CAIFPROTO_DEBUG) || (defined(HAVE_DECL_CAIFPROTO_DEBUG) && HAVE_DECL_CAIFPROTO_DEBUG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CAIFPROTO_DEBUG) == (5), "CAIFPROTO_DEBUG != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CAIFPROTO_DEBUG 5
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat caif_protocols in mpers mode

# else

static
const struct xlat caif_protocols[] = {
 [CAIFPROTO_AT] = XLAT(CAIFPROTO_AT),
 [CAIFPROTO_DATAGRAM] = XLAT(CAIFPROTO_DATAGRAM),
 [CAIFPROTO_DATAGRAM_LOOP] = XLAT(CAIFPROTO_DATAGRAM_LOOP),
 [CAIFPROTO_UTIL] = XLAT(CAIFPROTO_UTIL),
 [CAIFPROTO_RFM] = XLAT(CAIFPROTO_RFM),
 [CAIFPROTO_DEBUG] = XLAT(CAIFPROTO_DEBUG),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
