#ifndef STRATO_SENSORS_H
#define STRATO_SENSORS_H

#include "drv_pressure.h"
#include "app_error.h"

typedef void (*altitude_data_cb_t)(uint32_t integer, uint8_t decimal);
typedef void (*acceleration_data_cb_t)(uint32_t integer, uint8_t decimal);

ret_code_t sensors_init()



#endif /*STRATO_SENSORS_H*/
