/* Generated by ./xlat/gen.sh from ./xlat/route_nexthop_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat route_nexthop_flags in mpers mode

# else

static
const struct xlat route_nexthop_flags[] = {
#if defined(RTNH_F_DEAD) || (defined(HAVE_DECL_RTNH_F_DEAD) && HAVE_DECL_RTNH_F_DEAD)
  XLAT(RTNH_F_DEAD),
#endif
#if defined(RTNH_F_PERVASIVE) || (defined(HAVE_DECL_RTNH_F_PERVASIVE) && HAVE_DECL_RTNH_F_PERVASIVE)
  XLAT(RTNH_F_PERVASIVE),
#endif
#if defined(RTNH_F_ONLINK) || (defined(HAVE_DECL_RTNH_F_ONLINK) && HAVE_DECL_RTNH_F_ONLINK)
  XLAT(RTNH_F_ONLINK),
#endif
#if defined(RTNH_F_OFFLOAD) || (defined(HAVE_DECL_RTNH_F_OFFLOAD) && HAVE_DECL_RTNH_F_OFFLOAD)
  XLAT(RTNH_F_OFFLOAD),
#endif
#if defined(RTNH_F_LINKDOWN) || (defined(HAVE_DECL_RTNH_F_LINKDOWN) && HAVE_DECL_RTNH_F_LINKDOWN)
  XLAT(RTNH_F_LINKDOWN),
#endif
#if defined(RTNH_F_UNRESOLVED) || (defined(HAVE_DECL_RTNH_F_UNRESOLVED) && HAVE_DECL_RTNH_F_UNRESOLVED)
  XLAT(RTNH_F_UNRESOLVED),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
