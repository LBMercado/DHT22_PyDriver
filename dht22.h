const short unsigned int AWAKE_TIME_MS = 20;
const short unsigned int MAX_HIGH_SIGNAL_LENGTH = 200;
const short unsigned int DHT_DELAY_MS = 2000;

typedef enum {
	// normal
	INIT = 2,
	OK = 1,
	// errors
	ERR = -1,        // generic error
	INIT_ERR = -2,
	BUSY = -3
} STATUS;