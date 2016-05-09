#ifndef CONFIG_H
#define CONFIG_H

/**
 * Use Felics lossless compression.
 */
#define FELICS

/**
 * Use lossy compression that truncates
 * the LSB of every image byte.
 */
//#define TRUNCATE_1

/**
 * Use lossy compression that truncates
 * the two LSBs of every image byte.
 */
//#define TRUNCATE_2

/**
 * Use lossy compression that truncates
 * the four LSBs of every image byte.
 */
//#define TRUNCATE_4

/**
 * Size of buffer between flash and (de-)compression.
 * Has to be a factor of the image data size.
 */
#define FLASH_BUF_SIZE 1024

/**
 * Size of buffer between (de-)compression and sender/receiver.
 */
#define COMPRESSION_BUF_SIZE 1024

/**
 * Size of blocks that are compressed at once.
 * Smaller size means shorter compression task cycles but more calls to the buffer interfaces.
 */
#define COMPRESS_BLOCK_SIZE 256

/**
 * Package payload size of the RF package.
 * (114 byte is the maximum package payload for the telosb)
 */
#define RF_PAYLOAD_SIZE 114

/**
 * Package payload size of serial package.
 */
#define SERIAL_PAYLOAD_SIZE 256 /* random value to this point */

#include "printf.h"
#define PRINTLN(fmt, ...) do { printf(fmt, ##__VA_ARGS__); printf("\n"); printfflush(); } while(0);

#endif /* CONFIG_H */