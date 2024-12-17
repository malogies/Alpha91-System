#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// Solenoid Pins Definition
#define SOLENOID_COUNT 8
const gpio_num_t solenoid_pins[SOLENOID_COUNT] = {
    GPIO_NUM_7, GPIO_NUM_8, GPIO_NUM_9, GPIO_NUM_10, 
    GPIO_NUM_11, GPIO_NUM_12, GPIO_NUM_13, GPIO_NUM_14
};

// Temperature Sensor Pins
#define TEMP_SENSOR_1 GPIO_NUM_18
#define TEMP_SENSOR_2 GPIO_NUM_19

// Delay time in milliseconds
#define SOLENOID_DELAY_MS 1000
#define LOOP_DELAY_MS 5000

// Initialize GPIO pins for solenoids and sensors
void init_gpio_pins() {
    for (int i = 0; i < SOLENOID_COUNT; i++) {
        gpio_reset_pin(solenoid_pins[i]);
        gpio_set_direction(solenoid_pins[i], GPIO_MODE_OUTPUT);
    }

    gpio_reset_pin(TEMP_SENSOR_1);
    gpio_set_direction(TEMP_SENSOR_1, GPIO_MODE_INPUT);

    gpio_reset_pin(TEMP_SENSOR_2);
    gpio_set_direction(TEMP_SENSOR_2, GPIO_MODE_INPUT);

    printf("GPIO pins initialized successfully\n");
}

// Task to activate solenoids sequentially
void solenoid_control_task(void *param) {
    while (1) {
        printf("Activating Solenoids...\n");
        for (int i = 0; i < SOLENOID_COUNT; i++) {
            gpio_set_level(solenoid_pins[i], 1);  // Turn ON solenoid
            printf("Solenoid %d ON\n", i + 1);
            vTaskDelay(pdMS_TO_TICKS(SOLENOID_DELAY_MS));
            gpio_set_level(solenoid_pins[i], 0);  // Turn OFF solenoid
        }
        vTaskDelay(pdMS_TO_TICKS(LOOP_DELAY_MS));  // Delay before repeating
    }
}

// Task to monitor temperature sensors
void temp_sensor_monitor_task(void *param) {
    while (1) {
        int temp1 = gpio_get_level(TEMP_SENSOR_1);
        int temp2 = gpio_get_level(TEMP_SENSOR_2);

        printf("Temperature Sensor 1: %s\n", temp1 ? "Triggered" : "Normal");
        printf("Temperature Sensor 2: %s\n", temp2 ? "Triggered" : "Normal");

        vTaskDelay(pdMS_TO_TICKS(LOOP_DELAY_MS));  // Check sensors every 5 seconds
    }
}

void app_main() {
    // Initialize GPIO pins
    init_gpio_pins();

    // Start tasks
    xTaskCreate(solenoid_control_task, "Solenoid_Control_Task", 2048, NULL, 1, NULL);
    xTaskCreate(temp_sensor_monitor_task, "Temp_Sensor_Monitor_Task", 2048, NULL, 1, NULL);
}
