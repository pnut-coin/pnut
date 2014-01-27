#ifndef PNUT_CONFIG_H
#define PNUT_CONFIG_H

// Genesis
const bool				SEARCH_GENESIS_DUDE	= false;
static const uint256 	GENESIS_BLOCK_HASH	("0x89365598bcf6703864d0bdee537d41879fcd6fa279d586d0f808d88504b25dfc");
static const uint256 	GENESIS_BLOCK_HASH_TESTNET ("0x89365598bcf6703864d0bdee537d41879fcd6fa279d586d0f808d88504b25dfc");

// Coin rules
/** No amount larger than this (in satoshi) is valid */
static const int64 MAX_MONEY = 2000000000u * COIN;

// Mining
static const int64 DIFFICULTY_MODIFIER = 2880; // 1d curve
static const int64 TARGET_TIME_SPACING = 30; // 30 seconds target
const int64 TOTAL_BANK_BLOCKS = 1;
const int64 BANK_AMOUNT_PER_BLOCK = 1000;
/** Maximum number of script-checking threads allowed */
static const int MAX_SCRIPTCHECK_THREADS = 16;
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int COINBASE_MATURITY = 300;
// Minimum disk space required - used in CheckDiskSpace()
static const uint64 MIN_DISK_SPACE = 52428800; // 50mB

// Blocks
/** The maximum allowed size for a serialized block, in bytes (network rule) */
static const unsigned int MAX_BLOCK_SIZE = 1000000;
/** Obsolete: maximum size for mined blocks */
static const unsigned int MAX_BLOCK_SIZE_GEN = MAX_BLOCK_SIZE/2;
/** Default for -blockmaxsize, maximum size for mined blocks **/
static const unsigned int DEFAULT_BLOCK_MAX_SIZE = 350000;
/** Default for -blockprioritysize, maximum space for zero/low-fee transactions **/
static const unsigned int DEFAULT_BLOCK_PRIORITY_SIZE = 30000;
/** The maximum allowed number of signature check operations in a block (network rule) */
static const unsigned int MAX_BLOCK_SIGOPS = MAX_BLOCK_SIZE/50;
/** The maximum number of orphan transactions kept in memory */
static const unsigned int MAX_ORPHAN_TRANSACTIONS = MAX_BLOCK_SIZE/100;
/** The maximum number of entries in an 'inv' protocol message */
static const unsigned int MAX_INV_SZ = 50000;
/** The maximum size of a blk?????.dat file (since 0.8) */
static const unsigned int MAX_BLOCKFILE_SIZE = 0x8000000; // 128 MiB
/** The pre-allocation chunk size for blk?????.dat files (since 0.8) */
static const unsigned int BLOCKFILE_CHUNK_SIZE = 0x1000000; // 16 MiB
/** The pre-allocation chunk size for rev?????.dat files (since 0.8) */
static const unsigned int UNDOFILE_CHUNK_SIZE = 0x100000; // 1 MiB
/** Fake height value used in CCoins to signify they are only in the memory pool (since 0.8) */
static const unsigned int MEMPOOL_HEIGHT = 0x7FFFFFFF;
/** Threshold for nLockTime: below this value it is interpreted as block number, otherwise as UNIX timestamp. */
static const unsigned int LOCKTIME_THRESHOLD = 500000000; // Tue Nov  5 00:53:20 1985 UTC

// Transactions
/** The maximum size for transactions we're willing to relay/mine */
static const unsigned int MAX_STANDARD_TX_SIZE = 100000;
static const int64 MIN_TX_FEE = CENT;
static const int64 MIN_RELAY_TX_FEE = MIN_TX_FEE;
static const int64 MIN_TXOUT_AMOUNT = MIN_TX_FEE;
// Large (in bytes) low-priority (new, small-coin) transactions
// need a fee.
const int64	LARGE_LOW_FEE = COIN * 144 / 250;
#endif
