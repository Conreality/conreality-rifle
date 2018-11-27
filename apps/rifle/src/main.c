/* This is free and unencumbered software released into the public domain. */

#include <assert.h>
#include <string.h>

#include "sysinit/sysinit.h"
#include "os/os.h"
#include "bsp/bsp.h"
#include "hal/hal_gpio.h"
#ifdef ARCH_sim
#include "mcu/mcu_sim.h"
#endif

static volatile int g_task1_loops;

/* For LED toggling */
int g_led_pin;

/**
 * main
 *
 * The main task for the project. This function initializes packages,
 * and then blinks the BSP LED in a loop.
 *
 * @return int NOTE: this function should never return!
 */
int
main(int argc, char** argv) {
  int rc;

#ifdef ARCH_sim
  mcu_sim_parse_args(argc, argv);
#endif

  sysinit();

  g_led_pin = LED_BLINK_PIN;
  hal_gpio_init_out(g_led_pin, 1);

  while (1) {
    ++g_task1_loops;

    /* Wait one second */
    os_time_delay(OS_TICKS_PER_SEC);

    /* Toggle the LED */
    hal_gpio_toggle(g_led_pin);
  }
  assert(0); // unreachable

  return rc;
}

