
/*

CAN_FRAME_1= 


    Handle = hcan3;
    ID = CAN_ID_EXT;
    Data Length = sizeof(data);
    time_stamp= NOW;
    Data = An Array of 8 Bytes or 32 bits (Motor_controller_k1 || Motor_Controller_K2)


Motor_Controller_K1: IDs are the name of the packet.

    Driving_Directional_k 1,1    byte 1 read bit 1
    MOTOR_ERROR_CODE_K 2,3       byte 2 read 3 bits
    MOTOR_+SPEED_K 4,4           byte 4 read 4 bits  

Motor_Controller_K2: IDs are the name of the packet.
    MOTOR_CONTROLLER_TEMP_K 1,2
    MOTOR_TEMP_K 3,4
    BATTERY_CURRENT_K 5,6
    BATTERY_Volatage_K 7,8






*/