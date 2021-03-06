/* Lua CJSON floating point conversion routines */

/* Buffer required to store the largest string representation of a double.
 *
 * Longest double printed with %.14g is 21 characters long:
 * -1.7976931348623e+308 */
#if defined(WIN32) && !defined(__cplusplus)
#define inline __inline
#define snprintf _snprintf
#endif
# define FPCONV_G_FMT_BUFSIZE   32

#define USE_INTERNAL_FPCONV   
#define ENABLE_CJSON_GLOBAL  

#ifdef USE_INTERNAL_FPCONV
static inline void fpconv_init()
{
    /* Do nothing - not required */
}
#else
extern inline void fpconv_init();
#endif

extern int fpconv_g_fmt(char*, double, int);
extern double fpconv_strtod(const char*, char**);

/* vi:ai et sw=4 ts=4:
 */
