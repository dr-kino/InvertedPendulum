#include "task_telemetry.h"
#include "sci.h"

void TaskTelemetry(void *pvParameters)
{
    for(;;)
    {
        /* Send user character */
        sciSend(scilinREG, 29, (unsigned char*) "######## Telemetry ########\r\n");
        vTaskDelay(700);
    }
}
