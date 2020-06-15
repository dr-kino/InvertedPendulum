#include "task_data_acquisition.h"
#include "sci.h"

void TaskDataAcquisition(void *pvParameters)
{
    for(;;)
    {
        /* Send user character */
        sciSend(scilinREG, 36, (unsigned char*) "######## Data Acquisition ########\r\n");
        vTaskDelay(1150);
    }
}
