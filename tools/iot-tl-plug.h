/*
 * Header file for the iot-scanner tool
 *
 */

#define BUFFER_SIZE		65556

/* Constants used with the multi_scan_local() function */
#define	PROBE_ICMP6_ECHO	1
#define PROBE_UNREC_OPT		2
#define PROBE_TCP		3
#define	LOCAL_SRC		1
#define GLOBAL_SRC		2

#define ICMPV6_ECHO_PAYLOAD_SIZE	56
#define	MAX_IPV6_ENTRIES		65000

/* Constant for the host-scanning functions */
#define	PRINT_ETHER_ADDR		1
#define NOT_PRINT_ETHER_ADDR		0

#define	VALID_MAPPING			1
#define INVALID_MAPPING			0


/* Remote scans */
#define LOW_BYTE_1ST_WORD_UPPER		0x1500
#define LOW_BYTE_2ND_WORD_UPPER		0x0100
#define EMBEDDED_PORT_2ND_WORD		5
#define	MAX_IEEE_OUIS_LINE_SIZE		160
#define	OUI_HEX_STRING_SIZE		5
#define	MAX_IEEE_OUIS			1000
#define MAX_SCAN_ENTRIES		65535
#define MAX_PORT_ENTRIES		65536
#define MAX_PREF_ENTRIES		MAX_SCAN_ENTRIES
#define	SELECT_TIMEOUT			4
#define	PSCAN_TIMEOUT			1
#define MAX_RANGE_STR_LEN		79
#define MIN_INC_RANGE			1000
/* #define	MAX_DESTNATIONS			65535 */
#define MAX_IID_ENTRIES			65535

#define ND_RETRIES			0

/* Constants for config file processing */
#define MAX_LINE_SIZE			250
#define MAX_VAR_NAME_LEN		100
#define MAX_FILENAME_SIZE		250


union my6_addr{
	uint8_t		s6addr[16];
	uint16_t	s6addr16[8];
	uint32_t	s6addr32[4];
	struct in6_addr	in6_addr;
};


#define	MAX_PORTS_LINE_SIZE			80



/* Constants for port scan results */

#define PORT_FILTERED		1
#define PORT_OPEN			2
#define PORT_CLOSED			4
#define PORT_ACT_FILT		8


#define DEFAULT_MIN_PORT	0
#define DEFAULT_MAX_PORT	65535
#define MAX_PORT_RANGE		65536
#define IPPROTO_ALL			0xf1	/* Fake number to indicate both TCP and UDP */

#define	SET_RELAY_ON		1
#define SET_RELAY_OFF		2

/* Constants for printing the scanning results */

/* Steps into which results will be printed */
/*#define MAX_STEPS	20*/
#define MAX_COMMAND_LENGTH	500

char *commands[]={"reboot", "reset", "set_relay_state", "set_led_off", "set_dev_alias", "set_mac_addr", "set_device_id", "set_hw_id",\
				 "set_dev_location", "test_check_uboot", "get_dev_icon", "set_dev_icon", "set_test_mode", "download_firmware", 
				 "get_download_state", "flash_firmware", "check_new_config", "get_info", "get_sys_info", "get_emeter_info", NULL};

char TP_LINK_SMART_DISCOVER[]="{\"system\":{\"get_sysinfo\":null},\"emeter\":{\"get_realtime\":null}}";
char TP_LINK_SET_RELAY_ON[]= "{\"system\":{\"set_relay_state\":{\"state\":1}}}";
char TP_LINK_SET_RELAY_OFF[]="{\"system\":{\"set_relay_state\":{\"state\":0}}}";
char TP_LINK_PING_PONG[]="{\"DoSme\":{\"err_code\":-1,\"err_msg\":\"module not support\"}}";

unsigned int	is_command_valid(char *);


