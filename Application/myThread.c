#include <stdint.h>
#include <stddef.h>

#include <xdc/std.h>
#include <xdc/runtime/Error.h>

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Clock.h>
#include <util.h>

/* Driver Header files */
#include <ti/drivers/GPIO.h>
#include <ti/display/Display.h>
#include <ti/drivers/ADC.h>

/* Example/Board Header files */
#include "Board.h"

//Task_Struct myTask;
//#define THREADSTACKSIZE    1024
//uint8_t myTaskStack[THREADSTACKSIZE];
//
//uint16_t adcValue;
//#define SBP_PERIODIC_EVT_PERIOD   5000
//#define POST_PARAM_EVT         Event_Id_00
//
//extern Display_Handle dispHandle;
//Clock_Struct clkStruct;
//Clock_Handle clkHandle;
//Semaphore_Handle adcSem;
//
//
//void clock_Handler(UArg arg) {
//    Semaphore_post(adcSem);
//}
//
//
///********** myThread **********/
//Task_FuncPtr *myThread(void *arg0) {
//
//
//
//    while (1) {
//
//    }
//}
//
///********** myThread_create **********/
//void myThread_create(void) {
//    Task_Params taskParams;
//
//    // Configure task
//    Task_Params_init(&taskParams);
//    taskParams.stack = myTaskStack;
//    taskParams.stackSize = THREADSTACKSIZE;
//    taskParams.priority = 1;
//
//   Task_construct(&myTask, myThread, &taskParams, Error_IGNORE);
//}
