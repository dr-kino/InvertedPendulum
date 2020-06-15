#include "task_main.h"
#include "sci.h"

void TaskMain(void *pvParameters)
{
    for(;;)
    {
        /* Send user character */
        sciSend(scilinREG, 29, (unsigned char*) "######## Task Main ########\r\n");
        vTaskDelay(1000);
    }
}
