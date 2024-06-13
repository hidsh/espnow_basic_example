#include "esp_log.h"

#include "espnow_basic_config.h"

static const char *TAG = "My_Master";

// Your task to handle received my_data_t
void my_data_receive(const uint8_t *sender_mac_addr, const my_data_t *data)
{
    ESP_LOGI(TAG, "Data from %02x:%02x:%02x:%02x:%02x:%02x: Random Value - %u, Button - %s",
                sender_mac_addr[0], sender_mac_addr[1], sender_mac_addr[2],
                sender_mac_addr[3], sender_mac_addr[4], sender_mac_addr[5],
             (unsigned int)(data->random_value),
                data->button_pushed ? "Pushed" : "Released");
}
