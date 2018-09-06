#ifndef REDEFS_H
#define REDEFS_H

#define __system_property_set _system_property_set2
#define __system_property_find _system_property_find2
#define __system_property_read_callback _system_property_read_callback2
#define __system_property_foreach __system_property_foreach2
#define __system_property_wait __system_property_wait2
#define __system_property_read __system_property_read2
#define __system_property_get __system_property_get2
#define __system_property_find_nth __system_property_find_nth2
#define __system_property_set_filename __system_property_set_filename2
#define __system_property_area_init __system_property_area_init2
#define __system_property_area_serial __system_property_area_serial2
#define __system_property_add __system_property_add2
#define __system_property_update __system_property_update2
#define __system_property_serial __system_property_serial2
#define __system_properties_init __system_properties_init2
#define __system_property_wait_any __system_property_wait_any2
#define __system_property_del(x)  -1  /* Temp disable */

#endif //REDEFS_H
