// Generated by `wit-bindgen` 0.21.0. DO NOT EDIT!
#ifndef __BINDINGS_BINDINGS_H
#define __BINDINGS_BINDINGS_H
#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct {
  uint8_t*ptr;
  size_t len;
} bindings_string_t;

typedef struct {
  uint8_t   f0;
  uint8_t   f1;
  uint8_t   f2;
} wadu436_usb_types_version_t;

typedef struct {
  bool is_some;
  uint16_t val;
} bindings_option_u16_t;

typedef struct {
  bool is_some;
  uint8_t val;
} bindings_option_u8_t;

typedef struct {
  bool is_some;
  bindings_string_t val;
} bindings_option_string_t;

// Record for passing into the request-device convenience function.
typedef struct {
  bindings_option_u16_t   vendor_id;
  bindings_option_u16_t   product_id;
  bindings_option_u8_t   class_code;
  bindings_option_u8_t   subclass_code;
  bindings_option_u8_t   protocol_code;
  bindings_option_string_t   serial_number;
} wadu436_usb_types_filter_t;

// Endpoint transfer types
typedef uint8_t wadu436_usb_types_transfer_type_t;

#define WADU436_USB_TYPES_TRANSFER_TYPE_CONTROL 0
#define WADU436_USB_TYPES_TRANSFER_TYPE_ISOCHRONOUS 1
#define WADU436_USB_TYPES_TRANSFER_TYPE_BULK 2
#define WADU436_USB_TYPES_TRANSFER_TYPE_INTERRUPT 3

// Endpoint direction
typedef uint8_t wadu436_usb_types_direction_t;

#define WADU436_USB_TYPES_DIRECTION_OUT 0
#define WADU436_USB_TYPES_DIRECTION_IN 1

// Device speed
typedef uint8_t wadu436_usb_types_speed_t;

#define WADU436_USB_TYPES_SPEED_UNKNOWN 0
// OS doesn't know which speed the device is using
#define WADU436_USB_TYPES_SPEED_LOW 1
// 1.5 Mbit/s
#define WADU436_USB_TYPES_SPEED_FULL 2
// 12 Mbit/s
#define WADU436_USB_TYPES_SPEED_HIGH 3
// 480 Mbit/s
#define WADU436_USB_TYPES_SPEED_SUPER 4
// 5 Gbit/s
#define WADU436_USB_TYPES_SPEED_SUPERPLUS 5

// Setup type for control transfers
typedef uint8_t wadu436_usb_types_control_setup_type_t;

#define WADU436_USB_TYPES_CONTROL_SETUP_TYPE_STANDARD 0
#define WADU436_USB_TYPES_CONTROL_SETUP_TYPE_CLASS 1
#define WADU436_USB_TYPES_CONTROL_SETUP_TYPE_VENDOR 2

// Recipient for control transfers
typedef uint8_t wadu436_usb_types_control_setup_recipient_t;

#define WADU436_USB_TYPES_CONTROL_SETUP_RECIPIENT_DEVICE 0
#define WADU436_USB_TYPES_CONTROL_SETUP_RECIPIENT_INTERFACE 1
// interface, but that's a keyword
#define WADU436_USB_TYPES_CONTROL_SETUP_RECIPIENT_ENDPOINT 2

// Control setup packet
typedef struct {
  wadu436_usb_types_control_setup_type_t   request_type;
  wadu436_usb_types_control_setup_recipient_t   request_recipient;
  uint8_t   request;
  // bRequest
  uint16_t   value;
  // wValue
  uint16_t   index;
} wadu436_usb_types_control_setup_t;

typedef wadu436_usb_types_version_t wadu436_usb_descriptors_version_t;

typedef wadu436_usb_types_direction_t wadu436_usb_descriptors_direction_t;

typedef wadu436_usb_types_transfer_type_t wadu436_usb_descriptors_transfer_type_t;

// Contains the fields of the device descriptor as defined in the USB 2.0 spec
typedef struct {
  bindings_option_string_t   product_name;
  bindings_option_string_t   manufacturer_name;
  bindings_option_string_t   serial_number;
  wadu436_usb_descriptors_version_t   usb_version;
  uint16_t   vendor_id;
  uint16_t   product_id;
  wadu436_usb_descriptors_version_t   device_version;
  uint8_t   device_class;
  uint8_t   device_subclass;
  uint8_t   device_protocol;
  uint8_t   max_packet_size;
} wadu436_usb_descriptors_device_descriptor_t;

// Contains the fields of the configuration descriptor
typedef struct {
  uint8_t   number;
  bindings_option_string_t   description;
  bool   self_powered;
  bool   remote_wakeup;
  uint16_t   max_power;
} wadu436_usb_descriptors_configuration_descriptor_t;

// Contains the fields of the interface descriptor
typedef struct {
  uint8_t   interface_number;
  uint8_t   alternate_setting;
  uint8_t   interface_class;
  uint8_t   interface_subclass;
  uint8_t   interface_protocol;
  bindings_option_string_t   interface_name;
} wadu436_usb_descriptors_interface_descriptor_t;

// Contains the fields of the endpoint descriptor
typedef struct {
  uint8_t   endpoint_number;
  // 0-15, lower 4 bits of the bEndpointAddress field
  wadu436_usb_descriptors_direction_t   direction;
  // corresponds to bit 7 of the bEndpointAddress field
  wadu436_usb_descriptors_transfer_type_t   transfer_type;
  // corresponds to bits 0-1 of the bmAttributes field
  uint16_t   max_packet_size;
  uint8_t   interval;
} wadu436_usb_descriptors_endpoint_descriptor_t;

typedef wadu436_usb_descriptors_device_descriptor_t wadu436_usb_device_device_descriptor_t;

typedef wadu436_usb_descriptors_configuration_descriptor_t wadu436_usb_device_configuration_descriptor_t;

typedef wadu436_usb_descriptors_interface_descriptor_t wadu436_usb_device_interface_descriptor_t;

typedef wadu436_usb_descriptors_endpoint_descriptor_t wadu436_usb_device_endpoint_descriptor_t;

typedef wadu436_usb_types_speed_t wadu436_usb_device_speed_t;

typedef wadu436_usb_types_filter_t wadu436_usb_device_filter_t;

typedef wadu436_usb_types_control_setup_type_t wadu436_usb_device_control_setup_type_t;

typedef wadu436_usb_types_control_setup_recipient_t wadu436_usb_device_control_setup_recipient_t;

typedef wadu436_usb_types_control_setup_t wadu436_usb_device_control_setup_t;

typedef struct wadu436_usb_device_own_usb_device_t {
  int32_t __handle;
} wadu436_usb_device_own_usb_device_t;

typedef struct wadu436_usb_device_borrow_usb_device_t {
  int32_t __handle;
} wadu436_usb_device_borrow_usb_device_t;

typedef struct wadu436_usb_device_own_usb_configuration_t {
  int32_t __handle;
} wadu436_usb_device_own_usb_configuration_t;

typedef struct wadu436_usb_device_borrow_usb_configuration_t {
  int32_t __handle;
} wadu436_usb_device_borrow_usb_configuration_t;

typedef struct wadu436_usb_device_own_usb_interface_t {
  int32_t __handle;
} wadu436_usb_device_own_usb_interface_t;

typedef struct wadu436_usb_device_borrow_usb_interface_t {
  int32_t __handle;
} wadu436_usb_device_borrow_usb_interface_t;

typedef struct wadu436_usb_device_own_usb_endpoint_t {
  int32_t __handle;
} wadu436_usb_device_own_usb_endpoint_t;

typedef struct wadu436_usb_device_borrow_usb_endpoint_t {
  int32_t __handle;
} wadu436_usb_device_borrow_usb_endpoint_t;

typedef struct {
  wadu436_usb_device_own_usb_device_t *ptr;
  size_t len;
} wadu436_usb_device_list_own_usb_device_t;

typedef struct {
  bool is_some;
  wadu436_usb_device_own_usb_device_t val;
} wadu436_usb_device_option_own_usb_device_t;

typedef struct {
  wadu436_usb_device_own_usb_configuration_t *ptr;
  size_t len;
} wadu436_usb_device_list_own_usb_configuration_t;

typedef struct {
  uint8_t *ptr;
  size_t len;
} bindings_list_u8_t;

typedef struct {
  wadu436_usb_device_own_usb_interface_t *ptr;
  size_t len;
} wadu436_usb_device_list_own_usb_interface_t;

typedef struct {
  wadu436_usb_device_own_usb_endpoint_t *ptr;
  size_t len;
} wadu436_usb_device_list_own_usb_endpoint_t;

// Imported Functions from `wadu436:usb/device@0.0.1`
// Main entry point for the API.
// Returns all the USB devices currently connected to the system (or if access control is implemented by the runtime, only the ones the component has access to)
extern void wadu436_usb_device_static_usb_device_enumerate(wadu436_usb_device_list_own_usb_device_t *ret);
// Convenience funtion, equivalent to calling enumerate(), applying the provided filters to the list, and returning the first element
extern void wadu436_usb_device_static_usb_device_request_device(wadu436_usb_device_filter_t *filter, wadu436_usb_device_option_own_usb_device_t *ret);
// Returns the device descriptor of the device
extern void wadu436_usb_device_method_usb_device_descriptor(wadu436_usb_device_borrow_usb_device_t self, wadu436_usb_device_device_descriptor_t *ret);
// Returns the USB Speed of the device (Low, Full, High, ...)
extern wadu436_usb_device_speed_t wadu436_usb_device_method_usb_device_speed(wadu436_usb_device_borrow_usb_device_t self);
// Returns all the configurations the device supports
extern void wadu436_usb_device_method_usb_device_configurations(wadu436_usb_device_borrow_usb_device_t self, wadu436_usb_device_list_own_usb_configuration_t *ret);
// Returns the currently active configuration
extern wadu436_usb_device_own_usb_configuration_t wadu436_usb_device_method_usb_device_active_configuration(wadu436_usb_device_borrow_usb_device_t self);
// Opens the device. This is required before any transfers can be made.
extern void wadu436_usb_device_method_usb_device_open(wadu436_usb_device_borrow_usb_device_t self);
// Returns whether the device is currently open.
extern bool wadu436_usb_device_method_usb_device_opened(wadu436_usb_device_borrow_usb_device_t self);
// Resets the device.
extern void wadu436_usb_device_method_usb_device_reset(wadu436_usb_device_borrow_usb_device_t self);
// Closes the device.
extern void wadu436_usb_device_method_usb_device_close(wadu436_usb_device_borrow_usb_device_t self);
// Selects the active configuration. The device must first be opened.
extern void wadu436_usb_device_method_usb_device_select_configuration(wadu436_usb_device_borrow_usb_device_t self, wadu436_usb_device_borrow_usb_configuration_t configuration);
// Claims an interface for exclusive use. Also selects the alternate interface, as the usb-interface resource actually represents an alternate interface.
extern void wadu436_usb_device_method_usb_device_claim_interface(wadu436_usb_device_borrow_usb_device_t self, wadu436_usb_device_borrow_usb_interface_t interface);
// Releases an interface.
extern void wadu436_usb_device_method_usb_device_release_interface(wadu436_usb_device_borrow_usb_device_t self, wadu436_usb_device_borrow_usb_interface_t interface);
// Clears a halt on a specific endpoint.
extern void wadu436_usb_device_method_usb_device_clear_halt(wadu436_usb_device_borrow_usb_device_t self, wadu436_usb_device_borrow_usb_endpoint_t endpoint);
// Read control data from the device. The endpoint is always EP0.
extern void wadu436_usb_device_method_usb_device_read_control(wadu436_usb_device_borrow_usb_device_t self, wadu436_usb_device_control_setup_t *request, uint16_t length, bindings_list_u8_t *ret);
// Write control data to the device. The endpoint is always EP0. The return value is the number of bytes written.
extern uint64_t wadu436_usb_device_method_usb_device_write_control(wadu436_usb_device_borrow_usb_device_t self, wadu436_usb_device_control_setup_t *request, bindings_list_u8_t *data);
// Read data from an interrupt endpoint. The endpoint must be an interrupt endpoint.
extern void wadu436_usb_device_method_usb_device_read_interrupt(wadu436_usb_device_borrow_usb_device_t self, wadu436_usb_device_borrow_usb_endpoint_t endpoint, uint64_t length, bindings_list_u8_t *ret);
// Write data to an interrupt endpoint. The endpoint must be an interrupt endpoint. The return value is the number of bytes written.
extern uint64_t wadu436_usb_device_method_usb_device_write_interrupt(wadu436_usb_device_borrow_usb_device_t self, wadu436_usb_device_borrow_usb_endpoint_t endpoint, bindings_list_u8_t *data);
// Read data from a bulk endpoint. The endpoint must be a bulk endpoint.
extern void wadu436_usb_device_method_usb_device_read_bulk(wadu436_usb_device_borrow_usb_device_t self, wadu436_usb_device_borrow_usb_endpoint_t endpoint, uint64_t length, bindings_list_u8_t *ret);
// Write data to a bulk endpoint. The endpoint must be a bulk endpoint. The return value is the number of bytes written.
extern uint64_t wadu436_usb_device_method_usb_device_write_bulk(wadu436_usb_device_borrow_usb_device_t self, wadu436_usb_device_borrow_usb_endpoint_t endpoint, bindings_list_u8_t *data);
// TODO: support sending/receiving multiple packets at once for isochronous endpoints?
// Read data from an isochronous endpoint. The endpoint must be an isochronous endpoint.
extern void wadu436_usb_device_method_usb_device_read_isochronous(wadu436_usb_device_borrow_usb_device_t self, wadu436_usb_device_borrow_usb_endpoint_t endpoint, bindings_list_u8_t *ret);
// Write data to an isochronous endpoint. The endpoint must be an isochronous endpoint. The return value is the number of bytes written.
extern uint64_t wadu436_usb_device_method_usb_device_write_isochronous(wadu436_usb_device_borrow_usb_device_t self, wadu436_usb_device_borrow_usb_endpoint_t endpoint, bindings_list_u8_t *data);
extern void wadu436_usb_device_method_usb_configuration_descriptor(wadu436_usb_device_borrow_usb_configuration_t self, wadu436_usb_device_configuration_descriptor_t *ret);
extern void wadu436_usb_device_method_usb_configuration_interfaces(wadu436_usb_device_borrow_usb_configuration_t self, wadu436_usb_device_list_own_usb_interface_t *ret);
extern void wadu436_usb_device_method_usb_interface_descriptor(wadu436_usb_device_borrow_usb_interface_t self, wadu436_usb_device_interface_descriptor_t *ret);
extern void wadu436_usb_device_method_usb_interface_endpoints(wadu436_usb_device_borrow_usb_interface_t self, wadu436_usb_device_list_own_usb_endpoint_t *ret);
extern void wadu436_usb_device_method_usb_endpoint_descriptor(wadu436_usb_device_borrow_usb_endpoint_t self, wadu436_usb_device_endpoint_descriptor_t *ret);

// Helper Functions

void bindings_option_u16_free(bindings_option_u16_t *ptr);

void bindings_option_u8_free(bindings_option_u8_t *ptr);

void bindings_option_string_free(bindings_option_string_t *ptr);

void wadu436_usb_types_filter_free(wadu436_usb_types_filter_t *ptr);

void wadu436_usb_descriptors_device_descriptor_free(wadu436_usb_descriptors_device_descriptor_t *ptr);

void wadu436_usb_descriptors_configuration_descriptor_free(wadu436_usb_descriptors_configuration_descriptor_t *ptr);

void wadu436_usb_descriptors_interface_descriptor_free(wadu436_usb_descriptors_interface_descriptor_t *ptr);

void wadu436_usb_device_device_descriptor_free(wadu436_usb_device_device_descriptor_t *ptr);

void wadu436_usb_device_configuration_descriptor_free(wadu436_usb_device_configuration_descriptor_t *ptr);

void wadu436_usb_device_interface_descriptor_free(wadu436_usb_device_interface_descriptor_t *ptr);

void wadu436_usb_device_filter_free(wadu436_usb_device_filter_t *ptr);

extern void wadu436_usb_device_usb_device_drop_own(wadu436_usb_device_own_usb_device_t handle);

extern wadu436_usb_device_borrow_usb_device_t wadu436_usb_device_borrow_usb_device(wadu436_usb_device_own_usb_device_t handle);

extern void wadu436_usb_device_usb_configuration_drop_own(wadu436_usb_device_own_usb_configuration_t handle);

extern wadu436_usb_device_borrow_usb_configuration_t wadu436_usb_device_borrow_usb_configuration(wadu436_usb_device_own_usb_configuration_t handle);

extern void wadu436_usb_device_usb_interface_drop_own(wadu436_usb_device_own_usb_interface_t handle);

extern wadu436_usb_device_borrow_usb_interface_t wadu436_usb_device_borrow_usb_interface(wadu436_usb_device_own_usb_interface_t handle);

extern void wadu436_usb_device_usb_endpoint_drop_own(wadu436_usb_device_own_usb_endpoint_t handle);

extern wadu436_usb_device_borrow_usb_endpoint_t wadu436_usb_device_borrow_usb_endpoint(wadu436_usb_device_own_usb_endpoint_t handle);

void wadu436_usb_device_list_own_usb_device_free(wadu436_usb_device_list_own_usb_device_t *ptr);

void wadu436_usb_device_option_own_usb_device_free(wadu436_usb_device_option_own_usb_device_t *ptr);

void wadu436_usb_device_list_own_usb_configuration_free(wadu436_usb_device_list_own_usb_configuration_t *ptr);

void bindings_list_u8_free(bindings_list_u8_t *ptr);

void wadu436_usb_device_list_own_usb_interface_free(wadu436_usb_device_list_own_usb_interface_t *ptr);

void wadu436_usb_device_list_own_usb_endpoint_free(wadu436_usb_device_list_own_usb_endpoint_t *ptr);

// Transfers ownership of `s` into the string `ret`
void bindings_string_set(bindings_string_t *ret, char*s);

// Creates a copy of the input nul-terminate string `s` and
// stores it into the component model string `ret`.
void bindings_string_dup(bindings_string_t *ret, const char*s);

// Deallocates the string pointed to by `ret`, deallocating
// the memory behind the string.
void bindings_string_free(bindings_string_t *ret);

#ifdef __cplusplus
}
#endif
#endif
