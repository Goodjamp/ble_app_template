#include "stdint.h"
#include "stdint.h"

#include "sdk_common.h"
#include "ble_nus.h"
#include "ble_srv_common.h"
#include "addServCharacter.h"

/*
#define MY_HOME_CONTROLL_UUID_BASE     {{0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x10 }}
#define MY_HOME_CONTROLL_UUID_SERV     0x20
#define MY_HOME_CONTROLL_UUID_CHAR_TX  0x21
#define MY_HOME_CONTROLL_UUID_CHAR_RX  0x22
*/

typedef struct
    {
        uint8_t                  uuid_type;               /**< UUID type for Nordic UART Service Base UUID. */
        uint16_t                 service_handle;          /**< Handle of Nordic UART Service (as provided by the SoftDevice). */
        ble_gatts_char_handles_t tx_handles;              /**< Handles related to the TX characteristic (as provided by the SoftDevice). */
        ble_gatts_char_handles_t rx_handles;              /**< Handles related to the RX characteristic (as provided by the SoftDevice). */
        uint16_t                 conn_handle;             /**< Handle of the current connection (as provided by the SoftDevice). BLE_CONN_HANDLE_INVALID if not in a connection. */
        bool                     is_notification_enabled; /**< Variable to indicate if the peer has enabled notification of the RX characteristic.*/
        ble_nus_data_handler_t   data_handler;            /**< Event handler to be called for handling received data. */
}ble_init_my_t;



/**@brief Function for adding RX characteristic.
 *
 * @param[in] p_nus       Nordic UART Service structure.
 * @param[in] p_nus_init  Information needed to initialize the service.
 *
 * @return NRF_SUCCESS on success, otherwise an error code.
 */
static uint32_t addCharacteristic(ble_init_my_t *p_nus)
{
    /**@snippet [Adding proprietary characteristic to S110 SoftDevice] */
    ble_gatts_char_md_t char_md;
    ble_gatts_attr_md_t cccd_md;
    ble_gatts_attr_t    attr_char_value;
    ble_uuid_t          ble_uuid;
    ble_gatts_attr_md_t attr_md;

    memset(&cccd_md, 0, sizeof(cccd_md));

    BLE_GAP_CONN_SEC_MODE_SET_OPEN(&cccd_md.read_perm);
    BLE_GAP_CONN_SEC_MODE_SET_OPEN(&cccd_md.write_perm);

    cccd_md.vloc = BLE_GATTS_VLOC_STACK;

    memset(&char_md, 0, sizeof(char_md));

    char_md.char_props.write         = 1;
    char_md.char_props.write_wo_resp = 1;
    char_md.p_char_user_desc         = NULL;
    char_md.p_char_pf                = NULL;
    char_md.p_user_desc_md           = NULL;
    char_md.p_cccd_md                = NULL;
    char_md.p_sccd_md                = NULL;

    ble_uuid.type = p_nus->uuid_type;
    ble_uuid.uuid = MY_HOME_CONTROLL_UUID_CHAR_TX;

    memset(&attr_md, 0, sizeof(attr_md));

    BLE_GAP_CONN_SEC_MODE_SET_OPEN(&attr_md.read_perm);
    BLE_GAP_CONN_SEC_MODE_SET_OPEN(&attr_md.write_perm);

    attr_md.vloc    = BLE_GATTS_VLOC_STACK;
    attr_md.rd_auth = 0;
    attr_md.wr_auth = 0;
    attr_md.vlen    = 1;

    memset(&attr_char_value, 0, sizeof(attr_char_value));

    attr_char_value.p_uuid    = &ble_uuid;
    attr_char_value.p_attr_md = &attr_md;
    attr_char_value.init_len  = sizeof(uint8_t);
    attr_char_value.init_offs = 0;
    attr_char_value.max_len   = BLE_NUS_MAX_DATA_LEN;

    return sd_ble_gatts_characteristic_add(p_nus->service_handle,
                                           &char_md,
                                           &attr_char_value,
                                           &p_nus->rx_handles);
    /**@snippet [Adding proprietary characteristic to S110 SoftDevice] */
}
//MY_HOME_CONTROLL_UUID_CHAR_TX


ble_init_my_t  nus;

void services_init(void)
{
    ble_init_my_t *p_nus = &nus;
    //uint32_t      err_code;
    ble_uuid_t    ble_uuid;
    ble_uuid128_t nus_base_uuid = MY_HOME_CONTROLL_UUID_BASE;

    memset(p_nus, 0, sizeof(struct ble_nus_s));

    //VERIFY_PARAM_NOT_NULL(p_nus);
    //VERIFY_PARAM_NOT_NULL(p_nus_init);

    // Initialize the service structure.
    p_nus->conn_handle             = BLE_CONN_HANDLE_INVALID;
    //p_nus->data_handler            = p_nus_init->data_handler;
    p_nus->is_notification_enabled = false;

    /**@snippet [Adding proprietary Service to S110 SoftDevice] */
    // Add a custom base UUID.
     sd_ble_uuid_vs_add(&nus_base_uuid, &p_nus->uuid_type);
    //VERIFY_SUCCESS(err_code);

    ble_uuid.type = p_nus->uuid_type;
    ble_uuid.uuid = MY_HOME_CONTROLL_UUID_SERV;

    sd_ble_gatts_service_add(BLE_GATTS_SRVC_TYPE_PRIMARY,
                                        &ble_uuid,
                                        &p_nus->service_handle);

    addCharacteristic(p_nus);

    /* YOUR_JOB: Add code to initialize the services used by the application.
       uint32_t                           err_code;
       ble_xxs_init_t                     xxs_init;
       ble_yys_init_t                     yys_init;

       // Initialize XXX Service.
       memset(&xxs_init, 0, sizeof(xxs_init));

       xxs_init.evt_handler                = NULL;
       xxs_init.is_xxx_notify_supported    = true;
       xxs_init.ble_xx_initial_value.level = 100;

       err_code = ble_bas_init(&m_xxs, &xxs_init);
       APP_ERROR_CHECK(err_code);

       // Initialize YYY Service.
       memset(&yys_init, 0, sizeof(yys_init));
       yys_init.evt_handler                  = on_yys_evt;
       yys_init.ble_yy_initial_value.counter = 0;

       err_code = ble_yy_service_init(&yys_init, &yy_init);
       APP_ERROR_CHECK(err_code);
     */
}




#include "addServCharacter.h"
