#include "task_control_motor_rigth.h"
#include "sci.h"

void TaskControlMotorR(void *pvParameters)
{
    for(;;)
    {
        /* Send user character */
        sciSend(scilinREG, 39, (unsigned char*) "######## Control Motor Right ########\r\n");
        vTaskDelay(300);
    }
}
