#include "task_control_motor_left.h"
#include "sci.h"

void TaskControlMotorL(void *pvParameters)
{
    for(;;)
    {
        /* Send user character */
        sciSend(scilinREG, 38, (unsigned char*) "######## Control Motor Left ########\r\n");
        vTaskDelay(400);
    }
}
