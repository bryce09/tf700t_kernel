#ifndef _CPU_OVERCLOCK_H_
#define _CPU_OVERCLOCK_H_

/* Tegra3 TF700/T OC */

/*****************************/
/*                           */
/*      Voltage section      */
/*                           */
/*****************************/

/* cap voltages */
#define CPU_VOLTAGE_CAP         (1445)   /* mV */
#define CORE_VOLTAGE_CAP        (1465)   /* mV */

/* max and min voltages */

#define MAX_CPU_VOLTAGE         (1405)   /* mV */


#define MAX_CORE_VOLTAGE        (1460)   /* mV */


/*****************************/
/*                           */
/*    Frequency section      */
/*                           */
/*****************************/

/* cap frequencys */
#define CPU_FREQUENCY_CAP       (1900)   /* MHz */
#define CORE_FREQUENCY_CAP      (775)    /* MHz */
#define HOST1X_FREQUENCY_CAP \
        (DIV_ROUND_UP((CORE_FREQUENCY_CAP), 2)) /* MHz */

/* max. frequencys */
#define MAX_CPU_FREQUENCY       (1900)   /* MHz */
#define MAX_CORE_FREQUENCY      (775)    /* MHz */
#define MAX_HOST1X_FREQUENCY    (350)    /* MHz */

#define SYSTEM_NORMAL_MODE_FREQUENCY     (MAX_CPU_FREQUENCY)    /* MHz */
#define SYSTEM_BALANCE_MODE_FREQUENCY    (1300)    /* MHz */
#define SYSTEM_PWRSAVE_MODE_FREQUENCY    (768)    /* MHz */


/* This is the table index for the max/oc/last gpu
 * frequency in the dvfs table for tf700t
 */
#define CORE_MAXFREQ_IDX  (8)
/* This is the table index for the max/oc/last cpu
 * frequency in the dvfs table for tf700t
 */
#define CPU_MAXFREQ_IDX   (39)
/* Default gpu oc values after init is done */
#define CORE_DEFAULT_OC_FREQUENCY  (700)    /* MHz */
#define CORE_DEFAULT_OC_VOLT       (1350)   /* mV */

/*****************************/
/*                           */
/*   Temperature section     */
/*                           */
/*****************************/

/* shutdown temperature */
#define SHUTDOWN_TEMP            (90000)   /* mCelsius - 90000 original value */

/* thorttle down temp */
#define THROTTLE_DOWN_TEMP       (86000)   /* mCelsius - 85000 original value */

#endif
