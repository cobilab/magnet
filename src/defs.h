#ifndef DEFS_H_INCLUDED
#define DEFS_H_INCLUDED

#include <stdint.h>
#define __STDC_FORMAT_MACROS
#include <inttypes.h>
#if defined(_MSC_VER)
  #include <io.h>
#else
  #include <unistd.h>
#endif

typedef uint64_t ULL;
typedef uint64_t U64;
typedef uint32_t U32;
typedef uint16_t U16;
typedef uint8_t  U8;
typedef int64_t  I64;
typedef int32_t  I32;
typedef int16_t  I16;
typedef int8_t   I8;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#define RELEASE                4
#define VERSION                19

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#define MAX_NAME_OUT           10000
#define SBASE                  65
#define LOCAL_SIMILARITY       1
#define MAX_LABEL              1024
#define BUFFER_SIZE            65535
#define DEF_VERSION            0
#define DEF_EXAMPLE            0
#define DEFAULT_HELP           0
#define DEFAULT_VERBOSE        0
#define DEFAULT_FORCE          0
#define DEFAULT_INVERT         0
#define DEFAULT_LOCAL          0
#define DEFAULT_LEVEL          36
#define DEFAULT_SHOWS          1
#define DEFAULT_NAMES          1
#define DEFAULT_RSCAL          0
#define DEFAULT_GBEST          0
#define DEFAULT_INDEX          2
#define DEFAULT_THREADS        2
#define DEFAULT_FILTERSIZE     500
#define DEFAULT_MINBLOCK       100
#define DEFAULT_SAMPLE         1
#define MIN_SAP                1
#define MAX_SAP                99999999
#define MAX_LEV                44
#define MIN_LEV                1
#define MAX_NAME               5000

#define MIN_THREADS            1
#define MAX_THREADS            65535
#define MAX_CTX                31
#define MIN_CTX                1
#define MAX_DEN                1000000
#define MIN_DEN                1
#define MIN_INDEX              2
#define BGUARD                 32
#define DEFAULT_MAX_COUNT      ((1 << (sizeof(ACC) * 8)) - 1)
#define MX_PMODEL              65535
#define ALPHABET_SIZE          4
#define CHECKSUMGF             1073741824
#define WATERMARK              16042014
#define DEFAULT_GAMMA          0.90
#define MAX_HISTORYSIZE        1000000
#define REFERENCE              1
#define TARGET                 0
#define EXTRA_MOD_DEN          1
#define EXTRA_MOD_CTX          3
#define EXTRA_BIN_DEN          1
#define EXTRA_BIN_CTX          8
#define EXTRA_N_DEN            1
#define EXTRA_N_CTX            8
#define EXTRA_L_DEN            1
#define EXTRA_L_CTX            8
#define MAX_STR                2048

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#endif

