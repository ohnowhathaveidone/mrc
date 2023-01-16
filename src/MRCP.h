#ifndef MRCP_H
#define MRCP_H 1
#include "Arduino.h"

const  char MRCP_END_FRAME = '\r';

// const  char MRCP_END_FRAME   = 'E';
const  char MRCP_START_FRAME = 'S'; //':'; //WTF!

const  char MRCP_COMMAND_QUEUE_IN = 'Q';
const  char MRCP_COMMAND_EXECUTE  = 'E';
const  char MRCP_COMMAND_WRITE    = 'W'; // just W to clear the eeprom

const  char MRCP_GET_BUFFER_SIZE = 'B';

const String E_RECEIVEBUFFER_FULL = "E01";
const String E_MRILBUFFER_FULL    = "E02";

#endif // ifndef MRCP_H
