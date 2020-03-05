// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX sma_compat_rhs

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

#define sma_compat_rhs_TAG sma_compat_rhs

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.56

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(sma_compat_rhs - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(sma_compat_rhs - COMPONENT)
#endif
