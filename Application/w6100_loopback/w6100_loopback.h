#ifndef _LOOPBACK_H_
#define _LOOPBACK_H_

#include <stdint.h>

/* Loopback test debug message printout enable */
//#define	_LOOPBACK_DEBUG_

/* DATA_BUF_SIZE define for Loopback example */
#ifndef DATA_BUF_SIZE
	#define DATA_BUF_SIZE			1024
#endif

int32_t w6100_loopback_udps(uint8_t sn, uint8_t* buf, uint16_t port, uint8_t loopback_mode);
int32_t w6100_loopback_tcps(uint8_t sn, uint8_t* buf, uint16_t port, uint8_t loopback_mode);
int32_t w6100_loopback_tcpc(uint8_t sn, uint8_t* buf, uint8_t* destip, uint16_t destport, uint8_t loopback_mode);


#endif
