#ifndef crypto_verify_64_H
#define crypto_verify_64_H

#include <stddef.h>
#include "export.h"

/** \addtogroup strcmp
 *
 * @{
 */

#define crypto_verify_64_BYTES 64U

#ifdef __cplusplus
extern "C" {
#endif

  /// @TODO
SODIUM_EXPORT
size_t crypto_verify_64_bytes(void);

/**
 * Compares the first crypto_verify_64_BYTES of the given strings.
 *
 * @param[in] string1 a string
 * @param[in] string2 another string
 *
 * @return 0 if string1 and string2 are equal, otherwise -1.
 *
 * @pre string1 must be minimum of crypto_verify_64_BYTES long.
 * @pre string2 must be minimum of crypto_verify_64_BYTES long.
 *
 * @note The time taken by the function is independent of the contents
 * of string1 and string2. In contrast, the standard C comparison
 * function memcmp(string1,string2,64) takes time that is dependent on
 * the longest matching prefix of string1 and string2. This often
 * allows for easy timing attacks.
 *
 * Example invocation:
 *
 *~~~~~{.c}
 * const unsigned char x[64];
 * const unsigned char y[64];
 *
 * crypto_verify_64(x,y);
 *~~~~~
 */
SODIUM_EXPORT
int crypto_verify_64(const unsigned char *x, const unsigned char *y);

#define crypto_verify_64_ref crypto_verify_64 ///< @TODO


  /// @}
#ifdef __cplusplus
}
#endif

#endif
