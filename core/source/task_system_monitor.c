#include "task_system_monitor.h"
#include "sci.h"

void TaskSystemMonitor(void *pvParameters)
{
    for(;;)
    {
        /* Send user character */
        sciSend(scilinREG, 34, (unsigned char*) "######## System Monitor ########\r\n");
        vTaskDelay(2000);
    }
}
