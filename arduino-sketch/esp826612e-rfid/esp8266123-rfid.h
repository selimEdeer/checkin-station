typedef enum {
  RFID_OK,
  ANTENNA_GAIN_ERROR,
  TAG_READER_FAULTY,
  TAG_DATA_READ_ERROR,
  TAG_TYPE_NOT_SUPPORTED
} station_error_type;

typedef enum {
  WIFI_OK,
  AP_CONNECT_FAILED,
  STATIC_IP_FAILED,
  DHCP_FAILED,
  CONNECT_TO_SERVER_FAILED,
  SERVER_RESPONSE_TIMEOUT,
  JSON_RECEIVE_FAILED,
  JSON_PARSE_FAILED
} wifi_error_type;

typedef enum {
  OFF,
  ON,
  SLOW_BLINK,
  FAST_BLINK,
  SLOW_PULSE,
  FAST_PULSE
} io_state;
