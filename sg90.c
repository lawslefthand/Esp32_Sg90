#include "sg90.h"
#include "esp_task_wdt.h"

static const char TAG[8] = "pwm_tag";


 void servo_init(void)
{
    
    ledc_timer_config_t ledc_timer = {
        .speed_mode       = LEDC_MODE,
        .timer_num        = LEDC_TIMER,
        .duty_resolution  = LEDC_DUTY_RES,
        .freq_hz          = LEDC_FREQUENCY,  
        .clk_cfg          = LEDC_AUTO_CLK
    };
    ESP_ERROR_CHECK(ledc_timer_config(&ledc_timer));

    
    ledc_channel_config_t ledc_channel = {
        .speed_mode     = LEDC_MODE,
        .channel        = LEDC_CHANNEL,
        .timer_sel      = LEDC_TIMER,
        .intr_type      = LEDC_INTR_DISABLE,
        .gpio_num       = LEDC_OUTPUT_IO,
        .duty           = 0,
        .hpoint         = 0
    };
    ESP_ERROR_CHECK(ledc_channel_config(&ledc_channel));
}
 void servo_swerve(void)
{
    static int servo_duty = 614;
   
    {
        while(servo_duty <= 819)
        {
            servo_duty++;
             ESP_LOGI(TAG,"Duty is %d",servo_duty);
            ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, servo_duty);
            ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);
            ESP_LOGI(TAG, "0-180 sweep");
            vTaskDelay(50/ portTICK_PERIOD_MS);  // Small delay
        }
        
        while(servo_duty >= 410)
        {
            
            servo_duty--;
              ESP_LOGI(TAG,"Duty is %d",servo_duty);
            ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, servo_duty);
            ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);
            ESP_LOGI(TAG, "180-0 sweep");
            vTaskDelay(50/ portTICK_PERIOD_MS);  // Small delay
        }
    }
}


 void servo_pos(int pos)
{
	
	if(pos==1)
	{
	ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, 407);
	ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);	
	}
	else if (pos==2) 
	{
	ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, 451);
	ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);		
	}
	else if (pos==3) 
	{
	ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, 492);
	ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);		
	}else if (pos==4) 
	{
	ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, 532);
	ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);		
	}else if (pos==5) 
	{
	ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, 573);
	ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);		
	}else if (pos==6) 
	{
	ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, 614);
	ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);		
	}else if (pos==7) 
	{
	ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, 655);
	ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);		
	}else if (pos==8) 
	{
	ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, 696);
	ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);		
	}else if (pos==9) 
	{
	ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, 737);
	ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);		
	}else if (pos==10) 
	{
	ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, 778);
	ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);		
	}else if (pos==11) 
	{
	ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, 819);
	ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);		
	}
	else
	{
		ESP_LOGI(TAG,"Invalid position");
	}


}
