
/**
 * ADSB-Out squawk code configuration
 *
 * This parameter defines the squawk code. Value should be between 0000 and 7777.
 *
 * @group ADSB
 * @min 0
 * @max 7777
 * @reboot_required False
 */
PARAM_DEFINE_INT32(ADSB_SQUAWK, 1200);

/**
 * ADSB-Out Ident Configuration
 *
 * Enable Identification of Position feature
 *
 * @group ADSB
 * @boolean
 * @reboot_required False
 */
PARAM_DEFINE_INT32(ADSB_IDENT, 0);

/**
 * ADSB-In Vehicle List Size
 *
 * Change number of targets to track
 *
 * @group ADSB
 * @min 0
 * @max 50
 * @reboot_required True
 */
PARAM_DEFINE_INT32(ADSB_LIST_MAX, 25);

/**
 * ADSB-Out ICAO configuration
 *
 * Defines the ICAO ID of the vehicle
 *
 * @group ADSB
 * @min -1
 * @max 16777215
 * @reboot_required True
 */
PARAM_DEFINE_INT32(ADSB_ICAO_ID, 1194684);

/**
 * ADSB-Out Vehicle Size Configuration
 *
 * Report the length and width of the vehicle in meters. In most cases, use '1' for the smallest vehicle size.
 *
 * @group ADSB
 * @value 0 SizeUnknown
 * @value 1 Len15_Wid23
 * @value 2 Len25_Wid28
 * @value 3 Len25_Wid34
 * @value 4 Len35_Wid33
 * @value 5 Len35_Wid38
 * @value 6 Len45_Wid39
 * @value 7 Len45_Wid45
 * @value 8 Len55_Wid45
 * @value 9 Len55_Wid52
 * @value 10 Len65_Wid59
 * @value 11 Len65_Wid67
 * @value 12 Len75_Wid72
 * @value 13 Len75_Wid80
 * @value 14 Len85_Wid80
 * @value 15 Len85_Wid90
 * @min 0
 * @max 15
 * @reboot_required True
 */
PARAM_DEFINE_INT32(ADSB_LEN_WIDTH, 1);

/**
 * ADSB-Out Vehicle Emitter Type
 *
 * Configure the emitter type of the vehicle.
 *
 * @group ADSB
 * @value 0 Unknown
 * @value 1 Light
 * @value 2 Small
 * @value 3 Large
 * @value 4 HighVortex
 * @value 5 Heavy
 * @value 6 Performance
 * @value 7 Rotorcraft
 * @value 8 RESERVED
 * @value 9 Glider
 * @value 10 LightAir
 * @value 11 Parachute
 * @value 12 UltraLight
 * @value 13 RESERVED
 * @value 14 UAV
 * @value 15 Space
 * @value 16 RESERVED
 * @value 17 EmergencySurf
 * @value 18 ServiceSurf
 * @value 19 PointObstacle
 * @min 0
 * @max 15
 * @reboot_required True
 */
PARAM_DEFINE_INT32(ADSB_EMIT_TYPE, 14);

/**
 * ADSB-Out Vehicle Max Speed
 *
 * Informs ADSB vehicles of this vehicle's max speed capability
 *
 * @group ADSB
 * @value 0 UnknownMaxSpeed
 * @value 1 75Kts
 * @value 2 150Kts
 * @value 3 300Kts
 * @value 4 600Kts
 * @value 5 1200Kts
 * @value 6 Over1200Kts
 * @min 0
 * @max 6
 * @reboot_required True
 */
PARAM_DEFINE_INT32(ADSB_MAX_SPEED, 0);

/**
 * ADSB-In Special ICAO configuration
 *
 * This vehicle is always tracked. Use 0 to disable.
 *
 * @group ADSB
 * @min 0
 * @max 16777215
 * @reboot_required False
 */
PARAM_DEFINE_INT32(ADSB_ICAO_SPECL, 0);

/**
 * ADSB-Out Emergency State
 *
 * Sets the vehicle emergency state
 *
 * @group ADSB
 * @value 0 NoEmergency
 * @value 1 General
 * @value 2 Medical
 * @value 3 LowFuel
 * @value 4 NoCommunications
 * @value 5 Interference
 * @value 6 Downed
 * @min 0
 * @max 6
 * @reboot_required False
 */
PARAM_DEFINE_INT32(ADSB_EMERGC, 0);

/**
 * ADSB-Out GPS Offset lat
 *
 * Sets GPS lataral offset encoding
 *
 * @group ADSB
 * @value 0 NoData
 * @value 1 LatLeft2M
 * @value 2 LatLeft4M
 * @value 3 LatLeft6M
 * @value 4 LatRight0M
 * @value 5 LatRight2M
 * @value 6 LatRight4M
 * @value 7 LatRight6M
 * @min 0
 * @max 7
 * @reboot_required False
 */
PARAM_DEFINE_INT32(ADSB_GPS_OFF_LAT, 0);

/**
 * ADSB-Out GPS Offset lon
 *
 * Sets GPS longitudinal offset encoding
 *
 * @group ADSB
 * @value 0 NoData
 * @value 1 AppliedBySensor
 * @min 0
 * @max 1
 * @reboot_required False
 */
PARAM_DEFINE_INT32(ADSB_GPS_OFF_LON, 0);

/**
 * First 4 characters of CALLSIGN
 *
 * Sets first 4 characters of a total of 8. Valid characters are A-Z, 0-9, " ". Example "PX4 " -> 1347957792
 * For CALLSIGN shorter than 8 characters use the null terminator at the end '\0'.
 *
 * @group ADSB
 * @reboot_required True
 */
PARAM_DEFINE_INT32(ADSB_CALLSIGN_1, 0);

/**
 * Second 4 characters of CALLSIGN
 *
 * Sets second 4 characters of a total of 8. Valid characters are A-Z, 0-9, " " only. Example "TEST" -> 1413829460
 * For CALLSIGN shorter than 8 characters use the null terminator at the end '\0'.
 *
 * @group ADSB
 * @reboot_required True
 */
PARAM_DEFINE_INT32(ADSB_CALLSIGN_2, 0);

/**
 * Empty cell voltage
 *
 * Defines the voltage where a single cell of the battery is considered empty.
 * The voltage should be chosen above the steep dropoff at 3.5V. A typical
 * lithium battery can only be discharged under high load down to 10% before
 * it drops off to a voltage level damaging the cells.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @unit V
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT1_V_EMPTY, 3.6);

/**
 * Empty cell voltage
 *
 * Defines the voltage where a single cell of the battery is considered empty.
 * The voltage should be chosen above the steep dropoff at 3.5V. A typical
 * lithium battery can only be discharged under high load down to 10% before
 * it drops off to a voltage level damaging the cells.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @unit V
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT2_V_EMPTY, 3.6);

/**
 * Empty cell voltage
 *
 * Defines the voltage where a single cell of the battery is considered empty.
 * The voltage should be chosen above the steep dropoff at 3.5V. A typical
 * lithium battery can only be discharged under high load down to 10% before
 * it drops off to a voltage level damaging the cells.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @unit V
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT3_V_EMPTY, 3.6);

/**
 * Full cell voltage
 *
 * Defines the voltage where a single cell of the battery is considered full.
 * For a more accurate estimate set this below the nominal voltage of e.g. 4.2V
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @unit V
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT1_V_CHARGED, 4.05);

/**
 * Full cell voltage
 *
 * Defines the voltage where a single cell of the battery is considered full.
 * For a more accurate estimate set this below the nominal voltage of e.g. 4.2V
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @unit V
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT2_V_CHARGED, 4.05);

/**
 * Full cell voltage
 *
 * Defines the voltage where a single cell of the battery is considered full.
 * For a more accurate estimate set this below the nominal voltage of e.g. 4.2V
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @unit V
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT3_V_CHARGED, 4.05);

/**
 * Explicitly defines the per cell internal resistance for battery 1
 *
 * If non-negative, then this will be used instead of the online estimated internal resistance.
 * 
 *
 * @group Battery Calibration
 * @decimal 4
 * @increment 0.0005
 * @min -1.0
 * @max 0.2
 * @unit Ohm
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT1_R_INTERNAL, -1.0);

/**
 * Explicitly defines the per cell internal resistance for battery 2
 *
 * If non-negative, then this will be used instead of the online estimated internal resistance.
 * 
 *
 * @group Battery Calibration
 * @decimal 4
 * @increment 0.0005
 * @min -1.0
 * @max 0.2
 * @unit Ohm
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT2_R_INTERNAL, -1.0);

/**
 * Explicitly defines the per cell internal resistance for battery 3
 *
 * If non-negative, then this will be used instead of the online estimated internal resistance.
 * 
 *
 * @group Battery Calibration
 * @decimal 4
 * @increment 0.0005
 * @min -1.0
 * @max 0.2
 * @unit Ohm
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT3_R_INTERNAL, -1.0);

/**
 * Number of cells for battery 1.
 *
 * Defines the number of cells the attached battery consists of.
 * 
 *
 * @group Battery Calibration
 * @value 0 Unknown
 * @value 1 1S Battery
 * @value 2 2S Battery
 * @value 3 3S Battery
 * @value 4 4S Battery
 * @value 5 5S Battery
 * @value 6 6S Battery
 * @value 7 7S Battery
 * @value 8 8S Battery
 * @value 9 9S Battery
 * @value 10 10S Battery
 * @value 11 11S Battery
 * @value 12 12S Battery
 * @value 13 13S Battery
 * @value 14 14S Battery
 * @value 15 15S Battery
 * @value 16 16S Battery
 */
PARAM_DEFINE_INT32(BAT1_N_CELLS, 0);

/**
 * Number of cells for battery 2.
 *
 * Defines the number of cells the attached battery consists of.
 * 
 *
 * @group Battery Calibration
 * @value 0 Unknown
 * @value 1 1S Battery
 * @value 2 2S Battery
 * @value 3 3S Battery
 * @value 4 4S Battery
 * @value 5 5S Battery
 * @value 6 6S Battery
 * @value 7 7S Battery
 * @value 8 8S Battery
 * @value 9 9S Battery
 * @value 10 10S Battery
 * @value 11 11S Battery
 * @value 12 12S Battery
 * @value 13 13S Battery
 * @value 14 14S Battery
 * @value 15 15S Battery
 * @value 16 16S Battery
 */
PARAM_DEFINE_INT32(BAT2_N_CELLS, 0);

/**
 * Number of cells for battery 3.
 *
 * Defines the number of cells the attached battery consists of.
 * 
 *
 * @group Battery Calibration
 * @value 0 Unknown
 * @value 1 1S Battery
 * @value 2 2S Battery
 * @value 3 3S Battery
 * @value 4 4S Battery
 * @value 5 5S Battery
 * @value 6 6S Battery
 * @value 7 7S Battery
 * @value 8 8S Battery
 * @value 9 9S Battery
 * @value 10 10S Battery
 * @value 11 11S Battery
 * @value 12 12S Battery
 * @value 13 13S Battery
 * @value 14 14S Battery
 * @value 15 15S Battery
 * @value 16 16S Battery
 */
PARAM_DEFINE_INT32(BAT3_N_CELLS, 0);

/**
 * Battery 1 capacity.
 *
 * Defines the capacity of battery 1 in mAh.
 * 
 *
 * @group Battery Calibration
 * @decimal 0
 * @increment 50
 * @min -1.0
 * @max 100000
 * @unit mAh
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT1_CAPACITY, -1.0);

/**
 * Battery 2 capacity.
 *
 * Defines the capacity of battery 2 in mAh.
 * 
 *
 * @group Battery Calibration
 * @decimal 0
 * @increment 50
 * @min -1.0
 * @max 100000
 * @unit mAh
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT2_CAPACITY, -1.0);

/**
 * Battery 3 capacity.
 *
 * Defines the capacity of battery 3 in mAh.
 * 
 *
 * @group Battery Calibration
 * @decimal 0
 * @increment 50
 * @min -1.0
 * @max 100000
 * @unit mAh
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(BAT3_CAPACITY, -1.0);

/**
 * Battery 1 monitoring source.
 *
 * This parameter controls the source of battery data. The value 'Power Module / Analog'
 * means that measurements are expected to come from either analog (ADC) inputs
 * or an I2C power monitor (e.g. INA226). Analog inputs are voltage and current
 * measurements read from the board's ADC channels, typically from an onboard
 * voltage divider and current shunt, or an external analog power module.
 * I2C power monitors are digital sensors on the I2C bus.
 * If the value is set to 'External' then the system expects to receive MAVLink
 * or CAN battery status messages, or the battery data is published by an external driver.
 * If the value is set to 'ESCs', the battery information are taken from the esc_status message.
 * This requires the ESC to provide both voltage as well as current (via ESC telemetry).
 * 
 *
 * @group Battery Calibration
 * @value -1 Disabled
 * @value 0 Power Module / Analog
 * @value 1 External
 * @value 2 ESCs
 * @reboot_required True
 */
PARAM_DEFINE_INT32(BAT1_SOURCE, 0);

/**
 * Battery 2 monitoring source.
 *
 * This parameter controls the source of battery data. The value 'Power Module / Analog'
 * means that measurements are expected to come from either analog (ADC) inputs
 * or an I2C power monitor (e.g. INA226). Analog inputs are voltage and current
 * measurements read from the board's ADC channels, typically from an onboard
 * voltage divider and current shunt, or an external analog power module.
 * I2C power monitors are digital sensors on the I2C bus.
 * If the value is set to 'External' then the system expects to receive MAVLink
 * or CAN battery status messages, or the battery data is published by an external driver.
 * If the value is set to 'ESCs', the battery information are taken from the esc_status message.
 * This requires the ESC to provide both voltage as well as current (via ESC telemetry).
 * 
 *
 * @group Battery Calibration
 * @value -1 Disabled
 * @value 0 Power Module / Analog
 * @value 1 External
 * @value 2 ESCs
 * @reboot_required True
 */
PARAM_DEFINE_INT32(BAT2_SOURCE, -1);

/**
 * Battery 3 monitoring source.
 *
 * This parameter controls the source of battery data. The value 'Power Module / Analog'
 * means that measurements are expected to come from either analog (ADC) inputs
 * or an I2C power monitor (e.g. INA226). Analog inputs are voltage and current
 * measurements read from the board's ADC channels, typically from an onboard
 * voltage divider and current shunt, or an external analog power module.
 * I2C power monitors are digital sensors on the I2C bus.
 * If the value is set to 'External' then the system expects to receive MAVLink
 * or CAN battery status messages, or the battery data is published by an external driver.
 * If the value is set to 'ESCs', the battery information are taken from the esc_status message.
 * This requires the ESC to provide both voltage as well as current (via ESC telemetry).
 * 
 *
 * @group Battery Calibration
 * @value -1 Disabled
 * @value 0 Power Module / Analog
 * @value 1 External
 * @value 2 ESCs
 * @reboot_required True
 */
PARAM_DEFINE_INT32(BAT3_SOURCE, -1);

/**
 * Battery 1 idle current overwrite
 *
 * This parameter allows to overwrite the current measured during
 * idle (unarmed) state with a user-defined constant value (expressed in amperes).
 * When the system is armed, the measured current is used. This is useful
 * because on certain ESCs current measurements are inaccurate in case of no load.
 * Negative values are ignored and will cause the measured current to be used.
 * The default value of 0 disables the overwrite, in which case the measured value
 * is always used.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(BAT1_I_OVERWRITE, 0);

/**
 * Battery 2 idle current overwrite
 *
 * This parameter allows to overwrite the current measured during
 * idle (unarmed) state with a user-defined constant value (expressed in amperes).
 * When the system is armed, the measured current is used. This is useful
 * because on certain ESCs current measurements are inaccurate in case of no load.
 * Negative values are ignored and will cause the measured current to be used.
 * The default value of 0 disables the overwrite, in which case the measured value
 * is always used.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(BAT2_I_OVERWRITE, 0);

/**
 * Battery 3 idle current overwrite
 *
 * This parameter allows to overwrite the current measured during
 * idle (unarmed) state with a user-defined constant value (expressed in amperes).
 * When the system is armed, the measured current is used. This is useful
 * because on certain ESCs current measurements are inaccurate in case of no load.
 * Negative values are ignored and will cause the measured current to be used.
 * The default value of 0 disables the overwrite, in which case the measured value
 * is always used.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(BAT3_I_OVERWRITE, 0);

/**
 * Low threshold.
 *
 * Sets the threshold when the battery will be reported as low.
 * This has to be higher than the critical threshold.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @min 0.12
 * @max 0.5
 * @unit norm
 */
PARAM_DEFINE_FLOAT(BAT_LOW_THR, 0.15);

/**
 * Critical threshold.
 *
 * Sets the threshold when the battery will be reported as critically low.
 * This has to be lower than the low threshold. This threshold commonly
 * will trigger RTL.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @min 0.05
 * @max 0.5
 * @unit norm
 */
PARAM_DEFINE_FLOAT(BAT_CRIT_THR, 0.07);

/**
 * Emergency threshold.
 *
 * Sets the threshold when the battery will be reported as dangerously low.
 * This has to be lower than the critical threshold. This threshold commonly
 * will trigger landing.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.01
 * @min 0.03
 * @max 0.5
 * @unit norm
 */
PARAM_DEFINE_FLOAT(BAT_EMERGEN_THR, 0.05);

/**
 * Expected battery current in flight.
 *
 * This value is used to initialize the in-flight average current estimation,
 * which in turn is used for estimating remaining flight time and RTL triggering.
 * 
 *
 * @group Battery Calibration
 * @decimal 2
 * @increment 0.1
 * @min 0
 * @max 500
 * @unit A
 */
PARAM_DEFINE_FLOAT(BAT_AVRG_CURRENT, 15);

/**
 * Circuit breaker for power supply check
 *
 * Setting this parameter to 894281 will disable the power valid
 * checks in the commander.
 * WARNING: ENABLING THIS CIRCUIT BREAKER IS AT OWN RISK
 *
 * @group Circuit Breaker
 * @category Developer
 * @min 0
 * @max 894281
 */
PARAM_DEFINE_INT32(CBRK_SUPPLY_CHK, 0);

/**
 * Circuit breaker for IO safety
 *
 * Setting this parameter to 22027 will disable IO safety.
 * WARNING: ENABLING THIS CIRCUIT BREAKER IS AT OWN RISK
 *
 * @group Circuit Breaker
 * @category Developer
 * @min 0
 * @max 22027
 */
PARAM_DEFINE_INT32(CBRK_IO_SAFETY, 22027);

/**
 * Circuit breaker for flight termination
 *
 * Setting this parameter to 121212 will disable the flight termination action if triggered
 * by the FailureDetector logic or if FMU is lost.
 * This circuit breaker does not affect the RC loss, data link loss, geofence,
 * and takeoff failure detection safety logic.
 *
 * @group Circuit Breaker
 * @category Developer
 * @min 0
 * @max 121212
 * @reboot_required True
 */
PARAM_DEFINE_INT32(CBRK_FLIGHTTERM, 121212);

/**
 * Circuit breaker for disabling buzzer
 *
 * Setting this parameter to 782097 will disable the buzzer audio notification.
 * 
 * Setting this parameter to 782090 will disable the startup tune, while keeping
 * all others enabled.
 *
 * @group Circuit Breaker
 * @category Developer
 * @min 0
 * @max 782097
 * @reboot_required True
 */
PARAM_DEFINE_INT32(CBRK_BUZZER, 0);

/**
 * Circuit breaker for USB link check
 *
 * Setting this parameter to 197848 will disable the USB connected
 * checks in the commander, setting it to 0 keeps them enabled (recommended).
 * 
 * We are generally recommending to not fly with the USB link
 * connected and production vehicles should set this parameter to
 * zero to prevent users from flying USB powered. However, for R&D purposes
 * it has proven over the years to work just fine.
 *
 * @group Circuit Breaker
 * @category Developer
 * @min 0
 * @max 197848
 */
PARAM_DEFINE_INT32(CBRK_USB_CHK, 197848);

/**
 * Circuit breaker for arming in fixed-wing mode check
 *
 * Setting this parameter to 159753 will enable arming in fixed-wing
 * mode for VTOLs.
 * WARNING: ENABLING THIS CIRCUIT BREAKER IS AT OWN RISK
 *
 * @group Circuit Breaker
 * @category Developer
 * @min 0
 * @max 159753
 */
PARAM_DEFINE_INT32(CBRK_VTOLARMING, 0);

/**
 * Minimum distance the vehicle should keep to all obstacles
 *
 * Only used in Position mode. Collision avoidance is disabled by setting this parameter to a negative value
 *
 * @group Multicopter Position Control
 * @min -1
 * @max 15
 * @unit m
 */
PARAM_DEFINE_FLOAT(CP_DIST, -1.0);

/**
 * Range sensor and position controller average delay
 *
 * Average delay of the range sensor message plus the tracking delay of the position controller in seconds
 * 
 * Only used in Position mode.
 *
 * @group Multicopter Position Control
 * @min 0
 * @max 1
 * @unit s
 */
PARAM_DEFINE_FLOAT(CP_DELAY, 0.4);

/**
 * Collision prevention guidance angle
 *
 * Angle left/right from the commanded setpoint by which the collision prevention algorithm can choose to change the setpoint direction
 * 
 * Only used in Position mode.
 *
 * @group Multicopter Position Control
 * @min 0
 * @max 90
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CP_GUIDE_ANG, 30.0);

/**
 * Allow moving into directions without sensor data
 *
 * Boolean to allow moving into directions where there is no sensor data (outside FOV)
 * 
 * Only used in Position mode.
 *
 * @group Multicopter Position Control
 * @boolean
 */
PARAM_DEFINE_INT32(CP_GO_NO_DATA, 0);

/**
 * TEST_MIN
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_FLOAT(TEST_MIN, -1.0);

/**
 * TEST_MAX
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_FLOAT(TEST_MAX, 1.0);

/**
 * TEST_TRIM
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_FLOAT(TEST_TRIM, 0.5);

/**
 * TEST_HP
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_FLOAT(TEST_HP, 10.0);

/**
 * TEST_LP
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_FLOAT(TEST_LP, 10.0);

/**
 * TEST_P
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_FLOAT(TEST_P, 0.2);

/**
 * TEST_I
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_FLOAT(TEST_I, 0.1);

/**
 * TEST_I_MAX
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_FLOAT(TEST_I_MAX, 1.0);

/**
 * TEST_D
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_FLOAT(TEST_D, 0.01);

/**
 * TEST_D_LP
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_FLOAT(TEST_D_LP, 10.0);

/**
 * TEST_MEAN
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_FLOAT(TEST_MEAN, 1.0);

/**
 * TEST_DEV
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_FLOAT(TEST_DEV, 2.0);

/**
 * RGB Led brightness limit
 *
 * Set to 0 to disable, 1 for maximum brightness
 *
 * @group System
 * @unit %
 */
PARAM_DEFINE_FLOAT(SYS_RGB_MAXBRT, 1.0);

/**
 * Thrust to motor control signal model parameter
 *
 * Parameter used to model the nonlinear relationship between
 * motor control signal (e.g. PWM) and static thrust.
 * 
 * The model is: rel_thrust = factor * rel_signal^2 + (1-factor) * rel_signal,
 * where rel_thrust is the normalized thrust between 0 and 1, and
 * rel_signal is the relative motor control signal between 0 and 1.
 *
 * @group PWM Outputs
 * @decimal 1
 * @increment 0.1
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(THR_MDL_FAC, 0.0);

/**
 * Multicopter air-mode
 *
 * The air-mode enables the mixer to increase the total thrust of the multirotor
 * in order to keep attitude and rate control even at low and high throttle.
 * 
 * This function should be disabled during tuning as it will help the controller
 * to diverge if the closed-loop is unstable (i.e. the vehicle is not tuned yet).
 * 
 * Enabling air-mode for yaw requires the use of an arming switch.
 *
 * @group Mixer Output
 * @value 0 Disabled
 * @value 1 Roll/Pitch
 * @value 2 Roll/Pitch/Yaw
 */
PARAM_DEFINE_INT32(MC_AIRMODE, 0);

/**
 * Trim throttle
 *
 * Required throttle (at sea level, standard atmosphere) for level flight at FW_AIRSPD_TRIM
 *
 * @group FW Performance
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 * @unit norm
 */
PARAM_DEFINE_FLOAT(FW_THR_TRIM, 0.6);

/**
 * Throttle at min airspeed
 *
 * Required throttle (at sea level, standard atmosphere) for level flight at minimum airspeed FW_AIRSPD_MIN
 * 
 * Set to 0 to disable mapping of airspeed to trim throttle below FW_AIRSPD_TRIM.
 *
 * @group FW Performance
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(FW_THR_ASPD_MIN, 0.0);

/**
 * Throttle at max airspeed
 *
 * Required throttle (at sea level, standard atmosphere) for level flight at maximum airspeed FW_AIRSPD_MAX
 * 
 * Set to 0 to disable mapping of airspeed to trim throttle.
 *
 * @group FW Performance
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(FW_THR_ASPD_MAX, 0.0);

/**
 * Service ceiling
 *
 * Altitude in standard atmosphere at which the vehicle in normal configuration (WEIGHT_BASE) is still able to achieve a maximum climb rate of
 * 0.5m/s at maximum throttle (FW_THR_MAX). Used to compensate for air density in FW_T_CLMB_MAX.
 * Set negative to disable.
 *
 * @group FW Performance
 * @decimal 0
 * @increment 1.0
 * @min -1.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(FW_SERVICE_CEIL, -1.0);

/**
 * Vehicle base weight
 *
 * This is the weight of the vehicle at which it's performance limits were derived. A zero or negative value
 * disables trim throttle and minimum airspeed compensation based on weight.
 *
 * @group FW Performance
 * @decimal 1
 * @increment 0.5
 * @unit kg
 */
PARAM_DEFINE_FLOAT(WEIGHT_BASE, -1.0);

/**
 * Vehicle gross weight
 *
 * This is the actual weight of the vehicle at any time. This value will differ from WEIGHT_BASE in case weight was added
 * or removed from the base weight. Examples are the addition of payloads or larger batteries. A zero or negative value
 * disables trim throttle and minimum airspeed compensation based on weight.
 *
 * @group FW Performance
 * @decimal 1
 * @increment 0.1
 * @unit kg
 */
PARAM_DEFINE_FLOAT(WEIGHT_GROSS, -1.0);

/**
 * Maximum climb rate
 *
 * This is the maximum calibrated climb rate that the aircraft can achieve with
 * the throttle set to FW_THR_MAX and the airspeed set to the
 * trim value. For electric aircraft make sure this number can be
 * achieved towards the end of flight when the battery voltage has reduced.
 *
 * @group FW Performance
 * @decimal 1
 * @increment 0.5
 * @min 1.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(FW_T_CLMB_MAX, 5.0);

/**
 * Minimum descent rate
 *
 * This is the minimum calibrated sink rate of the aircraft with the throttle
 * set to THR_MIN and flown at the same airspeed as used
 * to measure FW_T_CLMB_MAX.
 *
 * @group FW Performance
 * @decimal 1
 * @increment 0.5
 * @min 1.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(FW_T_SINK_MIN, 2.0);

/**
 * Trim (Cruise) Airspeed
 *
 * The trim CAS (calibrated airspeed) of the vehicle. If an airspeed controller is active,
 * this is the default airspeed setpoint that the controller will try to achieve.
 * This value corresponds to the trim airspeed with the default load factor (level flight, default weight).
 *
 * @group FW Performance
 * @decimal 1
 * @increment 0.5
 * @min 0.5
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(FW_AIRSPD_TRIM, 15.0);

/**
 * Stall Airspeed (CAS)
 *
 * The stall airspeed (calibrated airspeed) of the vehicle.
 * It is used for airspeed sensor failure detection and for the control
 * surface scaling airspeed limits.
 *
 * @group FW Performance
 * @decimal 1
 * @increment 0.5
 * @min 0.5
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(FW_AIRSPD_STALL, 7.0);

/**
 * Minimum Airspeed (CAS)
 *
 * The minimal airspeed (calibrated airspeed) the user is able to command.
 * Further, if the airspeed falls below this value, the TECS controller will try to
 * increase airspeed more aggressively.
 * Has to be set according to the vehicle's stall speed (which should be set in FW_AIRSPD_STALL),
 * with some margin between the stall speed and minimum airspeed.
 * This value corresponds to the desired minimum speed with the default load factor (level flight, default weight),
 * and is automatically adpated to the current load factor (calculated from roll setpoint and WEIGHT_GROSS/WEIGHT_BASE).
 *
 * @group FW Performance
 * @decimal 1
 * @increment 0.5
 * @min 0.5
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(FW_AIRSPD_MIN, 10.0);

/**
 * Maximum Airspeed (CAS)
 *
 * The maximal airspeed (calibrated airspeed) the user is able to command.
 *
 * @group FW Performance
 * @decimal 1
 * @increment 0.5
 * @min 0.5
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(FW_AIRSPD_MAX, 20.0);

/**
 * Airspeed scale with full flaps
 *
 * Factor applied to the minimum and stall airspeed when flaps are fully deployed.
 *
 * @group FW Performance
 * @decimal 2
 * @increment 0.01
 * @min 0.5
 * @max 1
 */
PARAM_DEFINE_FLOAT(FW_AIRSPD_FLP_SC, 1.0);

/**
 * Tuning parameter for the pure pursuit controller
 *
 * Lower value -> More aggressive controller (beware overshoot/oscillations)
 *
 * @group Pure Pursuit
 * @decimal 2
 * @increment 0.01
 * @min 0.1
 * @max 100
 */
PARAM_DEFINE_FLOAT(PP_LOOKAHD_GAIN, 1.0);

/**
 * Minimum lookahead distance for the pure pursuit controller
 *
 * 
 *
 * @group Pure Pursuit
 * @decimal 2
 * @increment 0.01
 * @min 0.1
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(PP_LOOKAHD_MIN, 1.0);

/**
 * Maximum lookahead distance for the pure pursuit controller
 *
 * 
 *
 * @group Pure Pursuit
 * @decimal 2
 * @increment 0.01
 * @min 0.1
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(PP_LOOKAHD_MAX, 10.0);

/**
 * Enable rate gain compression
 *
 * 
 *
 * @group FW Rate Control
 * @boolean
 */
PARAM_DEFINE_INT32(FW_GC_EN, 1);

/**
 * Compression gain lower limit
 *
 * The range of the compression gain is between this parameter and 1.0
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(FW_GC_GAIN_MIN, 0.3);

/**
 * Proportional gain for closed loop yaw controller
 *
 * 
 *
 * @group Rover Attitude Control
 * @decimal 3
 * @increment 0.01
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(RO_YAW_P, 0.0);

/**
 * Yaw stick deadzone
 *
 * Percentage of stick input range that will be interpreted as zero around the stick centered value.
 *
 * @group Rover Rate Control
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(RO_YAW_STICK_DZ, 0.1);

/**
 * Yaw rate expo factor
 *
 * Exponential factor for tuning the input curve shape.
 * 
 * 0 Purely linear input curve
 * 1 Purely cubic input curve
 *
 * @group Rover Rate Control
 * @decimal 2
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(RO_YAW_EXPO, 0.0);

/**
 * Yaw rate super expo factor
 *
 * "Superexponential" factor for refining the input curve shape tuned using RO_YAW_EXPO.
 * 
 * 0 Pure Expo function
 * 0.7 reasonable shape enhancement for intuitive stick feel
 * 0.95 very strong bent input curve only near maxima have effect
 *
 * @group Rover Rate Control
 * @decimal 2
 * @min 0
 * @max 0.95
 */
PARAM_DEFINE_FLOAT(RO_YAW_SUPEXPO, 0.0);

/**
 * Yaw rate measurement threshold
 *
 * The minimum threshold for the yaw rate measurement not to be interpreted as zero.
 *
 * @group Rover Rate Control
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 100
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(RO_YAW_RATE_TH, 3.0);

/**
 * Proportional gain for closed loop yaw rate controller
 *
 * 
 *
 * @group Rover Rate Control
 * @decimal 3
 * @increment 0.01
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(RO_YAW_RATE_P, 0.0);

/**
 * Integral gain for closed loop yaw rate controller
 *
 * 
 *
 * @group Rover Rate Control
 * @decimal 3
 * @increment 0.01
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(RO_YAW_RATE_I, 0.0);

/**
 * Yaw rate limit
 *
 * Used to cap yaw rate setpoints and map controller inputs to yaw rate setpoints
 * in Acro, Stabilized and Position mode.
 *
 * @group Rover Rate Control
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10000
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(RO_YAW_RATE_LIM, 0.0);

/**
 * Yaw acceleration limit
 *
 * Used to cap how quickly the magnitude of yaw rate setpoints can increase.
 * Set to -1 to disable.
 *
 * @group Rover Rate Control
 * @decimal 2
 * @increment 0.01
 * @min -1
 * @max 10000
 * @unit deg/s^2
 */
PARAM_DEFINE_FLOAT(RO_YAW_ACCEL_LIM, -1.0);

/**
 * Yaw deceleration limit
 *
 * Used to cap how quickly the magnitude of yaw rate setpoints can decrease.
 * Set to -1 to disable.
 *
 * @group Rover Rate Control
 * @decimal 2
 * @increment 0.01
 * @min -1
 * @max 10000
 * @unit deg/s^2
 */
PARAM_DEFINE_FLOAT(RO_YAW_DECEL_LIM, -1.0);

/**
 * Yaw rate correction factor
 *
 * Multiplicative correction factor for the feedforward mapping of the yaw rate controller.
 * Increase this value (x > 1) if the measured yaw rate is lower than the setpoint, decrease (0 < x < 1) otherwise.
 * Note: Tuning this is particularly useful for skid-steered rovers, or rovers with misaligned wheels/steering axes
 * that cause a lot of friction when turning.
 *
 * @group Rover Rate Control
 * @decimal 2
 * @increment 0.01
 * @min 0.01
 * @max 10000
 */
PARAM_DEFINE_FLOAT(RO_YAW_RATE_CORR, 1.0);

/**
 * Speed the rover drives at maximum throttle
 *
 * Used to linearly map speeds [m/s] to throttle values [-1. 1].
 *
 * @group Rover Velocity Control
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 100
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(RO_MAX_THR_SPEED, 0.0);

/**
 * Proportional gain for ground speed controller
 *
 * 
 *
 * @group Rover Velocity Control
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(RO_SPEED_P, 0.0);

/**
 * Integral gain for ground speed controller
 *
 * 
 *
 * @group Rover Velocity Control
 * @decimal 3
 * @increment 0.001
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(RO_SPEED_I, 0.0);

/**
 * Speed limit
 *
 * Used to cap speed setpoints and map controller inputs to speed setpoints in Position mode.
 *
 * @group Rover Velocity Control
 * @decimal 2
 * @increment 0.01
 * @min -1
 * @max 100
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(RO_SPEED_LIM, -1.0);

/**
 * Acceleration limit
 *
 * Set to -1 to disable.
 * For mecanum rovers this limit is used for longitudinal and lateral acceleration.
 *
 * @group Rover Velocity Control
 * @decimal 2
 * @increment 0.01
 * @min -1
 * @max 100
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(RO_ACCEL_LIM, -1.0);

/**
 * Deceleration limit
 *
 * Set to -1 to disable.
 * Note that if it is disabled the rover will not slow down when approaching waypoints in auto modes.
 * For mecanum rovers this limit is used for longitudinal and lateral deceleration.
 *
 * @group Rover Velocity Control
 * @decimal 2
 * @increment 0.01
 * @min -1
 * @max 100
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(RO_DECEL_LIM, -1.0);

/**
 * Jerk limit
 *
 * Set to -1 to disable.
 * Note that if it is disabled the rover will not slow down when approaching waypoints in auto modes.
 * For mecanum rovers this limit is used for longitudinal and lateral jerk.
 *
 * @group Rover Velocity Control
 * @decimal 2
 * @increment 0.01
 * @min -1
 * @max 100
 * @unit m/s^3
 */
PARAM_DEFINE_FLOAT(RO_JERK_LIM, -1.0);

/**
 * Speed measurement threshold
 *
 * Set to -1 to disable.
 * The minimum threshold for the speed measurement not to be interpreted as zero.
 *
 * @group Rover Velocity Control
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 100
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(RO_SPEED_TH, 0.1);

/**
 * Tuning parameter for the speed reduction based on the course error
 *
 * Reduced_speed = RO_MAX_THR_SPEED * (1 - normalized_course_error * RO_SPEED_RED)
 * The normalized course error is the angle between the current course and the bearing setpoint
 * interpolated from [0, 180] -> [0, 1].
 * Higher value -> More speed reduction.
 * Note: This is also used to calculate the speed at which the vehicle arrives at a waypoint in auto modes.
 * Set to -1 to disable bearing error based speed reduction.
 *
 * @group Rover Velocity Control
 * @decimal 2
 * @increment 0.01
 * @min -1
 * @max 100
 */
PARAM_DEFINE_FLOAT(RO_SPEED_RED, -1.0);

/**
 * Auto-start script index
 *
 * CHANGING THIS VALUE REQUIRES A RESTART. Defines the auto-start script used to bootstrap the system.
 *
 * @group System
 * @min 0
 * @max 9999999
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SYS_AUTOSTART, 0);

/**
 * Automatically configure default values
 *
 * Set to 1 to reset parameters on next system startup (setting defaults).
 * Platform-specific values are used if available.
 * RC* parameters are preserved.
 *
 * @group System
 * @value 0 Keep parameters
 * @value 1 Reset parameters to airframe defaults
 */
PARAM_DEFINE_INT32(SYS_AUTOCONFIG, 0);

/**
 * Enable HITL/SIH mode on next boot
 *
 * While enabled the system will boot in Hardware-In-The-Loop (HITL)
 * or Simulation-In-Hardware (SIH) mode and not enable all sensors and checks.
 * When disabled the same vehicle can be flown normally.
 * 
 * Set to 'external HITL', if the system should perform as if it were a real
 * vehicle (the only difference to a real system is then only the parameter
 * value, which can be used for log analysis).
 *
 * @group System
 * @value -1 external HITL
 * @value 0 HITL and SIH disabled
 * @value 1 HITL enabled
 * @value 2 SIH enabled
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SYS_HITL, 0);

/**
 * Parameter version
 *
 * This is used internally only: an airframe configuration might set an expected
 * parameter version value via PARAM_DEFAULTS_VER. This is checked on bootup
 * against SYS_PARAM_VER, and if they do not match, parameters are reset and
 * reloaded from the airframe configuration.
 *
 * @group System
 * @min 0
 */
PARAM_DEFINE_INT32(SYS_PARAM_VER, 1);

/**
 * Auto start gyro thermal calibration on next boot
 *
 * Enable auto start of rate gyro thermal calibration at the next power up
 * 
 * 0 : Set to 0 to do nothing
 * 1 : Set to 1 to start a calibration at next boot
 * This parameter is reset to zero when the temperature calibration starts.
 * 
 * default (0, no calibration)
 *
 * @group System
 * @min 0
 * @max 1
 */
PARAM_DEFINE_INT32(SYS_CAL_GYRO, 0);

/**
 * Auto start accel thermal calibration on next boot
 *
 * Enable auto start of accelerometer thermal calibration at the next power up
 * 
 * 0 : Set to 0 to do nothing
 * 1 : Set to 1 to start a calibration at next boot
 * This parameter is reset to zero when the temperature calibration starts.
 * 
 * default (0, no calibration)
 *
 * @group System
 * @min 0
 * @max 1
 */
PARAM_DEFINE_INT32(SYS_CAL_ACCEL, 0);

/**
 * Auto start baro thermal calibration on next boot
 *
 * Enable auto start of barometer thermal calibration at the next power up
 * 
 * 0 : Set to 0 to do nothing
 * 1 : Set to 1 to start a calibration at next boot
 * This parameter is reset to zero when the temperature calibration starts.
 * 
 * default (0, no calibration)
 *
 * @group System
 * @min 0
 * @max 1
 */
PARAM_DEFINE_INT32(SYS_CAL_BARO, 0);

/**
 * Required temperature rise during thermal calibration
 *
 * A temperature increase greater than this value is required during calibration.
 * Calibration will complete for each sensor when the temperature increase above the starting temperature exceeds the value set by SYS_CAL_TDEL.
 * If the temperature rise is insufficient, the calibration will continue indefinitely and the board will need to be repowered to exit.
 *
 * @group System
 * @min 10
 * @unit celcius
 */
PARAM_DEFINE_INT32(SYS_CAL_TDEL, 24);

/**
 * Minimum starting temperature for thermal calibration
 *
 * Temperature calibration for each sensor will ignore data if the temperature is lower than the value set by SYS_CAL_TMIN.
 *
 * @group System
 * @unit celcius
 */
PARAM_DEFINE_INT32(SYS_CAL_TMIN, 5);

/**
 * Maximum starting temperature for thermal calibration
 *
 * Temperature calibration will not start if the temperature of any sensor is higher than the value set by SYS_CAL_TMAX.
 *
 * @group System
 * @unit celcius
 */
PARAM_DEFINE_INT32(SYS_CAL_TMAX, 10);

/**
 * Control if the vehicle has a GPS
 *
 * Disable this if the system has no GPS.
 * If disabled, the sensors hub will not process sensor_gps,
 * and GPS will not be available for the rest of the system.
 *
 * @group System
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SYS_HAS_GPS, 1);

/**
 * Control if and how many magnetometers are expected
 *
 * 0: System has no magnetometer, preflight checks should pass without one.
 * 1-N: Require the presence of N magnetometer sensors for check to pass.
 *
 * @group System
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SYS_HAS_MAG, 1);

/**
 * Control if the vehicle has a barometer
 *
 * Disable this if the board has no barometer, such as some of the Omnibus
 * F4 SD variants.
 * If disabled, the preflight checks will not check for the presence of a
 * barometer.
 *
 * @group System
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SYS_HAS_BARO, 1);

/**
 * Control if the vehicle has an airspeed sensor
 *
 * Set this to 0 if the board has no airspeed sensor.
 * If set to 0, the preflight checks will not check for the presence of an
 * airspeed sensor.
 *
 * @group System
 * @min 0
 * @max 1
 */
PARAM_DEFINE_INT32(SYS_HAS_NUM_ASPD, 0);

/**
 * Number of distance sensors to check being available
 *
 * The preflight check will fail if fewer than this number of distance sensors with valid data is present.
 * 
 * Disable the check with 0.
 *
 * @group System
 * @min 0
 * @max 4
 */
PARAM_DEFINE_INT32(SYS_HAS_NUM_DIST, 0);

/**
 * Number of optical flow sensors required to be available
 *
 * The preflight check will fail if fewer than this number of optical flow sensors with valid data are present.
 *
 * @group System
 * @min 0
 * @max 1
 */
PARAM_DEFINE_INT32(SYS_HAS_NUM_OF, 0);

/**
 * Enable factory calibration mode
 *
 * If enabled, future sensor calibrations will be stored to /fs/mtd_caldata.
 * 
 * Note: this is only supported on boards with a separate calibration storage
 * /fs/mtd_caldata.
 *
 * @group System
 * @value 0 Disabled
 * @value 1 All sensors
 * @value 2 All sensors except mag
 */
PARAM_DEFINE_INT32(SYS_FAC_CAL_MODE, 0);

/**
 * Bootloader update
 *
 * If enabled, update the bootloader on the next boot.
 * 
 * WARNING: do not cut the power during an update process, otherwise you will
 * have to recover using some alternative method (e.g. JTAG).
 * 
 * Instructions:
 * - Insert an SD card
 * - Enable this parameter
 * - Reboot the board (plug the power or send a reboot command)
 * - Wait until the board comes back up (or at least 2 minutes)
 * - If it does not come back, check the file bootlog.txt on the SD card
 *
 * @group System
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SYS_BL_UPDATE, 0);

/**
 * Enable failure injection
 *
 * If enabled allows MAVLink INJECT_FAILURE commands.
 * 
 * WARNING: the failures can easily cause crashes and are to be used with caution!
 *
 * @group System
 * @boolean
 */
PARAM_DEFINE_INT32(SYS_FAILURE_EN, 0);

/**
 * Enable weathervane
 *
 * 
 *
 * @group Multicopter Position Control
 * @boolean
 */
PARAM_DEFINE_INT32(WV_EN, 0);

/**
 * Minimum roll angle for weathervane yaw-rate demand
 *
 * Minimum roll angle setpoint for weathervane controller to demand a yaw-rate
 *
 * @group Multicopter Position Control
 * @min 0
 * @max 5
 * @unit deg
 */
PARAM_DEFINE_FLOAT(WV_ROLL_MIN, 1.0);

/**
 * Maximum yawrate the weathervane controller is allowed to demand
 *
 * 
 *
 * @group Multicopter Position Control
 * @min 0
 * @max 120
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(WV_YRATE_MAX, 90.0);

/**
 * Weather-vane roll angle to yawrate
 *
 * The desired gain to convert roll sp into yaw rate sp.
 *
 * @group VTOL Attitude Control
 * @decimal 3
 * @increment 0.01
 * @min 0.0
 * @max 3.0
 * @unit Hz
 */
PARAM_DEFINE_FLOAT(WV_GAIN, 1.0);

/**
 * Camera trigger Interface
 *
 * Selects the trigger interface
 *
 * @group Camera trigger
 * @value 1 GPIO
 * @value 2 Seagull MAP2 (over PWM)
 * @value 3 MAVLink (Camera Protocol v1)
 * @value 4 Generic PWM (IR trigger, servo)
 * @reboot_required True
 */
PARAM_DEFINE_INT32(TRIG_INTERFACE, 4);

/**
 * Camera trigger interval
 *
 * This parameter sets the time between two consecutive trigger events
 *
 * @group Camera trigger
 * @decimal 1
 * @min 4.0
 * @max 10000.0
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(TRIG_INTERVAL, 40.0);

/**
 * Minimum camera trigger interval
 *
 * This parameter sets the minimum time between two consecutive trigger events
 * the specific camera setup is supporting.
 *
 * @group Camera trigger
 * @decimal 1
 * @min 1.0
 * @max 10000.0
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(TRIG_MIN_INTERVA, 1.0);

/**
 * Camera trigger polarity
 *
 * This parameter sets the polarity of the trigger (0 = active low, 1 = active high )
 *
 * @group Camera trigger
 * @value 0 Active low
 * @value 1 Active high
 * @min 0
 * @max 1
 * @reboot_required True
 */
PARAM_DEFINE_INT32(TRIG_POLARITY, 0);

/**
 * Camera trigger activation time
 *
 * This parameter sets the time the trigger needs to pulled high or low.
 *
 * @group Camera trigger
 * @decimal 1
 * @min 0.1
 * @max 3000
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(TRIG_ACT_TIME, 40.0);

/**
 * Camera trigger mode
 *
 * 
 *
 * @group Camera trigger
 * @value 0 Disable
 * @value 1 Time based, on command
 * @value 2 Time based, always on
 * @value 3 Distance based, always on
 * @value 4 Distance based, on command (Survey mode)
 * @min 0
 * @max 4
 * @reboot_required True
 */
PARAM_DEFINE_INT32(TRIG_MODE, 0);

/**
 * Camera trigger distance
 *
 * Sets the distance at which to trigger the camera.
 *
 * @group Camera trigger
 * @decimal 1
 * @increment 1
 * @min 0
 * @unit m
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(TRIG_DISTANCE, 25.0);

/**
 * PWM output to trigger shot
 *
 * 
 *
 * @group Camera trigger
 * @min 1000
 * @max 2000
 * @unit us
 * @reboot_required True
 */
PARAM_DEFINE_INT32(TRIG_PWM_SHOOT, 1900);

/**
 * PWM neutral output on trigger pin
 *
 * 
 *
 * @group Camera trigger
 * @min 1000
 * @max 2000
 * @unit us
 * @reboot_required True
 */
PARAM_DEFINE_INT32(TRIG_PWM_NEUTRAL, 1500);

/**
 * Main stream used during automatic configuration
 *
 * The stream the autopilot sets up on the receiver to output the main data.
 * 
 * Set this to another value if the default stream is already used for another purpose.
 * 
 *
 * @group Septentrio
 * @min 1
 * @max 10
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SEP_STREAM_MAIN, 1);

/**
 * Logging stream used during automatic configuration
 *
 * The stream the autopilot sets up on the receiver to output the logging data.
 * 
 * Set this to another value if the default stream is already used for another purpose.
 * 
 *
 * @group Septentrio
 * @min 1
 * @max 10
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SEP_STREAM_LOG, 2);

/**
 * Output frequency of main SBF blocks
 *
 * The output frequency of the main SBF blocks needed for PVT information.
 * 
 *
 * @group Septentrio
 * @value 0 5 Hz
 * @value 1 10 Hz
 * @value 2 20 Hz
 * @value 3 25 Hz
 * @min 0
 * @max 3
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SEP_OUTP_HZ, 1);

/**
 * Heading/Yaw offset for dual antenna GPS
 *
 * Heading offset angle for dual antenna GPS setups that support heading estimation.
 * 
 * Set this to 0 if the antennas are parallel to the forward-facing direction
 * of the vehicle and the rover antenna is in front.
 * 
 * The offset angle increases clockwise.
 * 
 * Set this to 90 if the rover antenna is placed on the
 * right side of the vehicle and the moving base antenna is on the left side.
 * 
 *
 * @group Septentrio
 * @decimal 3
 * @min -360
 * @max 360
 * @unit deg
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(SEP_YAW_OFFS, 0);

/**
 * Enable sat info
 *
 * Enable publication of satellite info (ORB_ID(satellite_info)) if possible.
 * 
 *
 * @group Septentrio
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SEP_SAT_INFO, 0);

/**
 * Pitch offset for dual antenna GPS
 *
 * Vertical offsets can be compensated for by adjusting the Pitch offset.
 * 
 * Note that this can be interpreted as the "roll" angle in case the antennas are aligned along the perpendicular axis.
 * This occurs in situations where the two antenna ARPs may not be exactly at the same height in the vehicle reference frame.
 * Since pitch is defined as the right-handed rotation about the vehicle Y axis,
 * a situation where the main antenna is mounted lower than the aux antenna (assuming the default antenna setup) will result in a positive pitch.
 * 
 *
 * @group Septentrio
 * @decimal 3
 * @min -90
 * @max 90
 * @unit deg
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(SEP_PITCH_OFFS, 0);

/**
 * Log GPS communication data
 *
 * Log raw communication between the driver and connected receivers.
 * For example, "To receiver" will log all commands and corrections sent by the driver to the receiver.
 * 
 *
 * @group Septentrio
 * @value 0 Disabled
 * @value 1 From receiver
 * @value 2 To receiver
 * @value 3 Both
 * @min 0
 * @max 3
 */
PARAM_DEFINE_INT32(SEP_DUMP_COMM, 0);

/**
 * Toggle automatic receiver configuration
 *
 * By default, the receiver is automatically configured. Sometimes it may be used for multiple purposes.
 * If the offered parameters aren't sufficient, this parameter can be disabled to have full control of the receiver configuration.
 * A good way to use this is to enable automatic configuration, let the receiver be configured, and then disable it to make manual adjustments.
 * 
 *
 * @group Septentrio
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SEP_AUTO_CONFIG, 1);

/**
 * Usage of different constellations
 *
 * Choice of which constellations the receiver should use for PVT computation.
 * 
 * When this is 0, the constellation usage isn't changed.
 * 
 *
 * @group Septentrio
 * @bit 0 GPS
 * @bit 1 GLONASS
 * @bit 2 Galileo
 * @bit 3 SBAS
 * @bit 4 BeiDou
 * @min 0
 * @max 31
 * @min 0
 * @max 63
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SEP_CONST_USAGE, 0);

/**
 * Logging frequency for the receiver
 *
 * Select the frequency at which the connected receiver should log data to its internal storage.
 * 
 *
 * @group Septentrio
 * @value 0 Disabled
 * @value 1 0.1 Hz
 * @value 2 0.2 Hz
 * @value 3 0.5 Hz
 * @value 4 1 Hz
 * @value 5 2 Hz
 * @value 6 5 Hz
 * @value 7 10 Hz
 * @value 8 20 Hz
 * @value 9 25 Hz
 * @value 10 50 Hz
 * @min 0
 * @max 10
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SEP_LOG_HZ, 0);

/**
 * Logging level for the receiver
 *
 * Select the level of detail that needs to be logged by the receiver.
 * 
 *
 * @group Septentrio
 * @value 0 Lite
 * @value 1 Basic
 * @value 2 Default
 * @value 3 Full
 * @min 0
 * @max 3
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SEP_LOG_LEVEL, 2);

/**
 * Whether to overwrite or add to existing logging
 *
 * When the receiver is already set up to log data, this decides whether extra logged data should be added or overwrite existing data.
 * 
 *
 * @group Septentrio
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SEP_LOG_FORCE, 0);

/**
 * Setup and expected use of the hardware
 *
 * Setup and expected use of the hardware.
 * 
 * - Default: Use two receivers as completely separate instances.
 * - Moving base: Use two receivers in a rover & moving base setup for heading.
 * 
 *
 * @group Septentrio
 * @value 0 Default
 * @value 1 Moving base
 * @min 0
 * @max 1
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SEP_HARDW_SETUP, 0);

/**
 * Log GPS communication data
 *
 * If this is set to 1, all GPS communication data will be published via uORB,
 * and written to the log file as gps_dump message.
 * 
 * If this is set to 2, the main GPS is configured to output RTCM data,
 * which is then logged as gps_dump and can be used for PPK.
 *
 * @group GPS
 * @value 0 Disable
 * @value 1 Full communication
 * @value 2 RTCM output (PPK)
 * @min 0
 * @max 2
 */
PARAM_DEFINE_INT32(GPS_DUMP_COMM, 0);

/**
 * u-blox GPS dynamic platform model
 *
 * u-blox receivers support different dynamic platform models to adjust the navigation engine to
 * the expected application environment.
 *
 * @group GPS
 * @value 2 stationary
 * @value 4 automotive
 * @value 6 airborne with <1g acceleration
 * @value 7 airborne with <2g acceleration
 * @value 8 airborne with <4g acceleration
 * @min 0
 * @max 9
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_UBX_DYNMODEL, 7);

/**
 * u-blox GPS DGNSS timeout
 *
 * When set to 0 (default), default DGNSS timeout set by u-blox will be used.
 *
 * @group GPS
 * @min 0
 * @max 255
 * @unit s
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_UBX_DGNSS_TO, 0);

/**
 * u-blox GPS minimum satellite signal level for navigation
 *
 * When set to 0 (default), default minimum satellite signal level set by u-blox wll be used.
 *
 * @group GPS
 * @min 0
 * @max 255
 * @unit dBHz
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_UBX_MIN_CNO, 0);

/**
 * u-blox GPS minimum satellite elevation angle
 *
 * u-blox GPS minimum elevation for a GNSS satellite to be used in navigation
 * 
 * When set to 0 (default), default minimum elevation set by u-blox will be used.
 *
 * @group GPS
 * @min 0
 * @max 127
 * @unit deg
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_UBX_MIN_ELEV, 0);

/**
 * u-blox GPS output rate
 *
 * Configure the output rate of u-blox GPS receivers (protocol v27+).
 * When set to 0, automatic rate selection is used based on the receiver model.
 * Default rates: M9N=8Hz, F9P L1L2=5Hz, F9P L1L5=5Hz, Others=10Hz.
 * 
 * Note: Higher rates reduce satellite count (e.g., >8Hz limits to 16 SVs on M9N).
 * Max rates vary by model and RTK mode: F9P L1L2=5-7Hz, F9P L1L5=7-8Hz, X20=25Hz.
 * High rates at 115200 baud may cause dropouts.
 *
 * @group GPS
 * @min 0
 * @max 25
 * @unit Hz
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_UBX_RATE, 0);

/**
 * Enable sat info (if available)
 *
 * Enable publication of satellite info (ORB_ID(satellite_info)) if possible.
 * Not available on MTK.
 *
 * @group GPS
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_SAT_INFO, 0);

/**
 * u-blox GPS Mode
 *
 * Select the u-blox configuration setup. Most setups will use the default, including RTK and
 * dual GPS without heading.
 * 
 * If rover has RTCM corrections from a static base (or other static correction source) coming in on UART2, then select Mode 5.
 * The Heading mode requires 2 F9P devices to be attached. The main GPS will act as rover and output
 * heading information, whereas the secondary will act as moving base.
 * Modes 1 and 2 require each F9P UART1 to be connected to the Autopilot. In addition, UART2 on the
 * F9P units are connected to each other.
 * Modes 3 and 4 only require UART1 on each F9P connected to the Autopilot or Can Node. UART RX DMA is required.
 * RTK is still possible with this setup.
 * Mode 6 is intended for use with a ground control station (not necessarily an RTK correction base).
 *
 * @group GPS
 * @value 0 Default
 * @value 1 Heading (Rover With Moving Base UART1 Connected To Autopilot, UART2 Connected To Moving Base)
 * @value 2 Moving Base (UART1 Connected To Autopilot, UART2 Connected To Rover)
 * @value 3 Heading (Rover With Moving Base UART1 Connected to Autopilot Or Can Node At 921600)
 * @value 4 Moving Base (Moving Base UART1 Connected to Autopilot Or Can Node At 921600)
 * @value 5 Rover with Static Base on UART2 (similar to Default, except coming in on UART2)
 * @value 6 Ground Control Station (UART2 outputs NMEA)
 * @min 0
 * @max 1
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_UBX_MODE, 0);

/**
 * u-blox F9P UART2 Baudrate
 *
 * Select a baudrate for the F9P's UART2 port.
 * In GPS_UBX_MODE 1, 2, and 3, the F9P's UART2 port is configured to send/receive RTCM corrections.
 * Set this to 57600 if you want to attach a telemetry radio on UART2.
 *
 * @group GPS
 * @min 0
 * @unit B/s
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_UBX_BAUD2, 230400);

/**
 * u-blox protocol configuration for interfaces
 *
 * 
 *
 * @group GPS
 * @bit 0 Enable I2C input protocol UBX
 * @bit 1 Enable I2C input protocol NMEA
 * @bit 2 Enable I2C input protocol RTCM3X
 * @bit 3 Enable I2C output protocol UBX
 * @bit 4 Enable I2C output protocol NMEA
 * @bit 5 Enable I2C output protocol RTCM3X
 * @min 0
 * @max 63
 * @min 0
 * @max 32
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_UBX_CFG_INTF, 0);

/**
 * Enable MSM7 message output for PPK workflow
 *
 * 
 *
 * @group GPS
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_UBX_PPK, 0);

/**
 * u-blox GPS jamming detection high sensitivity mode
 *
 * Enables or disables the high sensitivity mode for the u-blox jamming detection
 * (CFG-SEC-JAMDET_SENSITIVITY_HI). When enabled, the receiver uses a
 * more sensitive algorithm to detect jamming. Disabling this may reduce false
 * positives in electrically noisy environments.
 *
 * @group GPS
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_UBX_JAM_DET, 1);

/**
 * Wipes the flash config of UBX modules
 *
 * Some UBX modules have a FLASH that allows to store persistent configuration that will be loaded on start.
 * PX4 does override all configuration parameters it needs in RAM, which takes precedence over the values in FLASH.
 * However, configuration parameters that are not overriden by PX4 can still cause unexpected problems during flight.
 * To avoid these kind of problems a clean config can be reached by wiping the FLASH on boot.
 * 
 * Note: Currently only supported on UBX.
 *
 * @group GPS
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_CFG_WIPE, 0);

/**
 * Heading/Yaw offset for dual antenna GPS
 *
 * Heading offset angle for dual antenna GPS setups that support heading estimation.
 * 
 * Set this to 0 if the antennas are parallel to the forward-facing direction
 * of the vehicle and the rover (or Unicore primary) antenna is in front.
 * 
 * The offset angle increases clockwise.
 * 
 * Set this to 90 if the rover (or Unicore primary, or Septentrio Mosaic Aux)
 * antenna is placed on the right side of the vehicle and the moving base
 * antenna is on the left side.
 * 
 * (Note: the Unicore primary antenna is the one connected on the right as seen
 * from the top).
 *
 * @group GPS
 * @decimal 3
 * @min 0
 * @max 360
 * @unit deg
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(GPS_YAW_OFFSET, 0.0);

/**
 * Protocol for Main GPS
 *
 * Select the GPS protocol over serial.
 * 
 * Auto-detection will probe all protocols, and thus is a bit slower.
 *
 * @group GPS
 * @value 0 Auto detect
 * @value 1 u-blox
 * @value 2 MTK
 * @value 3 Ashtech / Trimble
 * @value 4 Emlid Reach
 * @value 5 Femtomes
 * @value 6 NMEA (generic)
 * @min 0
 * @max 7
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_1_PROTOCOL, 1);

/**
 * Protocol for Secondary GPS
 *
 * Select the GPS protocol over serial.
 * 
 * Auto-detection will probe all protocols, and thus is a bit slower.
 *
 * @group GPS
 * @value 0 Auto detect
 * @value 1 u-blox
 * @value 2 MTK
 * @value 3 Ashtech / Trimble
 * @value 4 Emlid Reach
 * @value 5 Femtomes
 * @value 6 NMEA (generic)
 * @min 0
 * @max 6
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_2_PROTOCOL, 1);

/**
 * GNSS Systems for Primary GPS (integer bitmask)
 *
 * This integer bitmask controls the set of GNSS systems used by the receiver. Check your
 * receiver's documentation on how many systems are supported to be used in parallel.
 * 
 * Currently this functionality is just implemented for u-blox receivers.
 * 
 * When no bits are set, the receiver's default configuration should be used.
 * 
 * Set bits true to enable:
 * 0 : Use GPS (with QZSS)
 * 1 : Use SBAS (multiple GPS augmentation systems)
 * 2 : Use Galileo
 * 3 : Use BeiDou
 * 4 : Use GLONASS
 * 5 : Use NAVIC
 *
 * @group GPS
 * @bit 0 GPS (with QZSS)
 * @bit 1 SBAS
 * @bit 2 Galileo
 * @bit 3 BeiDou
 * @bit 4 GLONASS
 * @bit 5 NAVIC
 * @min 0
 * @max 63
 * @min 0
 * @max 63
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_1_GNSS, 0);

/**
 * GNSS Systems for Secondary GPS (integer bitmask)
 *
 * This integer bitmask controls the set of GNSS systems used by the receiver. Check your
 * receiver's documentation on how many systems are supported to be used in parallel.
 * 
 * Currently this functionality is just implemented for u-blox receivers.
 * 
 * When no bits are set, the receiver's default configuration should be used.
 * 
 * Set bits true to enable:
 * 0 : Use GPS (with QZSS)
 * 1 : Use SBAS (multiple GPS augmentation systems)
 * 2 : Use Galileo
 * 3 : Use BeiDou
 * 4 : Use GLONASS
 * 5 : Use NAVIC
 *
 * @group GPS
 * @bit 0 GPS (with QZSS)
 * @bit 1 SBAS
 * @bit 2 Galileo
 * @bit 3 BeiDou
 * @bit 4 GLONASS
 * @bit 5 NAVIC
 * @min 0
 * @max 63
 * @min 0
 * @max 63
 * @reboot_required True
 */
PARAM_DEFINE_INT32(GPS_2_GNSS, 0);

/**
 * OSD Symbol Selection
 *
 * Configure / toggle support display options.
 * 
 *
 * @group OSD
 * @bit 0 CRAFT_NAME
 * @bit 1 DISARMED
 * @bit 2 GPS_LAT
 * @bit 3 GPS_LON
 * @bit 4 GPS_SATS
 * @bit 5 GPS_SPEED
 * @bit 6 HOME_DIST
 * @bit 7 HOME_DIR
 * @bit 8 MAIN_BATT_VOLTAGE
 * @bit 9 CURRENT_DRAW
 * @bit 10 MAH_DRAWN
 * @bit 11 RSSI_VALUE
 * @bit 12 ALTITUDE
 * @bit 13 NUMERICAL_VARIO
 * @bit 14 (unused) FLYMODE
 * @bit 15 (unused) ESC_TMP
 * @bit 16 (unused) PITCH_ANGLE
 * @bit 17 (unused) ROLL_ANGLE
 * @bit 18 CROSSHAIRS
 * @bit 19 AVG_CELL_VOLTAGE
 * @bit 20 (unused) HORIZON_SIDEBARS
 * @bit 21 POWER
 * @min 0
 * @max 4194303
 */
PARAM_DEFINE_INT32(OSD_SYMBOLS, 16383);

/**
 * OSD Crosshairs Height
 *
 * Controls the vertical position of the crosshair display.
 * Resolution is limited by OSD to 15 discrete values. Negative
 * values will display the crosshairs below the horizon
 * 
 *
 * @group OSD
 * @min -8
 * @max 8
 */
PARAM_DEFINE_INT32(OSD_CH_HEIGHT, 0);

/**
 * OSD Warning Level
 *
 * Minimum security of log level to display on the OSD.
 * 
 *
 * @group OSD
 */
PARAM_DEFINE_INT32(OSD_LOG_LEVEL, 3);

/**
 * OSD Scroll Rate (ms)
 *
 * Scroll rate in milliseconds for OSD messages longer than available character width.
 * This is lower-bounded by the nominal loop rate of this module.
 * 
 *
 * @group OSD
 * @min 100
 * @max 1000
 */
PARAM_DEFINE_INT32(OSD_SCROLL_RATE, 125);

/**
 * OSD Dwell Time (ms)
 *
 * Amount of time in milliseconds to dwell at the beginning of the display, when scrolling.
 * 
 *
 * @group OSD
 * @min 100
 * @max 10000
 */
PARAM_DEFINE_INT32(OSD_DWELL_TIME, 500);

/**
 * OSD RC Stick commands
 *
 * Forward RC stick input to VTX when disarmed
 * 
 *
 * @group OSD
 * @min 0
 * @max 1
 */
PARAM_DEFINE_INT32(OSD_RC_STICK, 1);

/**
 * Wind estimator wind process noise spectral density
 *
 * Wind process noise of the internal wind estimator(s) of the airspeed selector.
 * When unaided, the wind estimate uncertainty (1-sigma, in m/s) increases by this amount every second.
 *
 * @group Airspeed Validator
 * @decimal 2
 * @min 0
 * @max 1
 * @unit m/s^2/sqrt(Hz)
 */
PARAM_DEFINE_FLOAT(ASPD_WIND_NSD, 0.1);

/**
 * Wind estimator true airspeed scale process noise spectral density
 *
 * Airspeed scale process noise of the internal wind estimator(s) of the airspeed selector.
 * When unaided, the scale uncertainty (1-sigma, unitless) increases by this amount every second.
 *
 * @group Airspeed Validator
 * @decimal 5
 * @min 0
 * @max 0.1
 * @unit 1/s/sqrt(Hz)
 */
PARAM_DEFINE_FLOAT(ASPD_SCALE_NSD, 0.0001);

/**
 * Wind estimator true airspeed measurement noise
 *
 * True airspeed measurement noise of the internal wind estimator(s) of the airspeed selector.
 *
 * @group Airspeed Validator
 * @decimal 1
 * @min 0
 * @max 4
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(ASPD_TAS_NOISE, 1.4);

/**
 * Wind estimator sideslip measurement noise
 *
 * Sideslip measurement noise of the internal wind estimator(s) of the airspeed selector.
 *
 * @group Airspeed Validator
 * @decimal 3
 * @min 0
 * @max 1
 * @unit rad
 */
PARAM_DEFINE_FLOAT(ASPD_BETA_NOISE, 0.15);

/**
 * Gate size for true airspeed fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group Airspeed Validator
 * @min 1
 * @max 5
 * @unit SD
 */
PARAM_DEFINE_INT32(ASPD_TAS_GATE, 4);

/**
 * Gate size for sideslip angle fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group Airspeed Validator
 * @min 1
 * @max 5
 * @unit SD
 */
PARAM_DEFINE_INT32(ASPD_BETA_GATE, 1);

/**
 * Controls when to apply the new estimated airspeed scale(s)
 *
 * 
 *
 * @group Airspeed Validator
 * @value 0 Do not automatically apply the estimated scale
 * @value 1 Apply the estimated scale after disarm
 * @value 2 Apply the estimated scale in air
 */
PARAM_DEFINE_INT32(ASPD_SCALE_APPLY, 2);

/**
 * Scale of airspeed sensor 1
 *
 * This is the scale IAS --> CAS of the first airspeed sensor instance
 *
 * @group Airspeed Validator
 * @decimal 2
 * @min 0.5
 * @max 2.0
 */
PARAM_DEFINE_FLOAT(ASPD_SCALE_1, 1.0);

/**
 * Scale of airspeed sensor 2
 *
 * This is the scale IAS --> CAS of the second airspeed sensor instance
 *
 * @group Airspeed Validator
 * @decimal 2
 * @min 0.5
 * @max 2.0
 */
PARAM_DEFINE_FLOAT(ASPD_SCALE_2, 1.0);

/**
 * Scale of airspeed sensor 3
 *
 * This is the scale IAS --> CAS of the third airspeed sensor instance
 *
 * @group Airspeed Validator
 * @decimal 2
 * @min 0.5
 * @max 2.0
 */
PARAM_DEFINE_FLOAT(ASPD_SCALE_3, 1.0);

/**
 * Index or primary airspeed measurement source
 *
 * 
 *
 * @group Airspeed Validator
 * @value 0 Groundspeed minus windspeed
 * @value 1 First airspeed sensor
 * @value 2 Second airspeed sensor
 * @value 3 Third airspeed sensor
 * @value 4 Thrust based airspeed
 * @reboot_required True
 */
PARAM_DEFINE_INT32(ASPD_PRIMARY, 1);

/**
 * Enable checks on airspeed sensors
 *
 * Controls which checks are run to check airspeed data for validity. Only applied if ASPD_PRIMARY > 0.
 * 
 * Note: The missing data check (bit 0) is implicitly always enabled when ASPD_DO_CHECKS > 0, even if bit 0 is not explicitly set.
 *
 * @group Airspeed Validator
 * @bit 0 Only data missing check (triggers if more than 1s no data)
 * @bit 1 Data stuck (triggers if data is exactly constant for 2s in FW mode)
 * @bit 2 Innovation check (see ASPD_FS_INNOV)
 * @bit 3 Load factor check (triggers if measurement is below stall speed)
 * @bit 4 First principle check (airspeed change vs. throttle and pitch)
 * @min 0
 * @max 31
 * @min 0
 * @max 31
 */
PARAM_DEFINE_INT32(ASPD_DO_CHECKS, 7);

/**
 * Fallback options
 *
 * 
 *
 * @group Airspeed Validator
 * @value 0 Fallback only to other airspeed sensors
 * @value 1 Fallback to groundspeed-minus-windspeed airspeed estimation
 * @value 2 Fallback to thrust based airspeed estimation
 */
PARAM_DEFINE_INT32(ASPD_FALLBACK, 0);

/**
 * Airspeed failure innovation threshold
 *
 * This specifies the minimum airspeed innovation required to trigger a failsafe. Larger values make the check less sensitive,
 * smaller values make it more sensitive. Large innovations indicate an inconsistency between predicted (groundspeed - windspeeed)
 * and measured airspeed.
 * The time required to detect a fault when the threshold is exceeded depends on the size of the exceedance and is controlled by the ASPD_FS_INTEG parameter.
 *
 * @group Airspeed Validator
 * @decimal 1
 * @min 0.5
 * @max 10.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(ASPD_FS_INNOV, 5.0);

/**
 * Airspeed failure innovation integral threshold
 *
 * This sets the time integral of airspeed innovation exceedance above ASPD_FS_INNOV required to trigger a failsafe.
 * Larger values make the check less sensitive, smaller positive values make it more sensitive.
 *
 * @group Airspeed Validator
 * @decimal 1
 * @min 0.0
 * @max 50.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(ASPD_FS_INTEG, 10.0);

/**
 * Airspeed failsafe stop delay
 *
 * Delay before stopping use of airspeed sensor if checks indicate sensor is bad.
 *
 * @group Airspeed Validator
 * @decimal 1
 * @min 0.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(ASPD_FS_T_STOP, 1.0);

/**
 * Airspeed failsafe start delay
 *
 * Delay before switching back to using airspeed sensor if checks indicate sensor is good.
 * Set to a negative value to disable the re-enabling in flight.
 *
 * @group Airspeed Validator
 * @decimal 1
 * @min -1.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(ASPD_FS_T_START, -1.0);

/**
 * Horizontal wind uncertainty threshold for valid ground-minus-wind
 *
 * The airspeed alternative derived from groundspeed and heading will be declared valid
 * as soon and as long the horizontal wind uncertainty is below this value.
 *
 * @group Airspeed Validator
 * @decimal 2
 * @min 0.01
 * @max 5
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(ASPD_WERR_THR, 2.0);

/**
 * First principle airspeed check time window
 *
 * Window for comparing airspeed change to throttle and pitch change.
 * Triggers when the airspeed change within this window is negative while throttle increases
 * and the vehicle pitches down.
 * Is meant to catch degrading airspeed blockages as can happen when flying through icing conditions.
 * Relies on  FW_THR_TRIM being set accurately.
 *
 * @group Airspeed Validator
 * @decimal 1
 * @min 0
 * @unit s
 */
PARAM_DEFINE_FLOAT(ASPD_FP_T_WINDOW, 2.0);

/**
 * standalone attitude estimator enable (unsupported)
 *
 * Enable standalone quaternion based attitude estimator.
 *
 * @group Attitude Q estimator
 * @boolean
 */
PARAM_DEFINE_INT32(ATT_EN, 0);

/**
 * Complementary filter accelerometer weight
 *
 * 
 *
 * @group Attitude Q estimator
 * @decimal 2
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(ATT_W_ACC, 0.2);

/**
 * Complementary filter magnetometer weight
 *
 * Set to 0 to avoid using the magnetometer.
 *
 * @group Attitude Q estimator
 * @decimal 2
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(ATT_W_MAG, 0.1);

/**
 * Complementary filter external heading weight
 *
 * 
 *
 * @group Attitude Q estimator
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(ATT_W_EXT_HDG, 0.1);

/**
 * Complementary filter gyroscope bias weight
 *
 * 
 *
 * @group Attitude Q estimator
 * @decimal 2
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(ATT_W_GYRO_BIAS, 0.1);

/**
 * Magnetic declination, in degrees
 *
 * This parameter is not used in normal operation,
 * as the declination is looked up based on the
 * GPS coordinates of the vehicle.
 *
 * @group Attitude Q estimator
 * @decimal 2
 * @unit deg
 */
PARAM_DEFINE_FLOAT(ATT_MAG_DECL, 0.0);

/**
 * Automatic GPS based declination compensation
 *
 * 
 *
 * @group Attitude Q estimator
 * @boolean
 */
PARAM_DEFINE_INT32(ATT_MAG_DECL_A, 1);

/**
 * External heading usage mode (from Motion capture/Vision)
 *
 * Set to 1 to use heading estimate from vision.
 * Set to 2 to use heading from motion capture.
 *
 * @group Attitude Q estimator
 * @value 0 None
 * @value 1 Vision
 * @value 2 Motion Capture
 * @min 0
 * @max 2
 */
PARAM_DEFINE_INT32(ATT_EXT_HDG_M, 0);

/**
 * Acceleration compensation based on GPS velocity
 *
 * 
 *
 * @group Attitude Q estimator
 * @boolean
 */
PARAM_DEFINE_INT32(ATT_ACC_COMP, 0);

/**
 * Gyro bias limit
 *
 * 
 *
 * @group Attitude Q estimator
 * @decimal 3
 * @min 0
 * @max 2
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(ATT_BIAS_MAX, 0.05);

/**
 * FailureDetector Max Roll
 *
 * Maximum roll angle before FailureDetector triggers the attitude_failure flag.
 * The flag triggers flight termination (if @CBRK_FLIGHTTERM = 0),
 * which sets outputs to their failsafe values.
 * On takeoff the flag triggers lockdown (irrespective of @CBRK_FLIGHTTERM),
 * which disarms motors but does not set outputs to failsafe values.
 * 
 * Setting this parameter to 0 disables the check
 *
 * @group Failure Detector
 * @min 0
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_INT32(FD_FAIL_R, 60);

/**
 * FailureDetector Max Pitch
 *
 * Maximum pitch angle before FailureDetector triggers the attitude_failure flag.
 * The flag triggers flight termination (if @CBRK_FLIGHTTERM = 0),
 * which sets outputs to their failsafe values.
 * On takeoff the flag triggers lockdown (irrespective of @CBRK_FLIGHTTERM),
 * which disarms motors but does not set outputs to failsafe values.
 * 
 * Setting this parameter to 0 disables the check
 *
 * @group Failure Detector
 * @min 0
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_INT32(FD_FAIL_P, 60);

/**
 * Roll failure trigger time
 *
 * Seconds (decimal) that roll has to exceed FD_FAIL_R before being considered as a failure.
 *
 * @group Failure Detector
 * @decimal 2
 * @min 0.02
 * @max 5
 * @unit s
 */
PARAM_DEFINE_FLOAT(FD_FAIL_R_TTRI, 0.3);

/**
 * Pitch failure trigger time
 *
 * Seconds (decimal) that pitch has to exceed FD_FAIL_P before being considered as a failure.
 *
 * @group Failure Detector
 * @decimal 2
 * @min 0.02
 * @max 5
 * @unit s
 */
PARAM_DEFINE_FLOAT(FD_FAIL_P_TTRI, 0.3);

/**
 * Enable PWM input from external ATS for failsafe
 *
 * Enable PWM input on for engaging failsafe from an external automatic trigger system (ATS)
 * 
 * Enabled on either AUX5 or MAIN5 depending on board.
 * External ATS is required by ASTM F3322-18.
 *
 * @group Failure Detector
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(FD_EXT_ATS_EN, 0);

/**
 * External ATS PWM threshold for failsafe
 *
 * The PWM threshold from external automatic trigger system for engaging failsafe
 * 
 * External ATS is required by ASTM F3322-18.
 *
 * @group Failure Detector
 * @decimal 2
 * @unit us
 */
PARAM_DEFINE_INT32(FD_EXT_ATS_TRIG, 1900);

/**
 * Imbalanced propeller check threshold
 *
 * Value at which the imbalanced propeller metric (based on horizontal and
 * vertical acceleration variance) triggers a failure
 * 
 * Setting this value to 0 disables the feature.
 *
 * @group Failure Detector
 * @increment 1
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(FD_IMB_PROP_THR, 30);

/**
 * Enable Actuator Failure check
 *
 * If enabled, the HealthAndArmingChecks will verify that for motors, a minimum amount of ESC current per throttle
 * level is being consumed.
 * Otherwise this indicates an motor failure.
 * This check only works for ESCs that report current consumption.
 *
 * @group Motor Failure
 * @boolean
 */
PARAM_DEFINE_INT32(FD_ACT_EN, 0);

/**
 * Motor Failure Current/Throttle Scale
 *
 * Determines the slope between expected steady state current and linearized, normalized thrust command.
 * E.g. FD_ACT_MOT_C2T A represents the expected steady state current at 100%.
 * FD_ACT_LOW_OFF and FD_ACT_HIGH_OFF offset the threshold from that slope.
 *
 * @group Motor Failure
 * @decimal 2
 * @increment 1
 * @min 0.0
 * @max 50.0
 * @unit A/%
 */
PARAM_DEFINE_FLOAT(MOTFAIL_C2T, 35.0);

/**
 * Undercurrent motor failure limit offset
 *
 * threshold = FD_ACT_MOT_C2T * thrust - FD_ACT_LOW_OFF
 *
 * @group Motor Failure
 * @decimal 2
 * @increment 1
 * @min 0
 * @max 30
 * @unit A
 */
PARAM_DEFINE_FLOAT(MOTFAIL_LOW_OFF, 10.0);

/**
 * Overcurrent motor failure limit offset
 *
 * threshold = FD_ACT_MOT_C2T * thrust + FD_ACT_HIGH_OFF
 *
 * @group Motor Failure
 * @decimal 2
 * @increment 1
 * @min 0
 * @max 30
 * @unit A
 */
PARAM_DEFINE_FLOAT(MOTFAIL_HIGH_OFF, 10.0);

/**
 * Motor Failure Hysteresis Time
 *
 * Motor failure only triggers after current thresholds are exceeded for this time.
 *
 * @group Motor Failure
 * @decimal 2
 * @increment 1
 * @min 0.01
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(MOTFAIL_TIME, 1.0);

/**
 * External mode identifier 0
 *
 * This parameter is automatically set to identify external modes. It ensures that modes
 * get assigned to the same index independent from their startup order,
 * which is required when mapping an external mode to an RC switch.
 * 
 *
 * @group Commander
 * @category System
 * @volatile True
 */
PARAM_DEFINE_INT32(COM_MODE0_HASH, 0);

/**
 * External mode identifier 1
 *
 * This parameter is automatically set to identify external modes. It ensures that modes
 * get assigned to the same index independent from their startup order,
 * which is required when mapping an external mode to an RC switch.
 * 
 *
 * @group Commander
 * @category System
 * @volatile True
 */
PARAM_DEFINE_INT32(COM_MODE1_HASH, 0);

/**
 * External mode identifier 2
 *
 * This parameter is automatically set to identify external modes. It ensures that modes
 * get assigned to the same index independent from their startup order,
 * which is required when mapping an external mode to an RC switch.
 * 
 *
 * @group Commander
 * @category System
 * @volatile True
 */
PARAM_DEFINE_INT32(COM_MODE2_HASH, 0);

/**
 * External mode identifier 3
 *
 * This parameter is automatically set to identify external modes. It ensures that modes
 * get assigned to the same index independent from their startup order,
 * which is required when mapping an external mode to an RC switch.
 * 
 *
 * @group Commander
 * @category System
 * @volatile True
 */
PARAM_DEFINE_INT32(COM_MODE3_HASH, 0);

/**
 * External mode identifier 4
 *
 * This parameter is automatically set to identify external modes. It ensures that modes
 * get assigned to the same index independent from their startup order,
 * which is required when mapping an external mode to an RC switch.
 * 
 *
 * @group Commander
 * @category System
 * @volatile True
 */
PARAM_DEFINE_INT32(COM_MODE4_HASH, 0);

/**
 * External mode identifier 5
 *
 * This parameter is automatically set to identify external modes. It ensures that modes
 * get assigned to the same index independent from their startup order,
 * which is required when mapping an external mode to an RC switch.
 * 
 *
 * @group Commander
 * @category System
 * @volatile True
 */
PARAM_DEFINE_INT32(COM_MODE5_HASH, 0);

/**
 * External mode identifier 6
 *
 * This parameter is automatically set to identify external modes. It ensures that modes
 * get assigned to the same index independent from their startup order,
 * which is required when mapping an external mode to an RC switch.
 * 
 *
 * @group Commander
 * @category System
 * @volatile True
 */
PARAM_DEFINE_INT32(COM_MODE6_HASH, 0);

/**
 * External mode identifier 7
 *
 * This parameter is automatically set to identify external modes. It ensures that modes
 * get assigned to the same index independent from their startup order,
 * which is required when mapping an external mode to an RC switch.
 * 
 *
 * @group Commander
 * @category System
 * @volatile True
 */
PARAM_DEFINE_INT32(COM_MODE7_HASH, 0);

/**
 * Mode slot 1
 *
 * If the main switch channel is in this range the
 * selected flight mode will be applied.
 * 
 *
 * @group Commander
 * @value -1 Unassigned
 * @value 0 Manual
 * @value 1 Altitude
 * @value 2 Position
 * @value 3 Mission
 * @value 4 Hold
 * @value 5 Return
 * @value 6 Acro
 * @value 7 Offboard
 * @value 8 Stabilized
 * @value 9 Position Slow
 * @value 10 Takeoff
 * @value 11 Land
 * @value 12 Follow Me
 * @value 13 Precision Land
 * @value 16 Altitude Cruise
 * @value 100 External Mode 1
 * @value 101 External Mode 2
 * @value 102 External Mode 3
 * @value 103 External Mode 4
 * @value 104 External Mode 5
 * @value 105 External Mode 6
 * @value 106 External Mode 7
 * @value 107 External Mode 8
 */
PARAM_DEFINE_INT32(COM_FLTMODE1, -1);

/**
 * Mode slot 2
 *
 * If the main switch channel is in this range the
 * selected flight mode will be applied.
 * 
 *
 * @group Commander
 * @value -1 Unassigned
 * @value 0 Manual
 * @value 1 Altitude
 * @value 2 Position
 * @value 3 Mission
 * @value 4 Hold
 * @value 5 Return
 * @value 6 Acro
 * @value 7 Offboard
 * @value 8 Stabilized
 * @value 9 Position Slow
 * @value 10 Takeoff
 * @value 11 Land
 * @value 12 Follow Me
 * @value 13 Precision Land
 * @value 16 Altitude Cruise
 * @value 100 External Mode 1
 * @value 101 External Mode 2
 * @value 102 External Mode 3
 * @value 103 External Mode 4
 * @value 104 External Mode 5
 * @value 105 External Mode 6
 * @value 106 External Mode 7
 * @value 107 External Mode 8
 */
PARAM_DEFINE_INT32(COM_FLTMODE2, -1);

/**
 * Mode slot 3
 *
 * If the main switch channel is in this range the
 * selected flight mode will be applied.
 * 
 *
 * @group Commander
 * @value -1 Unassigned
 * @value 0 Manual
 * @value 1 Altitude
 * @value 2 Position
 * @value 3 Mission
 * @value 4 Hold
 * @value 5 Return
 * @value 6 Acro
 * @value 7 Offboard
 * @value 8 Stabilized
 * @value 9 Position Slow
 * @value 10 Takeoff
 * @value 11 Land
 * @value 12 Follow Me
 * @value 13 Precision Land
 * @value 16 Altitude Cruise
 * @value 100 External Mode 1
 * @value 101 External Mode 2
 * @value 102 External Mode 3
 * @value 103 External Mode 4
 * @value 104 External Mode 5
 * @value 105 External Mode 6
 * @value 106 External Mode 7
 * @value 107 External Mode 8
 */
PARAM_DEFINE_INT32(COM_FLTMODE3, -1);

/**
 * Mode slot 4
 *
 * If the main switch channel is in this range the
 * selected flight mode will be applied.
 * 
 *
 * @group Commander
 * @value -1 Unassigned
 * @value 0 Manual
 * @value 1 Altitude
 * @value 2 Position
 * @value 3 Mission
 * @value 4 Hold
 * @value 5 Return
 * @value 6 Acro
 * @value 7 Offboard
 * @value 8 Stabilized
 * @value 9 Position Slow
 * @value 10 Takeoff
 * @value 11 Land
 * @value 12 Follow Me
 * @value 13 Precision Land
 * @value 16 Altitude Cruise
 * @value 100 External Mode 1
 * @value 101 External Mode 2
 * @value 102 External Mode 3
 * @value 103 External Mode 4
 * @value 104 External Mode 5
 * @value 105 External Mode 6
 * @value 106 External Mode 7
 * @value 107 External Mode 8
 */
PARAM_DEFINE_INT32(COM_FLTMODE4, -1);

/**
 * Mode slot 5
 *
 * If the main switch channel is in this range the
 * selected flight mode will be applied.
 * 
 *
 * @group Commander
 * @value -1 Unassigned
 * @value 0 Manual
 * @value 1 Altitude
 * @value 2 Position
 * @value 3 Mission
 * @value 4 Hold
 * @value 5 Return
 * @value 6 Acro
 * @value 7 Offboard
 * @value 8 Stabilized
 * @value 9 Position Slow
 * @value 10 Takeoff
 * @value 11 Land
 * @value 12 Follow Me
 * @value 13 Precision Land
 * @value 16 Altitude Cruise
 * @value 100 External Mode 1
 * @value 101 External Mode 2
 * @value 102 External Mode 3
 * @value 103 External Mode 4
 * @value 104 External Mode 5
 * @value 105 External Mode 6
 * @value 106 External Mode 7
 * @value 107 External Mode 8
 */
PARAM_DEFINE_INT32(COM_FLTMODE5, -1);

/**
 * Mode slot 6
 *
 * If the main switch channel is in this range the
 * selected flight mode will be applied.
 * 
 *
 * @group Commander
 * @value -1 Unassigned
 * @value 0 Manual
 * @value 1 Altitude
 * @value 2 Position
 * @value 3 Mission
 * @value 4 Hold
 * @value 5 Return
 * @value 6 Acro
 * @value 7 Offboard
 * @value 8 Stabilized
 * @value 9 Position Slow
 * @value 10 Takeoff
 * @value 11 Land
 * @value 12 Follow Me
 * @value 13 Precision Land
 * @value 16 Altitude Cruise
 * @value 100 External Mode 1
 * @value 101 External Mode 2
 * @value 102 External Mode 3
 * @value 103 External Mode 4
 * @value 104 External Mode 5
 * @value 105 External Mode 6
 * @value 106 External Mode 7
 * @value 107 External Mode 8
 */
PARAM_DEFINE_INT32(COM_FLTMODE6, -1);

/**
 * GCS connection loss time threshold
 *
 * After this amount of seconds without datalink, the GCS connection lost mode triggers
 *
 * @group Commander
 * @decimal 1
 * @increment 1
 * @min 5
 * @max 300
 * @unit s
 */
PARAM_DEFINE_INT32(COM_DL_LOSS_T, 10);

/**
 * High Latency Datalink loss time threshold
 *
 * After this amount of seconds without datalink the data link lost mode triggers
 *
 * @group Commander
 * @min 60
 * @max 3600
 * @unit s
 */
PARAM_DEFINE_INT32(COM_HLDL_LOSS_T, 120);

/**
 * Manual control loss timeout
 *
 * The time in seconds without a new setpoint from RC or Joystick, after which the connection is considered lost.
 * This must be kept short as the vehicle will use the last supplied setpoint until the timeout triggers.
 * Ensure the value is not set lower than the update interval of the RC or Joystick.
 *
 * @group Commander
 * @decimal 1
 * @increment 0.1
 * @min 0
 * @max 35
 * @unit s
 */
PARAM_DEFINE_FLOAT(COM_RC_LOSS_T, 0.5);

/**
 * Home position enabled
 *
 * Set home position automatically if possible.
 * 
 * During missions, the latitude/longitude of the home position is locked and will not reset during intermediate landings.
 * It will only update once the mission is complete or landed outside of a mission.
 * However, the altitude is still being adjusted to correct for GNSS vertical drift in the first 2 minutes after takeoff.
 *
 * @group Commander
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(COM_HOME_EN, 1);

/**
 * Allows setting the home position after takeoff
 *
 * If set to true, the autopilot is allowed to set its home position after takeoff
 * The true home position is back-computed if a local position is estimate if available.
 * If no local position is available, home is set to the current position.
 *
 * @group Commander
 * @boolean
 */
PARAM_DEFINE_INT32(COM_HOME_IN_AIR, 0);

/**
 * Manual control input source configuration
 *
 * Selects stick input selection behavior:
 * either a traditional remote control receiver (RC) or a MAVLink joystick (MANUAL_CONTROL message)
 * 
 * Priority sources are immediately switched to whenever they get valid.
 * 
 * 0 RC only. Requires valid RC calibration.
 * 1 MAVLink only. RC and related checks are disabled.
 * 2 Switches only if current source becomes invalid.
 * 3 Locks to the first valid source until reboot.
 * 4 Ignores all sources.
 * 5 RC priority, then MAVLink (lower instance before higher)
 * 6 MAVLink priority (lower instance before higher), then RC
 * 7 RC priority, then MAVLink (higher instance before lower)
 * 8 MAVLink priority (higher instance before lower), then RC
 *
 * @group Commander
 * @value 0 RC only
 * @value 1 MAVLink only
 * @value 2 RC or MAVLink with fallback
 * @value 3 RC or MAVLink keep first
 * @value 4 Disable manual control
 * @value 5 Prio: RC > MAVL 1 > MAVL 2
 * @value 6 Prio: MAVL 1 > MAVL 2 > RC
 * @value 7 Prio: RC > MAVL 2 > MAVL 1
 * @value 8 Prio: MAVL 2 > MAVL 1 > RC
 * @min 0
 * @max 8
 */
PARAM_DEFINE_INT32(COM_RC_IN_MODE, 3);

/**
 * Time-out for auto disarm after landing
 *
 * A non-zero, positive value specifies the time-out period in seconds after which the vehicle will be
 * automatically disarmed in case a landing situation has been detected during this period.
 * 
 * A zero or negative value means that automatic disarming triggered by landing detection is disabled.
 *
 * @group Commander
 * @decimal 1
 * @increment 0.1
 * @unit s
 */
PARAM_DEFINE_FLOAT(COM_DISARM_LAND, 2.0);

/**
 * Time-out for auto disarm if not taking off
 *
 * A non-zero, positive value specifies the time in seconds, within which the
 * vehicle is expected to take off after arming. In case the vehicle didn't takeoff
 * within the timeout it disarms again.
 * 
 * A negative value disables autmoatic disarming triggered by a pre-takeoff timeout.
 *
 * @group Commander
 * @decimal 1
 * @increment 0.1
 * @unit s
 */
PARAM_DEFINE_FLOAT(COM_DISARM_PRFLT, 10.0);

/**
 * Arming without GNSS configuration
 *
 * Configures whether arming is allowed without GNSS, for modes that require a global position
 * (specifically, in those modes when a check defined by EKF2_GPS_CHECK fails).
 * The settings deny arming and warn, allow arming and warn, or silently allow arming.
 *
 * @group Commander
 * @value 0 Deny arming
 * @value 1 Allow arming (with warning)
 * @value 2 Allow arming (no warning)
 */
PARAM_DEFINE_INT32(COM_ARM_WO_GPS, 1);

/**
 * Arm switch is a momentary button
 *
 * 0: Arming/disarming triggers on switch transition.
 * 1: Arming/disarming triggers when holding the momentary button down like the stick gesture.
 *
 * @group Commander
 * @boolean
 */
PARAM_DEFINE_INT32(COM_ARM_SWISBTN, 0);

/**
 * Allow disarming in manual thrust modes
 *
 * Allow disarming via switch/stick/button on multicopters in manual thrust modes
 * 
 * 0: Disallow disarming when not landed
 * 1: Allow disarming in multicopter flight in modes where
 * the thrust is directly controlled by thr throttle stick
 * e.g. Stabilized, Acro
 *
 * @group Commander
 * @boolean
 */
PARAM_DEFINE_INT32(COM_DISARM_MAN, 1);

/**
 * Battery failsafe mode
 *
 * Action the system takes at critical battery. See also BAT_CRIT_THR and BAT_EMERGEN_THR
 * for definition of battery states.
 *
 * @group Commander
 * @value 0 Warning
 * @value 2 Land mode
 * @value 3 Return at critical level, land at emergency level
 */
PARAM_DEFINE_INT32(COM_LOW_BAT_ACT, 0);

/**
 * Delay between failsafe condition triggered and failsafe reaction
 *
 * Before entering failsafe (RTL, Land, Hold), wait COM_FAIL_ACT_T seconds in Hold mode
 * for the user to realize.
 * During that time the user can switch modes, but cannot take over control via the stick override feature (see COM_RC_OVERRIDE).
 * Afterwards the configured failsafe action is triggered and the user may use stick override.
 * 
 * A zero value disables the delay.
 *
 * @group Commander
 * @decimal 1
 * @min 0.0
 * @max 25.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(COM_FAIL_ACT_T, 5.0);

/**
 * Imbalanced propeller failsafe mode
 *
 * Action the system takes when an imbalanced propeller is detected by the failure detector.
 * See also FD_IMB_PROP_THR to set the failure threshold.
 *
 * @group Commander
 * @value -1 Disabled
 * @value 0 Warning
 * @value 1 Return
 * @value 2 Land
 * @increment 1
 */
PARAM_DEFINE_INT32(COM_IMB_PROP_ACT, 0);

/**
 * Offboard connection loss timeout
 *
 * Time-out to wait when offboard connection is lost before triggering offboard lost action
 * 
 * See COM_OBL_RC_ACT to configure action.
 *
 * @group Commander
 * @increment 0.01
 * @min 0
 * @max 60
 * @unit s
 */
PARAM_DEFINE_FLOAT(COM_OF_LOSS_T, 1.0);

/**
 * Set action after a quadchute
 *
 * 
 *
 * @group Commander
 * @value -1 Warning only
 * @value 0 Return mode
 * @value 1 Land mode
 * @value 2 Hold mode
 */
PARAM_DEFINE_INT32(COM_QC_ACT, 0);

/**
 * Set offboard loss failsafe mode
 *
 * The offboard loss failsafe will only be entered after a timeout,
 * set by COM_OF_LOSS_T in seconds.
 *
 * @group Commander
 * @value 0 Position mode
 * @value 1 Altitude mode
 * @value 2 Stabilized
 * @value 3 Return mode
 * @value 4 Land mode
 * @value 5 Hold mode
 * @value 6 Terminate
 * @value 7 Disarm
 */
PARAM_DEFINE_INT32(COM_OBL_RC_ACT, 0);

/**
 * Onboard computer connection loss timeout
 *
 * Time-out to wait when onboard computer connection is lost before warning about loss connection
 *
 * @group Commander
 * @increment 0.01
 * @min 0
 * @max 60
 * @unit s
 */
PARAM_DEFINE_FLOAT(COM_OBC_LOSS_T, 5.0);

/**
 * Max accelerometer inconsistency for arming
 *
 * Maximum accelerometer inconsistency between IMU units that will allow arming
 *
 * @group Commander
 * @decimal 2
 * @increment 0.05
 * @min 0.1
 * @max 1.0
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(COM_ARM_IMU_ACC, 0.7);

/**
 * Max rate gyro inconsistency for arming
 *
 * Maximum rate gyro inconsistency between IMU units that will allow arming
 *
 * @group Commander
 * @decimal 3
 * @increment 0.01
 * @min 0.02
 * @max 0.3
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(COM_ARM_IMU_GYR, 0.25);

/**
 * Max magnetic field inconsistency for arming
 *
 * Maximum magnetic field inconsistency between units that will allow arming
 * 
 * Set -1 to disable the check.
 *
 * @group Commander
 * @min 3
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_INT32(COM_ARM_MAG_ANG, 60);

/**
 * Enable mag strength preflight check
 *
 * Check if the estimator detects a strong magnetic
 * disturbance (check enabled by EKF2_MAG_CHECK)
 *
 * @group Commander
 * @value 0 Disabled
 * @value 1 Deny arming
 * @value 2 Warning only
 */
PARAM_DEFINE_INT32(COM_ARM_MAG_STR, 2);

/**
 * Enable manual control stick override
 *
 * When enabled, moving the sticks more than COM_RC_STICK_OV
 * immediately gives control back to the pilot by switching to Position mode and
 * if position is unavailable Altitude mode.
 * Note: Only has an effect on multicopters, and VTOLs in multicopter mode.
 *
 * @group Commander
 * @bit 0 Enable override during auto modes (except for in critical battery reaction)
 * @bit 1 Enable override during offboard mode
 * @min 0
 * @max 3
 * @min 0
 * @max 3
 */
PARAM_DEFINE_INT32(COM_RC_OVERRIDE, 1);

/**
 * Stick override threshold
 *
 * If COM_RC_OVERRIDE is enabled and the joystick input is moved more than this threshold
 * the pilot takes over control.
 *
 * @group Commander
 * @decimal 0
 * @increment 0.05
 * @min 5
 * @max 80
 * @unit %
 */
PARAM_DEFINE_FLOAT(COM_RC_STICK_OV, 30.0);

/**
 * Require valid mission to arm
 *
 * The default allows to arm the vehicle without a valid mission.
 *
 * @group Commander
 * @boolean
 */
PARAM_DEFINE_INT32(COM_ARM_MIS_REQ, 0);

/**
 * Require arm authorization to arm
 *
 * By default off. The default allows to arm the vehicle without a arm authorization.
 *
 * @group Commander
 * @boolean
 */
PARAM_DEFINE_INT32(COM_ARM_AUTH_REQ, 0);

/**
 * Arm authorizer system id
 *
 * Used if arm authorization is requested by COM_ARM_AUTH_REQ.
 *
 * @group Commander
 */
PARAM_DEFINE_INT32(COM_ARM_AUTH_ID, 10);

/**
 * Arm authorization method
 *
 * Methods:
 * - one arm: request authorization and arm when authorization is received
 * - two step arm: 1st arm command request an authorization and
 * 2nd arm command arm the drone if authorized
 * 
 * Used if arm authorization is requested by COM_ARM_AUTH_REQ.
 *
 * @group Commander
 * @value 0 one arm
 * @value 1 two step arm
 */
PARAM_DEFINE_INT32(COM_ARM_AUTH_MET, 0);

/**
 * Arm automatically on boot
 *
 * When enabled, the vehicle arms automatically once all preflight checks pass after boot.
 * The vehicle will not re-arm after a manual disarm.
 * Has no effect if COM_ARMABLE is 0.
 *
 * @group Commander
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(COM_ARM_ON_BOOT, 0);

/**
 * Arm authorization timeout
 *
 * Timeout for authorizer answer.
 * Used if arm authorization is requested by COM_ARM_AUTH_REQ.
 *
 * @group Commander
 * @decimal 1
 * @increment 0.1
 * @unit s
 */
PARAM_DEFINE_FLOAT(COM_ARM_AUTH_TO, 1);

/**
 * Horizontal position error threshold for hovering systems
 *
 * This is the horizontal position error (EPH) threshold that will trigger a failsafe.
 * If the previous position error was below this threshold, there is an additional
 * factor of 2.5 applied (threshold for invalidation 2.5 times the one for validation).
 * Only used for multicopters and VTOLs in hover mode.
 * Independent from estimator positioning data timeout threshold (see EKF2_NOAID_TOUT).
 * 
 * Set to -1 to disable.
 *
 * @group Commander
 * @decimal 1
 * @min -1
 * @max 400
 * @unit m
 */
PARAM_DEFINE_FLOAT(COM_POS_FS_EPH, 5.0);

/**
 * Horizontal velocity error threshold
 *
 * This is the horizontal velocity error (EVH) threshold that will trigger a failsafe.
 * The default is appropriate for a multicopter. Can be increased for a fixed-wing.
 * If the previous velocity error was below this threshold, there is an additional
 * factor of 2.5 applied (threshold for invalidation 2.5 times the one for validation).
 *
 * @group Commander
 * @decimal 1
 * @min 0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(COM_VEL_FS_EVH, 1.0);

/**
 * Next flight UUID
 *
 * This number is incremented automatically after every flight on
 * disarming in order to remember the next flight UUID.
 * The first flight is 0.
 *
 * @group Commander
 * @category System
 * @volatile True
 * @min 0
 */
PARAM_DEFINE_INT32(COM_FLIGHT_UUID, 0);

/**
 * Action after TAKEOFF has been accepted
 *
 * The mode transition after TAKEOFF has completed successfully.
 *
 * @group Commander
 * @value 0 Hold
 * @value 1 Mission (if valid)
 */
PARAM_DEFINE_INT32(COM_TAKEOFF_ACT, 0);

/**
 * Set GCS connection loss failsafe mode
 *
 * The GCS connection loss failsafe will only be entered after a timeout,
 * set by COM_DL_LOSS_T in seconds. Once the timeout occurs the selected
 * action will be executed.
 *
 * @group Commander
 * @value 0 Disabled
 * @value 1 Hold mode
 * @value 2 Return mode
 * @value 3 Land mode
 * @value 5 Terminate
 * @value 6 Disarm
 * @min 0
 * @max 6
 */
PARAM_DEFINE_INT32(NAV_DLL_ACT, 0);

/**
 * Set manual control loss failsafe mode
 *
 * The manual control loss failsafe will only be entered after a timeout,
 * set by COM_RC_LOSS_T in seconds.
 *
 * @group Commander
 * @value 1 Hold mode
 * @value 2 Return mode
 * @value 3 Land mode
 * @value 5 Terminate
 * @value 6 Disarm
 * @min 1
 * @max 6
 */
PARAM_DEFINE_INT32(NAV_RCL_ACT, 2);

/**
 * Manual control loss exceptions
 *
 * Specify modes in which stick input is ignored and no failsafe action is triggered.
 * External modes requiring stick input will still failsafe.
 * Auto modes are: Hold, Takeoff, Land, RTL, Descend, Follow Target, Precland, Orbit.
 *
 * @group Commander
 * @bit 0 Mission
 * @bit 1 Auto modes
 * @bit 2 Offboard
 * @bit 3 External Mode
 * @bit 4 Altitude Cruise
 * @min 0
 * @max 31
 * @min 0
 * @max 31
 */
PARAM_DEFINE_INT32(COM_RCL_EXCEPT, 0);

/**
 * Datalink loss exceptions
 *
 * Specify modes in which ground control station connection loss is ignored and no failsafe action is triggered.
 * See also COM_RCL_EXCEPT.
 *
 * @group Commander
 * @bit 0 Mission
 * @bit 1 Auto modes
 * @bit 2 Offboard
 * @bit 3 External Mode
 * @bit 4 Altitude Cruise
 * @min 0
 * @max 31
 * @min 0
 * @max 31
 */
PARAM_DEFINE_INT32(COM_DLL_EXCEPT, 0);

/**
 * Set the actuator failure failsafe mode
 *
 * Note: actuator failure needs to be enabled and configured via FD_ACT_*
 * parameters.
 *
 * @group Commander
 * @value 0 Warning only
 * @value 1 Hold mode
 * @value 2 Land mode
 * @value 3 Return mode
 * @value 4 Terminate
 * @min 0
 * @max 3
 */
PARAM_DEFINE_INT32(COM_ACT_FAIL_ACT, 0);

/**
 * Require MAVLink parachute system to be present and healthy
 *
 * 
 *
 * @group Commander
 * @boolean
 */
PARAM_DEFINE_INT32(COM_PARACHUTE, 0);

/**
 * Enable checks on ESCs that report telemetry
 *
 * If this parameter is set, the system will check ESC's online status and failures.
 * This param is specific for ESCs reporting status. It shall be used only if ESCs support telemetry.
 *
 * @group Commander
 * @boolean
 */
PARAM_DEFINE_INT32(COM_ARM_CHK_ESCS, 0);

/**
 * Condition to enter prearmed mode
 *
 * Condition to enter the prearmed state, an intermediate state between disarmed and armed
 * in which non-throttling actuators are active.
 *
 * @group Commander
 * @value 0 Disabled
 * @value 1 Safety button
 * @value 2 Always
 */
PARAM_DEFINE_INT32(COM_PREARM_MODE, 0);

/**
 * Enable force safety
 *
 * Force safety when the vehicle disarms
 *
 * @group Commander
 * @boolean
 */
PARAM_DEFINE_INT32(COM_FORCE_SAFETY, 0);

/**
 * Maximum allowed CPU load to still arm
 *
 * The check fails if the CPU load is above this threshold for 2s.
 * 
 * A negative value disables the check.
 *
 * @group Commander
 * @increment 1
 * @min -1
 * @max 100
 * @unit %
 */
PARAM_DEFINE_FLOAT(COM_CPU_MAX, 95.0);

/**
 * Maximum allowed RAM usage to pass checks
 *
 * The check fails if the RAM usage is above this threshold.
 * 
 * A negative value disables the check.
 *
 * @group Commander
 * @increment 1
 * @min -1
 * @max 100
 * @unit %
 */
PARAM_DEFINE_FLOAT(COM_RAM_MAX, 95.0);

/**
 * Required number of redundant power modules
 *
 * This configures a check to verify the expected number of 5V rail power supplies are present. By default only one is expected.
 * Note: CBRK_SUPPLY_CHK disables all power checks including this one.
 *
 * @group Commander
 * @min 0
 * @max 4
 */
PARAM_DEFINE_INT32(COM_POWER_COUNT, 1);

/**
 * Timeout for detecting a failure after takeoff
 *
 * A non-zero, positive value specifies the timeframe in seconds within failure detector is allowed to disarm the vehicle
 * if attitude exceeds the limits defined in FD_FAIL_P and FD_FAIL_R.
 * The check is not executed for flight modes that do support acrobatic maneuvers, e.g: Acro (MC/FW) and Manual (FW).
 * A zero or negative value means that the check is disabled.
 *
 * @group Commander
 * @decimal 3
 * @min -1.0
 * @max 5.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(COM_LKDOWN_TKO, 3.0);

/**
 * Enable FMU SD card detection check
 *
 * This check detects if the FMU SD card is missing.
 * Depending on the value of the parameter, the check can be
 * disabled, warn only or deny arming.
 *
 * @group Commander
 * @value 0 Disabled
 * @value 1 Warning only
 * @value 2 Enforce SD card presence
 */
PARAM_DEFINE_INT32(COM_ARM_SDCARD, 1);

/**
 * Enable FMU SD card hardfault / watchdog detection check
 *
 * This check detects if there are hardfault / watchdog files present on the
 * SD card. If so, and the parameter is enabled, arming is prevented.
 *
 * @group Commander
 * @boolean
 */
PARAM_DEFINE_INT32(COM_ARM_HFLT_CHK, 1);

/**
 * Enable Drone ID system detection and health check
 *
 * This check detects if the Open Drone ID system is missing.
 * Depending on the value of the parameter, the check can be
 * disabled, warn only or deny arming.
 *
 * @group Commander
 * @value 0 Disabled
 * @value 1 Warning only
 * @value 2 Enforce Open Drone ID system presence
 */
PARAM_DEFINE_INT32(COM_ARM_ODID, 0);

/**
 * Enable Traffic Avoidance system detection check
 *
 * This check detects if a traffic avoidance system (ADSB/FLARM transponder)
 * is missing. Depending on the value of the parameter, the check can be
 * disabled, warn only, or deny arming.
 *
 * @group Commander
 * @value 0 Disabled
 * @value 1 Warning only
 * @value 2 Enforce for all modes
 * @value 3 Enforce for mission modes only
 */
PARAM_DEFINE_INT32(COM_ARM_TRAFF, 0);

/**
 * Enforced delay between arming and further navigation
 *
 * The minimal time from arming the motors until moving the vehicle is possible is COM_SPOOLUP_TIME seconds.
 * Goal:
 * - Motors and propellers spool up to idle speed before getting commanded to spin faster
 * - Timeout for ESCs and smart batteries to successfulyy do failure checks
 * e.g. for stuck rotors before the vehicle is off the ground
 *
 * @group Commander
 * @decimal 1
 * @increment 0.1
 * @min 0
 * @max 30
 * @unit s
 */
PARAM_DEFINE_FLOAT(COM_SPOOLUP_TIME, 1.0);

/**
 * Wind speed warning threshold
 *
 * A warning is triggered if the currently estimated wind speed is above this value.
 * Warning is sent periodically (every 1 minute).
 * 
 * Set to -1 to disable.
 *
 * @group Commander
 * @decimal 1
 * @increment 0.1
 * @min -1
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(COM_WIND_WARN, -1.0);

/**
 * Maximum allowed flight time
 *
 * The vehicle aborts the current operation and returns to launch when
 * the time since takeoff is above this value. It is not possible to resume the
 * mission or switch to any auto mode other than RTL or Land. Taking over in any manual
 * mode is still possible.
 * 
 * Starting from 90% of the maximum flight time, a warning message will be sent
 * every 1 minute with the remaining time until automatic RTL.
 * 
 * Set to -1 to disable.
 *
 * @group Commander
 * @min -1
 * @unit s
 */
PARAM_DEFINE_INT32(COM_FLT_TIME_MAX, -1);

/**
 * High wind speed failsafe threshold
 *
 * Wind speed threshold above which an automatic failsafe action is triggered.
 * Failsafe action can be specified with COM_WIND_MAX_ACT.
 *
 * @group Commander
 * @decimal 1
 * @increment 0.1
 * @min -1
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(COM_WIND_MAX, -1.0);

/**
 * High wind failsafe mode
 *
 * Action the system takes when a wind speed above the specified threshold is detected.
 * See COM_WIND_MAX to set the failsafe threshold.
 * If enabled, it is not possible to resume the mission or switch to any auto mode other than
 * RTL or Land if this threshold is exceeded. Taking over in any manual
 * mode is still possible.
 *
 * @group Commander
 * @value 0 None
 * @value 1 Warning
 * @value 2 Hold
 * @value 3 Return
 * @value 4 Terminate
 * @value 5 Land
 * @increment 1
 */
PARAM_DEFINE_INT32(COM_WIND_MAX_ACT, 0);

/**
 * Low position accuracy failsafe threshold
 *
 * This triggers the action specified in COM_POS_LOW_ACT if the estimated position accuracy is below this threshold.
 * Local position has to be still declared valid, which requires some kind of velocity aiding or large dead-reckoning time (EKF2_NOAID_TOUT),
 * and a high failsafe threshold (COM_POS_FS_EPH).
 * 
 * Set to -1 to disable.
 *
 * @group Commander
 * @min -1
 * @max 1000
 * @unit m
 */
PARAM_DEFINE_FLOAT(COM_POS_LOW_EPH, -1.0);

/**
 * Low position accuracy action
 *
 * Action the system takes when the estimated position has an accuracy below the specified threshold.
 * See COM_POS_LOW_EPH to set the failsafe threshold.
 * The failsafe action is only executed if the vehicle is in auto mission or auto loiter mode,
 * otherwise it is only a warning.
 *
 * @group Commander
 * @value 0 None
 * @value 1 Warning
 * @value 2 Hold
 * @value 3 Return
 * @value 4 Terminate
 * @value 5 Land
 * @increment 1
 */
PARAM_DEFINE_INT32(COM_POS_LOW_ACT, 3);

/**
 * Flag to allow arming
 *
 * Set 0 to prevent accidental use of the vehicle e.g. for safety or maintenance reasons.
 *
 * @group Commander
 * @value 0 Disallow arming
 * @value 1 Allow arming
 */
PARAM_DEFINE_INT32(COM_ARMABLE, 1);

/**
 * Minimum battery level for arming
 *
 * Threshold for battery percentage below arming is prohibited.
 * 
 * A negative value means BAT_CRIT_THR is the threshold.
 *
 * @group Commander
 * @decimal 2
 * @increment 0.01
 * @min -1
 * @max 0.9
 * @unit norm
 */
PARAM_DEFINE_FLOAT(COM_ARM_BAT_MIN, -1.0);

/**
 * Enable throw-start
 *
 * Allows to start the vehicle by throwing it into the air.
 *
 * @group Commander
 * @boolean
 */
PARAM_DEFINE_INT32(COM_THROW_EN, 0);

/**
 * Minimum speed for the throw start
 *
 * When the throw launch is enabled, the drone will only allow motors to spin after this speed
 * is exceeded before detecting the freefall. This is a safety feature to ensure the drone does
 * not turn on after accidental drop or a rapid movement before the throw.
 * 
 * Set to 0 to disable.
 *
 * @group Commander
 * @decimal 1
 * @increment 0.1
 * @min 0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(COM_THROW_SPEED, 5);

/**
 * Remaining flight time low failsafe
 *
 * Action the system takes when the remaining flight time is below
 * the estimated time it takes to reach the RTL destination.
 *
 * @group Commander
 * @value 0 None
 * @value 1 Warning
 * @value 3 Return
 * @increment 1
 */
PARAM_DEFINE_INT32(COM_FLTT_LOW_ACT, 0);

/**
 * Allow external mode registration while armed
 *
 * By default disabled for safety reasons
 *
 * @group Commander
 * @boolean
 */
PARAM_DEFINE_INT32(COM_MODE_ARM_CHK, 0);

/**
 * Roll trim
 *
 * The trim value is the actuator control value the system needs
 * for straight and level flight.
 *
 * @group Radio Calibration
 * @decimal 2
 * @increment 0.01
 * @min -0.5
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(TRIM_ROLL, 0.0);

/**
 * Pitch trim
 *
 * The trim value is the actuator control value the system needs
 * for straight and level flight.
 *
 * @group Radio Calibration
 * @decimal 2
 * @increment 0.01
 * @min -0.5
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(TRIM_PITCH, 0.0);

/**
 * Yaw trim
 *
 * The trim value is the actuator control value the system needs
 * for straight and level flight.
 *
 * @group Radio Calibration
 * @decimal 2
 * @increment 0.01
 * @min -0.5
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(TRIM_YAW, 0.0);

/**
 * Airframe selection
 *
 * Defines which mixer implementation to use.
 * Some are generic, while others are specifically fit to a certain vehicle with a fixed set of actuators.
 * 
 * 'Custom' should only be used if noting else can be used.
 * 
 *
 * @group Geometry
 * @value 0 Multirotor
 * @value 1 Fixed-wing
 * @value 2 Standard VTOL
 * @value 3 Tiltrotor VTOL
 * @value 4 Tailsitter VTOL
 * @value 5 Rover (Ackermann)
 * @value 6 Rover (Differential)
 * @value 7 Motors (6DOF)
 * @value 8 Multirotor with Tilt
 * @value 9 Custom
 * @value 10 Helicopter (tail ESC)
 * @value 11 Helicopter (tail Servo)
 * @value 12 Helicopter (Coaxial)
 * @value 13 Rover (Mecanum)
 * @value 14 Spacecraft 2D
 * @value 15 Spacecraft 3D
 */
PARAM_DEFINE_INT32(CA_AIRFRAME, 0);

/**
 * Control allocation method
 *
 * Selects the algorithm and desaturation method.
 * If set to Automatic, the selection is based on the airframe (CA_AIRFRAME).
 * 
 *
 * @group Geometry
 * @value 0 Pseudo-inverse with output clipping
 * @value 1 Pseudo-inverse with sequential desaturation technique
 * @value 2 Automatic
 */
PARAM_DEFINE_INT32(CA_METHOD, 2);

/**
 * Bidirectional/Reversible motors
 *
 * Configure motors to be bidirectional/reversible. Note that the output driver needs to support this as well.
 * 
 *
 * @group Geometry
 * @bit 0 Motor 1
 * @bit 1 Motor 2
 * @bit 2 Motor 3
 * @bit 3 Motor 4
 * @bit 4 Motor 5
 * @bit 5 Motor 6
 * @bit 6 Motor 7
 * @bit 7 Motor 8
 * @bit 8 Motor 9
 * @bit 9 Motor 10
 * @bit 10 Motor 11
 * @bit 11 Motor 12
 * @min 0
 * @max 4095
 */
PARAM_DEFINE_INT32(CA_R_REV, 0);

/**
 * Motor 0 slew rate limit
 *
 * Forces the motor output signal to take at least the configured time (in seconds)
 * to traverse its full range (normally [0, 1], or if reversible [-1, 1]).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_R0_SLEW, 0.0);

/**
 * Motor 1 slew rate limit
 *
 * Forces the motor output signal to take at least the configured time (in seconds)
 * to traverse its full range (normally [0, 1], or if reversible [-1, 1]).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_R1_SLEW, 0.0);

/**
 * Motor 2 slew rate limit
 *
 * Forces the motor output signal to take at least the configured time (in seconds)
 * to traverse its full range (normally [0, 1], or if reversible [-1, 1]).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_R2_SLEW, 0.0);

/**
 * Motor 3 slew rate limit
 *
 * Forces the motor output signal to take at least the configured time (in seconds)
 * to traverse its full range (normally [0, 1], or if reversible [-1, 1]).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_R3_SLEW, 0.0);

/**
 * Motor 4 slew rate limit
 *
 * Forces the motor output signal to take at least the configured time (in seconds)
 * to traverse its full range (normally [0, 1], or if reversible [-1, 1]).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_R4_SLEW, 0.0);

/**
 * Motor 5 slew rate limit
 *
 * Forces the motor output signal to take at least the configured time (in seconds)
 * to traverse its full range (normally [0, 1], or if reversible [-1, 1]).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_R5_SLEW, 0.0);

/**
 * Motor 6 slew rate limit
 *
 * Forces the motor output signal to take at least the configured time (in seconds)
 * to traverse its full range (normally [0, 1], or if reversible [-1, 1]).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_R6_SLEW, 0.0);

/**
 * Motor 7 slew rate limit
 *
 * Forces the motor output signal to take at least the configured time (in seconds)
 * to traverse its full range (normally [0, 1], or if reversible [-1, 1]).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_R7_SLEW, 0.0);

/**
 * Motor 8 slew rate limit
 *
 * Forces the motor output signal to take at least the configured time (in seconds)
 * to traverse its full range (normally [0, 1], or if reversible [-1, 1]).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_R8_SLEW, 0.0);

/**
 * Motor 9 slew rate limit
 *
 * Forces the motor output signal to take at least the configured time (in seconds)
 * to traverse its full range (normally [0, 1], or if reversible [-1, 1]).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_R9_SLEW, 0.0);

/**
 * Motor 10 slew rate limit
 *
 * Forces the motor output signal to take at least the configured time (in seconds)
 * to traverse its full range (normally [0, 1], or if reversible [-1, 1]).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_R10_SLEW, 0.0);

/**
 * Motor 11 slew rate limit
 *
 * Forces the motor output signal to take at least the configured time (in seconds)
 * to traverse its full range (normally [0, 1], or if reversible [-1, 1]).
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_R11_SLEW, 0.0);

/**
 * Servo 0 slew rate limit
 *
 * Forces the servo output signal to take at least the configured time (in seconds)
 * to traverse its full range [-100%, 100%].
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_SV0_SLEW, 0.0);

/**
 * Servo 1 slew rate limit
 *
 * Forces the servo output signal to take at least the configured time (in seconds)
 * to traverse its full range [-100%, 100%].
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_SV1_SLEW, 0.0);

/**
 * Servo 2 slew rate limit
 *
 * Forces the servo output signal to take at least the configured time (in seconds)
 * to traverse its full range [-100%, 100%].
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_SV2_SLEW, 0.0);

/**
 * Servo 3 slew rate limit
 *
 * Forces the servo output signal to take at least the configured time (in seconds)
 * to traverse its full range [-100%, 100%].
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_SV3_SLEW, 0.0);

/**
 * Servo 4 slew rate limit
 *
 * Forces the servo output signal to take at least the configured time (in seconds)
 * to traverse its full range [-100%, 100%].
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_SV4_SLEW, 0.0);

/**
 * Servo 5 slew rate limit
 *
 * Forces the servo output signal to take at least the configured time (in seconds)
 * to traverse its full range [-100%, 100%].
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_SV5_SLEW, 0.0);

/**
 * Servo 6 slew rate limit
 *
 * Forces the servo output signal to take at least the configured time (in seconds)
 * to traverse its full range [-100%, 100%].
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_SV6_SLEW, 0.0);

/**
 * Servo 7 slew rate limit
 *
 * Forces the servo output signal to take at least the configured time (in seconds)
 * to traverse its full range [-100%, 100%].
 * 
 * Zero means that slew rate limiting is disabled.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_SV7_SLEW, 0.0);

/**
 * Total number of rotors
 *
 * 
 *
 * @group Geometry
 * @value 0 0
 * @value 1 1
 * @value 2 2
 * @value 3 3
 * @value 4 4
 * @value 5 5
 * @value 6 6
 * @value 7 7
 * @value 8 8
 * @value 9 9
 * @value 10 10
 * @value 11 11
 * @value 12 12
 */
PARAM_DEFINE_INT32(CA_ROTOR_COUNT, 0);

/**
 * Position of rotor 0 along X body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_PX, 0.0);

/**
 * Position of rotor 1 along X body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_PX, 0.0);

/**
 * Position of rotor 2 along X body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_PX, 0.0);

/**
 * Position of rotor 3 along X body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_PX, 0.0);

/**
 * Position of rotor 4 along X body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_PX, 0.0);

/**
 * Position of rotor 5 along X body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_PX, 0.0);

/**
 * Position of rotor 6 along X body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_PX, 0.0);

/**
 * Position of rotor 7 along X body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_PX, 0.0);

/**
 * Position of rotor 8 along X body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR8_PX, 0.0);

/**
 * Position of rotor 9 along X body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR9_PX, 0.0);

/**
 * Position of rotor 10 along X body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR10_PX, 0.0);

/**
 * Position of rotor 11 along X body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR11_PX, 0.0);

/**
 * Position of rotor 0 along Y body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_PY, 0.0);

/**
 * Position of rotor 1 along Y body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_PY, 0.0);

/**
 * Position of rotor 2 along Y body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_PY, 0.0);

/**
 * Position of rotor 3 along Y body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_PY, 0.0);

/**
 * Position of rotor 4 along Y body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_PY, 0.0);

/**
 * Position of rotor 5 along Y body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_PY, 0.0);

/**
 * Position of rotor 6 along Y body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_PY, 0.0);

/**
 * Position of rotor 7 along Y body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_PY, 0.0);

/**
 * Position of rotor 8 along Y body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR8_PY, 0.0);

/**
 * Position of rotor 9 along Y body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR9_PY, 0.0);

/**
 * Position of rotor 10 along Y body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR10_PY, 0.0);

/**
 * Position of rotor 11 along Y body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR11_PY, 0.0);

/**
 * Position of rotor 0 along Z body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_PZ, 0.0);

/**
 * Position of rotor 1 along Z body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_PZ, 0.0);

/**
 * Position of rotor 2 along Z body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_PZ, 0.0);

/**
 * Position of rotor 3 along Z body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_PZ, 0.0);

/**
 * Position of rotor 4 along Z body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_PZ, 0.0);

/**
 * Position of rotor 5 along Z body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_PZ, 0.0);

/**
 * Position of rotor 6 along Z body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_PZ, 0.0);

/**
 * Position of rotor 7 along Z body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_PZ, 0.0);

/**
 * Position of rotor 8 along Z body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR8_PZ, 0.0);

/**
 * Position of rotor 9 along Z body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR9_PZ, 0.0);

/**
 * Position of rotor 10 along Z body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR10_PZ, 0.0);

/**
 * Position of rotor 11 along Z body axis relative to center of gravity
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(CA_ROTOR11_PZ, 0.0);

/**
 * Axis of rotor 0 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_AX, 0.0);

/**
 * Axis of rotor 1 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_AX, 0.0);

/**
 * Axis of rotor 2 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_AX, 0.0);

/**
 * Axis of rotor 3 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_AX, 0.0);

/**
 * Axis of rotor 4 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_AX, 0.0);

/**
 * Axis of rotor 5 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_AX, 0.0);

/**
 * Axis of rotor 6 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_AX, 0.0);

/**
 * Axis of rotor 7 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_AX, 0.0);

/**
 * Axis of rotor 8 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR8_AX, 0.0);

/**
 * Axis of rotor 9 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR9_AX, 0.0);

/**
 * Axis of rotor 10 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR10_AX, 0.0);

/**
 * Axis of rotor 11 thrust vector, X body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR11_AX, 0.0);

/**
 * Axis of rotor 0 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_AY, 0.0);

/**
 * Axis of rotor 1 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_AY, 0.0);

/**
 * Axis of rotor 2 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_AY, 0.0);

/**
 * Axis of rotor 3 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_AY, 0.0);

/**
 * Axis of rotor 4 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_AY, 0.0);

/**
 * Axis of rotor 5 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_AY, 0.0);

/**
 * Axis of rotor 6 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_AY, 0.0);

/**
 * Axis of rotor 7 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_AY, 0.0);

/**
 * Axis of rotor 8 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR8_AY, 0.0);

/**
 * Axis of rotor 9 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR9_AY, 0.0);

/**
 * Axis of rotor 10 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR10_AY, 0.0);

/**
 * Axis of rotor 11 thrust vector, Y body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR11_AY, 0.0);

/**
 * Axis of rotor 0 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_AZ, -1.0);

/**
 * Axis of rotor 1 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_AZ, -1.0);

/**
 * Axis of rotor 2 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_AZ, -1.0);

/**
 * Axis of rotor 3 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_AZ, -1.0);

/**
 * Axis of rotor 4 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_AZ, -1.0);

/**
 * Axis of rotor 5 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_AZ, -1.0);

/**
 * Axis of rotor 6 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_AZ, -1.0);

/**
 * Axis of rotor 7 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_AZ, -1.0);

/**
 * Axis of rotor 8 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR8_AZ, -1.0);

/**
 * Axis of rotor 9 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR9_AZ, -1.0);

/**
 * Axis of rotor 10 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR10_AZ, -1.0);

/**
 * Axis of rotor 11 thrust vector, Z body axis component
 *
 * Only the direction is considered (the vector is normalized).
 *
 * @group Geometry
 * @decimal 2
 * @increment 0.1
 * @min -100
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR11_AZ, -1.0);

/**
 * Thrust coefficient of rotor 0
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_CT, 6.5);

/**
 * Thrust coefficient of rotor 1
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_CT, 6.5);

/**
 * Thrust coefficient of rotor 2
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_CT, 6.5);

/**
 * Thrust coefficient of rotor 3
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_CT, 6.5);

/**
 * Thrust coefficient of rotor 4
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_CT, 6.5);

/**
 * Thrust coefficient of rotor 5
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_CT, 6.5);

/**
 * Thrust coefficient of rotor 6
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_CT, 6.5);

/**
 * Thrust coefficient of rotor 7
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_CT, 6.5);

/**
 * Thrust coefficient of rotor 8
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR8_CT, 6.5);

/**
 * Thrust coefficient of rotor 9
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR9_CT, 6.5);

/**
 * Thrust coefficient of rotor 10
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR10_CT, 6.5);

/**
 * Thrust coefficient of rotor 11
 *
 * The thrust coefficient if defined as Thrust = CT * u^2,
 * where u (with value between actuator minimum and maximum)
 * is the output signal sent to the motor controller.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_FLOAT(CA_ROTOR11_CT, 6.5);

/**
 * Moment coefficient of rotor 0
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR0_KM, 0.05);

/**
 * Moment coefficient of rotor 1
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR1_KM, 0.05);

/**
 * Moment coefficient of rotor 2
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR2_KM, 0.05);

/**
 * Moment coefficient of rotor 3
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR3_KM, 0.05);

/**
 * Moment coefficient of rotor 4
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR4_KM, 0.05);

/**
 * Moment coefficient of rotor 5
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR5_KM, 0.05);

/**
 * Moment coefficient of rotor 6
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR6_KM, 0.05);

/**
 * Moment coefficient of rotor 7
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR7_KM, 0.05);

/**
 * Moment coefficient of rotor 8
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR8_KM, 0.05);

/**
 * Moment coefficient of rotor 9
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR9_KM, 0.05);

/**
 * Moment coefficient of rotor 10
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR10_KM, 0.05);

/**
 * Moment coefficient of rotor 11
 *
 * The moment coefficient if defined as Torque = KM * Thrust.
 * 
 * Use a positive value for a rotor with CCW rotation.
 * Use a negative value for a rotor with CW rotation.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.01
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_ROTOR11_KM, 0.05);

/**
 * Rotor 0 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR0_TILT, 0);

/**
 * Rotor 1 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR1_TILT, 0);

/**
 * Rotor 2 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR2_TILT, 0);

/**
 * Rotor 3 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR3_TILT, 0);

/**
 * Rotor 4 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR4_TILT, 0);

/**
 * Rotor 5 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR5_TILT, 0);

/**
 * Rotor 6 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR6_TILT, 0);

/**
 * Rotor 7 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR7_TILT, 0);

/**
 * Rotor 8 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR8_TILT, 0);

/**
 * Rotor 9 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR9_TILT, 0);

/**
 * Rotor 10 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR10_TILT, 0);

/**
 * Rotor 11 tilt assignment
 *
 * If not set to None, this motor is tilted by the configured tilt servo.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Tilt 1
 * @value 2 Tilt 2
 * @value 3 Tilt 3
 * @value 4 Tilt 4
 */
PARAM_DEFINE_INT32(CA_ROTOR11_TILT, 0);

/**
 * Total number of Control Surfaces
 *
 * 
 *
 * @group Geometry
 * @value 0 0
 * @value 1 1
 * @value 2 2
 * @value 3 3
 * @value 4 4
 * @value 5 5
 * @value 6 6
 * @value 7 7
 * @value 8 8
 */
PARAM_DEFINE_INT32(CA_SV_CS_COUNT, 0);

/**
 * Control Surface 0 type
 *
 * 
 *
 * @group Geometry
 * @value 0 (Not set)
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrake
 * @value 12 Custom
 * @value 13 Left A-tail
 * @value 14 Right A-tail
 * @value 15 Single Channel Aileron
 * @value 16 Steering Wheel
 * @value 17 Left Spoiler
 * @value 18 Right Spoiler
 */
PARAM_DEFINE_INT32(CA_SV_CS0_TYPE, 0);

/**
 * Control Surface 1 type
 *
 * 
 *
 * @group Geometry
 * @value 0 (Not set)
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrake
 * @value 12 Custom
 * @value 13 Left A-tail
 * @value 14 Right A-tail
 * @value 15 Single Channel Aileron
 * @value 16 Steering Wheel
 * @value 17 Left Spoiler
 * @value 18 Right Spoiler
 */
PARAM_DEFINE_INT32(CA_SV_CS1_TYPE, 0);

/**
 * Control Surface 2 type
 *
 * 
 *
 * @group Geometry
 * @value 0 (Not set)
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrake
 * @value 12 Custom
 * @value 13 Left A-tail
 * @value 14 Right A-tail
 * @value 15 Single Channel Aileron
 * @value 16 Steering Wheel
 * @value 17 Left Spoiler
 * @value 18 Right Spoiler
 */
PARAM_DEFINE_INT32(CA_SV_CS2_TYPE, 0);

/**
 * Control Surface 3 type
 *
 * 
 *
 * @group Geometry
 * @value 0 (Not set)
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrake
 * @value 12 Custom
 * @value 13 Left A-tail
 * @value 14 Right A-tail
 * @value 15 Single Channel Aileron
 * @value 16 Steering Wheel
 * @value 17 Left Spoiler
 * @value 18 Right Spoiler
 */
PARAM_DEFINE_INT32(CA_SV_CS3_TYPE, 0);

/**
 * Control Surface 4 type
 *
 * 
 *
 * @group Geometry
 * @value 0 (Not set)
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrake
 * @value 12 Custom
 * @value 13 Left A-tail
 * @value 14 Right A-tail
 * @value 15 Single Channel Aileron
 * @value 16 Steering Wheel
 * @value 17 Left Spoiler
 * @value 18 Right Spoiler
 */
PARAM_DEFINE_INT32(CA_SV_CS4_TYPE, 0);

/**
 * Control Surface 5 type
 *
 * 
 *
 * @group Geometry
 * @value 0 (Not set)
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrake
 * @value 12 Custom
 * @value 13 Left A-tail
 * @value 14 Right A-tail
 * @value 15 Single Channel Aileron
 * @value 16 Steering Wheel
 * @value 17 Left Spoiler
 * @value 18 Right Spoiler
 */
PARAM_DEFINE_INT32(CA_SV_CS5_TYPE, 0);

/**
 * Control Surface 6 type
 *
 * 
 *
 * @group Geometry
 * @value 0 (Not set)
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrake
 * @value 12 Custom
 * @value 13 Left A-tail
 * @value 14 Right A-tail
 * @value 15 Single Channel Aileron
 * @value 16 Steering Wheel
 * @value 17 Left Spoiler
 * @value 18 Right Spoiler
 */
PARAM_DEFINE_INT32(CA_SV_CS6_TYPE, 0);

/**
 * Control Surface 7 type
 *
 * 
 *
 * @group Geometry
 * @value 0 (Not set)
 * @value 1 Left Aileron
 * @value 2 Right Aileron
 * @value 3 Elevator
 * @value 4 Rudder
 * @value 5 Left Elevon
 * @value 6 Right Elevon
 * @value 7 Left V-Tail
 * @value 8 Right V-Tail
 * @value 9 Left Flap
 * @value 10 Right Flap
 * @value 11 Airbrake
 * @value 12 Custom
 * @value 13 Left A-tail
 * @value 14 Right A-tail
 * @value 15 Single Channel Aileron
 * @value 16 Steering Wheel
 * @value 17 Left Spoiler
 * @value 18 Right Spoiler
 */
PARAM_DEFINE_INT32(CA_SV_CS7_TYPE, 0);

/**
 * Control Surface 0 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS0_TRQ_R, 0.0);

/**
 * Control Surface 1 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS1_TRQ_R, 0.0);

/**
 * Control Surface 2 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS2_TRQ_R, 0.0);

/**
 * Control Surface 3 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS3_TRQ_R, 0.0);

/**
 * Control Surface 4 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS4_TRQ_R, 0.0);

/**
 * Control Surface 5 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS5_TRQ_R, 0.0);

/**
 * Control Surface 6 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS6_TRQ_R, 0.0);

/**
 * Control Surface 7 roll torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS7_TRQ_R, 0.0);

/**
 * Control Surface 0 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS0_TRQ_P, 0.0);

/**
 * Control Surface 1 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS1_TRQ_P, 0.0);

/**
 * Control Surface 2 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS2_TRQ_P, 0.0);

/**
 * Control Surface 3 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS3_TRQ_P, 0.0);

/**
 * Control Surface 4 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS4_TRQ_P, 0.0);

/**
 * Control Surface 5 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS5_TRQ_P, 0.0);

/**
 * Control Surface 6 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS6_TRQ_P, 0.0);

/**
 * Control Surface 7 pitch torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS7_TRQ_P, 0.0);

/**
 * Control Surface 0 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS0_TRQ_Y, 0.0);

/**
 * Control Surface 1 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS1_TRQ_Y, 0.0);

/**
 * Control Surface 2 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS2_TRQ_Y, 0.0);

/**
 * Control Surface 3 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS3_TRQ_Y, 0.0);

/**
 * Control Surface 4 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS4_TRQ_Y, 0.0);

/**
 * Control Surface 5 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS5_TRQ_Y, 0.0);

/**
 * Control Surface 6 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS6_TRQ_Y, 0.0);

/**
 * Control Surface 7 yaw torque scaling
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(CA_SV_CS7_TRQ_Y, 0.0);

/**
 * Control Surface 0 trim
 *
 * Can be used to add an offset to the servo control.
 * 
 * NOTE: Do not use for PWM servos. Use the PWM CENTER parameters instead (e.g., PWM_MAIN_CENT, PWM_AUX_CENT) instead.
 * This parameter can only be set if all PWM Center parameters are set to default.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS0_TRIM, 0.0);

/**
 * Control Surface 1 trim
 *
 * Can be used to add an offset to the servo control.
 * 
 * NOTE: Do not use for PWM servos. Use the PWM CENTER parameters instead (e.g., PWM_MAIN_CENT, PWM_AUX_CENT) instead.
 * This parameter can only be set if all PWM Center parameters are set to default.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS1_TRIM, 0.0);

/**
 * Control Surface 2 trim
 *
 * Can be used to add an offset to the servo control.
 * 
 * NOTE: Do not use for PWM servos. Use the PWM CENTER parameters instead (e.g., PWM_MAIN_CENT, PWM_AUX_CENT) instead.
 * This parameter can only be set if all PWM Center parameters are set to default.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS2_TRIM, 0.0);

/**
 * Control Surface 3 trim
 *
 * Can be used to add an offset to the servo control.
 * 
 * NOTE: Do not use for PWM servos. Use the PWM CENTER parameters instead (e.g., PWM_MAIN_CENT, PWM_AUX_CENT) instead.
 * This parameter can only be set if all PWM Center parameters are set to default.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS3_TRIM, 0.0);

/**
 * Control Surface 4 trim
 *
 * Can be used to add an offset to the servo control.
 * 
 * NOTE: Do not use for PWM servos. Use the PWM CENTER parameters instead (e.g., PWM_MAIN_CENT, PWM_AUX_CENT) instead.
 * This parameter can only be set if all PWM Center parameters are set to default.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS4_TRIM, 0.0);

/**
 * Control Surface 5 trim
 *
 * Can be used to add an offset to the servo control.
 * 
 * NOTE: Do not use for PWM servos. Use the PWM CENTER parameters instead (e.g., PWM_MAIN_CENT, PWM_AUX_CENT) instead.
 * This parameter can only be set if all PWM Center parameters are set to default.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS5_TRIM, 0.0);

/**
 * Control Surface 6 trim
 *
 * Can be used to add an offset to the servo control.
 * 
 * NOTE: Do not use for PWM servos. Use the PWM CENTER parameters instead (e.g., PWM_MAIN_CENT, PWM_AUX_CENT) instead.
 * This parameter can only be set if all PWM Center parameters are set to default.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS6_TRIM, 0.0);

/**
 * Control Surface 7 trim
 *
 * Can be used to add an offset to the servo control.
 * 
 * NOTE: Do not use for PWM servos. Use the PWM CENTER parameters instead (e.g., PWM_MAIN_CENT, PWM_AUX_CENT) instead.
 * This parameter can only be set if all PWM Center parameters are set to default.
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS7_TRIM, 0.0);

/**
 * Control Surface 0 configuration as flap
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS0_FLAP, 0);

/**
 * Control Surface 1 configuration as flap
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS1_FLAP, 0);

/**
 * Control Surface 2 configuration as flap
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS2_FLAP, 0);

/**
 * Control Surface 3 configuration as flap
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS3_FLAP, 0);

/**
 * Control Surface 4 configuration as flap
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS4_FLAP, 0);

/**
 * Control Surface 5 configuration as flap
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS5_FLAP, 0);

/**
 * Control Surface 6 configuration as flap
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS6_FLAP, 0);

/**
 * Control Surface 7 configuration as flap
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS7_FLAP, 0);

/**
 * Control Surface slew rate for normalized flaps setpoint
 *
 * 
 *
 * @group Geometry
 * @decimal 1
 * @min 0.0
 * @max 5.0
 */
PARAM_DEFINE_FLOAT(CA_SV_FLAP_SLEW, 0.5);

/**
 * Control Surface 0 configuration as spoiler
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS0_SPOIL, 0);

/**
 * Control Surface 1 configuration as spoiler
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS1_SPOIL, 0);

/**
 * Control Surface 2 configuration as spoiler
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS2_SPOIL, 0);

/**
 * Control Surface 3 configuration as spoiler
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS3_SPOIL, 0);

/**
 * Control Surface 4 configuration as spoiler
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS4_SPOIL, 0);

/**
 * Control Surface 5 configuration as spoiler
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS5_SPOIL, 0);

/**
 * Control Surface 6 configuration as spoiler
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS6_SPOIL, 0);

/**
 * Control Surface 7 configuration as spoiler
 *
 * 
 *
 * @group Geometry
 * @decimal 2
 * @min -1.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(CA_SV_CS7_SPOIL, 0);

/**
 * Control surface launch lock enabled
 *
 * If actuator launch lock is enabled, this surface is kept at the disarmed value.
 *
 * @group Geometry
 * @bit 0 Control Surface 1
 * @bit 1 Control Surface 2
 * @bit 2 Control Surface 3
 * @bit 3 Control Surface 4
 * @bit 4 Control Surface 5
 * @bit 5 Control Surface 6
 * @bit 6 Control Surface 7
 * @bit 7 Control Surface 8
 * @min 0
 * @max 255
 */
PARAM_DEFINE_INT32(CA_CS_LAUN_LK, 0);

/**
 * Total number of Tilt Servos
 *
 * 
 *
 * @group Geometry
 * @value 0 0
 * @value 1 1
 * @value 2 2
 * @value 3 3
 * @value 4 4
 */
PARAM_DEFINE_INT32(CA_SV_TL_COUNT, 0);

/**
 * Tilt 0 is used for control
 *
 * Define if this servo is used for additional control.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Yaw
 * @value 2 Pitch
 * @value 3 Yaw and Pitch
 */
PARAM_DEFINE_INT32(CA_SV_TL0_CT, 1);

/**
 * Tilt 1 is used for control
 *
 * Define if this servo is used for additional control.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Yaw
 * @value 2 Pitch
 * @value 3 Yaw and Pitch
 */
PARAM_DEFINE_INT32(CA_SV_TL1_CT, 1);

/**
 * Tilt 2 is used for control
 *
 * Define if this servo is used for additional control.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Yaw
 * @value 2 Pitch
 * @value 3 Yaw and Pitch
 */
PARAM_DEFINE_INT32(CA_SV_TL2_CT, 1);

/**
 * Tilt 3 is used for control
 *
 * Define if this servo is used for additional control.
 *
 * @group Geometry
 * @value 0 None
 * @value 1 Yaw
 * @value 2 Pitch
 * @value 3 Yaw and Pitch
 */
PARAM_DEFINE_INT32(CA_SV_TL3_CT, 1);

/**
 * Tilt Servo 0 Tilt Angle at Minimum
 *
 * Defines the tilt angle when the servo is at the minimum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL0_MINA, 0.0);

/**
 * Tilt Servo 1 Tilt Angle at Minimum
 *
 * Defines the tilt angle when the servo is at the minimum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL1_MINA, 0.0);

/**
 * Tilt Servo 2 Tilt Angle at Minimum
 *
 * Defines the tilt angle when the servo is at the minimum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL2_MINA, 0.0);

/**
 * Tilt Servo 3 Tilt Angle at Minimum
 *
 * Defines the tilt angle when the servo is at the minimum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL3_MINA, 0.0);

/**
 * Tilt Servo 0 Tilt Angle at Maximum
 *
 * Defines the tilt angle when the servo is at the maximum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL0_MAXA, 90.0);

/**
 * Tilt Servo 1 Tilt Angle at Maximum
 *
 * Defines the tilt angle when the servo is at the maximum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL1_MAXA, 90.0);

/**
 * Tilt Servo 2 Tilt Angle at Maximum
 *
 * Defines the tilt angle when the servo is at the maximum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL2_MAXA, 90.0);

/**
 * Tilt Servo 3 Tilt Angle at Maximum
 *
 * Defines the tilt angle when the servo is at the maximum.
 * An angle of zero means upwards.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SV_TL3_MAXA, 90.0);

/**
 * Tilt Servo 0 Tilt Direction
 *
 * Defines the direction the servo tilts towards when moving towards the maximum tilt angle.
 * For example if the minimum tilt angle is -90, the maximum 90, and the direction 'Towards Front',
 * the motor axis aligns with the XZ-plane, points towards -X at the minimum and +X at the maximum tilt.
 * 
 *
 * @group Geometry
 * @value 0 Towards Front
 * @value 90 Towards Right
 * @min 0
 * @max 359
 */
PARAM_DEFINE_INT32(CA_SV_TL0_TD, 0);

/**
 * Tilt Servo 1 Tilt Direction
 *
 * Defines the direction the servo tilts towards when moving towards the maximum tilt angle.
 * For example if the minimum tilt angle is -90, the maximum 90, and the direction 'Towards Front',
 * the motor axis aligns with the XZ-plane, points towards -X at the minimum and +X at the maximum tilt.
 * 
 *
 * @group Geometry
 * @value 0 Towards Front
 * @value 90 Towards Right
 * @min 0
 * @max 359
 */
PARAM_DEFINE_INT32(CA_SV_TL1_TD, 0);

/**
 * Tilt Servo 2 Tilt Direction
 *
 * Defines the direction the servo tilts towards when moving towards the maximum tilt angle.
 * For example if the minimum tilt angle is -90, the maximum 90, and the direction 'Towards Front',
 * the motor axis aligns with the XZ-plane, points towards -X at the minimum and +X at the maximum tilt.
 * 
 *
 * @group Geometry
 * @value 0 Towards Front
 * @value 90 Towards Right
 * @min 0
 * @max 359
 */
PARAM_DEFINE_INT32(CA_SV_TL2_TD, 0);

/**
 * Tilt Servo 3 Tilt Direction
 *
 * Defines the direction the servo tilts towards when moving towards the maximum tilt angle.
 * For example if the minimum tilt angle is -90, the maximum 90, and the direction 'Towards Front',
 * the motor axis aligns with the XZ-plane, points towards -X at the minimum and +X at the maximum tilt.
 * 
 *
 * @group Geometry
 * @value 0 Towards Front
 * @value 90 Towards Right
 * @min 0
 * @max 359
 */
PARAM_DEFINE_INT32(CA_SV_TL3_TD, 0);

/**
 * Number of swash plates servos
 *
 * 
 *
 * @group Geometry
 * @value 2 2
 * @value 3 3
 * @value 4 4
 */
PARAM_DEFINE_INT32(CA_SP0_COUNT, 3);

/**
 * Angle for swash plate servo 0
 *
 * The angle is measured clockwise (as seen from top), with 0 pointing forwards (X axis).
 * 
 *
 * @group Geometry
 * @decimal 0
 * @increment 10
 * @min 0
 * @max 360
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SP0_ANG0, 0);

/**
 * Angle for swash plate servo 1
 *
 * The angle is measured clockwise (as seen from top), with 0 pointing forwards (X axis).
 * 
 *
 * @group Geometry
 * @decimal 0
 * @increment 10
 * @min 0
 * @max 360
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SP0_ANG1, 140);

/**
 * Angle for swash plate servo 2
 *
 * The angle is measured clockwise (as seen from top), with 0 pointing forwards (X axis).
 * 
 *
 * @group Geometry
 * @decimal 0
 * @increment 10
 * @min 0
 * @max 360
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SP0_ANG2, 220);

/**
 * Angle for swash plate servo 3
 *
 * The angle is measured clockwise (as seen from top), with 0 pointing forwards (X axis).
 * 
 *
 * @group Geometry
 * @decimal 0
 * @increment 10
 * @min 0
 * @max 360
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_SP0_ANG3, 0);

/**
 * Arm length for swash plate servo 0
 *
 * This is relative to the other arm lengths.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_SP0_ARM_L0, 1.0);

/**
 * Arm length for swash plate servo 1
 *
 * This is relative to the other arm lengths.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_SP0_ARM_L1, 1.0);

/**
 * Arm length for swash plate servo 2
 *
 * This is relative to the other arm lengths.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_SP0_ARM_L2, 1.0);

/**
 * Arm length for swash plate servo 3
 *
 * This is relative to the other arm lengths.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_SP0_ARM_L3, 1.0);

/**
 * Throttle curve at position 0
 *
 * Defines the output throttle at the interval position 0.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_HELI_THR_C0, 1);

/**
 * Throttle curve at position 1
 *
 * Defines the output throttle at the interval position 1.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_HELI_THR_C1, 1);

/**
 * Throttle curve at position 2
 *
 * Defines the output throttle at the interval position 2.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_HELI_THR_C2, 1);

/**
 * Throttle curve at position 3
 *
 * Defines the output throttle at the interval position 3.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_HELI_THR_C3, 1);

/**
 * Throttle curve at position 4
 *
 * Defines the output throttle at the interval position 4.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_HELI_THR_C4, 1);

/**
 * Collective pitch curve at position 0
 *
 * Defines the collective pitch at the interval position 0 for a given thrust setpoint.
 * 
 * Use negative values if the swash plate needs to move down to provide upwards thrust.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_HELI_PITCH_C0, -0.05);

/**
 * Collective pitch curve at position 1
 *
 * Defines the collective pitch at the interval position 1 for a given thrust setpoint.
 * 
 * Use negative values if the swash plate needs to move down to provide upwards thrust.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_HELI_PITCH_C1, 0.0725);

/**
 * Collective pitch curve at position 2
 *
 * Defines the collective pitch at the interval position 2 for a given thrust setpoint.
 * 
 * Use negative values if the swash plate needs to move down to provide upwards thrust.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_HELI_PITCH_C2, 0.2);

/**
 * Collective pitch curve at position 3
 *
 * Defines the collective pitch at the interval position 3 for a given thrust setpoint.
 * 
 * Use negative values if the swash plate needs to move down to provide upwards thrust.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_HELI_PITCH_C3, 0.325);

/**
 * Collective pitch curve at position 4
 *
 * Defines the collective pitch at the interval position 4 for a given thrust setpoint.
 * 
 * Use negative values if the swash plate needs to move down to provide upwards thrust.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(CA_HELI_PITCH_C4, 0.45);

/**
 * Scale for yaw compensation based on collective pitch
 *
 * This allows to add a proportional factor of the collective pitch command to the yaw command.
 * A negative value is needed when positive thrust of the tail rotor rotates the vehicle opposite to the main rotor turn direction.
 * 
 * tail_output += CA_HELI_YAW_CP_S * abs(collective_pitch - CA_HELI_YAW_CP_O)
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min -2
 * @max 2
 */
PARAM_DEFINE_FLOAT(CA_HELI_YAW_CP_S, 0.0);

/**
 * Offset for yaw compensation based on collective pitch
 *
 * This allows to specify which collective pitch command results in the least amount of rotor drag.
 * This is used to increase the accuracy of the yaw drag torque compensation based on collective pitch
 * by aligning the lowest rotor drag with zero compensation.
 * For symmetric profile blades this is the command that results in exactly 0° collective blade angle.
 * For lift profile blades this is typically a command resulting in slightly negative collective blade angle.
 * 
 * tail_output += CA_HELI_YAW_CP_S * abs(collective_pitch - CA_HELI_YAW_CP_O)
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min -2
 * @max 2
 */
PARAM_DEFINE_FLOAT(CA_HELI_YAW_CP_O, 0.0);

/**
 * Scale for yaw compensation based on throttle
 *
 * This allows to add a proportional factor of the throttle command to the yaw command.
 * A negative value is needed when positive thrust of the tail rotor rotates the vehicle opposite to the main rotor turn direction.
 * 
 * tail_output += CA_HELI_YAW_TH_S * throttle
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min -2
 * @max 2
 */
PARAM_DEFINE_FLOAT(CA_HELI_YAW_TH_S, 0.0);

/**
 * Main rotor turns counter-clockwise
 *
 * Default configuration is for a clockwise turning main rotor and
 * positive thrust of the tail rotor is expected to rotate the vehicle clockwise.
 * Set this parameter to true if the tail rotor provides thrust in counter-clockwise direction
 * which is mostly the case when the main rotor turns counter-clockwise.
 * 
 *
 * @group Geometry
 * @boolean
 */
PARAM_DEFINE_INT32(CA_HELI_YAW_CCW, 0);

/**
 * Setpoint for main rotor rpm
 *
 * Requires rpm feedback for the controller.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @increment 1
 * @min 100
 * @max 10000
 */
PARAM_DEFINE_FLOAT(CA_HELI_RPM_SP, 1500);

/**
 * Proportional gain for rpm control
 *
 * Ratio between rpm error devided by 1000 to how much normalized output gets added to correct for it.
 * 
 * motor_command = throttle_curve + CA_HELI_RPM_P * (rpm_setpoint - rpm_measurement) / 1000
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_HELI_RPM_P, 0.0);

/**
 * Integral gain for rpm control
 *
 * Same definition as the proportional gain but for integral.
 * 
 *
 * @group Geometry
 * @decimal 3
 * @increment 0.1
 * @min 0
 * @max 10
 */
PARAM_DEFINE_FLOAT(CA_HELI_RPM_I, 0.0);

/**
 * Throw angle of swashplate servo at maximum commands for linearization
 *
 * Used to linearize mechanical output of swashplate servos to avoid axis coupling and binding with 4 servo redundancy.
 * This requires a symmetric setup where the servo horn is exactly centered with a 0 command.
 * Setting to zero disables feature.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 0.1
 * @min 0
 * @max 75
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CA_MAX_SVO_THROW, 0.0);

/**
 * Motor failure handling mode
 *
 * This is used to specify how to handle motor failures
 * reported by failure detector.
 * 
 *
 * @group Geometry
 * @value 0 Ignore
 * @value 1 Remove first failed motor from effectiveness
 */
PARAM_DEFINE_INT32(CA_FAILURE_MODE, 0);

/**
 * Ice shedding cycle period
 *
 * Ice shedding prevents ice buildup in VTOL aircraft motors by periodically spinning inactive rotors.
 * When enabled (period > 0), every cycle lasts for the defined period and includes a 2-second spin at 0.01 motor output.
 * If period <= 0, the feature is disabled.
 * 
 *
 * @group Geometry
 * @decimal 1
 * @increment 0.1
 * @min 0.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(CA_ICE_PERIOD, 0.0);

/**
 * Dataman storage backend
 *
 * If the board supports persistent storage (i.e., the KConfig variable DATAMAN_PERSISTENT_STORAGE is set),
 * the 'Default storage' backend uses a file on persistent storage. If not supported, this backend uses
 * non-persistent storage in RAM.
 *
 * @group System
 * @value -1 Dataman disabled
 * @value 0 Default storage
 * @value 1 RAM storage
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SYS_DM_BACKEND, 0);

/**
 * EKF2 enable
 *
 * 
 *
 * @group EKF2
 * @boolean
 */
PARAM_DEFINE_INT32(EKF2_EN, 1);

/**
 * Verbose logging
 *
 * 
 *
 * @group EKF2
 * @boolean
 */
PARAM_DEFINE_INT32(EKF2_LOG_VERBOSE, 1);

/**
 * EKF prediction period
 *
 * EKF prediction period in microseconds. This should ideally be an integer multiple of the IMU time delta. Actual filter update will be an integer multiple of IMU update.
 *
 * @group EKF2
 * @min 1000
 * @max 20000
 * @unit us
 */
PARAM_DEFINE_INT32(EKF2_PREDICT_US, 10000);

/**
 * Maximum delay of all the aiding sensors
 *
 * Defines the delay between the current time and the delayed-time horizon. This value should be at least as large as the largest EKF2_XXX_DELAY parameter.
 *
 * @group EKF2
 * @decimal 1
 * @min 0
 * @max 1000
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_DELAY_MAX, 200);

/**
 * 1-sigma tilt angle uncertainty after gravity vector alignment
 *
 * 
 *
 * @group EKF2
 * @decimal 3
 * @min 0.0
 * @max 0.5
 * @unit rad
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_ANGERR_INIT, 0.1);

/**
 * Gate size for heading fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_HDG_GATE, 2.6);

/**
 * Measurement noise for magnetic heading fusion
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @min 0.01
 * @max 1.0
 * @unit rad
 */
PARAM_DEFINE_FLOAT(EKF2_HEAD_NOISE, 0.3);

/**
 * Measurement noise for non-aiding position hold
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0.5
 * @max 50.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_NOAID_NOISE, 10.0);

/**
 * Maximum inertial dead-reckoning time
 *
 * Maximum lapsed time from last fusion of measurements that constrain velocity drift before the EKF will report the horizontal nav solution as invalid
 *
 * @group EKF2
 * @min 500000
 * @max 10000000
 * @unit us
 */
PARAM_DEFINE_INT32(EKF2_NOAID_TOUT, 5000000);

/**
 * Determines the reference source of height data used by the EKF
 *
 * When multiple height sources are enabled at the same time, the height estimate will always converge towards the reference height source selected by this parameter. The range sensor and vision options should only be used when for operation over a flat surface as the local NED origin will move up and down with ground level.
 * If GPS is set as reference and EKF2_GPS_CTRL is not 0, the GPS altitude is still used to initiaize the bias of the other height sensors, regardless of the altitude fusion bit in EKF2_GPS_CTRL.
 *
 * @group EKF2
 * @value 0 Barometric pressure
 * @value 1 GPS
 * @value 2 Range sensor
 * @value 3 Vision
 * @reboot_required True
 */
PARAM_DEFINE_INT32(EKF2_HGT_REF, 1);

/**
 * IMU control
 *
 * 
 *
 * @group EKF2
 * @bit 0 Gyro Bias
 * @bit 1 Accel Bias
 * @bit 2 Gravity vector fusion
 * @min 0
 * @max 7
 * @min 0
 * @max 7
 */
PARAM_DEFINE_INT32(EKF2_IMU_CTRL, 7);

/**
 * Rate gyro noise for covariance prediction
 *
 * 
 *
 * @group EKF2
 * @decimal 4
 * @min 0.0001
 * @max 0.1
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(EKF2_GYR_NOISE, 0.015);

/**
 * Accelerometer noise for covariance prediction
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @min 0.01
 * @max 1.0
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(EKF2_ACC_NOISE, 0.35);

/**
 * X position of IMU in body frame
 *
 * Forward axis with origin relative to vehicle centre of gravity
 *
 * @group EKF2
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_IMU_POS_X, 0.0);

/**
 * Y position of IMU in body frame
 *
 * Forward axis with origin relative to vehicle centre of gravity
 *
 * @group EKF2
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_IMU_POS_Y, 0.0);

/**
 * Z position of IMU in body frame
 *
 * Forward axis with origin relative to vehicle centre of gravity
 *
 * @group EKF2
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_IMU_POS_Z, 0.0);

/**
 * Time constant of the velocity output prediction and smoothing filter
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @max 1.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(EKF2_TAU_VEL, 0.25);

/**
 * Output predictor position time constant
 *
 * Controls how tightly the output track the EKF states
 *
 * @group EKF2
 * @decimal 2
 * @min 0.1
 * @max 1.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(EKF2_TAU_POS, 0.25);

/**
 * Velocity limit
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @max 299792458
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(EKF2_VEL_LIM, 100);

/**
 * Enable constant position fusion while on ground
 *
 * When enabled, constant position fusion is enabled when the vehicle is landeded if position has been initialized but has currently no vel/pos aiding.
 *
 * @group EKF2
 * @boolean
 */
PARAM_DEFINE_INT32(EKF2_POS_LOCK, 0);

/**
 * Sensor fusion enable bitmask
 *
 * Bitmask to control which sensor fusion sources are enabled. Sources whose bit is cleared will be disabled. Only applied while disarmed. For in-flight changes use the MAVLink command VEHICLE_CMD_ESTIMATOR_SENSOR_ENABLE or the individual CTRL params (e.g. EKF2_GPS_CTRL, EKF2_BARO_CTRL).
 *
 * @group EKF2
 * @bit 0 GNSS 0
 * @bit 1 GNSS 1
 * @bit 2 Optical flow
 * @bit 3 External vision
 * @bit 4 Aux global position 0
 * @bit 5 Aux global position 1
 * @bit 6 Aux global position 2
 * @bit 7 Aux global position 3
 * @bit 8 Barometer
 * @bit 9 Range finder
 * @bit 10 Magnetometer
 * @bit 11 Airspeed
 * @bit 12 Ranging beacon
 * @min 0
 * @max 8191
 * @min 0
 * @max 8191
 */
PARAM_DEFINE_INT32(EKF2_SENS_EN, 8191);

/**
 * 1-sigma IMU gyro switch-on bias
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @min 0.0
 * @max 0.2
 * @unit rad/s
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_GBIAS_INIT, 0.1);

/**
 * Process noise for IMU rate gyro bias prediction
 *
 * 
 *
 * @group EKF2
 * @decimal 6
 * @min 0.0
 * @max 0.01
 * @unit rad/s^2
 */
PARAM_DEFINE_FLOAT(EKF2_GYR_B_NOISE, 0.001);

/**
 * Gyro bias learning limit
 *
 * The ekf gyro bias states will be limited to within a range equivalent to +- of this value.
 *
 * @group EKF2
 * @decimal 3
 * @min 0.0
 * @max 0.4
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(EKF2_GYR_B_LIM, 0.15);

/**
 * 1-sigma IMU accelerometer switch-on bias
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @min 0.0
 * @max 0.5
 * @unit m/s^2
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_ABIAS_INIT, 0.2);

/**
 * Process noise for IMU accelerometer bias prediction
 *
 * 
 *
 * @group EKF2
 * @decimal 6
 * @min 0.0
 * @max 0.01
 * @unit m/s^3
 */
PARAM_DEFINE_FLOAT(EKF2_ACC_B_NOISE, 0.003);

/**
 * Accelerometer bias learning limit
 *
 * The ekf accel bias states will be limited to within a range equivalent to +- of this value.
 *
 * @group EKF2
 * @decimal 2
 * @min 0.0
 * @max 0.8
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(EKF2_ABL_LIM, 0.4);

/**
 * Maximum IMU accel magnitude that allows IMU bias learning
 *
 * If the magnitude of the IMU accelerometer vector exceeds this value, the EKF accel bias state estimation will be inhibited. This reduces the adverse effect of high manoeuvre accelerations and IMU nonlinerity and scale factor errors on the accel bias estimates.
 *
 * @group EKF2
 * @decimal 1
 * @min 20.0
 * @max 200.0
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(EKF2_ABL_ACCLIM, 25.0);

/**
 * Maximum IMU gyro angular rate magnitude that allows IMU bias learning
 *
 * If the magnitude of the IMU angular rate vector exceeds this value, the EKF accel bias state estimation will be inhibited. This reduces the adverse effect of rapid rotation rates and associated errors on the accel bias estimates.
 *
 * @group EKF2
 * @decimal 1
 * @min 2.0
 * @max 20.0
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(EKF2_ABL_GYRLIM, 3.0);

/**
 * Accel bias learning inhibit time constant
 *
 * The vector magnitude of angular rate and acceleration used to check if learning should be inhibited has a peak hold filter applied to it with an exponential decay. This parameter controls the time constant of the decay.
 *
 * @group EKF2
 * @decimal 2
 * @min 0.1
 * @max 1.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(EKF2_ABL_TAU, 0.5);

/**
 * Multi-EKF IMUs
 *
 * Maximum number of IMUs to use for Multi-EKF. Set 0 to disable. Requires SENS_IMU_MODE 0.
 *
 * @group EKF2
 * @min 0
 * @max 4
 * @reboot_required True
 */
PARAM_DEFINE_INT32(EKF2_MULTI_IMU, 0);

/**
 * Multi-EKF Magnetometers
 *
 * Maximum number of magnetometers to use for Multi-EKF. Set 0 to disable. Requires SENS_MAG_MODE 0.
 *
 * @group EKF2
 * @min 0
 * @max 4
 * @reboot_required True
 */
PARAM_DEFINE_INT32(EKF2_MULTI_MAG, 0);

/**
 * Magnetic declination
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @category System
 * @volatile True
 * @unit deg
 */
PARAM_DEFINE_FLOAT(EKF2_MAG_DECL, 0);

/**
 * Selector error reduce threshold
 *
 * EKF2 instances have to be better than the selected by at least this amount before their relative score can be reduced.
 *
 * @group EKF2
 */
PARAM_DEFINE_FLOAT(EKF2_SEL_ERR_RED, 0.2);

/**
 * Selector angular rate threshold
 *
 * EKF2 selector angular rate error threshold for comparing gyros. Angular rate vector differences larger than this will result in accumulated angular error.
 *
 * @group EKF2
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(EKF2_SEL_IMU_RAT, 7.0);

/**
 * Selector angular threshold
 *
 * EKF2 selector maximum accumulated angular error threshold for comparing gyros. Accumulated angular error larger than this will result in the sensor being declared faulty.
 *
 * @group EKF2
 * @unit deg
 */
PARAM_DEFINE_FLOAT(EKF2_SEL_IMU_ANG, 15.0);

/**
 * Selector acceleration threshold
 *
 * EKF2 selector acceleration error threshold for comparing accelerometers. Acceleration vector differences larger than this will result in accumulated velocity error.
 *
 * @group EKF2
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(EKF2_SEL_IMU_ACC, 1.0);

/**
 * Selector angular threshold
 *
 * EKF2 selector maximum accumulated velocity threshold for comparing accelerometers. Accumulated velocity error larger than this will result in the sensor being declared faulty.
 *
 * @group EKF2
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(EKF2_SEL_IMU_VEL, 2.0);

/**
 * Airspeed fusion threshold
 *
 * Airspeed data is fused for wind estimation if above this threshold. Set to 0 to disable airspeed fusion. For reliable wind estimation both sideslip (see EKF2_FUSE_BETA) and airspeed fusion should be enabled. Only applies to fixed-wing vehicles (or VTOLs in fixed-wing mode).
 *
 * @group EKF2
 * @decimal 1
 * @min 0.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(EKF2_ARSP_THR, 0.0);

/**
 * Airspeed measurement delay relative to IMU measurements
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0
 * @max 300
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_ASP_DELAY, 100);

/**
 * Gate size for TAS fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_TAS_GATE, 5.0);

/**
 * Measurement noise for airspeed fusion
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0.5
 * @max 5.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(EKF2_EAS_NOISE, 1.4);

/**
 * Auxiliary global position sensor 0 ID
 *
 * Sensor ID for slot 0. Set to 0 to disable this slot.
 *
 * @group EKF2
 * @min 0
 * @max 255
 */
PARAM_DEFINE_INT32(EKF2_AGP0_ID, 0);

/**
 * Auxiliary global position sensor 1 ID
 *
 * Sensor ID for slot 1. Set to 0 to disable this slot.
 *
 * @group EKF2
 * @min 0
 * @max 255
 */
PARAM_DEFINE_INT32(EKF2_AGP1_ID, 0);

/**
 * Auxiliary global position sensor 2 ID
 *
 * Sensor ID for slot 2. Set to 0 to disable this slot.
 *
 * @group EKF2
 * @min 0
 * @max 255
 */
PARAM_DEFINE_INT32(EKF2_AGP2_ID, 0);

/**
 * Auxiliary global position sensor 3 ID
 *
 * Sensor ID for slot 3. Set to 0 to disable this slot.
 *
 * @group EKF2
 * @min 0
 * @max 255
 */
PARAM_DEFINE_INT32(EKF2_AGP3_ID, 0);

/**
 * Auxiliary global position sensor 0 aiding
 *
 * Set bits in the following positions to enable: 0 : Horizontal position fusion 1 : Vertical position fusion
 *
 * @group EKF2
 * @bit 0 Horizontal position
 * @bit 1 Vertical position
 * @min 0
 * @max 3
 * @min 0
 * @max 3
 */
PARAM_DEFINE_INT32(EKF2_AGP0_CTRL, 0);

/**
 * Auxiliary global position sensor 1 aiding
 *
 * Set bits in the following positions to enable: 0 : Horizontal position fusion 1 : Vertical position fusion
 *
 * @group EKF2
 * @bit 0 Horizontal position
 * @bit 1 Vertical position
 * @min 0
 * @max 3
 * @min 0
 * @max 3
 */
PARAM_DEFINE_INT32(EKF2_AGP1_CTRL, 0);

/**
 * Auxiliary global position sensor 2 aiding
 *
 * Set bits in the following positions to enable: 0 : Horizontal position fusion 1 : Vertical position fusion
 *
 * @group EKF2
 * @bit 0 Horizontal position
 * @bit 1 Vertical position
 * @min 0
 * @max 3
 * @min 0
 * @max 3
 */
PARAM_DEFINE_INT32(EKF2_AGP2_CTRL, 0);

/**
 * Auxiliary global position sensor 3 aiding
 *
 * Set bits in the following positions to enable: 0 : Horizontal position fusion 1 : Vertical position fusion
 *
 * @group EKF2
 * @bit 0 Horizontal position
 * @bit 1 Vertical position
 * @min 0
 * @max 3
 * @min 0
 * @max 3
 */
PARAM_DEFINE_INT32(EKF2_AGP3_CTRL, 0);

/**
 * Fusion reset mode for sensor 0
 *
 * Automatic: reset on fusion timeout if no other source of position is available Dead-reckoning: reset on fusion timeout if no source of velocity is available
 *
 * @group EKF2
 * @value 0 Automatic
 * @value 1 Dead-reckoning
 */
PARAM_DEFINE_INT32(EKF2_AGP0_MODE, 0);

/**
 * Fusion reset mode for sensor 1
 *
 * Automatic: reset on fusion timeout if no other source of position is available Dead-reckoning: reset on fusion timeout if no source of velocity is available
 *
 * @group EKF2
 * @value 0 Automatic
 * @value 1 Dead-reckoning
 */
PARAM_DEFINE_INT32(EKF2_AGP1_MODE, 0);

/**
 * Fusion reset mode for sensor 2
 *
 * Automatic: reset on fusion timeout if no other source of position is available Dead-reckoning: reset on fusion timeout if no source of velocity is available
 *
 * @group EKF2
 * @value 0 Automatic
 * @value 1 Dead-reckoning
 */
PARAM_DEFINE_INT32(EKF2_AGP2_MODE, 0);

/**
 * Fusion reset mode for sensor 3
 *
 * Automatic: reset on fusion timeout if no other source of position is available Dead-reckoning: reset on fusion timeout if no source of velocity is available
 *
 * @group EKF2
 * @value 0 Automatic
 * @value 1 Dead-reckoning
 */
PARAM_DEFINE_INT32(EKF2_AGP3_MODE, 0);

/**
 * Auxiliary global position sensor 0 delay (to IMU)
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0
 * @max 1000
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_AGP0_DELAY, 0);

/**
 * Auxiliary global position sensor 1 delay (to IMU)
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0
 * @max 1000
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_AGP1_DELAY, 0);

/**
 * Auxiliary global position sensor 2 delay (to IMU)
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0
 * @max 1000
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_AGP2_DELAY, 0);

/**
 * Auxiliary global position sensor 3 delay (to IMU)
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0
 * @max 1000
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_AGP3_DELAY, 0);

/**
 * Measurement noise for auxiliary global position sensor 0
 *
 * Used to lower bound or replace the uncertainty included in the message
 *
 * @group EKF2
 * @decimal 2
 * @min 0.01
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_AGP0_NOISE, 1.0);

/**
 * Measurement noise for auxiliary global position sensor 1
 *
 * Used to lower bound or replace the uncertainty included in the message
 *
 * @group EKF2
 * @decimal 2
 * @min 0.01
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_AGP1_NOISE, 1.0);

/**
 * Measurement noise for auxiliary global position sensor 2
 *
 * Used to lower bound or replace the uncertainty included in the message
 *
 * @group EKF2
 * @decimal 2
 * @min 0.01
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_AGP2_NOISE, 1.0);

/**
 * Measurement noise for auxiliary global position sensor 3
 *
 * Used to lower bound or replace the uncertainty included in the message
 *
 * @group EKF2
 * @decimal 2
 * @min 0.01
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_AGP3_NOISE, 1.0);

/**
 * Gate size for auxiliary global position sensor 0 fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_AGP0_GATE, 3.0);

/**
 * Gate size for auxiliary global position sensor 1 fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_AGP1_GATE, 3.0);

/**
 * Gate size for auxiliary global position sensor 2 fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_AGP2_GATE, 3.0);

/**
 * Gate size for auxiliary global position sensor 3 fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_AGP3_GATE, 3.0);

/**
 * Auxiliary Velocity Estimate delay relative to IMU measurements
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0
 * @max 300
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_AVEL_DELAY, 5);

/**
 * Barometric sensor height aiding
 *
 * If this parameter is enabled then the estimator will make use of the barometric height measurements to estimate its height in addition to other height sources (if activated).
 *
 * @group EKF2
 * @boolean
 */
PARAM_DEFINE_INT32(EKF2_BARO_CTRL, 1);

/**
 * Barometer measurement delay relative to IMU measurements
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0
 * @max 300
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_BARO_DELAY, 0);

/**
 * Gate size for barometric and GPS height fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_BARO_GATE, 5.0);

/**
 * Measurement noise for barometric altitude
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @min 0.01
 * @max 15.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_BARO_NOISE, 3.5);

/**
 * Baro deadzone range for height fusion
 *
 * Sets the value of deadzone applied to negative baro innovations. Deadzone is enabled when EKF2_GND_EFF_DZ > 0.
 *
 * @group EKF2
 * @decimal 1
 * @min 0.0
 * @max 10.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_GND_EFF_DZ, 4.0);

/**
 * Height above ground level for ground effect zone
 *
 * Sets the maximum distance to the ground level where negative baro innovations are expected.
 *
 * @group EKF2
 * @decimal 1
 * @min 0.0
 * @max 5.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_GND_MAX_HGT, 0.5);

/**
 * Static pressure position error coefficient for the positive X axis
 *
 * This is the ratio of static pressure error to dynamic pressure generated by a positive wind relative velocity along the X body axis. If the baro height estimate rises during forward flight, then this will be a negative number.
 *
 * @group EKF2
 * @decimal 2
 * @min -0.5
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(EKF2_PCOEF_XP, 0.0);

/**
 * Static pressure position error coefficient for the negative X axis
 *
 * This is the ratio of static pressure error to dynamic pressure generated by a negative wind relative velocity along the X body axis. If the baro height estimate rises during backwards flight, then this will be a negative number.
 *
 * @group EKF2
 * @decimal 2
 * @min -0.5
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(EKF2_PCOEF_XN, 0.0);

/**
 * Pressure position error coefficient for the positive Y axis
 *
 * This is the ratio of static pressure error to dynamic pressure generated by a wind relative velocity along the positive Y (RH) body axis. If the baro height estimate rises during sideways flight to the right, then this will be a negative number.
 *
 * @group EKF2
 * @decimal 2
 * @min -0.5
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(EKF2_PCOEF_YP, 0.0);

/**
 * Pressure position error coefficient for the negative Y axis
 *
 * This is the ratio of static pressure error to dynamic pressure generated by a wind relative velocity along the negative Y (LH) body axis. If the baro height estimate rises during sideways flight to the left, then this will be a negative number.
 *
 * @group EKF2
 * @decimal 2
 * @min -0.5
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(EKF2_PCOEF_YN, 0.0);

/**
 * Static pressure position error coefficient for the Z axis
 *
 * This is the ratio of static pressure error to dynamic pressure generated by a wind relative velocity along the Z body axis.
 *
 * @group EKF2
 * @decimal 2
 * @min -0.5
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(EKF2_PCOEF_Z, 0.0);

/**
 * Maximum airspeed used for baro static pressure compensation
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 5.0
 * @max 50.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(EKF2_ASPD_MAX, 20.0);

/**
 * Multirotor wind estimation selection
 *
 * Activate wind speed estimation using specific-force measurements and a drag model defined by EKF2_BCOEF_[XY] and EKF2_MCOEF. Only use on vehicles that have their thrust aligned with the Z axis and no thrust in the XY plane.
 *
 * @group EKF2
 * @boolean
 */
PARAM_DEFINE_INT32(EKF2_DRAG_CTRL, 0);

/**
 * Specific drag force observation noise variance
 *
 * Used by the multi-rotor specific drag force model. Increasing this makes the multi-rotor wind estimates adjust more slowly.
 *
 * @group EKF2
 * @decimal 2
 * @min 0.5
 * @max 10.0
 * @unit (m/s^2)^2
 */
PARAM_DEFINE_FLOAT(EKF2_DRAG_NOISE, 2.5);

/**
 * X-axis ballistic coefficient used for multi-rotor wind estimation
 *
 * This parameter controls the prediction of drag produced by bluff body drag along the forward/reverse axis when flying a multi-copter which enables estimation of wind drift when enabled by the EKF2_DRAG_CTRL parameter. The drag produced by this effect scales with speed squared. The predicted drag from the rotors is specified separately by the EKF2_MCOEF parameter. Set this parameter to zero to turn off the bluff body drag model for this axis.
 *
 * @group EKF2
 * @decimal 1
 * @min 0.0
 * @max 200.0
 * @unit kg/m^2
 */
PARAM_DEFINE_FLOAT(EKF2_BCOEF_X, 100.0);

/**
 * Y-axis ballistic coefficient used for multi-rotor wind estimation
 *
 * This parameter controls the prediction of drag produced by bluff body drag along the right/left axis when flying a multi-copter, which enables estimation of wind drift when enabled by the EKF2_DRAG_CTRL parameter. The drag produced by this effect scales with speed squared. The predicted drag from the rotors is specified separately by the EKF2_MCOEF parameter. Set this parameter to zero to turn off the bluff body drag model for this axis.
 *
 * @group EKF2
 * @decimal 1
 * @min 0.0
 * @max 200.0
 * @unit kg/m^2
 */
PARAM_DEFINE_FLOAT(EKF2_BCOEF_Y, 100.0);

/**
 * Propeller momentum drag coefficient for multi-rotor wind estimation
 *
 * This parameter controls the prediction of drag produced by the propellers when flying a multi-copter, which enables estimation of wind drift when enabled by the EKF2_DRAG_CTRL parameter. The drag produced by this effect scales with speed not speed squared and is produced because some of the air velocity normal to the propeller axis of rotation is lost when passing through the rotor disc. This  changes the momentum of the flow which creates a drag reaction force. When comparing un-ducted propellers of the same diameter, the effect is roughly proportional to the area of the propeller blades when viewed side on and changes with propeller selection. Momentum drag is significantly higher for ducted rotors. To account for the drag produced by the body which scales with speed squared, see documentation for the EKF2_BCOEF_X and EKF2_BCOEF_Y parameters. Set this parameter to zero to turn off the momentum drag model for both axis.
 *
 * @group EKF2
 * @decimal 2
 * @min 0
 * @max 1.0
 * @unit 1/s
 */
PARAM_DEFINE_FLOAT(EKF2_MCOEF, 0.15);

/**
 * External vision (EV) sensor aiding
 *
 * Set bits in the following positions to enable: 0 : Horizontal position fusion 1 : Vertical position fusion 2 : 3D velocity fusion 3 : Yaw
 *
 * @group EKF2
 * @bit 0 Horizontal position
 * @bit 1 Vertical position
 * @bit 2 3D velocity
 * @bit 3 Yaw
 * @min 0
 * @max 15
 * @min 0
 * @max 15
 */
PARAM_DEFINE_INT32(EKF2_EV_CTRL, 0);

/**
 * Vision Position Estimator delay relative to IMU measurements
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0
 * @max 300
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_EV_DELAY, 0);

/**
 * External vision (EV) noise mode
 *
 * If set to 0 (default) the measurement noise is taken from the vision message and the EV noise parameters are used as a lower bound. If set to 1 the observation noise is set from the parameters directly,
 *
 * @group EKF2
 * @value 0 EV reported variance (parameter lower bound)
 * @value 1 EV noise parameters
 */
PARAM_DEFINE_INT32(EKF2_EV_NOISE_MD, 0);

/**
 * External vision (EV) minimum quality (optional)
 *
 * External vision will only be started and fused if the quality metric is above this threshold. The quality metric is a completely optional field provided by some VIO systems.
 *
 * @group EKF2
 * @decimal 1
 * @min 0
 * @max 100
 */
PARAM_DEFINE_INT32(EKF2_EV_QMIN, 0);

/**
 * Measurement noise for vision angle measurements
 *
 * Used to lower bound or replace the uncertainty included in the message
 *
 * @group EKF2
 * @decimal 2
 * @min 0.05
 * @unit rad
 */
PARAM_DEFINE_FLOAT(EKF2_EVA_NOISE, 0.1);

/**
 * Gate size for vision position fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_EVP_GATE, 5.0);

/**
 * Measurement noise for vision position measurements
 *
 * Used to lower bound or replace the uncertainty included in the message
 *
 * @group EKF2
 * @decimal 2
 * @min 0.01
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_EVP_NOISE, 0.1);

/**
 * Gate size for vision velocity estimate fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_EVV_GATE, 3.0);

/**
 * Measurement noise for vision velocity measurements
 *
 * Used to lower bound or replace the uncertainty included in the message
 *
 * @group EKF2
 * @decimal 2
 * @min 0.01
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(EKF2_EVV_NOISE, 0.1);

/**
 * X position of VI sensor focal point in body frame
 *
 * Forward axis with origin relative to vehicle centre of gravity
 *
 * @group EKF2
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_EV_POS_X, 0.0);

/**
 * Y position of VI sensor focal point in body frame
 *
 * Forward axis with origin relative to vehicle centre of gravity
 *
 * @group EKF2
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_EV_POS_Y, 0.0);

/**
 * Z position of VI sensor focal point in body frame
 *
 * Forward axis with origin relative to vehicle centre of gravity
 *
 * @group EKF2
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_EV_POS_Z, 0.0);

/**
 * GNSS sensor aiding
 *
 * Set bits in the following positions to enable: 0 : Longitude and latitude fusion 1 : Altitude fusion 2 : 3D velocity fusion 3 : Dual antenna heading fusion
 *
 * @group EKF2
 * @bit 0 Lon/lat
 * @bit 1 Altitude
 * @bit 2 3D velocity
 * @bit 3 Dual antenna heading
 * @min 0
 * @max 15
 * @min 0
 * @max 15
 */
PARAM_DEFINE_INT32(EKF2_GPS_CTRL, 7);

/**
 * Fusion reset mode
 *
 * Automatic: reset on fusion timeout if no other source of position is available. Dead-reckoning: reset on fusion timeout if no source of velocity is available.
 *
 * @group EKF2
 * @value 0 Automatic
 * @value 1 Dead-reckoning
 */
PARAM_DEFINE_INT32(EKF2_GPS_MODE, 0);

/**
 * Measurement noise for GNSS position
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @min 0.01
 * @max 10.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_GPS_P_NOISE, 0.5);

/**
 * Gate size for GNSS position fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_GPS_P_GATE, 5.0);

/**
 * Heading/Yaw offset for dual antenna GPS
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0.0
 * @max 360.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(EKF2_GPS_YAW_OFF, 0.0);

/**
 * Gate size for GNSS velocity fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_GPS_V_GATE, 5.0);

/**
 * Measurement noise for GNSS velocity
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @min 0.01
 * @max 5.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(EKF2_GPS_V_NOISE, 0.3);

/**
 * Integer bitmask controlling GPS checks
 *
 * Each threshold value is defined by the parameter indicated next to the check. Drift and offset checks only run when the vehicle is on ground and stationary.
 *
 * @group EKF2
 * @bit 0 Sat count (EKF2_REQ_NSATS)
 * @bit 1 PDOP (EKF2_REQ_PDOP)
 * @bit 2 EPH (EKF2_REQ_EPH)
 * @bit 3 EPV (EKF2_REQ_EPV)
 * @bit 4 Speed accuracy (EKF2_REQ_SACC)
 * @bit 5 Horizontal position drift (EKF2_REQ_HDRIFT)
 * @bit 6 Vertical position drift (EKF2_REQ_VDRIFT)
 * @bit 7 Horizontal speed offset (EKF2_REQ_HDRIFT)
 * @bit 8 Vertical speed offset (EKF2_REQ_VDRIFT)
 * @bit 9 Spoofing
 * @bit 10 GPS fix type (EKF2_REQ_FIX)
 * @bit 11 Jamming
 * @min 0
 * @max 4095
 * @min 0
 * @max 4095
 */
PARAM_DEFINE_INT32(EKF2_GPS_CHECK, 2047);

/**
 * Required EPH to use GPS
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0.1
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_REQ_EPH, 3.0);

/**
 * Required EPV to use GPS
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0.1
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_REQ_EPV, 5.0);

/**
 * Required speed accuracy to use GPS
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @min 0.5
 * @max 5.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(EKF2_REQ_SACC, 0.5);

/**
 * Required satellite count to use GPS
 *
 * 
 *
 * @group EKF2
 * @min 4
 * @max 12
 */
PARAM_DEFINE_INT32(EKF2_REQ_NSATS, 6);

/**
 * Maximum PDOP to use GPS
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 1.5
 * @max 5.0
 */
PARAM_DEFINE_FLOAT(EKF2_REQ_PDOP, 2.5);

/**
 * Maximum horizontal drift speed to use GPS
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @min 0.1
 * @max 1.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(EKF2_REQ_HDRIFT, 0.1);

/**
 * Maximum vertical drift speed to use GPS
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @min 0.1
 * @max 1.5
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(EKF2_REQ_VDRIFT, 0.2);

/**
 * Required GPS fix
 *
 * Minimum GPS fix type required for GPS usage.
 *
 * @group EKF2
 * @value 0 No fix required
 * @value 2 2D fix
 * @value 3 3D fix
 * @value 4 RTCM code differential
 * @value 5 RTK float
 * @value 6 RTK fixed
 * @value 8 Extrapolated
 */
PARAM_DEFINE_INT32(EKF2_REQ_FIX, 3);

/**
 * Required GPS health time on startup
 *
 * Minimum continuous period without GPS failure required to mark a healthy GPS status. It can be reduced to speed up initialization, but it's recommended to keep this unchanged for a vehicle.
 *
 * @group EKF2
 * @decimal 1
 * @min 0.1
 * @unit s
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_REQ_GPS_H, 10.0);

/**
 * Default value of true airspeed used in EKF-GSF AHRS calculation
 *
 * If no airspeed measurements are available, the EKF-GSF AHRS calculation will assume this value of true airspeed when compensating for centripetal acceleration during turns. Set to zero to disable centripetal acceleration compensation during fixed wing flight modes.
 *
 * @group EKF2
 * @decimal 1
 * @min 0.0
 * @max 100.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(EKF2_GSF_TAS, 15.0);

/**
 * Accelerometer measurement noise for gravity based observations
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @min 0.1
 * @max 10.0
 * @unit g0
 */
PARAM_DEFINE_FLOAT(EKF2_GRAV_NOISE, 1.0);

/**
 * Type of magnetometer fusion
 *
 * Integer controlling the type of magnetometer fusion used - magnetic heading or 3-component vector. The fusion of magnetometer data as a three component vector enables vehicle body fixed hard iron errors to be learned, but requires a stable earth field. If set to 'Automatic' magnetic heading fusion is used when on-ground and 3-axis magnetic field fusion in-flight. If set to 'Magnetic heading' magnetic heading fusion is used at all times. If set to 'None' the magnetometer will not be used under any circumstance. If no external source of yaw is available, it is possible to use post-takeoff horizontal movement combined with GNSS velocity measurements to align the yaw angle. If set to 'Init' the magnetometer is only used to initalize the heading.
 *
 * @group EKF2
 * @value 0 Automatic
 * @value 1 Magnetic heading
 * @value 5 None
 * @value 6 Init
 * @reboot_required True
 */
PARAM_DEFINE_INT32(EKF2_MAG_TYPE, 0);

/**
 * Magnetometer measurement delay relative to IMU measurements
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0
 * @max 300
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_MAG_DELAY, 0);

/**
 * Gate size for magnetometer XYZ component fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_MAG_GATE, 3.0);

/**
 * Measurement noise for magnetometer 3-axis fusion
 *
 * 
 *
 * @group EKF2
 * @decimal 3
 * @min 0.001
 * @max 1.0
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(EKF2_MAG_NOISE, 0.05);

/**
 * Process noise for body magnetic field prediction
 *
 * 
 *
 * @group EKF2
 * @decimal 6
 * @min 0.0
 * @max 0.1
 * @unit gauss/s
 */
PARAM_DEFINE_FLOAT(EKF2_MAG_B_NOISE, 0.0001);

/**
 * Process noise for earth magnetic field prediction
 *
 * 
 *
 * @group EKF2
 * @decimal 6
 * @min 0.0
 * @max 0.1
 * @unit gauss/s
 */
PARAM_DEFINE_FLOAT(EKF2_MAG_E_NOISE, 0.001);

/**
 * Integer bitmask controlling handling of magnetic declination
 *
 * Set bits in the following positions to enable functions. 0 : Set to true to use the declination from the geo_lookup library when the GPS position becomes available, set to false to always use the EKF2_MAG_DECL value. 1 : Set to true to save the EKF2_MAG_DECL parameter to the value returned by the EKF when the vehicle disarms.
 *
 * @group EKF2
 * @bit 0 use geo_lookup declination
 * @bit 1 save EKF2_MAG_DECL on disarm
 * @min 0
 * @max 3
 * @min 0
 * @max 3
 * @reboot_required True
 */
PARAM_DEFINE_INT32(EKF2_DECL_TYPE, 3);

/**
 * Horizontal acceleration threshold used for heading observability check
 *
 * The heading is assumed to be observable when the body acceleration is greater than this parameter when a global position/velocity aiding source is active.
 *
 * @group EKF2
 * @decimal 2
 * @min 0.0
 * @max 5.0
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(EKF2_MAG_ACCLIM, 0.5);

/**
 * Magnetic field strength test selection
 *
 * Bitmask to set which check is used to decide whether the magnetometer data is valid. If GNSS data is received, the magnetic field is compared to a World Magnetic Model (WMM), otherwise an average value is used. This check is useful to reject occasional hard iron disturbance. Set bits to 1 to enable checks. Checks enabled by the following bit positions 0 : Magnetic field strength. Set tolerance using EKF2_MAG_CHK_STR 1 : Magnetic field inclination. Set tolerance using EKF2_MAG_CHK_INC 2 : Wait for GNSS to find the theoretical strength and inclination using the WMM
 *
 * @group EKF2
 * @bit 0 Strength (EKF2_MAG_CHK_STR)
 * @bit 1 Inclination (EKF2_MAG_CHK_INC)
 * @bit 2 Wait for WMM
 * @min 0
 * @max 7
 * @min 0
 * @max 7
 */
PARAM_DEFINE_INT32(EKF2_MAG_CHECK, 1);

/**
 * Magnetic field strength check tolerance
 *
 * Maximum allowed deviation from the expected magnetic field strength to pass the check.
 *
 * @group EKF2
 * @decimal 2
 * @min 0.0
 * @max 1.0
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(EKF2_MAG_CHK_STR, 0.2);

/**
 * Magnetic field inclination check tolerance
 *
 * Maximum allowed deviation from the expected magnetic field inclination to pass the check.
 *
 * @group EKF2
 * @decimal 1
 * @min 0.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(EKF2_MAG_CHK_INC, 20.0);

/**
 * Enable synthetic magnetometer Z component measurement
 *
 * Use for vehicles where the measured body Z magnetic field is subject to strong magnetic interference. For magnetic heading fusion the magnetometer Z measurement will be replaced by a synthetic value calculated using the knowledge of the 3D magnetic field vector at the location of the drone. Therefore, this parameter will only have an effect if the global position of the drone is known. For 3D mag fusion the magnetometer Z measurement will simply be ignored instead of fusing the synthetic value.
 *
 * @group EKF2
 * @boolean
 */
PARAM_DEFINE_INT32(EKF2_SYNT_MAG_Z, 0);

/**
 * Optical flow aiding
 *
 * Enable optical flow fusion.
 *
 * @group EKF2
 * @boolean
 */
PARAM_DEFINE_INT32(EKF2_OF_CTRL, 1);

/**
 * Optical flow measurement delay relative to IMU measurements
 *
 * Assumes measurement is timestamped at trailing edge of integration period
 *
 * @group EKF2
 * @decimal 1
 * @min 0
 * @max 300
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_OF_DELAY, 20);

/**
 * Gate size for optical flow fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_OF_GATE, 3.0);

/**
 * Optical flow minimum noise
 *
 * Measurement noise for the optical flow sensor when it's reported quality metric is at the maximum
 *
 * @group EKF2
 * @decimal 2
 * @min 0.05
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(EKF2_OF_N_MIN, 0.15);

/**
 * Optical flow maximum noise
 *
 * Measurement noise for the optical flow sensor when it's reported quality metric is at the minimum
 *
 * @group EKF2
 * @decimal 2
 * @min 0.05
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(EKF2_OF_N_MAX, 0.5);

/**
 * In air optical flow minimum quality
 *
 * Optical Flow data will only be used in air if the sensor reports a quality metric >= EKF2_OF_QMIN
 *
 * @group EKF2
 * @min 0
 * @max 255
 */
PARAM_DEFINE_INT32(EKF2_OF_QMIN, 1);

/**
 * On ground optical flow minimum quality
 *
 * Optical Flow data will only be used on the ground if the sensor reports a quality metric >= EKF2_OF_QMIN_GND
 *
 * @group EKF2
 * @min 0
 * @max 255
 */
PARAM_DEFINE_INT32(EKF2_OF_QMIN_GND, 0);

/**
 * Optical flow angular rate compensation source
 *
 * Auto: use gyro from optical flow message if available, internal gyro otherwise. Internal: always use internal gyro
 *
 * @group EKF2
 * @value 0 Auto
 * @value 1 Internal
 */
PARAM_DEFINE_INT32(EKF2_OF_GYR_SRC, 0);

/**
 * X position of optical flow focal point in body frame
 *
 * Forward axis with origin relative to vehicle centre of gravity
 *
 * @group EKF2
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_OF_POS_X, 0.0);

/**
 * Y position of optical flow focal point in body frame
 *
 * Forward axis with origin relative to vehicle centre of gravity
 *
 * @group EKF2
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_OF_POS_Y, 0.0);

/**
 * Z position of optical flow focal point in body frame
 *
 * Forward axis with origin relative to vehicle centre of gravity
 *
 * @group EKF2
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_OF_POS_Z, 0.0);

/**
 * Range sensor height aiding
 *
 * WARNING: Range finder measurements are less reliable and can experience unexpected errors. For these reasons, if accurate control of height relative to ground is required, it is recommended to use the MPC_ALT_MODE parameter instead, unless baro errors are severe enough to cause problems with landing and takeoff. If this parameter is enabled then the estimator will make use of the range finder measurements to estimate its height in addition to other height sources (if activated). Range sensor aiding can be enabled (i.e.: always use) or set in "conditional" mode. Conditional mode: This enables the range finder to be used during low speed (< EKF2_RNG_A_VMAX) and low altitude (< EKF2_RNG_A_HMAX) operation, eg takeoff and landing, where baro interference from rotor wash is excessive and can corrupt EKF state estimates. It is intended to be used where a vertical takeoff and landing is performed, and horizontal flight does not occur until above EKF2_RNG_A_HMAX.
 *
 * @group EKF2
 * @value 0 Disable range fusion
 * @value 1 Enabled (conditional mode)
 * @value 2 Enabled
 */
PARAM_DEFINE_INT32(EKF2_RNG_CTRL, 1);

/**
 * Range finder measurement delay relative to IMU measurements
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0
 * @max 300
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_RNG_DELAY, 5);

/**
 * Gate size for range finder fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_RNG_GATE, 5.0);

/**
 * Measurement noise for range finder fusion
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @min 0.01
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_RNG_NOISE, 0.1);

/**
 * Range sensor pitch offset
 *
 * 
 *
 * @group EKF2
 * @decimal 3
 * @min -0.75
 * @max 0.75
 * @unit rad
 */
PARAM_DEFINE_FLOAT(EKF2_RNG_PITCH, 0.0);

/**
 * Maximum horizontal velocity allowed for conditional range aid mode
 *
 * If the vehicle horizontal speed exceeds this value then the estimator will not fuse range measurements to estimate its height. This only applies when conditional range aid mode is activated (EKF2_RNG_CTRL = 1).
 *
 * @group EKF2
 * @min 0.1
 * @max 2
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(EKF2_RNG_A_VMAX, 1.0);

/**
 * Maximum height above ground allowed for conditional range aid mode
 *
 * If the vehicle absolute altitude exceeds this value then the estimator will not fuse range measurements to estimate its height. This only applies when conditional range aid mode is activated (EKF2_RNG_CTRL = 1).
 *
 * @group EKF2
 * @min 1.0
 * @max 10.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_RNG_A_HMAX, 5.0);

/**
 * Minumum range validity period
 *
 * Minimum duration during which the reported range finder signal quality needs to be non-zero in order to be declared valid (s)
 *
 * @group EKF2
 * @min 0.1
 * @max 5
 * @unit s
 */
PARAM_DEFINE_FLOAT(EKF2_RNG_QLTY_T, 1.0);

/**
 * Gate size used for range finder kinematic consistency check
 *
 * To be used, the time derivative of the distance sensor measurements projected on the vertical axis needs to be statistically consistent with the estimated vertical velocity of the drone. Decrease this value to make the filter more robust against range finder faulty data (stuck, reflections, ...). Note: tune the range finder noise parameters (EKF2_RNG_NOISE and EKF2_RNG_SFE) before tuning this gate.
 *
 * @group EKF2
 * @min 0.1
 * @max 5.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_RNG_K_GATE, 1.0);

/**
 * Range finder range dependent noise scaler
 *
 * Specifies the increase in range finder noise with range.
 *
 * @group EKF2
 * @min 0.0
 * @max 0.2
 * @unit m/m
 */
PARAM_DEFINE_FLOAT(EKF2_RNG_SFE, 0.05);

/**
 * X position of range finder origin in body frame
 *
 * Forward axis with origin relative to vehicle centre of gravity
 *
 * @group EKF2
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_RNG_POS_X, 0.0);

/**
 * Y position of range finder origin in body frame
 *
 * Forward axis with origin relative to vehicle centre of gravity
 *
 * @group EKF2
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_RNG_POS_Y, 0.0);

/**
 * Z position of range finder origin in body frame
 *
 * Forward axis with origin relative to vehicle centre of gravity
 *
 * @group EKF2
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_RNG_POS_Z, 0.0);

/**
 * Maximum distance at which the range finder could detect fog (m)
 *
 * Limit for fog detection. If the range finder measures a distance greater than this value, the measurement is considered to not be blocked by fog or rain. If there's a jump from larger than RNG_FOG to smaller than EKF2_RNG_FOG, the measurement may gets rejected. 0 - disabled
 *
 * @group EKF2
 * @decimal 1
 * @min 0.0
 * @max 20.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_RNG_FOG, 3.0);

/**
 * Ranging beacon fusion control
 *
 * Enable/disable ranging beacon fusion.
 *
 * @group EKF2
 * @value 0 Disable ranging beacon fusion
 * @value 1 Enable ranging beacon fusion
 */
PARAM_DEFINE_INT32(EKF2_RNGBC_CTRL, 0);

/**
 * Ranging beacon measurement delay relative to IMU measurements
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0
 * @max 1000
 * @unit ms
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(EKF2_RNGBC_DELAY, 0);

/**
 * Gate size for ranging beacon fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_RNGBC_GATE, 5.0);

/**
 * Measurement noise for ranging beacon fusion
 *
 * Used to lower bound or replace the uncertainty included in the message
 *
 * @group EKF2
 * @decimal 1
 * @min 0.1
 * @max 500.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_RNGBC_NOISE, 30.0);

/**
 * Enable synthetic sideslip fusion
 *
 * For reliable wind estimation both sideslip and airspeed fusion (see EKF2_ARSP_THR) should be enabled. Only applies to vehicles in fixed-wing mode or with airspeed fusion active. Note: side slip fusion is currently not supported for tailsitters.
 *
 * @group EKF2
 * @boolean
 */
PARAM_DEFINE_INT32(EKF2_FUSE_BETA, 0);

/**
 * Gate size for synthetic sideslip fusion
 *
 * Sets the number of standard deviations used by the innovation consistency test.
 *
 * @group EKF2
 * @decimal 1
 * @min 1.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(EKF2_BETA_GATE, 5.0);

/**
 * Noise for synthetic sideslip fusion
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @min 0.1
 * @max 1.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(EKF2_BETA_NOISE, 0.3);

/**
 * Terrain altitude process noise
 *
 * 
 *
 * @group EKF2
 * @decimal 1
 * @min 0.5
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(EKF2_TERR_NOISE, 5.0);

/**
 * Magnitude of terrain gradient
 *
 * 
 *
 * @group EKF2
 * @decimal 2
 * @min 0.0
 * @unit m/m
 */
PARAM_DEFINE_FLOAT(EKF2_TERR_GRAD, 0.5);

/**
 * Expected range finder reading when on ground
 *
 * If the vehicle is on ground, is not moving as determined by the motion test and the range finder is returning invalid or no data, then an assumed range value of EKF2_MIN_RNG will be used by the terrain estimator so that a terrain height estimate is available at the start of flight in situations where the range finder may be inside its minimum measurements distance when on ground.
 *
 * @group EKF2
 * @decimal 2
 * @min 0.01
 * @unit m
 */
PARAM_DEFINE_FLOAT(EKF2_MIN_RNG, 0.01);

/**
 * Process noise spectral density for wind velocity prediction
 *
 * When unaided, the wind estimate uncertainty (1-sigma, in m/s) increases by this amount every second.
 *
 * @group EKF2
 * @decimal 3
 * @min 0.0
 * @max 1.0
 * @unit m/s^2/sqrt(Hz)
 */
PARAM_DEFINE_FLOAT(EKF2_WIND_NSD, 0.05);

/**
 * Status Display
 *
 * Enable/disable event task for displaying the vehicle status using arm-mounted
 * LEDs. When enabled and if the vehicle supports it, LEDs will flash
 * indicating various vehicle status changes. Currently PX4 has not implemented
 * any specific status events.
 *
 * @group Events
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(EV_TSK_STAT_DIS, 0);

/**
 * RC Loss Alarm
 *
 * Enable/disable event task for RC Loss. When enabled, an alarm tune will be
 * played via buzzer or ESCs, if supported. The alarm will sound after a disarm,
 * if the vehicle was previously armed and only if the vehicle had RC signal at
 * some point. Particularly useful for locating crashed drones without a GPS
 * sensor.
 *
 * @group Events
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(EV_TSK_RC_LOSS, 0);

/**
 * Manual input mapped to scale horizontal velocity in position slow mode
 *
 * 
 *
 * @group Multicopter Position Slow Mode
 * @value 0 No rescaling
 * @value 1 AUX1
 * @value 2 AUX2
 * @value 3 AUX3
 * @value 4 AUX4
 * @value 5 AUX5
 * @value 6 AUX6
 */
PARAM_DEFINE_INT32(MC_SLOW_MAP_HVEL, 0);

/**
 * Manual input mapped to scale vertical velocity in position slow mode
 *
 * 
 *
 * @group Multicopter Position Slow Mode
 * @value 0 No rescaling
 * @value 1 AUX1
 * @value 2 AUX2
 * @value 3 AUX3
 * @value 4 AUX4
 * @value 5 AUX5
 * @value 6 AUX6
 */
PARAM_DEFINE_INT32(MC_SLOW_MAP_VVEL, 0);

/**
 * Manual input mapped to scale yaw rate in position slow mode
 *
 * 
 *
 * @group Multicopter Position Slow Mode
 * @value 0 No rescaling
 * @value 1 AUX1
 * @value 2 AUX2
 * @value 3 AUX3
 * @value 4 AUX4
 * @value 5 AUX5
 * @value 6 AUX6
 */
PARAM_DEFINE_INT32(MC_SLOW_MAP_YAWR, 0);

/**
 * Horizontal velocity lower limit
 *
 * The lowest input maps and is clamped to this velocity.
 *
 * @group Multicopter Position Slow Mode
 * @decimal 2
 * @increment 0.1
 * @min 0.1
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MC_SLOW_MIN_HVEL, 0.3);

/**
 * Vertical velocity lower limit
 *
 * The lowest input maps and is clamped to this velocity.
 *
 * @group Multicopter Position Slow Mode
 * @decimal 2
 * @increment 0.1
 * @min 0.1
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MC_SLOW_MIN_VVEL, 0.3);

/**
 * Yaw rate lower limit
 *
 * The lowest input maps and is clamped to this rate.
 *
 * @group Multicopter Position Slow Mode
 * @decimal 0
 * @increment 0.1
 * @min 1
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(MC_SLOW_MIN_YAWR, 3.0);

/**
 * Default horizontal velocity limit
 *
 * This value is used in slow mode if
 * no aux channel is mapped and
 * no limit is commanded through MAVLink.
 *
 * @group Multicopter Position Slow Mode
 * @decimal 2
 * @increment 0.1
 * @min 0.1
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MC_SLOW_DEF_HVEL, 3.0);

/**
 * Default vertical velocity limit
 *
 * This value is used in slow mode if
 * no aux channel is mapped and
 * no limit is commanded through MAVLink.
 *
 * @group Multicopter Position Slow Mode
 * @decimal 2
 * @increment 0.1
 * @min 0.1
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MC_SLOW_DEF_VVEL, 1.0);

/**
 * Default yaw rate limit
 *
 * This value is used in slow mode if
 * no aux channel is mapped and
 * no limit is commanded through MAVLink.
 *
 * @group Multicopter Position Slow Mode
 * @decimal 0
 * @increment 0.1
 * @min 1
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(MC_SLOW_DEF_YAWR, 45.0);

/**
 * Gimbal pitch rate control input in position slow mode
 *
 * RC_MAP_AUX{N} to allow for gimbal pitch rate control in position slow mode
 *
 * @group Multicopter Position Slow Mode
 * @value 0 No pitch rate input
 * @value 1 AUX1
 * @value 2 AUX2
 * @value 3 AUX3
 * @value 4 AUX4
 * @value 5 AUX5
 * @value 6 AUX6
 */
PARAM_DEFINE_INT32(MC_SLOW_MAP_PTCH, 0);

/**
 * Responsiveness to target movement in Target Estimator
 *
 * lower values increase the responsiveness to changing position, but also ignore less noise
 *
 * @group Follow target
 * @decimal 2
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(FLW_TGT_RS, 0.1);

/**
 * Follow target height
 *
 * Following height above the target
 *
 * @group Follow target
 * @min 8.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(FLW_TGT_HT, 8.0);

/**
 * Distance to follow target from
 *
 * The distance in meters to follow the target at
 *
 * @group Follow target
 * @min 1.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(FLW_TGT_DST, 8.0);

/**
 * Follow Angle setting in degrees
 *
 * Angle to follow the target from. 0.0 Equals straight in front of the target's
 * course (direction of motion) and the angle increases in clockwise direction,
 * meaning Right-side would be 90.0 degrees while Left-side is -90.0 degrees
 * 
 * Note: When the user force sets the angle out of the min/max range, it will be
 * wrapped (e.g. 480 -> 120) in the range to gracefully handle the out of range.
 *
 * @group Follow target
 * @min -180.0
 * @max 180.0
 */
PARAM_DEFINE_FLOAT(FLW_TGT_FA, 180.0);

/**
 * Altitude control mode
 *
 * Maintain altitude or track target's altitude. When maintaining the altitude,
 * the drone can crash into terrain when the target moves uphill. When tracking
 * the target's altitude, the follow altitude FLW_TGT_HT should be high enough
 * to prevent terrain collisions due to GPS inaccuracies of the target.
 *
 * @group Follow target
 * @value 0 2D Tracking: Maintain constant altitude relative to home and track XY position only
 * @value 1 2D + Terrain: Maintain constant altitude relative to terrain below and track XY position
 * @value 2 3D Tracking: Track target's altitude (be aware that GPS altitude bias usually makes this useless)
 */
PARAM_DEFINE_INT32(FLW_TGT_ALT_M, 0);

/**
 * Max tangential velocity for follow orbit trajectory
 *
 * Maximum tangential velocity setting for generating the follow orbit trajectory
 * 
 * This is the maximum tangential velocity the drone will circle around the target whenever
 * an orbit angle setpoint changes. Higher value means more aggressive follow behavior.
 *
 * @group Follow target
 * @decimal 1
 * @min 0.0
 * @max 20.0
 */
PARAM_DEFINE_FLOAT(FLW_TGT_MAX_VEL, 5.0);

/**
 * Maximum radius of orbit
 *
 * 
 *
 * @group Flight Task Orbit
 * @decimal 1
 * @increment 0.5
 * @min 1.0
 * @max 10000.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(MC_ORBIT_RAD_MAX, 1000.0);

/**
 * Yaw behaviour during orbit flight
 *
 * 
 *
 * @group Flight Task Orbit
 * @value 0 Front to Circle Center
 * @value 1 Hold Initial Heading
 * @value 2 Uncontrolled
 * @value 3 Hold Front Tangent to Circle
 * @value 4 Manually (yaw stick) Controlled
 */
PARAM_DEFINE_INT32(MC_ORBIT_YAW_MOD, 0);

/**
 * Attitude Roll Time Constant
 *
 * This defines the latency between a roll step input and the achieved setpoint
 * (inverse to a P gain). Smaller systems may require smaller values.
 *
 * @group FW Attitude Control
 * @decimal 2
 * @increment 0.05
 * @min 0.2
 * @max 1.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(FW_R_TC, 0.4);

/**
 * Attitude pitch time constant
 *
 * This defines the latency between a pitch step input and the achieved setpoint
 * (inverse to a P gain). Smaller systems may require smaller values.
 *
 * @group FW Attitude Control
 * @decimal 2
 * @increment 0.05
 * @min 0.2
 * @max 1.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(FW_P_TC, 0.4);

/**
 * Maximum positive / up pitch rate setpoint
 *
 * 
 *
 * @group FW Attitude Control
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @max 180
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(FW_P_RMAX_POS, 60.0);

/**
 * Maximum negative / down pitch rate setpoint
 *
 * 
 *
 * @group FW Attitude Control
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @max 180
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(FW_P_RMAX_NEG, 60.0);

/**
 * Maximum roll rate setpoint
 *
 * 
 *
 * @group FW Attitude Control
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @max 180
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(FW_R_RMAX, 70.0);

/**
 * Maximum yaw rate setpoint
 *
 * 
 *
 * @group FW Attitude Control
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @max 180
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(FW_Y_RMAX, 50.0);

/**
 * Enable wheel steering controller
 *
 * Only enabled during automatic runway takeoff and landing.
 * In all manual modes the wheel is directly controlled with yaw stick.
 *
 * @group FW Attitude Control
 * @boolean
 */
PARAM_DEFINE_INT32(FW_W_EN, 0);

/**
 * Wheel steering rate proportional gain
 *
 * This defines how much the wheel steering input will be commanded depending on the
 * current body angular rate error.
 *
 * @group FW Attitude Control
 * @decimal 3
 * @increment 0.005
 * @min 0.0
 * @max 10
 * @unit %/rad/s
 */
PARAM_DEFINE_FLOAT(FW_WR_P, 0.5);

/**
 * Wheel steering rate integrator gain
 *
 * This gain defines how much control response will result out of a steady
 * state error. It trims any constant error.
 *
 * @group FW Attitude Control
 * @decimal 3
 * @increment 0.005
 * @min 0.0
 * @max 10
 * @unit %/rad
 */
PARAM_DEFINE_FLOAT(FW_WR_I, 0.1);

/**
 * Wheel steering rate integrator limit
 *
 * 
 *
 * @group FW Attitude Control
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(FW_WR_IMAX, 0.4);

/**
 * Maximum wheel steering rate
 *
 * This limits the maximum wheel steering rate the controller will output (in degrees per
 * second).
 *
 * @group FW Attitude Control
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @max 90.0
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(FW_W_RMAX, 30.0);

/**
 * Wheel steering rate feed forward
 *
 * 
 *
 * @group FW Attitude Control
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @max 10
 * @unit %/rad/s
 */
PARAM_DEFINE_FLOAT(FW_WR_FF, 0.2);

/**
 * Pitch setpoint offset (pitch at level flight)
 *
 * An airframe specific offset of the pitch setpoint in degrees, the value is
 * added to the pitch setpoint and should correspond to the pitch at
 * typical cruise speed of the airframe.
 *
 * @group FW Attitude Control
 * @decimal 1
 * @increment 0.5
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(FW_PSP_OFF, 0.0);

/**
 * Maximum manually added yaw rate
 *
 * This is the maximally added yaw rate setpoint from the yaw stick in any attitude controlled flight mode.
 * It is added to the yaw rate setpoint generated by the controller for turn coordination.
 *
 * @group FW Attitude Control
 * @decimal 1
 * @increment 0.5
 * @min 0
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(FW_MAN_YR_MAX, 30.0);

/**
 * Maximum manual roll angle
 *
 * Applies to both directions in all manual modes with attitude stabilization
 *
 * @group FW Attitude Control
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(FW_MAN_R_MAX, 45.0);

/**
 * Maximum manual pitch angle
 *
 * Applies to both directions in all manual modes with attitude stabilization but without altitude control
 *
 * @group FW Attitude Control
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(FW_MAN_P_MAX, 30.0);

/**
 * Controls when to apply the new gains
 *
 * After the auto-tuning sequence is completed,
 * a new set of gains is available and can be applied
 * immediately or after landing.
 *
 * @group Autotune
 * @value 0 Do not apply the new gains (logging only)
 * @value 1 Apply the new gains after disarm
 * @value 2 Apply the new gains in air
 */
PARAM_DEFINE_INT32(FW_AT_APPLY, 2);

/**
 * Tuning axes selection
 *
 * Defines which axes will be tuned during the auto-tuning sequence
 * 
 * Set bits in the following positions to enable:
 * 0 : Roll
 * 1 : Pitch
 * 2 : Yaw
 *
 * @group Autotune
 * @bit 0 roll
 * @bit 1 pitch
 * @bit 2 yaw
 * @min 0
 * @max 7
 * @min 1
 * @max 7
 */
PARAM_DEFINE_INT32(FW_AT_AXES, 3);

/**
 * Enable/disable auto tuning using a manual control AUX input
 *
 * Defines which RC_MAP_AUXn parameter maps the manual control channel used to enable/disable auto tuning.
 *
 * @group Autotune
 * @value 0 Disable
 * @value 1 Aux1
 * @value 2 Aux2
 * @value 3 Aux3
 * @value 4 Aux4
 * @value 5 Aux5
 * @value 6 Aux6
 * @min 0
 * @max 6
 */
PARAM_DEFINE_INT32(FW_AT_MAN_AUX, 0);

/**
 * Start frequency of the injected signal
 *
 * Can be set lower or higher than the end frequency
 *
 * @group Autotune
 * @decimal 1
 * @min 0.1
 * @max 30.0
 * @unit Hz
 */
PARAM_DEFINE_FLOAT(FW_AT_SYSID_F0, 1.0);

/**
 * End frequency of the injected signal
 *
 * Can be set lower or higher than the start frequency
 *
 * @group Autotune
 * @decimal 1
 * @min 0.1
 * @max 30.0
 * @unit Hz
 */
PARAM_DEFINE_FLOAT(FW_AT_SYSID_F1, 10.0);

/**
 * Maneuver time for each axis
 *
 * Duration of the input signal sent on each axis during system identification
 *
 * @group Autotune
 * @decimal 0
 * @min 5
 * @max 120
 * @unit s
 */
PARAM_DEFINE_FLOAT(FW_AT_SYSID_TIME, 10.0);

/**
 * Input signal type
 *
 * Type of signal used during system identification to excite the system.
 *
 * @group Autotune
 * @value 0 Step
 * @value 1 Linear sine sweep
 * @value 2 Logarithmic sine sweep
 */
PARAM_DEFINE_INT32(FW_AT_SYSID_TYPE, 1);

/**
 * Path navigation roll slew rate limit
 *
 * Maximum change in roll angle setpoint per second.
 * Applied in all Auto modes, plus manual Position & Altitude modes.
 *
 * @group FW Lateral Control
 * @decimal 0
 * @increment 1
 * @min 0
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(FW_PN_R_SLEW_MAX, 90.0);

/**
 * Minimum groundspeed
 *
 * The controller will increase the commanded airspeed to maintain
 * this minimum groundspeed to the next waypoint.
 *
 * @group FW Longitudinal Control
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @max 40
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(FW_GND_SPD_MIN, 5.0);

/**
 * Throttle max slew rate
 *
 * Maximum slew rate for the commanded throttle
 *
 * @group FW Longitudinal Control
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(FW_THR_SLEW_MAX, 0.0);

/**
 * Low-height threshold for tighter altitude tracking
 *
 * Height above ground threshold below which tighter altitude
 * tracking gets enabled (see FW_LND_THRTC_SC). Below this height, TECS smoothly
 * (1 sec / sec) transitions the altitude tracking time constant from FW_T_ALT_TC
 * to FW_LND_THRTC_SC*FW_T_ALT_TC.
 * 
 * -1 to disable.
 *
 * @group FW Longitudinal Control
 * @decimal 0
 * @increment 1
 * @min -1
 * @unit m
 */
PARAM_DEFINE_FLOAT(FW_T_THR_LOW_HGT, -1.0);

/**
 * Throttle damping factor
 *
 * This is the damping gain for the throttle demand loop.
 *
 * @group FW Longitudinal Control
 * @decimal 3
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(FW_T_THR_DAMPING, 0.05);

/**
 * Integrator gain throttle
 *
 * Increase it to trim out speed and height offsets faster,
 * with the downside of possible overshoots and oscillations.
 *
 * @group FW Longitudinal Control
 * @decimal 3
 * @increment 0.005
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(FW_T_THR_INTEG, 0.02);

/**
 * Integrator gain pitch
 *
 * Increase it to trim out speed and height offsets faster,
 * with the downside of possible overshoots and oscillations.
 *
 * @group FW Longitudinal Control
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @max 2.0
 */
PARAM_DEFINE_FLOAT(FW_T_I_GAIN_PIT, 0.1);

/**
 * Maximum vertical acceleration
 *
 * This is the maximum vertical acceleration
 * either up or down that the controller will use to correct speed
 * or height errors.
 *
 * @group FW Longitudinal Control
 * @decimal 1
 * @increment 0.5
 * @min 1.0
 * @max 10.0
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(FW_T_VERT_ACC, 7.0);

/**
 * Airspeed measurement standard deviation
 *
 * For the airspeed filter in TECS.
 *
 * @group FW Longitudinal Control
 * @decimal 2
 * @increment 0.1
 * @min 0.01
 * @max 10.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(FW_T_SPD_STD, 0.07);

/**
 * Airspeed rate measurement standard deviation
 *
 * For the airspeed filter in TECS.
 *
 * @group FW Longitudinal Control
 * @decimal 2
 * @increment 0.1
 * @min 0.01
 * @max 10.0
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(FW_T_SPD_DEV_STD, 0.2);

/**
 * Process noise standard deviation for the airspeed rate
 *
 * This is defining the noise in the airspeed rate for the constant airspeed rate model
 * of the TECS airspeed filter.
 *
 * @group FW Longitudinal Control
 * @decimal 2
 * @increment 0.1
 * @min 0.01
 * @max 10.0
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(FW_T_SPD_PRC_STD, 0.2);

/**
 * Roll -> Throttle feedforward
 *
 * Is used to compensate for the additional drag created by turning.
 * Increase this gain if the aircraft initially loses energy in turns
 * and reduce if the aircraft initially gains energy in turns.
 *
 * @group FW Longitudinal Control
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @max 20.0
 */
PARAM_DEFINE_FLOAT(FW_T_RLL2THR, 15.0);

/**
 * Pitch damping gain
 *
 * 
 *
 * @group FW Longitudinal Control
 * @decimal 2
 * @increment 0.1
 * @min 0.0
 * @max 2.0
 */
PARAM_DEFINE_FLOAT(FW_T_PTCH_DAMP, 0.1);

/**
 * Altitude error time constant
 *
 * 
 *
 * @group FW Longitudinal Control
 * @decimal 2
 * @increment 0.5
 * @min 2.0
 */
PARAM_DEFINE_FLOAT(FW_T_ALT_TC, 5.0);

/**
 * Fast descend: minimum altitude error
 *
 * Minimum altitude error needed to descend with max airspeed and minimal throttle.
 * A negative value disables fast descend.
 *
 * @group FW Longitudinal Control
 * @decimal 0
 * @min -1.0
 */
PARAM_DEFINE_FLOAT(FW_T_F_ALT_ERR, -1.0);

/**
 * Height rate feed forward
 *
 * 
 *
 * @group FW Longitudinal Control
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(FW_T_HRATE_FF, 0.3);

/**
 * True airspeed error time constant
 *
 * 
 *
 * @group FW Longitudinal Control
 * @decimal 2
 * @increment 0.5
 * @min 2.0
 */
PARAM_DEFINE_FLOAT(FW_T_TAS_TC, 5.0);

/**
 * Specific total energy rate first order filter time constant
 *
 * This filter is applied to the specific total energy rate used for throttle damping.
 *
 * @group FW Longitudinal Control
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @max 2
 */
PARAM_DEFINE_FLOAT(FW_T_STE_R_TC, 0.4);

/**
 * Specific total energy balance rate feedforward gain
 *
 * 
 *
 * @group FW Longitudinal Control
 * @decimal 2
 * @increment 0.01
 * @min 0.5
 * @max 3
 */
PARAM_DEFINE_FLOAT(FW_T_SEB_R_FF, 1.0);

/**
 * Wind-based airspeed scaling factor
 *
 * Multiplying this factor with the current absolute wind estimate gives the airspeed offset
 * added to the minimum airspeed setpoint limit. This helps to make the
 * system more robust against disturbances (turbulence) in high wind.
 *
 * @group FW Longitudinal Control
 * @decimal 2
 * @increment 0.01
 * @min 0
 */
PARAM_DEFINE_FLOAT(FW_WIND_ARSP_SC, 0.0);

/**
 * Maximum descent rate
 *
 * 
 *
 * @group FW Longitudinal Control
 * @decimal 1
 * @increment 0.5
 * @min 1.0
 * @max 15.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(FW_T_SINK_MAX, 5.0);

/**
 * Trigger acceleration threshold
 *
 * Launch is detected when the norm of body acceleration is above FW_LAUN_AC_THLD for FW_LAUN_AC_T seconds.
 *
 * @group FW Auto Takeoff
 * @decimal 1
 * @increment 0.5
 * @min 0
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(FW_LAUN_AC_THLD, 30.0);

/**
 * Trigger time
 *
 * Launch is detected when the norm of body acceleration is above FW_LAUN_AC_THLD for FW_LAUN_AC_T seconds.
 *
 * @group FW Auto Takeoff
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @max 5.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(FW_LAUN_AC_T, 0.05);

/**
 * Motor delay
 *
 * Start the motor(s) this amount of seconds after launch is detected.
 *
 * @group FW Auto Takeoff
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @max 10.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(FW_LAUN_MOT_DEL, 0.0);

/**
 * Runway takeoff with landing gear
 *
 * 
 *
 * @group Runway Takeoff
 * @boolean
 */
PARAM_DEFINE_INT32(RWTO_TKOFF, 0);

/**
 * Throttle during runway takeoff
 *
 * 
 *
 * @group Runway Takeoff
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 * @unit norm
 */
PARAM_DEFINE_FLOAT(RWTO_MAX_THR, 1.0);

/**
 * Pitch setpoint during taxi / before rotation
 *
 * Pitch setpoint during taxi / before takeoff rotation airspeed is reached
 * 
 * A taildragger with steerable wheel might need to pitch up
 * a little to keep its wheel on the ground before airspeed
 * to takeoff is reached.
 *
 * @group Runway Takeoff
 * @decimal 1
 * @increment 0.5
 * @min -10.0
 * @max 20.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(RWTO_PSP, 0.0);

/**
 * Throttle ramp up time for runway takeoff
 *
 * 
 *
 * @group Runway Takeoff
 * @decimal 2
 * @increment 0.1
 * @min 1.0
 * @max 15.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(RWTO_RAMP_TIME, 2.0);

/**
 * Enable yaw stick nudging during runway ground roll
 *
 * Enable use of yaw stick for nudging the wheel during runway ground roll
 * 
 * This is useful when map, GNSS, or yaw errors on ground are misaligned with what the operator intends for takeoff course.
 * Particularly useful for skinny runways or if the wheel servo is a bit off trim.
 *
 * @group Runway Takeoff
 * @boolean
 */
PARAM_DEFINE_INT32(RWTO_NUDGE, 1);

/**
 * Takeoff rotation airspeed
 *
 * The calibrated airspeed threshold during the takeoff ground roll when the plane should start rotating (pitching up).
 * Must be less than the takeoff airspeed, will otherwise be capped at the takeoff airspeed (see FW_TKO_AIRSPD).
 * 
 * If set <= 0.0, defaults to 0.9 * takeoff airspeed (see FW_TKO_AIRSPD)
 *
 * @group Runway Takeoff
 * @decimal 1
 * @increment 0.1
 * @min -1.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(RWTO_ROT_AIRSPD, -1.0);

/**
 * Takeoff rotation time
 *
 * This is the time desired to linearly ramp in takeoff pitch constraints during the takeoff rotation
 *
 * @group Runway Takeoff
 * @decimal 1
 * @increment 0.1
 * @min 0.1
 * @unit s
 */
PARAM_DEFINE_FLOAT(RWTO_ROT_TIME, 1.0);

/**
 * Maximum landing slope angle
 *
 * Typically the desired landing slope angle when landing configuration (flaps, airspeed) is enabled.
 * Set this value within the vehicle's performance limits.
 *
 * @group FW Auto Landing
 * @decimal 1
 * @increment 0.5
 * @min 1.0
 * @max 45.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(FW_LND_ANG, 5.0);

/**
 * Landing flare altitude (relative to landing altitude)
 *
 * NOTE: max(FW_LND_FLALT, FW_LND_FL_TIME * |z-velocity|) is taken as the flare altitude
 *
 * @group FW Auto Landing
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(FW_LND_FLALT, 0.5);

/**
 * Use terrain estimation during landing
 *
 * This is critical for detecting when to flare, and should be enabled if possible.
 * 
 * If enabled and no measurement is found within a given timeout, the landing waypoint altitude will be used OR the landing
 * will be aborted, depending on the criteria set in FW_LND_ABORT.
 * 
 * If disabled, FW_LND_ABORT terrain based criteria are ignored.
 *
 * @group FW Auto Landing
 * @value 0 Disable the terrain estimate
 * @value 1 Use the terrain estimate to trigger the flare (only)
 * @value 2 Calculate landing glide slope relative to the terrain estimate
 * @min 0
 * @max 2
 */
PARAM_DEFINE_INT32(FW_LND_USETER, 1);

/**
 * Early landing configuration deployment
 *
 * Allows to deploy the landing configuration (flaps, landing airspeed, etc.) already in
 * the loiter-down waypoint before the final approach.
 * Otherwise is enabled only in the final approach.
 *
 * @group FW Auto Landing
 * @boolean
 */
PARAM_DEFINE_INT32(FW_LND_EARLYCFG, 0);

/**
 * Flare, minimum pitch
 *
 * Minimum pitch during landing flare.
 *
 * @group FW Auto Landing
 * @decimal 1
 * @increment 0.5
 * @min -5
 * @max 15.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(FW_LND_FL_PMIN, 2.5);

/**
 * Flare, maximum pitch
 *
 * Maximum pitch during landing flare.
 *
 * @group FW Auto Landing
 * @decimal 1
 * @increment 0.5
 * @min 0
 * @max 45.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(FW_LND_FL_PMAX, 15.0);

/**
 * Landing airspeed
 *
 * The calibrated airspeed setpoint during landing.
 * 
 * If set <= 0, landing airspeed = FW_AIRSPD_MIN by default.
 *
 * @group FW Auto Landing
 * @decimal 1
 * @increment 0.1
 * @min -1.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(FW_LND_AIRSPD, -1.0);

/**
 * Altitude time constant factor for landing and low-height flight
 *
 * The TECS altitude time constant (FW_T_ALT_TC) is multiplied by this value.
 *
 * @group FW Auto Landing
 * @decimal 1
 * @increment 0.1
 * @min 0.2
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(FW_LND_THRTC_SC, 1.0);

/**
 * Landing flare time
 *
 * Multiplied by the descent rate to calculate a dynamic altitude at which
 * to trigger the flare.
 * 
 * NOTE: max(FW_LND_FLALT, FW_LND_FL_TIME * descent rate) is taken as the flare altitude
 *
 * @group FW Auto Landing
 * @decimal 1
 * @increment 0.1
 * @min 0.1
 * @max 5.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(FW_LND_FL_TIME, 1.0);

/**
 * Landing touchdown time (since flare start)
 *
 * This is the time after the start of flaring that we expect the vehicle to touch the runway.
 * At this time, a 0.5s clamp down ramp will engage, constraining the pitch setpoint to RWTO_PSP.
 * If enabled, ensure that RWTO_PSP is configured appropriately for full gear contact on ground roll.
 * 
 * Set to -1.0 to disable touchdown clamping. E.g. it may not be desirable to clamp on belly landings.
 * 
 * The touchdown time will be constrained to be greater than or equal to the flare time (FW_LND_FL_TIME).
 *
 * @group FW Auto Landing
 * @decimal 1
 * @increment 0.1
 * @min -1.0
 * @max 5.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(FW_LND_TD_TIME, -1.0);

/**
 * Landing flare sink rate
 *
 * TECS will attempt to control the aircraft to this sink rate via pitch angle (throttle killed during flare)
 *
 * @group FW Auto Landing
 * @decimal 2
 * @increment 0.1
 * @min 0.0
 * @max 2
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(FW_LND_FL_SINK, 0.25);

/**
 * Maximum lateral position offset for the touchdown point
 *
 * 
 *
 * @group FW Auto Landing
 * @decimal 1
 * @increment 1
 * @min 0.0
 * @max 10.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(FW_LND_TD_OFF, 3.0);

/**
 * Landing touchdown nudging option
 *
 * Approach angle nudging: shifts the touchdown point laterally while keeping the approach entrance point constant
 * Approach path nudging: shifts the touchdown point laterally along with the entire approach path
 * 
 * This is useful for manually adjusting the landing point in real time when map or GNSS errors cause an offset from the
 * desired landing vector. Nudging is done with yaw stick, constrained to FW_LND_TD_OFF (in meters) and the direction is
 * relative to the vehicle heading (stick deflection to the right = land point moves to the right as seen by the vehicle).
 *
 * @group FW Auto Landing
 * @value 0 Disable nudging
 * @value 1 Nudge approach angle
 * @value 2 Nudge approach path
 * @min 0
 * @max 2
 */
PARAM_DEFINE_INT32(FW_LND_NUDGE, 2);

/**
 * Bit mask to set the automatic landing abort conditions
 *
 * Terrain estimation:
 * bit 0: Abort if terrain is not found
 * bit 1: Abort if terrain times out (after a first successful measurement)
 * 
 * The last estimate is always used as ground, whether the last valid measurement or the land waypoint, depending on the
 * selected abort criteria, until an abort condition is entered. If FW_LND_USETER == 0, these bits are ignored.
 * 
 * TODO: Extend automatic abort conditions
 * e.g. glide slope tracking error (horizontal and vertical)
 *
 * @group FW Auto Landing
 * @bit 0 Abort if terrain is not found (only applies to mission landings)
 * @bit 1 Abort if terrain times out (after a first successful measurement)
 * @min 0
 * @max 3
 * @min 0
 * @max 3
 */
PARAM_DEFINE_INT32(FW_LND_ABORT, 3);

/**
 * Flaps setting during landing
 *
 * Sets a fraction of full flaps during landing.
 * Also applies to flaperons if enabled in the mixer/allocation.
 *
 * @group FW Auto Landing
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 * @unit norm
 */
PARAM_DEFINE_FLOAT(FW_FLAPS_LND_SCL, 1.0);

/**
 * Spoiler landing setting
 *
 * 
 *
 * @group FW Auto Landing
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 * @unit norm
 */
PARAM_DEFINE_FLOAT(FW_SPOILERS_LND, 0.0);

/**
 * Minimum pitch during takeoff
 *
 * 
 *
 * @group FW Auto Takeoff
 * @decimal 1
 * @increment 0.5
 * @min -5.0
 * @max 80.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(FW_TKO_PITCH_MIN, 10.0);

/**
 * Takeoff Airspeed
 *
 * The calibrated airspeed setpoint during the takeoff climbout.
 * 
 * If set <= 0, FW_AIRSPD_MIN will be set by default.
 *
 * @group FW Auto Takeoff
 * @decimal 1
 * @increment 0.1
 * @min -1.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(FW_TKO_AIRSPD, -1.0);

/**
 * Fixed-wing launch detection
 *
 * Enables automatic launch detection based on measured acceleration. Use for hand- or catapult-launched vehicles.
 * Not compatible with runway takeoff.
 *
 * @group FW Auto Takeoff
 * @boolean
 */
PARAM_DEFINE_INT32(FW_LAUN_DETCN_ON, 0);

/**
 * Control surface launch delay
 *
 * Locks control surfaces during pre-launch (armed) and until this time since launch has passed.
 * Only affects control surfaces that have corresponding flag set, and not active for runway takeoff.
 * Set to 0 to disable any surface locking after arming.
 *
 * @group FW Auto Takeoff
 * @decimal 1
 * @increment 0.1
 * @min 0.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(FW_LAUN_CS_LK_DY, 0.0);

/**
 * Flaps setting during take-off
 *
 * Sets a fraction of full flaps during take-off.
 * Also applies to flaperons if enabled in the mixer/allocation.
 *
 * @group FW Auto Takeoff
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 * @unit norm
 */
PARAM_DEFINE_FLOAT(FW_FLAPS_TO_SCL, 0.0);

/**
 * Minimum pitch angle setpoint
 *
 * Applies in any altitude controlled flight mode.
 *
 * @group FW General
 * @decimal 1
 * @increment 0.5
 * @min -60.0
 * @max 0.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(FW_P_LIM_MIN, -30.0);

/**
 * Maximum pitch angle setpoint
 *
 * Applies in any altitude controlled flight mode.
 *
 * @group FW General
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @max 80.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(FW_P_LIM_MAX, 30.0);

/**
 * Maximum roll angle setpoint
 *
 * Applies in any altitude controlled flight mode.
 *
 * @group FW General
 * @decimal 1
 * @increment 0.5
 * @min 35.0
 * @max 75.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(FW_R_LIM, 50.0);

/**
 * Throttle limit max
 *
 * Applies in any altitude controlled flight mode.
 * Should be set accordingly to achieve FW_T_CLMB_MAX.
 *
 * @group FW General
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 * @unit norm
 */
PARAM_DEFINE_FLOAT(FW_THR_MAX, 1.0);

/**
 * Throttle limit min
 *
 * Applies in any altitude controlled flight mode.
 * Usually set to 0 but can be increased to prevent the motor from stopping when
 * descending, which can increase achievable descent rates.
 *
 * @group FW General
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 * @unit norm
 */
PARAM_DEFINE_FLOAT(FW_THR_MIN, 0.0);

/**
 * Idle throttle
 *
 * This is the minimum throttle while on the ground ("landed") in auto modes.
 *
 * @group FW General
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 * @unit norm
 */
PARAM_DEFINE_FLOAT(FW_THR_IDLE, 0.0);

/**
 * Speed <--> Altitude weight
 *
 * Adjusts the amount of weighting that the pitch control
 * applies to speed vs height errors.
 * 0 -> control height only
 * 2 -> control speed only (gliders)
 *
 * @group FW General
 * @decimal 1
 * @increment 1.0
 * @min 0.0
 * @max 2.0
 */
PARAM_DEFINE_FLOAT(FW_T_SPDWEIGHT, 1.0);

/**
 * Custom stick configuration
 *
 * Applies in manual Position and Altitude flight modes.
 *
 * @group FW General
 * @bit 0 Alternative stick configuration (height rate on throttle stick, airspeed on pitch stick)
 * @bit 1 Enable airspeed setpoint via sticks in altitude and position flight mode
 * @min 0
 * @max 3
 * @min 0
 * @max 3
 */
PARAM_DEFINE_INT32(FW_POS_STK_CONF, 2);

/**
 * Default target climbrate
 *
 * In auto modes: default climb rate output by controller to achieve altitude setpoints.
 * In manual modes: maximum climb rate setpoint.
 *
 * @group FW General
 * @decimal 2
 * @increment 0.01
 * @min 0.1
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(FW_T_CLMB_R_SP, 3.0);

/**
 * Default target sinkrate
 *
 * In auto modes: default sink rate output by controller to achieve altitude setpoints.
 * In manual modes: maximum sink rate setpoint.
 *
 * @group FW General
 * @decimal 2
 * @increment 0.01
 * @min 0.1
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(FW_T_SINK_R_SP, 2.0);

/**
 * GPS failure loiter time
 *
 * The time the system should do open loop loiter and wait for GPS recovery
 * before it starts descending. Set to 0 to disable. Roll angle is set to FW_GPSF_R.
 * Does only apply for fixed-wing vehicles or VTOLs with NAV_FORCE_VT set to 0.
 *
 * @group FW General
 * @min 0
 * @unit s
 */
PARAM_DEFINE_INT32(FW_GPSF_LT, 30);

/**
 * GPS failure fixed roll angle
 *
 * Roll angle in GPS failure loiter mode.
 *
 * @group FW General
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @max 60.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(FW_GPSF_R, 15.0);

/**
 * The aircraft's wing span (length from tip to tip)
 *
 * This is used for limiting the roll setpoint near the ground. (if multiple wings, take the longest span)
 *
 * @group FW General
 * @decimal 1
 * @increment 0.1
 * @min 0.1
 * @unit m
 */
PARAM_DEFINE_FLOAT(FW_WING_SPAN, 3.0);

/**
 * Height (AGL) of the wings when the aircraft is on the ground
 *
 * This is used to constrain a minimum altitude below which we keep wings level to avoid wing tip strike. It's safer
 * to give a slight margin here (> 0m)
 *
 * @group FW General
 * @decimal 1
 * @increment 1
 * @min 0.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(FW_WING_HEIGHT, 0.5);

/**
 * NPFG period
 *
 * Period of NPFG control law.
 *
 * @group FW NPFG Control
 * @decimal 1
 * @increment 0.1
 * @min 1.0
 * @max 100.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(NPFG_PERIOD, 10.0);

/**
 * NPFG damping ratio
 *
 * Damping ratio of NPFG control law.
 *
 * @group FW NPFG Control
 * @decimal 2
 * @increment 0.01
 * @min 0.1
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(NPFG_DAMPING, 0.7);

/**
 * Enable automatic lower bound on the NPFG period
 *
 * Avoids limit cycling from a too aggressively tuned period/damping combination.
 * If false, also disables upper bound NPFG_PERIOD_UB.
 *
 * @group FW NPFG Control
 * @boolean
 */
PARAM_DEFINE_INT32(NPFG_LB_PERIOD, 1);

/**
 * Enable automatic upper bound on the NPFG period
 *
 * Adapts period to maintain track keeping in variable winds and path curvature.
 *
 * @group FW NPFG Control
 * @boolean
 */
PARAM_DEFINE_INT32(NPFG_UB_PERIOD, 1);

/**
 * Roll time constant
 *
 * Time constant of roll controller command / response, modeled as first order delay.
 * Used to determine lower period bound. Setting zero disables automatic period bounding.
 *
 * @group FW NPFG Control
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @max 2.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(NPFG_ROLL_TC, 0.5);

/**
 * NPFG switch distance multiplier
 *
 * Multiplied by the track error boundary to determine when the aircraft switches
 * to the next waypoint and/or path segment. Should be less than 1.
 *
 * @group FW NPFG Control
 * @decimal 2
 * @increment 0.01
 * @min 0.1
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(NPFG_SW_DST_MLT, 0.32);

/**
 * Period safety factor
 *
 * Multiplied by period for conservative minimum period bounding (when period lower
 * bounding is enabled). 1.0 bounds at marginal stability.
 *
 * @group FW NPFG Control
 * @decimal 1
 * @increment 0.1
 * @min 1.0
 * @max 10.0
 */
PARAM_DEFINE_FLOAT(NPFG_PERIOD_SF, 1.5);

/**
 * Use airspeed for control
 *
 * If set to 1, the airspeed measurement data, if valid, is used in the following controllers:
 * - Rate controller: output scaling
 * - Attitude controller: coordinated turn controller
 * - Position controller: airspeed setpoint tracking, takeoff logic
 * - VTOL: transition logic
 *
 * @group FW Rate Control
 * @boolean
 */
PARAM_DEFINE_INT32(FW_USE_AIRSPD, 1);

/**
 * Pitch rate proportional gain
 *
 * 
 *
 * @group FW Rate Control
 * @decimal 3
 * @increment 0.005
 * @min 0.0
 * @max 10
 * @unit %/rad/s
 */
PARAM_DEFINE_FLOAT(FW_PR_P, 0.08);

/**
 * Pitch rate derivative gain
 *
 * Pitch rate differential gain.
 *
 * @group FW Rate Control
 * @decimal 3
 * @increment 0.005
 * @min 0.0
 * @max 10
 * @unit %/rad/s
 */
PARAM_DEFINE_FLOAT(FW_PR_D, 0.0);

/**
 * Pitch rate integrator gain
 *
 * 
 *
 * @group FW Rate Control
 * @decimal 3
 * @increment 0.005
 * @min 0.0
 * @max 10
 * @unit %/rad
 */
PARAM_DEFINE_FLOAT(FW_PR_I, 0.1);

/**
 * Pitch rate integrator limit
 *
 * 
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(FW_PR_IMAX, 0.4);

/**
 * Roll rate proportional gain
 *
 * 
 *
 * @group FW Rate Control
 * @decimal 3
 * @increment 0.005
 * @min 0.0
 * @max 10
 * @unit %/rad/s
 */
PARAM_DEFINE_FLOAT(FW_RR_P, 0.05);

/**
 * Roll rate derivative gain
 *
 * 
 *
 * @group FW Rate Control
 * @decimal 3
 * @increment 0.005
 * @min 0.0
 * @max 10
 * @unit %/rad/s
 */
PARAM_DEFINE_FLOAT(FW_RR_D, 0.0);

/**
 * Roll rate integrator gain
 *
 * 
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @max 10
 * @unit %/rad
 */
PARAM_DEFINE_FLOAT(FW_RR_I, 0.1);

/**
 * Roll integrator limit
 *
 * 
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(FW_RR_IMAX, 0.2);

/**
 * Yaw rate proportional gain
 *
 * 
 *
 * @group FW Rate Control
 * @decimal 3
 * @increment 0.005
 * @min 0.0
 * @max 10
 * @unit %/rad/s
 */
PARAM_DEFINE_FLOAT(FW_YR_P, 0.05);

/**
 * Yaw rate derivative gain
 *
 * 
 *
 * @group FW Rate Control
 * @decimal 3
 * @increment 0.005
 * @min 0.0
 * @max 10
 * @unit %/rad/s
 */
PARAM_DEFINE_FLOAT(FW_YR_D, 0.0);

/**
 * Yaw rate integrator gain
 *
 * 
 *
 * @group FW Rate Control
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @max 10
 * @unit %/rad
 */
PARAM_DEFINE_FLOAT(FW_YR_I, 0.1);

/**
 * Yaw rate integrator limit
 *
 * 
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(FW_YR_IMAX, 0.2);

/**
 * Roll rate feed forward
 *
 * Direct feed forward from rate setpoint to control surface output.
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @max 10.0
 * @unit %/rad/s
 */
PARAM_DEFINE_FLOAT(FW_RR_FF, 0.5);

/**
 * Pitch rate feed forward
 *
 * Direct feed forward from rate setpoint to control surface output
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @max 10.0
 * @unit %/rad/s
 */
PARAM_DEFINE_FLOAT(FW_PR_FF, 0.5);

/**
 * Yaw rate feed forward
 *
 * Direct feed forward from rate setpoint to control surface output
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @max 10.0
 * @unit %/rad/s
 */
PARAM_DEFINE_FLOAT(FW_YR_FF, 0.3);

/**
 * Acro body roll max rate setpoint
 *
 * 
 *
 * @group FW Rate Control
 * @min 10
 * @max 720
 * @unit deg
 */
PARAM_DEFINE_FLOAT(FW_ACRO_X_MAX, 90);

/**
 * Acro body pitch max rate setpoint
 *
 * 
 *
 * @group FW Rate Control
 * @min 10
 * @max 720
 * @unit deg
 */
PARAM_DEFINE_FLOAT(FW_ACRO_Y_MAX, 90);

/**
 * Acro body yaw max rate setpoint
 *
 * 
 *
 * @group FW Rate Control
 * @min 10
 * @max 720
 * @unit deg
 */
PARAM_DEFINE_FLOAT(FW_ACRO_Z_MAX, 45);

/**
 * Enable throttle scale by battery level
 *
 * This compensates for voltage drop of the battery over time by attempting to
 * normalize performance across the operating range of the battery.
 *
 * @group FW Rate Control
 * @boolean
 */
PARAM_DEFINE_INT32(FW_BAT_SCALE_EN, 0);

/**
 * Enable airspeed scaling
 *
 * This enables a logic that automatically adjusts the output of the rate controller to take
 * into account the real torque produced by an aerodynamic control surface given
 * the current deviation from the trim airspeed (FW_AIRSPD_TRIM).
 * 
 * Enable when using aerodynamic control surfaces (e.g.: plane)
 * Disable when using rotor wings (e.g.: autogyro)
 *
 * @group FW Rate Control
 * @boolean
 */
PARAM_DEFINE_INT32(FW_ARSP_SCALE_EN, 1);

/**
 * Roll trim increment at minimum airspeed
 *
 * This increment is added to TRIM_ROLL when airspeed is FW_AIRSPD_MIN.
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.01
 * @min -0.5
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(FW_DTRIM_R_VMIN, 0.0);

/**
 * Pitch trim increment at minimum airspeed
 *
 * This increment is added to TRIM_PITCH when airspeed is FW_AIRSPD_MIN.
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.01
 * @min -0.5
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(FW_DTRIM_P_VMIN, 0.0);

/**
 * Yaw trim increment at minimum airspeed
 *
 * This increment is added to TRIM_YAW when airspeed is FW_AIRSPD_MIN.
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.01
 * @min -0.5
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(FW_DTRIM_Y_VMIN, 0.0);

/**
 * Roll trim increment at maximum airspeed
 *
 * This increment is added to TRIM_ROLL when airspeed is FW_AIRSPD_MAX.
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.01
 * @min -0.5
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(FW_DTRIM_R_VMAX, 0.0);

/**
 * Pitch trim increment at maximum airspeed
 *
 * This increment is added to TRIM_PITCH when airspeed is FW_AIRSPD_MAX.
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.01
 * @min -0.5
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(FW_DTRIM_P_VMAX, 0.0);

/**
 * Yaw trim increment at maximum airspeed
 *
 * This increment is added to TRIM_YAW when airspeed is FW_AIRSPD_MAX.
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.01
 * @min -0.5
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(FW_DTRIM_Y_VMAX, 0.0);

/**
 * Manual roll scale
 *
 * Scale factor applied to the desired roll actuator command in full manual mode. This parameter allows
 * to adjust the throws of the control surfaces.
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 * @unit norm
 */
PARAM_DEFINE_FLOAT(FW_MAN_R_SC, 1.0);

/**
 * Manual pitch scale
 *
 * Scale factor applied to the desired pitch actuator command in full manual mode. This parameter allows
 * to adjust the throws of the control surfaces.
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @unit norm
 */
PARAM_DEFINE_FLOAT(FW_MAN_P_SC, 1.0);

/**
 * Manual yaw scale
 *
 * Scale factor applied to the desired yaw actuator command in full manual mode. This parameter allows
 * to adjust the throws of the control surfaces.
 *
 * @group FW Rate Control
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @unit norm
 */
PARAM_DEFINE_FLOAT(FW_MAN_Y_SC, 1.0);

/**
 * Roll control to yaw control feedforward gain
 *
 * This gain can be used to counteract the "adverse yaw" effect for fixed wings.
 * When the plane enters a roll it will tend to yaw the nose out of the turn.
 * This gain enables the use of a yaw actuator to counteract this effect.
 *
 * @group FW Rate Control
 * @decimal 1
 * @increment 0.01
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(FW_RLL_TO_YAW_FF, 0.0);

/**
 * Spoiler input in manual flight
 *
 * Chose source for manual setting of spoilers in manual flight modes.
 *
 * @group FW Rate Control
 * @value 0 Disabled
 * @value 1 Flaps channel
 * @value 2 Aux1
 * @value 3 Aux2
 * @value 4 Aux3
 * @value 5 Aux4
 * @value 6 Aux5
 */
PARAM_DEFINE_INT32(FW_SPOILERS_MAN, 0);

/**
 * Flap input in manual flight
 *
 * Chose source for manual setting of flaps in manual flight modes.
 *
 * @group FW Rate Control
 * @value 0 Disabled
 * @value 1 Aux1
 * @value 2 Aux2
 * @value 3 Aux3
 * @value 4 Aux4
 * @value 5 Aux5
 * @value 6 Flaps channel
 */
PARAM_DEFINE_INT32(FW_FLAPS_MAN, 0);

/**
 * Enable yaw rate controller in Acro
 *
 * If this parameter is set to 1, the yaw rate controller is enabled in Fixed-wing Acro mode.
 * Otherwise the pilot commands directly the yaw actuator.
 * It is disabled by default because an active yaw rate controller will fight against the
 * natural turn coordination of the plane.
 *
 * @group FW Rate Control
 * @boolean
 */
PARAM_DEFINE_INT32(FW_ACRO_YAW_EN, 0);

/**
 * Mount input mode
 *
 * This is the protocol used between the ground station and the autopilot.
 * 
 * Recommended is Auto, RC only or MAVLink gimbal protocol v2.
 * The rest will be deprecated.
 *
 * @group Mount
 * @value -1 DISABLED
 * @value 0 Auto (RC and MAVLink gimbal protocol v2)
 * @value 1 RC
 * @value 2 MAVLINK_ROI (protocol v1, to be deprecated)
 * @value 3 MAVLINK_DO_MOUNT (protocol v1, to be deprecated)
 * @value 4 MAVlink gimbal protocol v2
 * @min -1
 * @max 4
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MNT_MODE_IN, -1);

/**
 * Mount output mode
 *
 * This is the protocol used between the autopilot and a connected gimbal.
 * 
 * Recommended is the MAVLink gimbal protocol v2 if the gimbal supports it.
 *
 * @group Mount
 * @value 0 AUX
 * @value 1 MAVLink gimbal protocol v1
 * @value 2 MAVLink gimbal protocol v2
 * @min 0
 * @max 2
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MNT_MODE_OUT, 0);

/**
 * Mavlink System ID of the mount
 *
 * If MNT_MODE_OUT is MAVLink gimbal protocol v1, mount configure/control commands will be sent with this target ID.
 *
 * @group Mount
 */
PARAM_DEFINE_INT32(MNT_MAV_SYSID, 1);

/**
 * Mavlink Component ID of the mount
 *
 * If MNT_MODE_OUT is MAVLink protocol v2, mount configure/control commands will be sent with this component ID.
 *
 * @group Mount
 */
PARAM_DEFINE_INT32(MNT_MAV_COMPID, 154);

/**
 * Auxiliary channel to control roll (in AUX input or manual mode)
 *
 * 
 *
 * @group Mount
 * @value 0 Disable
 * @value 1 AUX1
 * @value 2 AUX2
 * @value 3 AUX3
 * @value 4 AUX4
 * @value 5 AUX5
 * @value 6 AUX6
 * @min 0
 * @max 6
 */
PARAM_DEFINE_INT32(MNT_MAN_ROLL, 0);

/**
 * Auxiliary channel to control pitch (in AUX input or manual mode)
 *
 * 
 *
 * @group Mount
 * @value 0 Disable
 * @value 1 AUX1
 * @value 2 AUX2
 * @value 3 AUX3
 * @value 4 AUX4
 * @value 5 AUX5
 * @value 6 AUX6
 * @min 0
 * @max 6
 */
PARAM_DEFINE_INT32(MNT_MAN_PITCH, 0);

/**
 * Auxiliary channel to control yaw (in AUX input or manual mode)
 *
 * 
 *
 * @group Mount
 * @value 0 Disable
 * @value 1 AUX1
 * @value 2 AUX2
 * @value 3 AUX3
 * @value 4 AUX4
 * @value 5 AUX5
 * @value 6 AUX6
 * @min 0
 * @max 6
 */
PARAM_DEFINE_INT32(MNT_MAN_YAW, 0);

/**
 * Stabilize the mount
 *
 * Set to true for servo gimbal, false for passthrough.
 * This is required for a gimbal which is not capable of stabilizing itself
 * and relies on the IMU's attitude estimation.
 *
 * @group Mount
 * @value 0 Disable
 * @value 1 Stabilize all axis
 * @value 2 Stabilize yaw for absolute/lock mode.
 * @value 3 Stabilize pitch for absolute/lock mode.
 */
PARAM_DEFINE_INT32(MNT_DO_STAB, 0);

/**
 * Max positive angle of pitch setpoint (only in MNT_MODE_OUT=AUX)
 *
 * Use output driver settings to calibrate (e.g. PWM_CENT/_MIN/_MAX).
 *
 * @group Mount
 * @decimal 1
 * @unit deg
 */
PARAM_DEFINE_FLOAT(MNT_MAX_PITCH, 45.0);

/**
 * Min negative angle of pitch setpoint (only in MNT_MODE_OUT=AUX)
 *
 * Use output driver settings to calibrate (e.g. PWM_CENT/_MIN/_MAX).
 *
 * @group Mount
 * @decimal 1
 * @unit deg
 */
PARAM_DEFINE_FLOAT(MNT_MIN_PITCH, -45.0);

/**
 * Range of roll channel output (only in MNT_MODE_OUT=AUX)
 *
 * Use output driver settings to calibrate (e.g. PWM_CENT/_MIN/_MAX). Note that only symmetric angular ranges are supported.
 *
 * @group Mount
 * @decimal 1
 * @min 1.0
 * @max 720.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(MNT_RANGE_ROLL, 90.0);

/**
 * Range of yaw channel output (only in MNT_MODE_OUT=AUX)
 *
 * Use output driver settings to calibrate (e.g. PWM_CENT/_MIN/_MAX). Note that only symmetric angular ranges are supported.
 *
 * @group Mount
 * @decimal 1
 * @min 1.0
 * @max 720.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(MNT_RANGE_YAW, 360.0);

/**
 * Angular pitch rate for manual input in degrees/second
 *
 * Full stick input [-1..1] translats to [-pitch rate..pitch rate].
 *
 * @group Mount
 * @min 1.0
 * @max 90.0
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(MNT_RATE_PITCH, 30.0);

/**
 * Angular yaw rate for manual input in degrees/second
 *
 * Full stick input [-1..1] translats to [-yaw rate..yaw rate].
 *
 * @group Mount
 * @min 1.0
 * @max 90.0
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(MNT_RATE_YAW, 30.0);

/**
 * Time constant for open-loop AUX gimbal control
 *
 * Alpha filter time constant defining the convergence rate (in seconds) for open-loop AUX mount control
 * 
 * Use when no angular position feedback is available.
 * With MNT_MODE_OUT set to AUX, the mount operates in open-loop and directly commands the servo output.
 * Parameters must be tuned for the specific servo to approximate its speed and response.
 *
 * @group Mount
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(MNT_TAU, 0.3);

/**
 * Input mode for RC gimbal input
 *
 * 
 *
 * @group Mount
 * @value 0 Angle
 * @value 1 Angular rate
 * @min 0
 * @max 1
 */
PARAM_DEFINE_INT32(MNT_RC_IN_MODE, 1);

/**
 * Pitch minimum when landed
 *
 * 
 *
 * @group Mount
 * @decimal 1
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(MNT_LND_P_MIN, -90.0);

/**
 * Pitch maximum when landed
 *
 * 
 *
 * @group Mount
 * @decimal 1
 * @min -90.0
 * @max 90.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(MNT_LND_P_MAX, 90.0);

/**
 * IMU gyro auto calibration enable
 *
 * 
 *
 * @group Sensors
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(IMU_GYRO_CAL_EN, 1);

/**
 * IMU gyro FFT enable
 *
 * 
 *
 * @group Sensors
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(IMU_GYRO_FFT_EN, 0);

/**
 * IMU gyro FFT minimum frequency
 *
 * 
 *
 * @group Sensors
 * @min 1
 * @max 1000
 * @unit Hz
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(IMU_GYRO_FFT_MIN, 30.0);

/**
 * IMU gyro FFT maximum frequency
 *
 * 
 *
 * @group Sensors
 * @min 1
 * @max 1000
 * @unit Hz
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(IMU_GYRO_FFT_MAX, 150.0);

/**
 * IMU gyro FFT length
 *
 * 
 *
 * @group Sensors
 * @value 256 256
 * @value 512 512
 * @value 1024 1024
 * @value 4096 4096
 * @unit Hz
 * @reboot_required True
 */
PARAM_DEFINE_INT32(IMU_GYRO_FFT_LEN, 512);

/**
 * IMU gyro FFT SNR
 *
 * 
 *
 * @group Sensors
 * @min 1
 * @max 30
 */
PARAM_DEFINE_FLOAT(IMU_GYRO_FFT_SNR, 10.0);

/**
 * Total flight time in microseconds
 *
 * Total flight time of this autopilot. Higher 32 bits of the value.
 * Flight time in microseconds = (LND_FLIGHT_T_HI << 32) | LND_FLIGHT_T_LO.
 *
 * @group Land Detector
 * @category System
 * @volatile True
 * @min 0
 */
PARAM_DEFINE_INT32(LND_FLIGHT_T_HI, 0);

/**
 * Total flight time in microseconds
 *
 * Total flight time of this autopilot. Lower 32 bits of the value.
 * Flight time in microseconds = (LND_FLIGHT_T_HI << 32) | LND_FLIGHT_T_LO.
 *
 * @group Land Detector
 * @category System
 * @volatile True
 * @min 0
 */
PARAM_DEFINE_INT32(LND_FLIGHT_T_LO, 0);

/**
 * Fixed-wing land detector: Max horizontal velocity threshold
 *
 * Maximum horizontal velocity allowed in the landed state.
 * A factor of 0.7 is applied in case of airspeed-less flying
 * (either because no sensor is present or sensor data got invalid in flight).
 *
 * @group Land Detector
 * @decimal 1
 * @min 0.5
 * @max 20
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(LNDFW_VEL_XY_MAX, 5.0);

/**
 * Fixed-wing land detector: Max vertiacal velocity threshold
 *
 * Maximum vertical velocity allowed in the landed state.
 *
 * @group Land Detector
 * @decimal 1
 * @min 0.1
 * @max 20
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(LNDFW_VEL_Z_MAX, 1.0);

/**
 * Fixed-wing land detector: Max horizontal acceleration
 *
 * Maximum horizontal (x,y body axes) acceleration allowed in the landed state
 *
 * @group Land Detector
 * @decimal 1
 * @min 2
 * @max 30
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(LNDFW_XYACC_MAX, 8.0);

/**
 * Fixed-wing land detector: Max airspeed
 *
 * Maximum airspeed allowed in the landed state
 *
 * @group Land Detector
 * @decimal 1
 * @min 2
 * @max 30
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(LNDFW_AIRSPD_MAX, 6.0);

/**
 * Fixed-wing land detection trigger time
 *
 * Time the land conditions (speeds and acceleration) have to be satisfied to detect a landing.
 *
 * @group Land Detector
 * @decimal 1
 * @min 0.1
 * @unit s
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(LNDFW_TRIG_TIME, 2.0);

/**
 * Fixed-wing land detector: max rotational speed
 *
 * Maximum allowed norm of the angular velocity in the landed state.
 * Only used if neither airspeed nor groundspeed can be used for landing detection.
 *
 * @group Land Detector
 * @decimal 1
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(LNDFW_ROT_MAX, 0.5);

/**
 * Multicopter vertical velocity threshold
 *
 * Vertical velocity threshold to detect landing.
 * Has to be set lower than the expected minimal speed for landing,
 * which is either MPC_LAND_SPEED or MPC_LAND_CRWL.
 * This is enforced by an automatic check.
 *
 * @group Land Detector
 * @decimal 2
 * @min 0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(LNDMC_Z_VEL_MAX, 0.25);

/**
 * Multicopter max horizontal velocity
 *
 * Maximum horizontal velocity allowed in the landed state
 *
 * @group Land Detector
 * @decimal 1
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(LNDMC_XY_VEL_MAX, 1.5);

/**
 * Multicopter max rotational speed
 *
 * Maximum allowed norm of the angular velocity (roll, pitch) in the landed state.
 *
 * @group Land Detector
 * @decimal 1
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(LNDMC_ROT_MAX, 20.0);

/**
 * Ground effect altitude for multicopters
 *
 * The height above ground below which ground effect creates barometric altitude errors.
 * A negative value indicates no ground effect.
 *
 * @group Land Detector
 * @decimal 2
 * @min -1
 * @unit m
 */
PARAM_DEFINE_FLOAT(LNDMC_ALT_GND, 2.0);

/**
 * Landing target mode
 *
 * Configure the mode of the landing target. Depending on the mode, the landing target observations are used differently to aid position estimation.
 * 
 * Mode Moving:     The landing target may be moving around while in the field of view of the vehicle. Landing target measurements are not used to aid positioning.
 * Mode Stationary: The landing target is stationary. Measured velocity w.r.t. the landing target is used to aid velocity estimation.
 *
 * @group Landing Target Estimator
 * @value 0 Moving
 * @value 1 Stationary
 * @min 0
 * @max 1
 */
PARAM_DEFINE_INT32(LTEST_MODE, 0);

/**
 * Acceleration uncertainty
 *
 * Variance of acceleration measurement used for landing target position prediction.
 * Higher values results in tighter following of the measurements and more lenient outlier rejection
 *
 * @group Landing Target Estimator
 * @decimal 2
 * @min 0.01
 * @unit (m/s^2)^2
 */
PARAM_DEFINE_FLOAT(LTEST_ACC_UNC, 10.0);

/**
 * Landing target measurement uncertainty
 *
 * Variance of the landing target measurement from the driver.
 * Higher values result in less aggressive following of the measurement and a smoother output as well as fewer rejected measurements.
 *
 * @group Landing Target Estimator
 * @decimal 4
 * @unit tan(rad)^2
 */
PARAM_DEFINE_FLOAT(LTEST_MEAS_UNC, 0.005);

/**
 * Initial landing target position uncertainty
 *
 * Initial variance of the relative landing target position in x and y direction
 *
 * @group Landing Target Estimator
 * @decimal 3
 * @min 0.001
 * @unit m^2
 */
PARAM_DEFINE_FLOAT(LTEST_POS_UNC_IN, 0.1);

/**
 * Initial landing target velocity uncertainty
 *
 * Initial variance of the relative landing target velocity in x and y directions
 *
 * @group Landing Target Estimator
 * @decimal 3
 * @min 0.001
 * @unit (m/s)^2
 */
PARAM_DEFINE_FLOAT(LTEST_VEL_UNC_IN, 0.1);

/**
 * Scale factor for sensor measurements in sensor x axis
 *
 * Landing target x measurements are scaled by this factor before being used
 *
 * @group Landing Target Estimator
 * @decimal 3
 * @min 0.01
 */
PARAM_DEFINE_FLOAT(LTEST_SCALE_X, 1.0);

/**
 * Scale factor for sensor measurements in sensor y axis
 *
 * Landing target y measurements are scaled by this factor before being used
 *
 * @group Landing Target Estimator
 * @decimal 3
 * @min 0.01
 */
PARAM_DEFINE_FLOAT(LTEST_SCALE_Y, 1.0);

/**
 * Rotation of IRLOCK sensor relative to airframe
 *
 * Default orientation of Yaw 90°
 *
 * @group Landing Target Estimator
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @min -1
 * @max 40
 * @reboot_required True
 */
PARAM_DEFINE_INT32(LTEST_SENS_ROT, 2);

/**
 * X Position of IRLOCK in body frame (forward)
 *
 * 
 *
 * @group Landing Target Estimator
 * @decimal 3
 * @unit m
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(LTEST_SENS_POS_X, 0.0);

/**
 * Y Position of IRLOCK in body frame (right)
 *
 * 
 *
 * @group Landing Target Estimator
 * @decimal 3
 * @unit m
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(LTEST_SENS_POS_Y, 0.0);

/**
 * Z Position of IRLOCK in body frame (downward)
 *
 * 
 *
 * @group Landing Target Estimator
 * @decimal 3
 * @unit m
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(LTEST_SENS_POS_Z, 0.0);

/**
 * Enable stack checking
 *
 * 
 *
 * @group System
 * @boolean
 */
PARAM_DEFINE_INT32(SYS_STCK_EN, 1);

/**
 * Local position estimator enable (unsupported)
 *
 * 
 *
 * @group Local Position Estimator
 * @boolean
 */
PARAM_DEFINE_INT32(LPE_EN, 0);

/**
 * Optical flow z offset from center
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min -1
 * @max 1
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_FLW_OFF_Z, 0.0);

/**
 * Optical flow scale
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0.1
 * @max 10.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_FLW_SCALE, 1.3);

/**
 * Optical flow rotation (roll/pitch) noise gain
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0.1
 * @max 10.0
 * @unit m/s/rad
 */
PARAM_DEFINE_FLOAT(LPE_FLW_R, 7.0);

/**
 * Optical flow angular velocity noise gain
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0.0
 * @max 10.0
 * @unit m/rad
 */
PARAM_DEFINE_FLOAT(LPE_FLW_RR, 7.0);

/**
 * Optical flow minimum quality threshold
 *
 * 
 *
 * @group Local Position Estimator
 * @min 0
 * @max 255
 */
PARAM_DEFINE_INT32(LPE_FLW_QMIN, 150);

/**
 * Sonar z standard deviation
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0.01
 * @max 1
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_SNR_Z, 0.05);

/**
 * Sonar z offset from center of vehicle +down
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min -1
 * @max 1
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_SNR_OFF_Z, 0.0);

/**
 * Lidar z standard deviation
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0.01
 * @max 1
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_LDR_Z, 0.03);

/**
 * Lidar z offset from center of vehicle +down
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min -1
 * @max 1
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_LDR_OFF_Z, 0.0);

/**
 * Accelerometer xy noise density
 *
 * Data sheet noise density = 150ug/sqrt(Hz) = 0.0015 m/s^2/sqrt(Hz)
 * 
 * Larger than data sheet to account for tilt error.
 *
 * @group Local Position Estimator
 * @decimal 4
 * @min 1e-05
 * @max 2
 * @unit m/s^2/sqrt(Hz)
 */
PARAM_DEFINE_FLOAT(LPE_ACC_XY, 0.012);

/**
 * Accelerometer z noise density
 *
 * Data sheet noise density = 150ug/sqrt(Hz) = 0.0015 m/s^2/sqrt(Hz)
 *
 * @group Local Position Estimator
 * @decimal 4
 * @min 1e-05
 * @max 2
 * @unit m/s^2/sqrt(Hz)
 */
PARAM_DEFINE_FLOAT(LPE_ACC_Z, 0.02);

/**
 * Barometric pressure altitude z standard deviation
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 2
 * @min 0.01
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_BAR_Z, 3.0);

/**
 * GPS delay compensation
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 2
 * @min 0
 * @max 0.4
 * @unit s
 */
PARAM_DEFINE_FLOAT(LPE_GPS_DELAY, 0.29);

/**
 * Minimum GPS xy standard deviation, uses reported EPH if greater
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 2
 * @min 0.01
 * @max 5
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_GPS_XY, 1.0);

/**
 * Minimum GPS z standard deviation, uses reported EPV if greater
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 2
 * @min 0.01
 * @max 200
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_GPS_Z, 3.0);

/**
 * GPS xy velocity standard deviation
 *
 * EPV used if greater than this value.
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0.01
 * @max 2
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(LPE_GPS_VXY, 0.25);

/**
 * GPS z velocity standard deviation
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0.01
 * @max 2
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(LPE_GPS_VZ, 0.25);

/**
 * Max EPH allowed for GPS initialization
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 1.0
 * @max 5.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_EPH_MAX, 3.0);

/**
 * Max EPV allowed for GPS initialization
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 1.0
 * @max 5.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_EPV_MAX, 5.0);

/**
 * Vision delay compensation
 *
 * Set to zero to enable automatic compensation from measurement timestamps
 *
 * @group Local Position Estimator
 * @decimal 2
 * @min 0
 * @max 0.1
 * @unit s
 */
PARAM_DEFINE_FLOAT(LPE_VIS_DELAY, 0.1);

/**
 * Vision xy standard deviation
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0.01
 * @max 1
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_VIS_XY, 0.1);

/**
 * Vision z standard deviation
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0.01
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_VIS_Z, 0.5);

/**
 * Vicon position standard deviation
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 4
 * @min 0.0001
 * @max 1
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_VIC_P, 0.001);

/**
 * Position propagation noise density
 *
 * Increase to trust measurements more.
 * Decrease to trust model more.
 *
 * @group Local Position Estimator
 * @decimal 8
 * @min 0
 * @max 1
 * @unit m/s/sqrt(Hz)
 */
PARAM_DEFINE_FLOAT(LPE_PN_P, 0.1);

/**
 * Velocity propagation noise density
 *
 * Increase to trust measurements more.
 * Decrease to trust model more.
 *
 * @group Local Position Estimator
 * @decimal 8
 * @min 0
 * @max 1
 * @unit m/s^2/sqrt(Hz)
 */
PARAM_DEFINE_FLOAT(LPE_PN_V, 0.1);

/**
 * Accel bias propagation noise density
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 8
 * @min 0
 * @max 1
 * @unit m/s^3/sqrt(Hz)
 */
PARAM_DEFINE_FLOAT(LPE_PN_B, 0.001);

/**
 * Terrain random walk noise density
 *
 * Terrain random walk noise density, hilly/outdoor (0.1), flat/Indoor (0.001)
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0
 * @max 1
 * @unit m/s/sqrt(Hz)
 */
PARAM_DEFINE_FLOAT(LPE_PN_T, 0.001);

/**
 * Terrain maximum percent grade
 *
 * Terrain maximum percent grade, hilly/outdoor (100 = 45 deg), flat/Indoor (0 = 0 deg)
 * 
 * Used to calculate increased terrain random walk noise due to movement.
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0
 * @max 100
 * @unit %
 */
PARAM_DEFINE_FLOAT(LPE_T_MAX_GRADE, 1.0);

/**
 * Flow gyro high pass filter cut off frequency
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0
 * @max 2
 * @unit Hz
 */
PARAM_DEFINE_FLOAT(LPE_FGYRO_HP, 0.001);

/**
 * Enable fake global position for optical flow
 *
 * Enable publishing of a fake global position (e.g for AUTO missions using Optical Flow)
 * 
 * By initializing the estimator to the LPE_LAT/LON parameters when global information is unavailable
 *
 * @group Local Position Estimator
 * @min 0
 * @max 1
 */
PARAM_DEFINE_INT32(LPE_FAKE_ORIGIN, 0);

/**
 * Local origin latitude for nav w/o GPS
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 8
 * @min -90
 * @max 90
 * @unit deg
 */
PARAM_DEFINE_FLOAT(LPE_LAT, 47.397742);

/**
 * Local origin longitude for nav w/o GPS
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 8
 * @min -180
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_FLOAT(LPE_LON, 8.545594);

/**
 * Cut frequency for state publication
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 0
 * @min 5
 * @max 1000
 * @unit Hz
 */
PARAM_DEFINE_FLOAT(LPE_X_LP, 5.0);

/**
 * Required velocity xy standard deviation to publish position
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0.01
 * @max 1.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(LPE_VXY_PUB, 0.3);

/**
 * Required z standard deviation to publish altitude/ terrain
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 1
 * @min 0.3
 * @max 5.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_Z_PUB, 1.0);

/**
 * Land detector z standard deviation
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0.001
 * @max 10.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(LPE_LAND_Z, 0.03);

/**
 * Land detector xy velocity standard deviation
 *
 * 
 *
 * @group Local Position Estimator
 * @decimal 3
 * @min 0.01
 * @max 10.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(LPE_LAND_VXY, 0.05);

/**
 * Minimum landing target standard covariance
 *
 * Minimum landing target standard covariance, uses reported covariance if greater
 *
 * @group Local Position Estimator
 * @decimal 2
 * @min 0.0
 * @max 10
 * @unit m^2
 */
PARAM_DEFINE_FLOAT(LPE_LT_COV, 0.0001);

/**
 * Integer bitmask controlling data fusion
 *
 * Set bits in the following positions to enable:
 * 0 : Set to true to fuse GPS data if available, also requires GPS for altitude init
 * 1 : Set to true to fuse optical flow data if available
 * 2 : Set to true to fuse vision position
 * 3 : Set to true to enable landing target
 * 4 : Set to true to fuse land detector
 * 5 : Set to true to publish AGL as local position down component
 * 6 : Set to true to enable flow gyro compensation
 * 7 : Set to true to enable baro fusion
 * 
 * default (145 - GPS, baro, land detector)
 *
 * @group Local Position Estimator
 * @bit 0 fuse GPS, requires GPS for alt. init
 * @bit 1 fuse optical flow
 * @bit 2 fuse vision position
 * @bit 3 fuse landing target
 * @bit 4 fuse land detector
 * @bit 5 pub agl as lpos down
 * @bit 6 flow gyro compensation
 * @bit 7 fuse baro
 * @min 0
 * @max 255
 * @min 0
 * @max 255
 */
PARAM_DEFINE_INT32(LPE_FUSION, 145);

/**
 * UTC offset (unit: min)
 *
 * the difference in hours and minutes from Coordinated Universal Time (UTC) for a your place and date. for example, In case of South Korea(UTC+09:00), UTC offset is 540 min (9*60) refer to https://en.wikipedia.org/wiki/List_of_UTC_time_offsets
 *
 * @group SD Logging
 * @min -1000
 * @max 1000
 * @unit min
 */
PARAM_DEFINE_INT32(SDLOG_UTC_OFFSET, 0);

/**
 * Logging Mode
 *
 * Determines when to start and stop logging. By default, logging is started when arming the system, and stopped when disarming. Note: The logging start/end points that can be configured here only apply to SD logging. The mavlink backend is started/stopped independently of these points.
 *
 * @group SD Logging
 * @value 0 when armed until disarm (default)
 * @value 1 from boot until disarm
 * @value 2 from boot until shutdown
 * @value 3 while manual input AUX1 >30%
 * @value 4 from 1st armed until shutdown
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SDLOG_MODE, 0);

/**
 * Logging Backend (integer bitmask)
 *
 * If no logging is set the logger will not be started. Set bits true to enable: 0: SD card logging 1: Mavlink logging
 *
 * @group SD Logging
 * @bit 0 SD card logging
 * @bit 1 Mavlink logging
 * @min 0
 * @max 3
 * @min 0
 * @max 3
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SDLOG_BACKEND, 3);

/**
 * Battery-only Logging
 *
 * When enabled, logging will not start from boot if battery power is not detected (e.g. powered via USB on a test bench). This prevents extraneous flight logs from being created during bench testing. Note that this only applies to log-from-boot modes. This has no effect on arm-based modes.
 *
 * @group SD Logging
 * @boolean
 */
PARAM_DEFINE_INT32(SDLOG_BOOT_BAT, 0);

/**
 * Mission Log
 *
 * If enabled, a small additional "mission" log file will be written to the SD card. The log contains just those messages that are useful for tasks like generating flight statistics and geotagging. The different modes can be used to further reduce the logged data (and thus the log file size). For example, choose geotagging mode to only log data required for geotagging. Note that the normal/full log is still created, and contains all the data in the mission log (and more).
 *
 * @group SD Logging
 * @value 0 Disabled
 * @value 1 All mission messages
 * @value 2 Geotagging messages
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SDLOG_MISSION, 0);

/**
 * Logging topic profile (integer bitmask)
 *
 * This integer bitmask controls the set and rates of logged topics. The default allows for general log analysis while keeping the log file size reasonably small. Enabling multiple sets leads to higher bandwidth requirements and larger log files. Set bits true to enable: 0 : Default set (used for general log analysis) 1 : Full rate estimator (EKF2) replay topics 2 : Topics for thermal calibration (high rate raw IMU and Baro sensor data) 3 : Topics for system identification (high rate actuator control and IMU data) 4 : Full rates for analysis of fast maneuvers (RC, attitude, rates and actuators) 5 : Debugging topics (debug_*.msg topics, for custom code) 6 : Topics for sensor comparison (low rate raw IMU, Baro and magnetometer data) 7 : Topics for computer vision and collision prevention 8 : Raw FIFO high-rate IMU (Gyro) 9 : Raw FIFO high-rate IMU (Accel) 10: Logging of mavlink tunnel message (useful for payload communication debugging)
 *
 * @group SD Logging
 * @bit 0 Default set (general log analysis)
 * @bit 1 Estimator replay (EKF2)
 * @bit 2 Thermal calibration
 * @bit 3 System identification
 * @bit 4 High rate
 * @bit 5 Debug
 * @bit 6 Sensor comparison
 * @bit 7 Computer Vision and Avoidance
 * @bit 8 Raw FIFO high-rate IMU (Gyro)
 * @bit 9 Raw FIFO high-rate IMU (Accel)
 * @bit 10 Mavlink tunnel message logging
 * @bit 11 High rate sensors
 * @min 0
 * @max 4095
 * @min 0
 * @max 4095
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SDLOG_PROFILE, 1);

/**
 * Maximum number of log directories to keep
 *
 * If there are more log directories than this value, the system will delete the oldest directories during startup. In addition, the system will delete old logs if there is not enough free space left. The minimum amount is 300 MB. If this is set to 0, old directories will only be removed if the free space falls below the minimum. Note: this does not apply to mission log files.
 *
 * @group SD Logging
 * @min 0
 * @max 1000
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SDLOG_DIRS_MAX, 0);

/**
 * Log UUID
 *
 * If set to 1, add an ID to the log, which uniquely identifies the vehicle
 *
 * @group SD Logging
 * @boolean
 */
PARAM_DEFINE_INT32(SDLOG_UUID, 1);

/**
 * Enable online mag bias calibration
 *
 * This enables continuous calibration of the magnetometers
 * before takeoff using gyro data.
 *
 * @group Magnetometer Bias Estimator
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MBE_ENABLE, 1);

/**
 * Mag bias estimator learning gain
 *
 * Increase to make the estimator more responsive
 * Decrease to make the estimator more robust to noise
 *
 * @group Magnetometer Bias Estimator
 * @decimal 1
 * @increment 0.1
 * @min 0.1
 * @max 100
 */
PARAM_DEFINE_FLOAT(MBE_LEARN_GAIN, 18.0);

/**
 * Enable arm/disarm stick gesture
 *
 * This determines if moving the left stick to the lower right
 * arms and to the lower left disarms the vehicle.
 *
 * @group Manual Control
 * @boolean
 */
PARAM_DEFINE_INT32(MAN_ARM_GESTURE, 1);

/**
 * Trigger time for kill stick gesture
 *
 * The timeout for holding the left stick to the lower left
 * and the right stick to the lower right at the same time until the gesture
 * kills the actuators one-way.
 * 
 * A negative value disables the feature.
 *
 * @group Manual Control
 * @decimal 2
 * @min -1
 * @max 15
 * @unit s
 */
PARAM_DEFINE_FLOAT(MAN_KILL_GEST_T, -1.0);

/**
 * Deadzone for sticks (only specific use cases)
 *
 * Range around stick center ignored to prevent
 * vehicle drift from stick hardware inaccuracy.
 * 
 * Does not apply to any precise constant input like
 * throttle and attitude or rate piloting.
 *
 * @group Manual Control
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(MAN_DEADZONE, 0.1);

/**
 * MAVLink Mode for instance 0
 *
 * The MAVLink Mode defines the set of streamed messages (for example the
 * vehicle's attitude) and their sending rates.
 * 
 *
 * @group MAVLink
 * @value 0 Normal
 * @value 1 Custom
 * @value 2 Onboard
 * @value 3 OSD
 * @value 4 Magic
 * @value 5 Config
 * @value 7 Minimal
 * @value 8 External Vision
 * @value 10 Gimbal
 * @value 11 Onboard Low Bandwidth
 * @value 12 uAvionix
 * @value 13 Low Bandwidth
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_0_MODE, 0);

/**
 * MAVLink Mode for instance 1
 *
 * The MAVLink Mode defines the set of streamed messages (for example the
 * vehicle's attitude) and their sending rates.
 * 
 *
 * @group MAVLink
 * @value 0 Normal
 * @value 1 Custom
 * @value 2 Onboard
 * @value 3 OSD
 * @value 4 Magic
 * @value 5 Config
 * @value 7 Minimal
 * @value 8 External Vision
 * @value 10 Gimbal
 * @value 11 Onboard Low Bandwidth
 * @value 12 uAvionix
 * @value 13 Low Bandwidth
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_1_MODE, 2);

/**
 * MAVLink Mode for instance 2
 *
 * The MAVLink Mode defines the set of streamed messages (for example the
 * vehicle's attitude) and their sending rates.
 * 
 *
 * @group MAVLink
 * @value 0 Normal
 * @value 1 Custom
 * @value 2 Onboard
 * @value 3 OSD
 * @value 4 Magic
 * @value 5 Config
 * @value 7 Minimal
 * @value 8 External Vision
 * @value 10 Gimbal
 * @value 11 Onboard Low Bandwidth
 * @value 12 uAvionix
 * @value 13 Low Bandwidth
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_2_MODE, 0);

/**
 * Maximum MAVLink sending rate for instance 0
 *
 * Configure the maximum sending rate for the MAVLink streams in Bytes/sec.
 * If the configured streams exceed the maximum rate, the sending rate of
 * each stream is automatically decreased.
 * 
 * If this is set to 0 a value of half of the theoretical maximum bandwidth is used.
 * This corresponds to baudrate/20 Bytes/s (baudrate/10 = maximum data rate on
 * 8N1-configured links).
 * 
 *
 * @group MAVLink
 * @min 0
 * @unit B/s
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_0_RATE, 1200);

/**
 * Maximum MAVLink sending rate for instance 1
 *
 * Configure the maximum sending rate for the MAVLink streams in Bytes/sec.
 * If the configured streams exceed the maximum rate, the sending rate of
 * each stream is automatically decreased.
 * 
 * If this is set to 0 a value of half of the theoretical maximum bandwidth is used.
 * This corresponds to baudrate/20 Bytes/s (baudrate/10 = maximum data rate on
 * 8N1-configured links).
 * 
 *
 * @group MAVLink
 * @min 0
 * @unit B/s
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_1_RATE, 0);

/**
 * Maximum MAVLink sending rate for instance 2
 *
 * Configure the maximum sending rate for the MAVLink streams in Bytes/sec.
 * If the configured streams exceed the maximum rate, the sending rate of
 * each stream is automatically decreased.
 * 
 * If this is set to 0 a value of half of the theoretical maximum bandwidth is used.
 * This corresponds to baudrate/20 Bytes/s (baudrate/10 = maximum data rate on
 * 8N1-configured links).
 * 
 *
 * @group MAVLink
 * @min 0
 * @unit B/s
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_2_RATE, 0);

/**
 * Enable MAVLink Message forwarding for instance 0
 *
 * If enabled, forward incoming MAVLink messages to other MAVLink ports if the
 * message is either broadcast or the target is not the autopilot.
 * 
 * This allows for example a GCS to talk to a camera that is connected to the
 * autopilot via MAVLink (on a different link than the GCS).
 * 
 *
 * @group MAVLink
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_0_FORWARD, 1);

/**
 * Enable MAVLink Message forwarding for instance 1
 *
 * If enabled, forward incoming MAVLink messages to other MAVLink ports if the
 * message is either broadcast or the target is not the autopilot.
 * 
 * This allows for example a GCS to talk to a camera that is connected to the
 * autopilot via MAVLink (on a different link than the GCS).
 * 
 *
 * @group MAVLink
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_1_FORWARD, 0);

/**
 * Enable MAVLink Message forwarding for instance 2
 *
 * If enabled, forward incoming MAVLink messages to other MAVLink ports if the
 * message is either broadcast or the target is not the autopilot.
 * 
 * This allows for example a GCS to talk to a camera that is connected to the
 * autopilot via MAVLink (on a different link than the GCS).
 * 
 *
 * @group MAVLink
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_2_FORWARD, 0);

/**
 * Enable software throttling of mavlink on instance 0
 *
 * If enabled, MAVLink messages will be throttled according to
 * `txbuf` field reported by radio_status.
 * 
 * Requires a radio to send the mavlink message RADIO_STATUS.
 * 
 *
 * @group MAVLink
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_0_RADIO_CTL, 1);

/**
 * Enable software throttling of mavlink on instance 1
 *
 * If enabled, MAVLink messages will be throttled according to
 * `txbuf` field reported by radio_status.
 * 
 * Requires a radio to send the mavlink message RADIO_STATUS.
 * 
 *
 * @group MAVLink
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_1_RADIO_CTL, 1);

/**
 * Enable software throttling of mavlink on instance 2
 *
 * If enabled, MAVLink messages will be throttled according to
 * `txbuf` field reported by radio_status.
 * 
 * Requires a radio to send the mavlink message RADIO_STATUS.
 * 
 *
 * @group MAVLink
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_2_RADIO_CTL, 1);

/**
 * MAVLink Network Port for instance 0
 *
 * If ethernet enabled and selected as configuration for MAVLink instance 0,
 * selected udp port will be set and used in MAVLink instance 0.
 * 
 *
 * @group MAVLink
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_0_UDP_PRT, 14556);

/**
 * MAVLink Network Port for instance 1
 *
 * If ethernet enabled and selected as configuration for MAVLink instance 1,
 * selected udp port will be set and used in MAVLink instance 1.
 * 
 *
 * @group MAVLink
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_1_UDP_PRT, 0);

/**
 * MAVLink Network Port for instance 2
 *
 * If ethernet enabled and selected as configuration for MAVLink instance 2,
 * selected udp port will be set and used in MAVLink instance 2.
 * 
 *
 * @group MAVLink
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_2_UDP_PRT, 0);

/**
 * MAVLink Remote Port for instance 0
 *
 * If ethernet enabled and selected as configuration for MAVLink instance 0,
 * selected remote port will be set and used in MAVLink instance 0.
 * 
 *
 * @group MAVLink
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_0_REMOTE_PRT, 14550);

/**
 * MAVLink Remote Port for instance 1
 *
 * If ethernet enabled and selected as configuration for MAVLink instance 1,
 * selected remote port will be set and used in MAVLink instance 1.
 * 
 *
 * @group MAVLink
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_1_REMOTE_PRT, 0);

/**
 * MAVLink Remote Port for instance 2
 *
 * If ethernet enabled and selected as configuration for MAVLink instance 2,
 * selected remote port will be set and used in MAVLink instance 2.
 * 
 *
 * @group MAVLink
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_2_REMOTE_PRT, 0);

/**
 * Broadcast heartbeats on local network for MAVLink instance 0
 *
 * This allows a ground control station to automatically find the drone
 * on the local network.
 * 
 *
 * @group MAVLink
 * @value 0 Never broadcast
 * @value 1 Always broadcast
 * @value 2 Only multicast
 */
PARAM_DEFINE_INT32(MAV_0_BROADCAST, 1);

/**
 * Broadcast heartbeats on local network for MAVLink instance 1
 *
 * This allows a ground control station to automatically find the drone
 * on the local network.
 * 
 *
 * @group MAVLink
 * @value 0 Never broadcast
 * @value 1 Always broadcast
 * @value 2 Only multicast
 */
PARAM_DEFINE_INT32(MAV_1_BROADCAST, 0);

/**
 * Broadcast heartbeats on local network for MAVLink instance 2
 *
 * This allows a ground control station to automatically find the drone
 * on the local network.
 * 
 *
 * @group MAVLink
 * @value 0 Never broadcast
 * @value 1 Always broadcast
 * @value 2 Only multicast
 */
PARAM_DEFINE_INT32(MAV_2_BROADCAST, 0);

/**
 * Enable serial flow control for instance 0
 *
 * This is used to force flow control on or off for the the mavlink
 * instance. By default it is auto detected. Use when auto detection fails.
 * 
 *
 * @group MAVLink
 * @value 0 Force off
 * @value 1 Force on
 * @value 2 Auto-detected
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_0_FLOW_CTRL, 2);

/**
 * Enable serial flow control for instance 1
 *
 * This is used to force flow control on or off for the the mavlink
 * instance. By default it is auto detected. Use when auto detection fails.
 * 
 *
 * @group MAVLink
 * @value 0 Force off
 * @value 1 Force on
 * @value 2 Auto-detected
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_1_FLOW_CTRL, 2);

/**
 * Enable serial flow control for instance 2
 *
 * This is used to force flow control on or off for the the mavlink
 * instance. By default it is auto detected. Use when auto detection fails.
 * 
 *
 * @group MAVLink
 * @value 0 Force off
 * @value 1 Force on
 * @value 2 Auto-detected
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_2_FLOW_CTRL, 2);

/**
 * Configures the frequency of HIGH_LATENCY2 stream for instance 0
 *
 * Positive real value that configures the transmission frequency of the
 * HIGH_LATENCY2 stream for instance 0, configured in iridium mode.
 * This parameter has no effect if the instance mode is different from iridium.
 * 
 *
 * @group MAVLink
 * @decimal 3
 * @increment 0.001
 * @min 0.0
 * @max 50.0
 * @unit Hz
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(MAV_0_HL_FREQ, 0.015);

/**
 * Configures the frequency of HIGH_LATENCY2 stream for instance 1
 *
 * Positive real value that configures the transmission frequency of the
 * HIGH_LATENCY2 stream for instance 1, configured in iridium mode.
 * This parameter has no effect if the instance mode is different from iridium.
 * 
 *
 * @group MAVLink
 * @decimal 3
 * @increment 0.001
 * @min 0.0
 * @max 50.0
 * @unit Hz
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(MAV_1_HL_FREQ, 0.015);

/**
 * Configures the frequency of HIGH_LATENCY2 stream for instance 2
 *
 * Positive real value that configures the transmission frequency of the
 * HIGH_LATENCY2 stream for instance 2, configured in iridium mode.
 * This parameter has no effect if the instance mode is different from iridium.
 * 
 *
 * @group MAVLink
 * @decimal 3
 * @increment 0.001
 * @min 0.0
 * @max 50.0
 * @unit Hz
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(MAV_2_HL_FREQ, 0.015);

/**
 * MAVLink Mode for SOM to FMU communication channel
 *
 * The MAVLink Mode defines the set of streamed messages (for example the
 * vehicle's attitude) and their sending rates.
 * 
 *
 * @group MAVLink
 * @value 0 Normal
 * @value 2 Onboard
 * @value 5 Config
 * @value 7 Minimal
 * @value 11 Onboard Low Bandwidth
 * @value 13 Low Bandwidth
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_S_MODE, 11);

/**
 * Enable MAVLink forwarding on TELEM2
 *
 * TELEM2 on Skynode only.
 * 
 *
 * @group MAVLink
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_S_FORWARD, 0);

/**
 * MAVLink system ID
 *
 * 
 *
 * @group MAVLink
 * @min 1
 * @max 250
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_SYS_ID, 1);

/**
 * MAVLink component ID
 *
 * 
 *
 * @group MAVLink
 * @min 1
 * @max 250
 * @reboot_required True
 */
PARAM_DEFINE_INT32(MAV_COMP_ID, 1);

/**
 * MAVLink protocol signing
 *
 * 
 *
 * @group MAVLink
 * @value 0 Message signing disabled
 * @value 1 Signing enabled except on USB
 * @value 2 Signing always enabled
 */
PARAM_DEFINE_INT32(MAV_SIGN_CFG, 0);

/**
 * MAVLink protocol version
 *
 * 
 *
 * @group MAVLink
 * @value 1 Version 1 with auto-upgrade to v2 if detected
 * @value 2 Version 2
 */
PARAM_DEFINE_INT32(MAV_PROTO_VER, 2);

/**
 * MAVLink SiK Radio ID
 *
 * When non-zero the MAVLink app will attempt to configure the
 * SiK radio to this ID and re-set the parameter to 0. If the value
 * is negative it will reset the complete radio config to
 * factory defaults. Only applies if this mavlink instance is going through a SiK radio
 *
 * @group MAVLink
 * @min -1
 * @max 240
 */
PARAM_DEFINE_INT32(MAV_SIK_RADIO_ID, 0);

/**
 * MAVLink airframe type
 *
 * 
 *
 * @group MAVLink
 * @value 0 Generic micro air vehicle
 * @value 1 Fixed wing aircraft
 * @value 2 Quadrotor
 * @value 3 Coaxial helicopter
 * @value 4 Normal helicopter with tail rotor
 * @value 7 Airship, controlled
 * @value 8 Free balloon, uncontrolled
 * @value 10 Ground rover
 * @value 11 Surface vessel, boat, ship
 * @value 12 Submarine
 * @value 13 Hexarotor
 * @value 14 Octorotor
 * @value 15 Tricopter
 * @value 19 VTOL Two-rotor Tailsitter
 * @value 20 VTOL Quad-rotor Tailsitter
 * @value 21 VTOL Tiltrotor
 * @value 22 VTOL Standard (separate fixed rotors for hover and cruise flight)
 * @value 23 VTOL Tailsitter
 * @min 0
 * @max 22
 */
PARAM_DEFINE_INT32(MAV_TYPE, 0);

/**
 * Use/Accept HIL GPS message even if not in HIL mode
 *
 * If set to 1 incoming HIL GPS messages are parsed.
 *
 * @group MAVLink
 * @boolean
 */
PARAM_DEFINE_INT32(MAV_USEHILGPS, 0);

/**
 * Forward external setpoint messages
 *
 * If set to 1 incoming external setpoint messages will be directly forwarded
 * to the controllers if in offboard control mode
 *
 * @group MAVLink
 * @boolean
 */
PARAM_DEFINE_INT32(MAV_FWDEXTSP, 1);

/**
 * Parameter hash check
 *
 * Disabling the parameter hash check functionality will make the mavlink instance
 * stream parameters continuously.
 *
 * @group MAVLink
 * @boolean
 */
PARAM_DEFINE_INT32(MAV_HASH_CHK_EN, 1);

/**
 * Heartbeat message forwarding
 *
 * The mavlink heartbeat message will not be forwarded if this parameter is set to 'disabled'.
 * The main reason for disabling heartbeats to be forwarded is because they confuse dronekit.
 *
 * @group MAVLink
 * @boolean
 */
PARAM_DEFINE_INT32(MAV_HB_FORW_EN, 1);

/**
 * Timeout in seconds for the RADIO_STATUS reports coming in
 *
 * If the connected radio stops reporting RADIO_STATUS for a certain time,
 * a warning is triggered and, if MAV_X_RADIO_CTL is enabled, the software-flow
 * control is reset.
 *
 * @group MAVLink
 * @min 1
 * @max 250
 * @unit s
 */
PARAM_DEFINE_INT32(MAV_RADIO_TOUT, 5);

/**
 * Roll P gain
 *
 * Roll proportional gain, i.e. desired angular speed in rad/s for error 1 rad.
 *
 * @group Multicopter Attitude Control
 * @decimal 2
 * @increment 0.1
 * @min 0.0
 * @max 12
 */
PARAM_DEFINE_FLOAT(MC_ROLL_P, 4.0);

/**
 * Pitch P gain
 *
 * Pitch proportional gain, i.e. desired angular speed in rad/s for error 1 rad.
 *
 * @group Multicopter Attitude Control
 * @decimal 2
 * @increment 0.1
 * @min 0.0
 * @max 12
 */
PARAM_DEFINE_FLOAT(MC_PITCH_P, 4.0);

/**
 * Yaw P gain
 *
 * Yaw proportional gain, i.e. desired angular speed in rad/s for error 1 rad.
 *
 * @group Multicopter Attitude Control
 * @decimal 2
 * @increment 0.1
 * @min 0.0
 * @max 5
 */
PARAM_DEFINE_FLOAT(MC_YAW_P, 2.8);

/**
 * Yaw weight
 *
 * A fraction [0,1] deprioritizing yaw compared to roll and pitch in non-linear attitude control.
 * Deprioritizing yaw is necessary because multicopters have much less control authority
 * in yaw compared to the other axes and it makes sense because yaw is not critical for
 * stable hovering or 3D navigation.
 * 
 * For yaw control tuning use MC_YAW_P. This ratio has no impact on the yaw gain.
 *
 * @group Multicopter Attitude Control
 * @decimal 2
 * @increment 0.1
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(MC_YAW_WEIGHT, 0.4);

/**
 * Max roll rate
 *
 * Limit for roll rate in manual and auto modes (except acro).
 * Has effect for large rotations in autonomous mode, to avoid large control
 * output and mixer saturation.
 * 
 * This is not only limited by the vehicle's properties, but also by the maximum
 * measurement rate of the gyro.
 *
 * @group Multicopter Attitude Control
 * @decimal 1
 * @increment 5
 * @min 0.0
 * @max 1800.0
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(MC_ROLLRATE_MAX, 220.0);

/**
 * Max pitch rate
 *
 * Limit for pitch rate in manual and auto modes (except acro).
 * Has effect for large rotations in autonomous mode, to avoid large control
 * output and mixer saturation.
 * 
 * This is not only limited by the vehicle's properties, but also by the maximum
 * measurement rate of the gyro.
 *
 * @group Multicopter Attitude Control
 * @decimal 1
 * @increment 5
 * @min 0.0
 * @max 1800.0
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(MC_PITCHRATE_MAX, 220.0);

/**
 * Max yaw rate
 *
 * 
 *
 * @group Multicopter Attitude Control
 * @decimal 1
 * @increment 5
 * @min 0.0
 * @max 1800.0
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(MC_YAWRATE_MAX, 200.0);

/**
 * Manual tilt input filter time constant
 *
 * Setting this parameter to 0 disables the filter
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @min 0.0
 * @max 2.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(MC_MAN_TILT_TAU, 0.0);

/**
 * Multicopter autotune module enable
 *
 * 
 *
 * @group Autotune
 * @boolean
 */
PARAM_DEFINE_INT32(MC_AT_EN, 0);

/**
 * Amplitude of the injected signal
 *
 * 
 *
 * @group Autotune
 * @decimal 1
 * @min 0.1
 * @max 6.0
 */
PARAM_DEFINE_FLOAT(MC_AT_SYSID_AMP, 0.7);

/**
 * Controls when to apply the new gains
 *
 * After the auto-tuning sequence is completed,
 * a new set of gains is available and can be applied
 * immediately or after landing.
 * 
 * WARNING Applying the gains in air is dangerous as there is no
 * guarantee that those new gains will be able to stabilize
 * the drone properly.
 *
 * @group Autotune
 * @value 0 Do not apply the new gains (logging only)
 * @value 1 Apply the new gains after disarm
 * @value 2 WARNING Apply the new gains in air
 */
PARAM_DEFINE_INT32(MC_AT_APPLY, 1);

/**
 * Desired angular rate closed-loop rise time
 *
 * 
 *
 * @group Autotune
 * @decimal 2
 * @min 0.01
 * @max 0.5
 * @unit s
 */
PARAM_DEFINE_FLOAT(MC_AT_RISE_TIME, 0.14);

/**
 * Hover thrust process noise
 *
 * Reduce to make the hover thrust estimate
 * more stable, increase if the real hover thrust
 * is expected to change quickly over time.
 *
 * @group Hover Thrust Estimator
 * @decimal 4
 * @min 0.0001
 * @max 1.0
 * @unit normalized_thrust/s
 */
PARAM_DEFINE_FLOAT(HTE_HT_NOISE, 0.0036);

/**
 * Gate size for acceleration fusion
 *
 * Sets the number of standard deviations used
 * by the innovation consistency test.
 *
 * @group Hover Thrust Estimator
 * @decimal 1
 * @min 1.0
 * @max 10.0
 * @unit SD
 */
PARAM_DEFINE_FLOAT(HTE_ACC_GATE, 3.0);

/**
 * 1-sigma initial hover thrust uncertainty
 *
 * Sets the number of standard deviations used
 * by the innovation consistency test.
 *
 * @group Hover Thrust Estimator
 * @decimal 3
 * @min 0.0
 * @max 1.0
 * @unit normalized_thrust
 */
PARAM_DEFINE_FLOAT(HTE_HT_ERR_INIT, 0.1);

/**
 * Horizontal velocity threshold for sensitivity reduction
 *
 * Above this speed, the measurement noise is linearly increased
 * to reduce the sensitivity of the estimator from biased measurement.
 * 
 * Set to a low value on vehicles with large lifting surfaces.
 *
 * @group Hover Thrust Estimator
 * @decimal 1
 * @min 1.0
 * @max 20.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(HTE_VXY_THR, 10.0);

/**
 * Vertical velocity threshold for sensitivity reduction
 *
 * Above this speed, the measurement noise is linearly increased
 * to reduce the sensitivity of the estimator from biased measurement.
 * 
 * Set to a low value on vehicles affected by air drag when climbing or descending.
 *
 * @group Hover Thrust Estimator
 * @decimal 1
 * @min 1.0
 * @max 10.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(HTE_VZ_THR, 2.0);

/**
 * Max deviation from MPC_THR_HOVER
 *
 * Defines the range of the hover thrust estimate around MPC_THR_HOVER.
 * A value of 0.2 with MPC_THR_HOVER at 0.5 results in a range of [0.3, 0.7].
 * 
 * Set to a large value if the vehicle operates in varying physical conditions that
 * affect the required hover thrust strongly (e.g. differently sized payloads).
 *
 * @group Hover Thrust Estimator
 * @decimal 2
 * @min 0.01
 * @max 0.4
 * @unit normalized_thrust
 */
PARAM_DEFINE_FLOAT(HTE_THR_RANGE, 0.2);

/**
 * Maximum upwards acceleration in climb rate controlled modes
 *
 * 
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 1
 * @min 2
 * @max 15
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(MPC_ACC_UP_MAX, 4.0);

/**
 * Maximum downwards acceleration in climb rate controlled modes
 *
 * 
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 1
 * @min 2
 * @max 15
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(MPC_ACC_DOWN_MAX, 3.0);

/**
 * Manual yaw rate input filter time constant
 *
 * Not used in Stabilized mode
 * Setting this parameter to 0 disables the filter
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 5
 * @unit s
 */
PARAM_DEFINE_FLOAT(MPC_MAN_Y_TAU, 0.08);

/**
 * Altitude reference mode
 *
 * Control height
 * 0: relative earth frame origin which may drift due to sensors
 * 1: relative to ground (requires distance sensor) which changes with terrain variation.
 * It will revert to relative earth frame if the distance to ground estimate becomes invalid.
 * 2: relative to ground (requires distance sensor) when stationary
 * and relative to earth frame when moving horizontally.
 * The speed threshold is MPC_HOLD_MAX_XY
 *
 * @group Multicopter Position Control
 * @value 0 Altitude following
 * @value 1 Terrain following
 * @value 2 Terrain hold
 * @min 0
 * @max 2
 */
PARAM_DEFINE_INT32(MPC_ALT_MODE, 2);

/**
 * Max horizontal velocity for position hold
 *
 * Maximum horizontal velocity for which position hold is enabled (use 0 to disable check)
 * 
 * Only used with MPC_POS_MODE Direct velocity or MPC_ALT_MODE 2
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @min 0
 * @max 3
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MPC_HOLD_MAX_XY, 0.8);

/**
 * Max vertical velocity for position hold
 *
 * Maximum vertical velocity for which position hold is enabled (use 0 to disable check)
 * 
 * Only used with MPC_ALT_MODE 1
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @min 0
 * @max 3
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MPC_HOLD_MAX_Z, 0.6);

/**
 * Heading behavior in autonomous modes
 *
 * 
 *
 * @group Mission
 * @value 0 towards waypoint
 * @value 1 towards home
 * @value 2 away from home
 * @value 3 along trajectory
 * @value 4 towards waypoint (yaw first)
 * @value 5 yaw fixed
 * @min 0
 * @max 4
 */
PARAM_DEFINE_INT32(MPC_YAW_MODE, 0);

/**
 * Maximum yaw rate in autonomous modes
 *
 * Limits the rate of change of the yaw setpoint to avoid large
 * control output and mixer saturation.
 *
 * @group Multicopter Attitude Control
 * @decimal 0
 * @increment 5
 * @min 5
 * @max 360
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(MPC_YAWRAUTO_MAX, 60.0);

/**
 * Maximum yaw acceleration in autonomous modes
 *
 * Limits the acceleration of the yaw setpoint to avoid large
 * control output and mixer saturation.
 *
 * @group Multicopter Attitude Control
 * @decimal 0
 * @increment 5
 * @min 5
 * @max 360
 * @unit deg/s^2
 */
PARAM_DEFINE_FLOAT(MPC_YAWRAUTO_ACC, 20.0);

/**
 * Default horizontal velocity in autonomous modes
 *
 * e.g. in Missions, RTL, Goto if the waypoint does not specify differently
 *
 * @group Multicopter Position Control
 * @decimal 0
 * @increment 1
 * @min 3
 * @max 20
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MPC_XY_CRUISE, 5.0);

/**
 * Ascent velocity in autonomous modes
 *
 * For manually controlled modes and offboard see MPC_Z_VEL_MAX_UP
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 0.5
 * @min 0.5
 * @max 8
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MPC_Z_V_AUTO_UP, 3.0);

/**
 * Descent velocity in autonomous modes
 *
 * For manual modes and offboard, see MPC_Z_VEL_MAX_DN
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 0.5
 * @min 0.5
 * @max 4
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MPC_Z_V_AUTO_DN, 1.5);

/**
 * Acceleration for autonomous and for manual modes
 *
 * When piloting manually, this parameter is only used in MPC_POS_MODE Acceleration based.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 1
 * @min 2
 * @max 15
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(MPC_ACC_HOR, 3.0);

/**
 * Jerk limit in autonomous modes
 *
 * Limit the maximum jerk of the vehicle (how fast the acceleration can change).
 * A lower value leads to smoother vehicle motions but also limited agility.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 1
 * @min 1
 * @max 80
 * @unit m/s^3
 */
PARAM_DEFINE_FLOAT(MPC_JERK_AUTO, 4.0);

/**
 * Proportional gain for horizontal trajectory position error
 *
 * 
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 0.1
 * @min 0.1
 * @max 1
 */
PARAM_DEFINE_FLOAT(MPC_XY_TRAJ_P, 0.5);

/**
 * Maximum horizontal error allowed by the trajectory generator
 *
 * The integration speed of the trajectory setpoint is linearly
 * reduced with the horizontal position tracking error. When the
 * error is above this parameter, the integration of the
 * trajectory is stopped to wait for the drone.
 * 
 * This value can be adjusted depending on the tracking
 * capabilities of the vehicle.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 1
 * @min 0.1
 * @max 10
 */
PARAM_DEFINE_FLOAT(MPC_XY_ERR_MAX, 2.0);

/**
 * Enable nudging based on user input during autonomous land routine
 *
 * Using stick input the vehicle can be moved horizontally and yawed.
 * The descend speed is amended:
 * stick full up - 0
 * stick centered - MPC_LAND_SPEED
 * stick full down - 2 * MPC_LAND_SPEED
 * 
 * Manual override during auto modes has to be disabled to use this feature (see COM_RC_OVERRIDE).
 *
 * @group Multicopter Position Control
 * @value 0 Nudging disabled
 * @value 1 Nudging enabled
 * @min 0
 * @max 1
 */
PARAM_DEFINE_INT32(MPC_LAND_RC_HELP, 0);

/**
 * User assisted landing radius
 *
 * When nudging is enabled (see MPC_LAND_RC_HELP), this defines the maximum
 * allowed horizontal displacement from the original landing point.
 * - If inside of the radius, only allow nudging inputs that do not move the vehicle outside of it.
 * - If outside of the radius, only allow nudging inputs that move the vehicle back towards it.
 * 
 * Set it to -1 for infinite radius.
 *
 * @group Multicopter Position Control
 * @decimal 0
 * @increment 1
 * @min -1
 * @unit m
 */
PARAM_DEFINE_FLOAT(MPC_LAND_RADIUS, -1.0);

/**
 * Proportional gain for vertical position error
 *
 * Defined as corrective velocity in m/s per m position error
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.1
 * @min 0.1
 * @max 1.5
 */
PARAM_DEFINE_FLOAT(MPC_Z_P, 1.0);

/**
 * Proportional gain for horizontal position error
 *
 * Defined as corrective velocity in m/s per m position error
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.1
 * @min 0
 * @max 2
 */
PARAM_DEFINE_FLOAT(MPC_XY_P, 0.95);

/**
 * Proportional gain for vertical velocity error
 *
 * Defined as corrective acceleration in m/s^2 per m/s velocity error
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.1
 * @min 2
 * @max 15
 */
PARAM_DEFINE_FLOAT(MPC_Z_VEL_P_ACC, 4.0);

/**
 * Proportional gain for horizontal velocity error
 *
 * Defined as corrective acceleration in m/s^2 per m/s velocity error
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.1
 * @min 1.2
 * @max 5
 */
PARAM_DEFINE_FLOAT(MPC_XY_VEL_P_ACC, 1.8);

/**
 * Integral gain for vertical velocity error
 *
 * Defined as corrective acceleration in m/s^2 per m velocity integral
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.1
 * @min 0.2
 * @max 3
 */
PARAM_DEFINE_FLOAT(MPC_Z_VEL_I_ACC, 2.0);

/**
 * Integral gain for horizontal velocity error
 *
 * Defined as correction acceleration in m/s^2 per m velocity integral
 * Allows to eliminate steady state errors in disturbances like wind.
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.02
 * @min 0
 * @max 60
 */
PARAM_DEFINE_FLOAT(MPC_XY_VEL_I_ACC, 0.4);

/**
 * Differential gain for vertical velocity error
 *
 * Defined as corrective acceleration in m/s^2 per m/s^2 velocity derivative
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.02
 * @min 0
 * @max 2
 */
PARAM_DEFINE_FLOAT(MPC_Z_VEL_D_ACC, 0.0);

/**
 * Differential gain for horizontal velocity error
 *
 * Defined as corrective acceleration in m/s^2 per m/s^2 velocity derivative
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.02
 * @min 0.1
 * @max 2
 */
PARAM_DEFINE_FLOAT(MPC_XY_VEL_D_ACC, 0.2);

/**
 * Maximum horizontal velocity
 *
 * Absolute maximum for all velocity controlled modes.
 * Any higher value is truncated.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 20
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MPC_XY_VEL_MAX, 12.0);

/**
 * Maximum ascent velocity
 *
 * Absolute maximum for all climb rate controlled modes.
 * In manually piloted modes full stick deflection commands this velocity.
 * 
 * For default autonomous velocity see MPC_Z_V_AUTO_UP
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 0.1
 * @min 0.5
 * @max 8
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MPC_Z_VEL_MAX_UP, 3.0);

/**
 * Maximum descent velocity
 *
 * Absolute maximum for all climb rate controlled modes.
 * In manually piloted modes full stick deflection commands this velocity.
 * 
 * For default autonomous velocity see MPC_Z_V_AUTO_UP
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 0.1
 * @min 0.5
 * @max 4
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MPC_Z_VEL_MAX_DN, 1.5);

/**
 * Maximum tilt angle in air
 *
 * Absolute maximum for all velocity or acceleration controlled modes.
 * Any higher value is truncated.
 *
 * @group Multicopter Position Control
 * @decimal 0
 * @increment 1
 * @min 20
 * @max 89
 * @unit deg
 */
PARAM_DEFINE_FLOAT(MPC_TILTMAX_AIR, 45.0);

/**
 * Maximum tilt during inital takeoff ramp
 *
 * Tighter tilt limit during takeoff to avoid tip over.
 *
 * @group Multicopter Position Control
 * @decimal 0
 * @increment 1
 * @min 5
 * @max 89
 * @unit deg
 */
PARAM_DEFINE_FLOAT(MPC_TILTMAX_LND, 12.0);

/**
 * Minimum collective thrust in climb rate controlled modes
 *
 * Too low thrust leads to loss of roll/pitch/yaw torque control authority.
 * With airmode enabled this parameters can be set to 0
 * while still keeping torque authority (see MC_AIRMODE).
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.01
 * @min 0.05
 * @max 0.5
 * @unit norm
 */
PARAM_DEFINE_FLOAT(MPC_THR_MIN, 0.12);

/**
 * Maximum collective thrust in climb rate controlled modes
 *
 * Limit allowed thrust e.g. for indoor test of overpowered vehicle.
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 1
 * @unit norm
 */
PARAM_DEFINE_FLOAT(MPC_THR_MAX, 1.0);

/**
 * Acceleration to tilt coupling
 *
 * Set to decouple tilt from vertical acceleration.
 * This provides smoother flight but slightly worse tracking in position and auto modes.
 * Unset if accurate position tracking during dynamic maneuvers is more important than a smooth flight.
 *
 * @group Multicopter Position Control
 * @boolean
 */
PARAM_DEFINE_INT32(MPC_ACC_DECOUPLE, 1);

/**
 * Vertical thrust required to hover
 *
 * Mapped to center throttle stick in Stabilized mode (see MPC_THR_CURVE).
 * Used for initialization of the hover thrust estimator.
 * The estimated hover thrust is used as base for zero vertical acceleration in altitude control.
 * The hover thrust is important for land detection to work correctly.
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.01
 * @min 0.1
 * @max 0.8
 * @unit norm
 */
PARAM_DEFINE_FLOAT(MPC_THR_HOVER, 0.5);

/**
 * Horizontal thrust margin
 *
 * Margin that is kept for horizontal control when higher priority vertical thrust is saturated.
 * To avoid completely starving horizontal control with high vertical error.
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 0.5
 * @unit norm
 */
PARAM_DEFINE_FLOAT(MPC_THR_XY_MARG, 0.3);

/**
 * Velocity low pass cutoff frequency
 *
 * A value of 0 disables the filter.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 0.5
 * @min 0
 * @max 50
 * @unit Hz
 */
PARAM_DEFINE_FLOAT(MPC_VEL_LP, 0.0);

/**
 * Velocity notch filter frequency
 *
 * The center frequency for the 2nd order notch filter on the velocity.
 * A value of 0 disables the filter.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 0.5
 * @min 0
 * @max 50
 * @unit Hz
 */
PARAM_DEFINE_FLOAT(MPC_VEL_NF_FRQ, 0.0);

/**
 * Velocity notch filter bandwidth
 *
 * A value of 0 disables the filter.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 0.5
 * @min 0
 * @max 50
 * @unit Hz
 */
PARAM_DEFINE_FLOAT(MPC_VEL_NF_BW, 5.0);

/**
 * Velocity derivative low pass cutoff frequency
 *
 * A value of 0 disables the filter.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 0.5
 * @min 0
 * @max 50
 * @unit Hz
 */
PARAM_DEFINE_FLOAT(MPC_VELD_LP, 5.0);

/**
 * Position/Altitude mode variant
 *
 * The supported sub-modes are:
 * Direct velocity:
 * Sticks directly map to velocity setpoints without smoothing.
 * Also applies to vertical direction and Altitude mode.
 * Useful for velocity control tuning.
 * Acceleration based:
 * Sticks map to acceleration and there's a virtual brake drag
 *
 * @group Multicopter Position Control
 * @value 0 Direct velocity
 * @value 4 Acceleration based
 */
PARAM_DEFINE_INT32(MPC_POS_MODE, 4);

/**
 * Maximum horizontal velocity setpoint in Position mode
 *
 * Must be smaller than MPC_XY_VEL_MAX.
 * 
 * The maximum sideways and backward speed can be set differently
 * using MPC_VEL_MAN_SIDE and MPC_VEL_MAN_BACK, respectively.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 1
 * @min 3
 * @max 20
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MPC_VEL_MANUAL, 10.0);

/**
 * Maximum sideways velocity in Position mode
 *
 * If set to a negative value or larger than
 * MPC_VEL_MANUAL then MPC_VEL_MANUAL is used.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 1
 * @min -1
 * @max 20
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MPC_VEL_MAN_SIDE, -1.0);

/**
 * Maximum backward velocity in Position mode
 *
 * If set to a negative value or larger than
 * MPC_VEL_MANUAL then MPC_VEL_MANUAL is used.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 1
 * @min -1
 * @max 20
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MPC_VEL_MAN_BACK, -1.0);

/**
 * Maximum horizontal acceleration
 *
 * MPC_POS_MODE
 * 1 just deceleration
 * 4 not used, use MPC_ACC_HOR instead
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 1
 * @min 2
 * @max 15
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(MPC_ACC_HOR_MAX, 5.0);

/**
 * Maximum horizontal and vertical jerk in Position/Altitude mode
 *
 * Limit the maximum jerk (acceleration change) of the vehicle.
 * A lower value leads to smoother motions but limits agility.
 * 
 * Setting this to the maximum value essentially disables the limit.
 * 
 * Only used with MPC_POS_MODE Acceleration based.
 *
 * @group Multicopter Position Control
 * @decimal 0
 * @increment 1
 * @min 0.5
 * @max 500
 * @unit m/s^3
 */
PARAM_DEFINE_FLOAT(MPC_JERK_MAX, 8.0);

/**
 * Responsiveness
 *
 * Changes the overall responsiveness of the vehicle.
 * The higher the value, the faster the vehicle will react.
 * 
 * If set to a value greater than zero, other parameters are automatically set (such as
 * the acceleration or jerk limits).
 * If set to a negative value, the existing individual parameters are used.
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.05
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(SYS_VEHICLE_RESP, -0.4);

/**
 * Overall Horizontal Velocity Limit
 *
 * If set to a value greater than zero, other parameters are automatically set (such as
 * MPC_XY_VEL_MAX or MPC_VEL_MANUAL).
 * If set to a negative value, the existing individual parameters are used.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 1
 * @min -20
 * @max 20
 */
PARAM_DEFINE_FLOAT(MPC_XY_VEL_ALL, -10.0);

/**
 * Overall Vertical Velocity Limit
 *
 * If set to a value greater than zero, other parameters are automatically set (such as
 * MPC_Z_VEL_MAX_UP or MPC_LAND_SPEED).
 * If set to a negative value, the existing individual parameters are used.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @increment 0.5
 * @min -3
 * @max 8
 */
PARAM_DEFINE_FLOAT(MPC_Z_VEL_ALL, -3.0);

/**
 * Maximal tilt angle in Stabilized, Altitude and Altitude Cruise mode
 *
 * 
 *
 * @group Multicopter Position Control
 * @decimal 0
 * @increment 1
 * @min 1
 * @max 70
 * @unit deg
 */
PARAM_DEFINE_FLOAT(MPC_MAN_TILT_MAX, 35.0);

/**
 * Max manual yaw rate for Stabilized, Altitude, Position mode
 *
 * 
 *
 * @group Multicopter Position Control
 * @decimal 0
 * @increment 10
 * @min 0
 * @max 400
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(MPC_MAN_Y_MAX, 150.0);

/**
 * Minimum collective thrust in Stabilized mode
 *
 * The value is mapped to the lowest throttle stick position in Stabilized mode.
 * 
 * Too low collective thrust leads to loss of roll/pitch/yaw torque control authority.
 * Airmode is used to keep torque authority with zero thrust (see MC_AIRMODE).
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 1
 * @unit norm
 */
PARAM_DEFINE_FLOAT(MPC_MANTHR_MIN, 0.08);

/**
 * Thrust curve mapping in Stabilized Mode
 *
 * Defines how the throttle stick is mapped to collective thrust in Stabilized mode.
 * 
 * Rescale to hover thrust estimate:
 * Stick input is linearly rescaled, such that a centered throttle stick corresponds to the hover thrust estimator's output.
 * 
 * No rescale:
 * Directly map the stick 1:1 to the output.
 * Can be useful with very low hover thrust which leads to much distortion and the upper half getting sensitive.
 * 
 * Rescale to hover thrust parameter:
 * Similar to rescaling to the hover thrust estimate, but it uses the hover thrust parameter value (see MPC_THR_HOVER) instead of estimated value.
 * With MPC_THR_HOVER 0.5 it's equivalent to No rescale.
 *
 * @group Multicopter Position Control
 * @value 0 Rescale to estimate
 * @value 1 No rescale
 * @value 2 Rescale to parameter
 */
PARAM_DEFINE_INT32(MPC_THR_CURVE, 0);

/**
 * Smooth takeoff ramp time constant
 *
 * Increasing this value will make climb rate controlled takeoff slower.
 * If it's too slow the drone might scratch the ground and tip over.
 * A time constant of 0 disables the ramp
 *
 * @group Multicopter Position Control
 * @min 0
 * @max 5
 * @unit s
 */
PARAM_DEFINE_FLOAT(MPC_TKO_RAMP_T, 3.0);

/**
 * Takeoff climb rate
 *
 * 
 *
 * @group Multicopter Position Control
 * @decimal 2
 * @min 1
 * @max 5
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MPC_TKO_SPEED, 1.5);

/**
 * Altitude for 1. step of slow landing (descend)
 *
 * Below this altitude descending velocity gets limited to a value
 * between "MPC_Z_VEL_MAX_DN" (or "MPC_Z_V_AUTO_DN") and "MPC_LAND_SPEED"
 * Value needs to be higher than "MPC_LAND_ALT2"
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @min 0
 * @max 122
 * @unit m
 */
PARAM_DEFINE_FLOAT(MPC_LAND_ALT1, 10.0);

/**
 * Altitude for 2. step of slow landing (landing)
 *
 * Below this altitude descending velocity gets
 * limited to "MPC_LAND_SPEED"
 * Value needs to be lower than "MPC_LAND_ALT1"
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @min 0
 * @max 122
 * @unit m
 */
PARAM_DEFINE_FLOAT(MPC_LAND_ALT2, 5.0);

/**
 * Altitude for 3. step of slow landing
 *
 * If a valid distance sensor measurement to the ground is available,
 * limit descending velocity to "MPC_LAND_CRWL" below this altitude.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @min 0
 * @max 122
 * @unit m
 */
PARAM_DEFINE_FLOAT(MPC_LAND_ALT3, 1.0);

/**
 * Landing descend rate
 *
 * 
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @min 0.6
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MPC_LAND_SPEED, 0.7);

/**
 * Land crawl descend rate
 *
 * Used below MPC_LAND_ALT3 if distance sensor data is availabe.
 *
 * @group Multicopter Position Control
 * @decimal 1
 * @min 0.1
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(MPC_LAND_CRWL, 0.3);

/**
 * Acro mode maximum roll rate
 *
 * Full stick deflection leads to this rate.
 *
 * @group Multicopter Acro Mode
 * @decimal 1
 * @increment 5
 * @min 0.0
 * @max 1800.0
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(MC_ACRO_R_MAX, 100.0);

/**
 * Acro mode maximum pitch rate
 *
 * Full stick deflection leads to this rate.
 *
 * @group Multicopter Acro Mode
 * @decimal 1
 * @increment 5
 * @min 0.0
 * @max 1800.0
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(MC_ACRO_P_MAX, 100.0);

/**
 * Acro mode maximum yaw rate
 *
 * Full stick deflection leads to this rate.
 *
 * @group Multicopter Acro Mode
 * @decimal 1
 * @increment 5
 * @min 0.0
 * @max 1800.0
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(MC_ACRO_Y_MAX, 100.0);

/**
 * Acro mode roll, pitch expo factor
 *
 * Exponential factor for tuning the input curve shape.
 * 
 * 0 Purely linear input curve
 * 1 Purely cubic input curve
 *
 * @group Multicopter Acro Mode
 * @decimal 2
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(MC_ACRO_EXPO, 0.0);

/**
 * Acro mode yaw expo factor
 *
 * Exponential factor for tuning the input curve shape.
 * 
 * 0 Purely linear input curve
 * 1 Purely cubic input curve
 *
 * @group Multicopter Acro Mode
 * @decimal 2
 * @min 0
 * @max 1
 */
PARAM_DEFINE_FLOAT(MC_ACRO_EXPO_Y, 0.0);

/**
 * Acro mode roll, pitch super expo factor
 *
 * "Superexponential" factor for refining the input curve shape tuned using MC_ACRO_EXPO.
 * 
 * 0 Pure Expo function
 * 0.7 reasonable shape enhancement for intuitive stick feel
 * 0.95 very strong bent input curve only near maxima have effect
 *
 * @group Multicopter Acro Mode
 * @decimal 2
 * @min 0
 * @max 0.95
 */
PARAM_DEFINE_FLOAT(MC_ACRO_SUPEXPO, 0.0);

/**
 * Acro mode yaw super expo factor
 *
 * "Superexponential" factor for refining the input curve shape tuned using MC_ACRO_EXPO_Y.
 * 
 * 0 Pure Expo function
 * 0.7 reasonable shape enhancement for intuitive stick feel
 * 0.95 very strong bent input curve only near maxima have effect
 *
 * @group Multicopter Acro Mode
 * @decimal 2
 * @min 0
 * @max 0.95
 */
PARAM_DEFINE_FLOAT(MC_ACRO_SUPEXPOY, 0.0);

/**
 * Roll rate P gain
 *
 * Roll rate proportional gain, i.e. control output for angular speed error 1 rad/s.
 *
 * @group Multicopter Rate Control
 * @decimal 3
 * @increment 0.01
 * @min 0.01
 * @max 0.5
 */
PARAM_DEFINE_FLOAT(MC_ROLLRATE_P, 0.15);

/**
 * Roll rate I gain
 *
 * Roll rate integral gain. Can be set to compensate static thrust difference or gravity center offset.
 *
 * @group Multicopter Rate Control
 * @decimal 3
 * @increment 0.01
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(MC_ROLLRATE_I, 0.2);

/**
 * Roll rate integrator limit
 *
 * Roll rate integrator limit. Can be set to increase the amount of integrator available to counteract disturbances or reduced to improve settling time after large roll moment trim changes.
 *
 * @group Multicopter Rate Control
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(MC_RR_INT_LIM, 0.3);

/**
 * Roll rate D gain
 *
 * Roll rate differential gain. Small values help reduce fast oscillations. If value is too big oscillations will appear again.
 *
 * @group Multicopter Rate Control
 * @decimal 4
 * @increment 0.0005
 * @min 0.0
 * @max 0.01
 */
PARAM_DEFINE_FLOAT(MC_ROLLRATE_D, 0.003);

/**
 * Roll rate feedforward
 *
 * Improves tracking performance.
 *
 * @group Multicopter Rate Control
 * @decimal 4
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(MC_ROLLRATE_FF, 0.0);

/**
 * Roll rate controller gain
 *
 * Global gain of the controller.
 * 
 * This gain scales the P, I and D terms of the controller:
 * output = MC_ROLLRATE_K * (MC_ROLLRATE_P * error
 * + MC_ROLLRATE_I * error_integral
 * + MC_ROLLRATE_D * error_derivative)
 * Set MC_ROLLRATE_P=1 to implement a PID in the ideal form.
 * Set MC_ROLLRATE_K=1 to implement a PID in the parallel form.
 *
 * @group Multicopter Rate Control
 * @decimal 4
 * @increment 0.0005
 * @min 0.01
 * @max 5.0
 */
PARAM_DEFINE_FLOAT(MC_ROLLRATE_K, 1.0);

/**
 * Pitch rate P gain
 *
 * Pitch rate proportional gain, i.e. control output for angular speed error 1 rad/s.
 *
 * @group Multicopter Rate Control
 * @decimal 3
 * @increment 0.01
 * @min 0.01
 * @max 0.6
 */
PARAM_DEFINE_FLOAT(MC_PITCHRATE_P, 0.15);

/**
 * Pitch rate I gain
 *
 * Pitch rate integral gain. Can be set to compensate static thrust difference or gravity center offset.
 *
 * @group Multicopter Rate Control
 * @decimal 3
 * @increment 0.01
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(MC_PITCHRATE_I, 0.2);

/**
 * Pitch rate integrator limit
 *
 * Pitch rate integrator limit. Can be set to increase the amount of integrator available to counteract disturbances or reduced to improve settling time after large pitch moment trim changes.
 *
 * @group Multicopter Rate Control
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(MC_PR_INT_LIM, 0.3);

/**
 * Pitch rate D gain
 *
 * Pitch rate differential gain. Small values help reduce fast oscillations. If value is too big oscillations will appear again.
 *
 * @group Multicopter Rate Control
 * @decimal 4
 * @increment 0.0005
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(MC_PITCHRATE_D, 0.003);

/**
 * Pitch rate feedforward
 *
 * Improves tracking performance.
 *
 * @group Multicopter Rate Control
 * @decimal 4
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(MC_PITCHRATE_FF, 0.0);

/**
 * Pitch rate controller gain
 *
 * Global gain of the controller.
 * 
 * This gain scales the P, I and D terms of the controller:
 * output = MC_PITCHRATE_K * (MC_PITCHRATE_P * error
 * + MC_PITCHRATE_I * error_integral
 * + MC_PITCHRATE_D * error_derivative)
 * Set MC_PITCHRATE_P=1 to implement a PID in the ideal form.
 * Set MC_PITCHRATE_K=1 to implement a PID in the parallel form.
 *
 * @group Multicopter Rate Control
 * @decimal 4
 * @increment 0.0005
 * @min 0.01
 * @max 5.0
 */
PARAM_DEFINE_FLOAT(MC_PITCHRATE_K, 1.0);

/**
 * Yaw rate P gain
 *
 * Yaw rate proportional gain, i.e. control output for angular speed error 1 rad/s.
 *
 * @group Multicopter Rate Control
 * @decimal 3
 * @increment 0.01
 * @min 0.0
 * @max 0.6
 */
PARAM_DEFINE_FLOAT(MC_YAWRATE_P, 0.2);

/**
 * Yaw rate I gain
 *
 * Yaw rate integral gain. Can be set to compensate static thrust difference or gravity center offset.
 *
 * @group Multicopter Rate Control
 * @decimal 3
 * @increment 0.01
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(MC_YAWRATE_I, 0.1);

/**
 * Yaw rate integrator limit
 *
 * Yaw rate integrator limit. Can be set to increase the amount of integrator available to counteract disturbances or reduced to improve settling time after large yaw moment trim changes.
 *
 * @group Multicopter Rate Control
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(MC_YR_INT_LIM, 0.3);

/**
 * Yaw rate D gain
 *
 * Yaw rate differential gain. Small values help reduce fast oscillations. If value is too big oscillations will appear again.
 *
 * @group Multicopter Rate Control
 * @decimal 4
 * @increment 0.0005
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(MC_YAWRATE_D, 0.0);

/**
 * Yaw rate feedforward
 *
 * Improves tracking performance.
 *
 * @group Multicopter Rate Control
 * @decimal 4
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(MC_YAWRATE_FF, 0.0);

/**
 * Yaw rate controller gain
 *
 * Global gain of the controller.
 * 
 * This gain scales the P, I and D terms of the controller:
 * output = MC_YAWRATE_K * (MC_YAWRATE_P * error
 * + MC_YAWRATE_I * error_integral
 * + MC_YAWRATE_D * error_derivative)
 * Set MC_YAWRATE_P=1 to implement a PID in the ideal form.
 * Set MC_YAWRATE_K=1 to implement a PID in the parallel form.
 *
 * @group Multicopter Rate Control
 * @decimal 4
 * @increment 0.0005
 * @min 0.01
 * @max 5.0
 */
PARAM_DEFINE_FLOAT(MC_YAWRATE_K, 1.0);

/**
 * Battery power level scaler
 *
 * This compensates for voltage drop of the battery over time by attempting to
 * normalize performance across the operating range of the battery. The copter
 * should constantly behave as if it was fully charged with reduced max acceleration
 * at lower battery percentages. i.e. if hover is at 0.5 throttle at 100% battery,
 * it will still be 0.5 at 60% battery.
 *
 * @group Multicopter Rate Control
 * @boolean
 */
PARAM_DEFINE_INT32(MC_BAT_SCALE_EN, 0);

/**
 * Low pass filter cutoff frequency for yaw torque setpoint
 *
 * Reduces vibrations by lowering high frequency torque caused by rotor acceleration.
 * 0 disables the filter
 *
 * @group Multicopter Rate Control
 * @decimal 3
 * @min 0
 * @max 10
 * @unit Hz
 */
PARAM_DEFINE_FLOAT(MC_YAW_TQ_CUTOFF, 2.0);

/**
 * Geofence violation action
 *
 * Note: Setting this value to 4 enables flight termination,
 * which will kill the vehicle on violation of the fence.
 *
 * @group Geofence
 * @value 0 None
 * @value 1 Warning
 * @value 2 Hold mode
 * @value 3 Return mode
 * @value 4 Terminate
 * @value 5 Land mode
 * @min 0
 * @max 5
 */
PARAM_DEFINE_INT32(GF_ACTION, 2);

/**
 * Geofence source
 *
 * Select which position source should be used. Selecting GPS instead of global position makes sure that there is
 * no dependence on the position estimator
 * 0 = global position, 1 = GPS
 *
 * @group Geofence
 * @value 0 GPOS
 * @value 1 GPS
 * @min 0
 * @max 1
 */
PARAM_DEFINE_INT32(GF_SOURCE, 0);

/**
 * Max horizontal distance from Home
 *
 * Maximum horizontal distance in meters the vehicle can be from Home before triggering a geofence action.
 * Disabled if 0.
 *
 * @group Geofence
 * @increment 1
 * @min 0
 * @max 10000
 * @unit m
 */
PARAM_DEFINE_FLOAT(GF_MAX_HOR_DIST, 0.0);

/**
 * Max vertical distance from Home
 *
 * Maximum vertical distance in meters the vehicle can be from Home before triggering a geofence action.
 * Disabled if 0.
 *
 * @group Geofence
 * @increment 1
 * @min 0
 * @max 10000
 * @unit m
 */
PARAM_DEFINE_FLOAT(GF_MAX_VER_DIST, 0.0);

/**
 * [EXPERIMENTAL] Use Pre-emptive geofence triggering
 *
 * WARNING: This experimental feature may cause flyaways. Use at your own risk.
 * 
 * Predict the motion of the vehicle and trigger the breach if it is determined that the current trajectory
 * would result in a breach happening before the vehicle can make evasive maneuvers.
 * The vehicle is then re-routed to a safe hold position (stop for multirotor, loiter for fixed wing).
 *
 * @group Geofence
 * @boolean
 */
PARAM_DEFINE_INT32(GF_PREDICT, 0);

/**
 * Default take-off altitude
 *
 * This is the relative altitude the system will take off to
 * if not otherwise specified.
 *
 * @group Mission
 * @decimal 1
 * @increment 0.5
 * @min 0
 * @unit m
 */
PARAM_DEFINE_FLOAT(MIS_TAKEOFF_ALT, 2.5);

/**
 * Mission takeoff/landing required
 *
 * Specifies if a mission has to contain a takeoff and/or mission landing.
 * Validity of configured takeoffs/landings is checked independently of the setting here.
 *
 * @group Mission
 * @value 0 No requirements
 * @value 1 Require a takeoff
 * @value 2 Require a landing
 * @value 3 Require a takeoff and a landing
 * @value 4 Require both a takeoff and a landing, or neither
 * @value 5 Same as previous when landed, in-air require landing only if no valid VTOL approach is present
 */
PARAM_DEFINE_INT32(MIS_TKO_LAND_REQ, 0);

/**
 * Maximal horizontal distance from Home to first waypoint
 *
 * There will be a warning message if the current waypoint is more distant than MIS_DIST_1WP from Home.
 * Has no effect on mission validity.
 * Set a value of zero or less to disable.
 *
 * @group Mission
 * @decimal 1
 * @increment 100
 * @min -1
 * @max 100000
 * @unit m
 */
PARAM_DEFINE_FLOAT(MIS_DIST_1WP, 10000);

/**
 * Enable gimbal yaw control in missions
 *
 * Enable yaw control of the mount. (Only affects multicopters and ROI mission items)
 * 
 * If enabled, yaw commands will be sent to the mount and the vehicle will follow its heading towards the flight direction.
 * If disabled, the vehicle will yaw towards the ROI.
 *
 * @group Mission
 * @value 0 Disable
 * @value 1 Enable
 * @min 0
 * @max 1
 */
PARAM_DEFINE_INT32(MIS_MNT_YAW_CTL, 0);

/**
 * Waypoint heading timeout
 *
 * Time in seconds we wait on reaching target heading at a waypoint if it is forced
 * 
 * If set > 0 it will ignore the target heading for normal waypoint acceptance. If the
 * waypoint forces the heading the timeout will matter. For example on VTOL forwards transition.
 * Mainly useful for VTOLs that have less yaw authority and might not reach target
 * yaw in wind. Disabled by default.
 *
 * @group Mission
 * @decimal 1
 * @increment 1
 * @min -1
 * @max 20
 * @unit s
 */
PARAM_DEFINE_FLOAT(MIS_YAW_TMT, -1.0);

/**
 * Max yaw error in degrees needed for waypoint heading acceptance
 *
 * 
 *
 * @group Mission
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 90
 * @unit deg
 */
PARAM_DEFINE_FLOAT(MIS_YAW_ERR, 12.0);

/**
 * Landing abort min altitude
 *
 * Minimum altitude above landing point that the vehicle will climb to after an aborted landing.
 * Then vehicle will loiter in this altitude until further command is received.
 * Only applies to fixed-wing vehicles.
 *
 * @group Mission
 * @min 0
 * @unit m
 */
PARAM_DEFINE_INT32(MIS_LND_ABRT_ALT, 30);

/**
 * Timeout to allow the payload to execute the mission command
 *
 * Ensure:
 * gripper: NAV_CMD_DO_GRIPPER
 * has released before continuing mission.
 * winch: CMD_DO_WINCH
 * has delivered before continuing mission.
 * gimbal: CMD_DO_GIMBAL_MANAGER_PITCHYAW
 * has reached the commanded orientation before beginning to take pictures.
 *
 * @group Mission
 * @decimal 1
 * @min 0
 * @unit s
 */
PARAM_DEFINE_FLOAT(MIS_COMMAND_TOUT, 0.0);

/**
 * Loiter radius (FW only)
 *
 * Default value of loiter radius in fixed-wing mode (e.g. for Loiter mode).
 * 
 * The direction of the loiter can be set via the sign: A positive value for
 * clockwise, negative for counter-clockwise.
 *
 * @group Mission
 * @decimal 1
 * @increment 0.5
 * @min -10000
 * @max 10000
 * @unit m
 */
PARAM_DEFINE_FLOAT(NAV_LOITER_RAD, 80.0);

/**
 * Acceptance Radius
 *
 * Default acceptance radius, overridden by acceptance radius of waypoint if set.
 * For fixed wing the npfg switch distance is used for horizontal acceptance.
 *
 * @group Mission
 * @decimal 1
 * @increment 0.5
 * @min 0.05
 * @max 200.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(NAV_ACC_RAD, 10.0);

/**
 * FW Altitude Acceptance Radius
 *
 * Acceptance radius for fixedwing altitude.
 *
 * @group Mission
 * @decimal 1
 * @increment 0.5
 * @min 0.05
 * @max 200.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(NAV_FW_ALT_RAD, 10.0);

/**
 * FW Altitude Acceptance Radius before a landing
 *
 * Altitude acceptance used for the last waypoint before a fixed-wing landing. This is usually smaller
 * than the standard vertical acceptance because close to the ground higher accuracy is required.
 *
 * @group Mission
 * @decimal 1
 * @min 0.05
 * @max 200.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(NAV_FW_ALTL_RAD, 5.0);

/**
 * MC Altitude Acceptance Radius
 *
 * Acceptance radius for multicopter altitude.
 *
 * @group Mission
 * @decimal 1
 * @increment 0.5
 * @min 0.05
 * @max 200.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(NAV_MC_ALT_RAD, 0.8);

/**
 * Set traffic avoidance mode
 *
 * Enabling this will allow the system to respond
 * to transponder data from e.g. ADSB transponders
 *
 * @group Mission
 * @value 0 Disabled
 * @value 1 Warn only
 * @value 2 Return mode
 * @value 3 Land mode
 * @value 4 Position Hold mode
 */
PARAM_DEFINE_INT32(NAV_TRAFF_AVOID, 1);

/**
 * Set NAV TRAFFIC AVOID horizontal distance
 *
 * Defines a crosstrack horizontal distance
 *
 * @group Mission
 * @min 500
 * @unit m
 */
PARAM_DEFINE_FLOAT(NAV_TRAFF_A_HOR, 500);

/**
 * Set NAV TRAFFIC AVOID vertical distance
 *
 * 
 *
 * @group Mission
 * @min 10
 * @max 500
 * @unit m
 */
PARAM_DEFINE_FLOAT(NAV_TRAFF_A_VER, 500);

/**
 * Estimated time until collision
 *
 * Minimum acceptable time until collsion.
 * Assumes constant speed over 3d distance.
 *
 * @group Mission
 * @min 1
 * @max 900000000
 * @unit s
 */
PARAM_DEFINE_INT32(NAV_TRAFF_COLL_T, 60);

/**
 * Force VTOL mode takeoff and land
 *
 * 
 *
 * @group Mission
 * @boolean
 */
PARAM_DEFINE_INT32(NAV_FORCE_VT, 1);

/**
 * Minimum Loiter altitude
 *
 * This is the minimum altitude above Home the system will always obey in Loiter (Hold) mode if switched into this
 * mode without specifying an altitude (e.g. through Loiter switch on RC).
 * Doesn't affect Loiters that are part of Missions or that are entered through a reposition setpoint ("Go to").
 * Set to a negative value to disable.
 *
 * @group Mission
 * @decimal 1
 * @increment 0.5
 * @min -1
 * @unit m
 */
PARAM_DEFINE_FLOAT(NAV_MIN_LTR_ALT, -1.0);

/**
 * Minimum height above ground during Mission and RTL
 *
 * Minimum height above ground the vehicle is allowed to descend to during Mission and RTL,
 * excluding landing commands.
 * Requires a distance sensor to be set up.
 * Note: only prevents the vehicle from descending further, but does not force it to climb.
 * 
 * Set to a negative value to disable.
 *
 * @group Mission
 * @decimal 1
 * @increment 1
 * @min -1
 * @unit m
 */
PARAM_DEFINE_FLOAT(NAV_MIN_GND_DIST, -1.0);

/**
 * Loiter at last GCS heartbeat position on data link loss
 *
 * When the data link is lost and this setting is enabled,
 * the vehicle will loiter at the position where the last GCS
 * heartbeat was received rather than at its current position.
 * Only applies to Hold mode during failsafe actions.
 *
 * @group Mission
 * @boolean
 */
PARAM_DEFINE_INT32(NAV_LTR_LAST_DL, 0);

/**
 * Landing Target Timeout
 *
 * Time after which the landing target is considered lost without any new measurements.
 *
 * @group Precision Land
 * @decimal 1
 * @increment 0.5
 * @min 0.0
 * @max 50
 * @unit s
 */
PARAM_DEFINE_FLOAT(PLD_BTOUT, 5.0);

/**
 * Horizontal acceptance radius
 *
 * Start descending if closer above landing target than this.
 *
 * @group Precision Land
 * @decimal 2
 * @increment 0.1
 * @min 0.0
 * @max 10
 * @unit m
 */
PARAM_DEFINE_FLOAT(PLD_HACC_RAD, 0.2);

/**
 * Final approach altitude
 *
 * Allow final approach (without horizontal positioning) if losing landing target closer than this to the ground.
 *
 * @group Precision Land
 * @decimal 2
 * @increment 0.1
 * @min 0.0
 * @max 10
 * @unit m
 */
PARAM_DEFINE_FLOAT(PLD_FAPPR_ALT, 0.1);

/**
 * Search altitude
 *
 * Altitude above home to which to climb when searching for the landing target.
 *
 * @group Precision Land
 * @decimal 1
 * @increment 0.1
 * @min 0.0
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(PLD_SRCH_ALT, 10.0);

/**
 * Search timeout
 *
 * Time allowed to search for the landing target before falling back to normal landing.
 *
 * @group Precision Land
 * @decimal 1
 * @increment 0.1
 * @min 0.0
 * @max 100
 * @unit s
 */
PARAM_DEFINE_FLOAT(PLD_SRCH_TOUT, 10.0);

/**
 * Maximum number of search attempts
 *
 * Maximum number of times to search for the landing target if it is lost during the precision landing.
 *
 * @group Precision Land
 * @min 0
 * @max 100
 */
PARAM_DEFINE_INT32(PLD_MAX_SRCH, 3);

/**
 * Return mode return altitude
 *
 * Default minimum altitude above destination (e.g. home, safe point, landing pattern) for return flight.
 * The vehicle will climb to this altitude when Return mode is engaged, unless it currently is flying higher already.
 * This is affected by RTL_MIN_DIST and RTL_CONE_ANG.
 *
 * @group Return Mode
 * @decimal 1
 * @increment 0.5
 * @min 0
 * @unit m
 */
PARAM_DEFINE_FLOAT(RTL_RETURN_ALT, 60.0);

/**
 * Return mode loiter altitude
 *
 * Descend to this altitude (above destination position) after return, and wait for time defined in RTL_LAND_DELAY.
 * Land (i.e. slowly descend) from this altitude if autolanding allowed.
 * VTOLs do transition to hover in this altitude above the landing point.
 *
 * @group Return Mode
 * @decimal 1
 * @increment 0.5
 * @min 0
 * @unit m
 */
PARAM_DEFINE_FLOAT(RTL_DESCEND_ALT, 30.0);

/**
 * Return mode delay
 *
 * Delay before landing (after initial descent) in Return mode.
 * If set to -1 the system will not land but loiter at RTL_DESCEND_ALT.
 *
 * @group Return Mode
 * @decimal 1
 * @increment 0.5
 * @min -1
 * @unit s
 */
PARAM_DEFINE_FLOAT(RTL_LAND_DELAY, 0.0);

/**
 * Min distance for RTL cone altitude calculation
 *
 * Horizontal radius from return point within which special rules for return mode apply
 * 
 * The return altitude will be calculated based on RTL_CONE_ANG parameter.
 * The yaw setpoint will switch to the one defined by corresponding waypoint.
 *
 * @group Return Mode
 * @decimal 1
 * @increment 0.5
 * @min 0.5
 * @unit m
 */
PARAM_DEFINE_FLOAT(RTL_MIN_DIST, 10.0);

/**
 * Return type
 *
 * Return mode destination and flight path (home location, rally point, mission landing pattern, reverse mission)
 *
 * @group Return Mode
 * @value 0 Return to closest safe point (home or rally point) via direct path.
 * @value 1 Return to closest safe point other than home (mission landing pattern or rally point), via direct path. If no mission landing or rally points are defined return home via direct path. Always choose closest safe landing point if vehicle is a VTOL in hover mode.
 * @value 2 Return to a planned mission landing, if available, using the mission path, else return to home via the reverse mission path. Do not consider rally points.
 * @value 3 Return via direct path to closest destination: home, start of mission landing pattern or safe point. If the destination is a mission landing pattern, follow the pattern to land.
 * @value 4 Return to the planned mission landing, or to home via the reverse mission path, whichever is closer by counting waypoints. Do not consider rally points.
 * @value 5 Return directly to safe landing point (do not consider mission landing and Home)
 */
PARAM_DEFINE_INT32(RTL_TYPE, 0);

/**
 * Half-angle of the return mode altitude cone
 *
 * Defines the half-angle of a cone centered around the destination position that
 * affects the altitude at which the vehicle returns.
 *
 * @group Return Mode
 * @value 0 No cone, always climb to RTL_RETURN_ALT above destination.
 * @value 25 25 degrees half cone angle.
 * @value 45 45 degrees half cone angle.
 * @value 65 65 degrees half cone angle.
 * @value 80 80 degrees half cone angle.
 * @value 90 Only climb to at least RTL_DESCEND_ALT above destination.
 * @min 0
 * @max 90
 * @unit deg
 */
PARAM_DEFINE_INT32(RTL_CONE_ANG, 45);

/**
 * RTL precision land mode
 *
 * Use precision landing when doing an RTL landing phase.
 * This setting does not apply for RTL destinations planned as part of a mission.
 *
 * @group Return Mode
 * @value 0 No precision landing
 * @value 1 Opportunistic precision landing
 * @value 2 Required precision landing
 */
PARAM_DEFINE_INT32(RTL_PLD_MD, 0);

/**
 * Loiter radius for rtl descend
 *
 * Set the radius for loitering to a safe altitude for VTOL transition.
 *
 * @group Return Mode
 * @decimal 1
 * @increment 0.5
 * @min 25
 * @unit m
 */
PARAM_DEFINE_FLOAT(RTL_LOITER_RAD, 80.0);

/**
 * RTL time estimate safety margin factor
 *
 * Safety factor that is used to scale the actual RTL time estimate.
 * Time with margin = RTL_TIME_FACTOR * time + RTL_TIME_MARGIN
 *
 * @group Return To Land
 * @decimal 1
 * @increment 0.1
 * @min 1.0
 * @max 2.0
 */
PARAM_DEFINE_FLOAT(RTL_TIME_FACTOR, 1.1);

/**
 * RTL time estimate safety margin offset
 *
 * Margin that is added to the time estimate, after it has already been scaled
 * Time with margin = RTL_TIME_FACTOR * time + RTL_TIME_MARGIN
 *
 * @group Return To Land
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 3600
 * @unit s
 */
PARAM_DEFINE_INT32(RTL_TIME_MARGIN, 100);

/**
 * RTL force approach landing
 *
 * Only consider RTL point, if it has an approach defined.
 *
 * @group Return To Land
 * @boolean
 */
PARAM_DEFINE_INT32(RTL_APPR_FORCE, 0);

/**
 * VTOL Takeoff relative loiter altitude
 *
 * Altitude relative to home at which vehicle will loiter after front transition.
 *
 * @group VTOL Takeoff
 * @decimal 1
 * @increment 1
 * @min 20
 * @max 300
 * @unit m
 */
PARAM_DEFINE_FLOAT(VTO_LOITER_ALT, 80);

/**
 * Type of Gripper (Servo, etc.)
 *
 * 
 *
 * @group Payload Deliverer
 * @value -1 Undefined
 * @value 0 Servo
 * @min -1
 * @max 0
 */
PARAM_DEFINE_INT32(PD_GRIPPER_TYPE, 0);

/**
 * Timeout for successful gripper actuation acknowledgement
 *
 * Maximum time Gripper will wait while the successful griper actuation isn't recognised.
 * If the gripper has no feedback sensor, it will simply wait for
 * this time before considering gripper actuation successful and publish a
 * 'VehicleCommandAck' signaling successful gripper action
 * 
 *
 * @group Payload Deliverer
 * @min 0
 * @unit s
 */
PARAM_DEFINE_FLOAT(PD_GRIPPER_TO, 1);

/**
 * RC channel 1 minimum
 *
 * Minimum value for RC channel 1
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC1_MIN, 1000.0);

/**
 * RC channel 1 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC1_TRIM, 1500.0);

/**
 * RC channel 1 maximum
 *
 * Maximum value for RC channel 1
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC1_MAX, 2000.0);

/**
 * RC channel 1 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC1_REV, 1);

/**
 * RC channel 2 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC2_MIN, 1000.0);

/**
 * RC channel 2 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC2_TRIM, 1500.0);

/**
 * RC channel 2 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC2_MAX, 2000.0);

/**
 * RC channel 2 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC2_REV, 1);

/**
 * RC channel 3 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC3_MIN, 1000);

/**
 * RC channel 3 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC3_TRIM, 1500);

/**
 * RC channel 3 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC3_MAX, 2000);

/**
 * RC channel 3 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC3_REV, 1);

/**
 * RC channel 4 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC4_MIN, 1000);

/**
 * RC channel 4 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC4_TRIM, 1500);

/**
 * RC channel 4 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC4_MAX, 2000);

/**
 * RC channel 4 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC4_REV, 1);

/**
 * RC channel 5 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC5_MIN, 1000);

/**
 * RC channel 5 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC5_TRIM, 1500);

/**
 * RC channel 5 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC5_MAX, 2000);

/**
 * RC channel 5 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC5_REV, 1);

/**
 * RC channel 6 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC6_MIN, 1000);

/**
 * RC channel 6 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC6_TRIM, 1500);

/**
 * RC channel 6 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC6_MAX, 2000);

/**
 * RC channel 6 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC6_REV, 1);

/**
 * RC channel 7 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC7_MIN, 1000);

/**
 * RC channel 7 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC7_TRIM, 1500);

/**
 * RC channel 7 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC7_MAX, 2000);

/**
 * RC channel 7 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC7_REV, 1);

/**
 * RC channel 8 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC8_MIN, 1000);

/**
 * RC channel 8 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC8_TRIM, 1500);

/**
 * RC channel 8 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC8_MAX, 2000);

/**
 * RC channel 8 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC8_REV, 1);

/**
 * RC channel 9 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC9_MIN, 1000);

/**
 * RC channel 9 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC9_TRIM, 1500);

/**
 * RC channel 9 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC9_MAX, 2000);

/**
 * RC channel 9 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC9_REV, 1);

/**
 * RC channel 10 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC10_MIN, 1000);

/**
 * RC channel 10 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC10_TRIM, 1500);

/**
 * RC channel 10 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC10_MAX, 2000);

/**
 * RC channel 10 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC10_REV, 1);

/**
 * RC channel 11 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC11_MIN, 1000);

/**
 * RC channel 11 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC11_TRIM, 1500);

/**
 * RC channel 11 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC11_MAX, 2000);

/**
 * RC channel 11 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC11_REV, 1);

/**
 * RC channel 12 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC12_MIN, 1000);

/**
 * RC channel 12 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC12_TRIM, 1500);

/**
 * RC channel 12 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC12_MAX, 2000);

/**
 * RC channel 12 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC12_REV, 1);

/**
 * RC channel 13 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC13_MIN, 1000);

/**
 * RC channel 13 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC13_TRIM, 1500);

/**
 * RC channel 13 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC13_MAX, 2000);

/**
 * RC channel 13 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC13_REV, 1);

/**
 * RC channel 14 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC14_MIN, 1000);

/**
 * RC channel 14 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC14_TRIM, 1500);

/**
 * RC channel 14 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC14_MAX, 2000);

/**
 * RC channel 14 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC14_REV, 1);

/**
 * RC channel 15 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC15_MIN, 1000);

/**
 * RC channel 15 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC15_TRIM, 1500);

/**
 * RC channel 15 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC15_MAX, 2000);

/**
 * RC channel 15 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC15_REV, 1);

/**
 * RC channel 16 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC16_MIN, 1000);

/**
 * RC channel 16 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC16_TRIM, 1500);

/**
 * RC channel 16 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC16_MAX, 2000);

/**
 * RC channel 16 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC16_REV, 1);

/**
 * RC channel 17 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC17_MIN, 1000);

/**
 * RC channel 17 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC17_TRIM, 1500);

/**
 * RC channel 17 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC17_MAX, 2000);

/**
 * RC channel 17 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC17_REV, 1);

/**
 * RC channel 18 minimum
 *
 * Minimum value for this channel.
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 1500.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC18_MIN, 1000);

/**
 * RC channel 18 trim
 *
 * Mid point value
 *
 * @group Radio Calibration
 * @min 800.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC18_TRIM, 1500);

/**
 * RC channel 18 maximum
 *
 * Maximum value for this channel.
 *
 * @group Radio Calibration
 * @min 1500.0
 * @max 2200.0
 * @unit us
 */
PARAM_DEFINE_FLOAT(RC18_MAX, 2000);

/**
 * RC channel 18 reverse
 *
 * Set to -1 to reverse channel.
 *
 * @group Radio Calibration
 * @min -1
 * @max 1
 */
PARAM_DEFINE_INT32(RC18_REV, 1);

/**
 * RC channel count
 *
 * This parameter is used by Ground Station software to save the number
 * of channels which were used during RC calibration. It is only meant
 * for ground station use.
 *
 * @group Radio Calibration
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_CHAN_CNT, 0);

/**
 * Roll control channel mapping
 *
 * The channel index (starting from 1 for channel 1) indicates
 * which channel should be used for reading roll inputs from.
 * A value of zero indicates the switch is not assigned.
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_ROLL, 0);

/**
 * Pitch control channel mapping
 *
 * The channel index (starting from 1 for channel 1) indicates
 * which channel should be used for reading pitch inputs from.
 * A value of zero indicates the switch is not assigned.
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_PITCH, 0);

/**
 * Failsafe channel mapping
 *
 * Configures which RC channel is used by the receiver to indicate the signal was lost
 * (on receivers that use output a fixed signal value to report lost signal).
 * If set to 0, the channel mapped to throttle is used.
 * 
 * Use RC_FAILS_THR to set the threshold indicating lost signal. By default it's below
 * the expected range and hence disabled.
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_FAILSAFE, 0);

/**
 * Throttle control channel mapping
 *
 * The channel index (starting from 1 for channel 1) indicates
 * which channel should be used for reading throttle inputs from.
 * A value of zero indicates the switch is not assigned.
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_THROTTLE, 0);

/**
 * Yaw control channel mapping
 *
 * The channel index (starting from 1 for channel 1) indicates
 * which channel should be used for reading yaw inputs from.
 * A value of zero indicates the switch is not assigned.
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_YAW, 0);

/**
 * AUX1 Passthrough RC channel
 *
 * 
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_AUX1, 0);

/**
 * AUX2 Passthrough RC channel
 *
 * 
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_AUX2, 0);

/**
 * AUX3 Passthrough RC channel
 *
 * 
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_AUX3, 0);

/**
 * AUX4 Passthrough RC channel
 *
 * 
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_AUX4, 0);

/**
 * AUX5 Passthrough RC channel
 *
 * 
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_AUX5, 0);

/**
 * AUX6 Passthrough RC channel
 *
 * 
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_AUX6, 0);

/**
 * PARAM1 tuning channel
 *
 * Can be used for parameter tuning with the RC. This one is further referenced as the 1st parameter channel.
 * Set to 0 to deactivate *
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_PARAM1, 0);

/**
 * PARAM2 tuning channel
 *
 * Can be used for parameter tuning with the RC. This one is further referenced as the 2nd parameter channel.
 * Set to 0 to deactivate *
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_PARAM2, 0);

/**
 * PARAM3 tuning channel
 *
 * Can be used for parameter tuning with the RC. This one is further referenced as the 3th parameter channel.
 * Set to 0 to deactivate *
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_PARAM3, 0);

/**
 * RC channel to engage the main motor (for helicopters)
 *
 * 
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_ENG_MOT, 0);

/**
 * Failsafe channel PWM threshold
 *
 * Use RC_MAP_FAILSAFE to specify which channel is used to indicate RC loss via this threshold.
 * By default this is the throttle channel.
 * 
 * Set to a PWM value slightly above the PWM value for the channel (e.g. throttle) in a failsafe event,
 * but below the minimum PWM value for the channel during normal operation.
 * 
 * Note: The default value of 0 disables the feature (it is below the expected range).
 *
 * @group Radio Calibration
 * @min 0
 * @max 2200
 * @unit us
 */
PARAM_DEFINE_INT32(RC_FAILS_THR, 0);

/**
 * PWM input channel that provides RSSI
 *
 * 0: do not read RSSI from input channel
 * 1-18: read RSSI from specified input channel
 * 
 * Specify the range for RSSI input with RC_RSSI_PWM_MIN and RC_RSSI_PWM_MAX parameters.
 *
 * @group Radio Calibration
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_RSSI_PWM_CHAN, 0);

/**
 * Min input value for RSSI reading
 *
 * Only used if RC_RSSI_PWM_CHAN > 0
 *
 * @group Radio Calibration
 * @min 0
 * @max 2000
 */
PARAM_DEFINE_INT32(RC_RSSI_PWM_MIN, 1000);

/**
 * Max input value for RSSI reading
 *
 * Only used if RC_RSSI_PWM_CHAN > 0
 *
 * @group Radio Calibration
 * @min 0
 * @max 2000
 */
PARAM_DEFINE_INT32(RC_RSSI_PWM_MAX, 2000);

/**
 * Single channel flight mode selection
 *
 * If this parameter is non-zero, flight modes are only selected
 * by this channel and are assigned to six slots.
 *
 * @group Radio Switches
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_FLTMODE, 0);

/**
 * Return switch channel
 *
 * 
 *
 * @group Radio Switches
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_RETURN_SW, 0);

/**
 * Loiter switch channel
 *
 * 
 *
 * @group Radio Switches
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_LOITER_SW, 0);

/**
 * Offboard switch channel
 *
 * 
 *
 * @group Radio Switches
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_OFFB_SW, 0);

/**
 * Emergency Kill switch channel
 *
 * This channel immediately sets all outputs to their disarmed values, parachutes are NOT deployed.
 * Unlike termination this can be undone. Quickly flipping the switch back restores control.
 * System auto-disarms after 5 seconds, preflight checks and re-arming are then required.
 *
 * @group Radio Switches
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_KILL_SW, 0);

/**
 * Termination switch channel
 *
 * This channel triggers irreversible flight termination:
 * All outputs are disabled and set to their failsafe values (disarmed by default)
 * and MAVLink parachutes are triggered.
 * 
 * Unlike a kill switch, this cannot be undone until system reboot. Use with caution.
 *
 * @group Radio Switches
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_TERM_SW, 0);

/**
 * Arm switch channel
 *
 * Use it to arm/disarm via switch instead of default throttle stick. If this is
 * assigned, arming and disarming via stick is disabled.
 *
 * @group Radio Switches
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_ARM_SW, 0);

/**
 * Flaps channel
 *
 * 
 *
 * @group Radio Switches
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_FLAPS, 0);

/**
 * VTOL transition switch channel mapping
 *
 * 
 *
 * @group Radio Switches
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_TRANS_SW, 0);

/**
 * Landing gear switch channel
 *
 * 
 *
 * @group Radio Switches
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_GEAR_SW, 0);

/**
 * Button flight mode selection
 *
 * This bitmask allows to specify multiple channels for changing flight modes using
 * momentary buttons. Each channel is assigned to a mode slot ((lowest channel = slot 1).
 * The resulting modes for each slot X is defined by the COM_FLTMODEX parameters.
 * The functionality can be used only if RC_MAP_FLTMODE is disabled.
 * 
 * The maximum number of available slots and hence bits set in the mask is 6.
 *
 * @group Radio Switches
 * @bit 0 Mask Channel 1 as a mode button
 * @bit 1 Mask Channel 2 as a mode button
 * @bit 2 Mask Channel 3 as a mode button
 * @bit 3 Mask Channel 4 as a mode button
 * @bit 4 Mask Channel 5 as a mode button
 * @bit 5 Mask Channel 6 as a mode button
 * @bit 6 Mask Channel 7 as a mode button
 * @bit 7 Mask Channel 8 as a mode button
 * @bit 8 Mask Channel 9 as a mode button
 * @bit 9 Mask Channel 10 as a mode button
 * @bit 10 Mask Channel 11 as a mode button
 * @bit 11 Mask Channel 12 as a mode button
 * @bit 12 Mask Channel 13 as a mode button
 * @bit 13 Mask Channel 14 as a mode button
 * @bit 14 Mask Channel 15 as a mode button
 * @bit 15 Mask Channel 16 as a mode button
 * @bit 16 Mask Channel 17 as a mode button
 * @bit 17 Mask Channel 18 as a mode button
 * @min 0
 * @max 262143
 * @min 0
 * @max 258048
 */
PARAM_DEFINE_INT32(RC_MAP_FLTM_BTN, 0);

/**
 * Payload Power Switch RC channel
 *
 * 
 *
 * @group Radio Switches
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_PAY_SW, 0);

/**
 * Threshold for selecting return to launch mode
 *
 * 0-1 indicate where in the full channel range the threshold sits
 * 0 : min
 * 1 : max
 * sign indicates polarity of comparison
 * positive : true when channel>th
 * negative : true when channel<th
 *
 * @group Radio Switches
 * @decimal 2
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(RC_RETURN_TH, 0.75);

/**
 * Threshold for selecting loiter mode
 *
 * 0-1 indicate where in the full channel range the threshold sits
 * 0 : min
 * 1 : max
 * sign indicates polarity of comparison
 * positive : true when channel>th
 * negative : true when channel<th
 *
 * @group Radio Switches
 * @decimal 2
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(RC_LOITER_TH, 0.75);

/**
 * Threshold for selecting offboard mode
 *
 * 0-1 indicate where in the full channel range the threshold sits
 * 0 : min
 * 1 : max
 * sign indicates polarity of comparison
 * positive : true when channel>th
 * negative : true when channel<th
 *
 * @group Radio Switches
 * @decimal 2
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(RC_OFFB_TH, 0.75);

/**
 * Threshold for the kill switch
 *
 * 0-1 indicate where in the full channel range the threshold sits
 * 0 : min
 * 1 : max
 * sign indicates polarity of comparison
 * positive : true when channel>th
 * negative : true when channel<th
 *
 * @group Radio Switches
 * @decimal 2
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(RC_KILLSWITCH_TH, 0.75);

/**
 * Threshold for the arm switch
 *
 * 0-1 indicate where in the full channel range the threshold sits
 * 0 : min
 * 1 : max
 * sign indicates polarity of comparison
 * positive : true when channel>th
 * negative : true when channel<th
 *
 * @group Radio Switches
 * @decimal 2
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(RC_ARMSWITCH_TH, 0.75);

/**
 * Threshold for the VTOL transition switch
 *
 * 0-1 indicate where in the full channel range the threshold sits
 * 0 : min
 * 1 : max
 * sign indicates polarity of comparison
 * positive : true when channel>th
 * negative : true when channel<th
 *
 * @group Radio Switches
 * @decimal 2
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(RC_TRANS_TH, 0.75);

/**
 * Threshold for the landing gear switch
 *
 * 0-1 indicate where in the full channel range the threshold sits
 * 0 : min
 * 1 : max
 * sign indicates polarity of comparison
 * positive : true when channel>th
 * negative : true when channel<th
 *
 * @group Radio Switches
 * @decimal 2
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(RC_GEAR_TH, 0.75);

/**
 * Threshold for selecting main motor engage
 *
 * 0-1 indicate where in the full channel range the threshold sits
 * 0 : min
 * 1 : max
 * sign indicates polarity of comparison
 * positive : true when channel>th
 * negative : true when channel<th
 *
 * @group Radio Switches
 * @decimal 2
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(RC_ENG_MOT_TH, 0.75);

/**
 * Threshold for on position of payload power switch
 *
 * 0-1 indicate where in the full channel range the threshold sits
 * 0 : min
 * 1 : max
 * sign indicates polarity of comparison
 * positive : true when channel>th
 * negative : true when channel<th
 *
 * @group Radio Switches
 * @decimal 2
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(RC_PAYLOAD_TH, 0.75);

/**
 * Threshold for mid position of payload power switch
 *
 * 0-1 indicate where in the full channel range the threshold sits
 * 0 : min
 * 1 : max
 * sign indicates polarity of comparison
 * positive : true when channel>th
 * negative : true when channel<th
 *
 * @group Radio Switches
 * @decimal 2
 * @min -1
 * @max 1
 */
PARAM_DEFINE_FLOAT(RC_PAYLOAD_MIDTH, 0.25);

/**
 * Mode switch channel mapping (deprecated)
 *
 * This is the main flight mode selector.
 * The channel index (starting from 1 for channel 1) indicates
 * which channel should be used for deciding about the main mode.
 * A value of zero indicates the switch is not assigned.
 *
 * @group Radio Switches
 * @value 0 Unassigned
 * @value 1 Channel 1
 * @value 2 Channel 2
 * @value 3 Channel 3
 * @value 4 Channel 4
 * @value 5 Channel 5
 * @value 6 Channel 6
 * @value 7 Channel 7
 * @value 8 Channel 8
 * @value 9 Channel 9
 * @value 10 Channel 10
 * @value 11 Channel 11
 * @value 12 Channel 12
 * @value 13 Channel 13
 * @value 14 Channel 14
 * @value 15 Channel 15
 * @value 16 Channel 16
 * @value 17 Channel 17
 * @value 18 Channel 18
 * @min 0
 * @max 18
 */
PARAM_DEFINE_INT32(RC_MAP_MODE_SW, 0);

/**
 * Wheel base
 *
 * Distance from the front to the rear axle.
 *
 * @group Rover Ackermann
 * @decimal 3
 * @increment 0.001
 * @min 0
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(RA_WHEEL_BASE, 0);

/**
 * Maximum steering angle
 *
 * 
 *
 * @group Rover Ackermann
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 1.5708
 * @unit rad
 */
PARAM_DEFINE_FLOAT(RA_MAX_STR_ANG, 0);

/**
 * Steering rate limit
 *
 * Set to -1 to disable.
 *
 * @group Rover Ackermann
 * @decimal 2
 * @increment 0.01
 * @min -1
 * @max 1000
 * @unit deg/s
 */
PARAM_DEFINE_FLOAT(RA_STR_RATE_LIM, -1);

/**
 * Maximum acceptance radius for the waypoints
 *
 * The controller scales the acceptance radius based on the angle between
 * the previous, current and next waypoint.
 * Higher value -> smoother trajectory at the cost of how close the rover gets
 * to the waypoint (Set to -1 to disable corner cutting).
 * 
 *
 * @group Rover Ackermann
 * @decimal 2
 * @increment 0.01
 * @min -1
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(RA_ACC_RAD_MAX, -1);

/**
 * Tuning parameter for corner cutting
 *
 * The geometric ideal acceptance radius is multiplied by this factor
 * to account for kinematic and dynamic effects.
 * Higher value -> The rover starts to cut the corner earlier.
 * 
 *
 * @group Rover Ackermann
 * @decimal 2
 * @increment 0.01
 * @min 1
 * @max 100
 */
PARAM_DEFINE_FLOAT(RA_ACC_RAD_GAIN, 1);

/**
 * Wheel track
 *
 * Distance from the center of the right wheel to the center of the left wheel.
 *
 * @group Rover Differential
 * @decimal 3
 * @increment 0.001
 * @min 0
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(RD_WHEEL_TRACK, 0);

/**
 * Yaw error threshhold to switch from spot turning to driving
 *
 * This threshold is used for the state machine to switch from turning to driving based on the
 * error between the desired and actual yaw.
 * 
 *
 * @group Rover Differential
 * @decimal 3
 * @increment 0.01
 * @min 0.001
 * @max 3.14159
 * @unit rad
 */
PARAM_DEFINE_FLOAT(RD_TRANS_TRN_DRV, 0.0872665);

/**
 * Yaw error threshhold to switch from driving to spot turning
 *
 * This threshold is used for the state machine to switch from driving to turning based on the
 * error between the desired and actual yaw. It is also used as the threshold whether the rover should come
 * to a smooth stop at the next waypoint. This slow down effect is active if the angle between the
 * line segments from prevWP-currWP and currWP-nextWP is smaller then 180 - RD_TRANS_DRV_TRN.
 * 
 *
 * @group Rover Differential
 * @decimal 3
 * @increment 0.01
 * @min 0.001
 * @max 3.14159
 * @unit rad
 */
PARAM_DEFINE_FLOAT(RD_TRANS_DRV_TRN, 0.174533);

/**
 * Yaw stick gain for Manual mode
 *
 * Assign value <1.0 to decrease stick response for yaw control.
 *
 * @group Rover Differential
 * @decimal 3
 * @increment 0.01
 * @min 0.1
 * @max 1
 */
PARAM_DEFINE_FLOAT(RD_YAW_STK_GAIN, 1);

/**
 * Wheel track
 *
 * Distance from the center of the right wheel to the center of the left wheel.
 *
 * @group Rover Mecanum
 * @decimal 3
 * @increment 0.001
 * @min 0
 * @max 100
 * @unit m
 */
PARAM_DEFINE_FLOAT(RM_WHEEL_TRACK, 0);

/**
 * Threshold to update course control in manual position mode
 *
 * Threshold for the angle between the active cruise direction and the cruise direction given
 * by the stick inputs.
 * This can be understood as a deadzone for the combined stick inputs for forward/backwards
 * and lateral speed which defines a course direction.
 * 
 *
 * @group Rover Mecanum
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @max 3.14
 * @unit rad
 */
PARAM_DEFINE_FLOAT(RM_COURSE_CTL_TH, 0.17);

/**
 * Yaw stick gain for Manual mode
 *
 * Assign value <1.0 to decrease stick response for yaw control.
 *
 * @group Rover Mecanum
 * @decimal 3
 * @increment 0.01
 * @min 0.1
 * @max 1
 */
PARAM_DEFINE_FLOAT(RM_YAW_STK_GAIN, 1);

/**
 * Low pass filter cutoff frequency for accel
 *
 * The cutoff frequency for the 2nd order butterworth filter on the primary accelerometer.
 * This only affects the signal sent to the controllers, not the estimators. 0 disables the filter.
 *
 * @group Sensors
 * @min 0
 * @max 1000
 * @unit Hz
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(IMU_ACCEL_CUTOFF, 30.0);

/**
 * IMU integration rate
 *
 * The rate at which raw IMU data is integrated to produce delta angles and delta velocities.
 * Recommended to set this to a multiple of the estimator update period (currently 10 ms for ekf2).
 *
 * @group Sensors
 * @value 100 100 Hz
 * @value 200 200 Hz
 * @value 250 250 Hz
 * @value 400 400 Hz
 * @min 100
 * @max 1000
 * @unit Hz
 * @reboot_required True
 */
PARAM_DEFINE_INT32(IMU_INTEG_RATE, 200);

/**
 * IMU auto calibration
 *
 * Automatically initialize IMU (accel/gyro) calibration from bias estimates if available.
 *
 * @group Sensors
 * @boolean
 * @category System
 */
PARAM_DEFINE_INT32(SENS_IMU_AUTOCAL, 1);

/**
 * IMU notify clipping
 *
 * Notify the user if the IMU is clipping
 *
 * @group Sensors
 * @boolean
 * @category System
 */
PARAM_DEFINE_INT32(SENS_IMU_CLPNOTI, 1);

/**
 * QNH for barometer
 *
 * 
 *
 * @group Sensors
 * @min 500
 * @max 1500
 * @unit hPa
 */
PARAM_DEFINE_FLOAT(SENS_BARO_QNH, 1013.25);

/**
 * Baro max rate
 *
 * Barometric air data maximum publication rate. This is an upper bound,
 * actual barometric data rate is still dependent on the sensor.
 *
 * @group Sensors
 * @min 1
 * @max 200
 * @unit Hz
 */
PARAM_DEFINE_FLOAT(SENS_BARO_RATE, 20.0);

/**
 * Barometer auto calibration
 *
 * Automatically calibrate barometer based on the GNSS height
 *
 * @group Sensors
 * @boolean
 * @category System
 */
PARAM_DEFINE_INT32(SENS_BAR_AUTOCAL, 1);

/**
 * Notch filter frequency for gyro
 *
 * The center frequency for the 2nd order notch filter on the primary gyro.
 * This filter can be enabled to avoid feedback amplification of structural resonances at a specific frequency.
 * This only affects the signal sent to the controllers, not the estimators.
 * Applies to both angular velocity and angular acceleration sent to the controllers.
 * See "IMU_GYRO_NF0_BW" to set the bandwidth of the filter.
 * 
 * A value of 0 disables the filter.
 *
 * @group Sensors
 * @decimal 1
 * @increment 0.1
 * @min 0
 * @max 1000
 * @unit Hz
 * @reboot_required False
 */
PARAM_DEFINE_FLOAT(IMU_GYRO_NF0_FRQ, 0.0);

/**
 * Notch filter bandwidth for gyro
 *
 * The frequency width of the stop band for the 2nd order notch filter on the primary gyro.
 * See "IMU_GYRO_NF0_FRQ" to activate the filter and to set the notch frequency.
 * Applies to both angular velocity and angular acceleration sent to the controllers.
 *
 * @group Sensors
 * @decimal 1
 * @increment 0.1
 * @min 0
 * @max 100
 * @unit Hz
 * @reboot_required False
 */
PARAM_DEFINE_FLOAT(IMU_GYRO_NF0_BW, 20.0);

/**
 * Notch filter 2 frequency for gyro
 *
 * The center frequency for the 2nd order notch filter on the primary gyro.
 * This filter can be enabled to avoid feedback amplification of structural resonances at a specific frequency.
 * This only affects the signal sent to the controllers, not the estimators.
 * Applies to both angular velocity and angular acceleration sent to the controllers.
 * See "IMU_GYRO_NF1_BW" to set the bandwidth of the filter.
 * 
 * A value of 0 disables the filter.
 *
 * @group Sensors
 * @decimal 1
 * @increment 0.1
 * @min 0
 * @max 1000
 * @unit Hz
 * @reboot_required False
 */
PARAM_DEFINE_FLOAT(IMU_GYRO_NF1_FRQ, 0.0);

/**
 * Notch filter 1 bandwidth for gyro
 *
 * The frequency width of the stop band for the 2nd order notch filter on the primary gyro.
 * See "IMU_GYRO_NF1_FRQ" to activate the filter and to set the notch frequency.
 * Applies to both angular velocity and angular acceleration sent to the controllers.
 *
 * @group Sensors
 * @decimal 1
 * @increment 0.1
 * @min 0
 * @max 100
 * @unit Hz
 * @reboot_required False
 */
PARAM_DEFINE_FLOAT(IMU_GYRO_NF1_BW, 20.0);

/**
 * Low pass filter cutoff frequency for gyro
 *
 * The cutoff frequency for the 2nd order butterworth filter on the primary gyro.
 * This only affects the angular velocity sent to the controllers, not the estimators.
 * It applies also to the angular acceleration (D-Term filter), see IMU_DGYRO_CUTOFF.
 * 
 * A value of 0 disables the filter.
 *
 * @group Sensors
 * @decimal 1
 * @increment 0.1
 * @min 0
 * @max 1000
 * @unit Hz
 * @reboot_required False
 */
PARAM_DEFINE_FLOAT(IMU_GYRO_CUTOFF, 40.0);

/**
 * Gyro control data maximum publication rate (inner loop rate)
 *
 * The maximum rate the gyro control data (vehicle_angular_velocity) will be
 * allowed to publish at. This is the loop rate for the rate controller and outputs.
 * 
 * Note: sensor data is always read and filtered at the full raw rate (eg commonly 8 kHz) regardless of this setting.
 *
 * @group Sensors
 * @value 100 100 Hz
 * @value 250 250 Hz
 * @value 400 400 Hz
 * @value 800 800 Hz
 * @value 1000 1000 Hz
 * @value 2000 2000 Hz
 * @min 100
 * @max 2000
 * @unit Hz
 * @reboot_required True
 */
PARAM_DEFINE_INT32(IMU_GYRO_RATEMAX, 400);

/**
 * Cutoff frequency for angular acceleration (D-Term filter)
 *
 * The cutoff frequency for the 2nd order butterworth filter used on
 * the time derivative of the measured angular velocity, also known as
 * the D-term filter in the rate controller. The D-term uses the derivative of
 * the rate and thus is the most susceptible to noise. Therefore, using
 * a D-term filter allows to increase IMU_GYRO_CUTOFF, which
 * leads to reduced control latency and permits to increase the P gains.
 * 
 * A value of 0 disables the filter.
 *
 * @group Sensors
 * @decimal 1
 * @increment 0.1
 * @min 0
 * @max 1000
 * @unit Hz
 * @reboot_required False
 */
PARAM_DEFINE_FLOAT(IMU_DGYRO_CUTOFF, 20.0);

/**
 * IMU gyro dynamic notch filtering
 *
 * Enable bank of dynamically updating notch filters.
 * Requires ESC RPM feedback or onboard FFT (IMU_GYRO_FFT_EN).
 *
 * @group Sensors
 * @bit 0 ESC RPM
 * @bit 1 FFT
 * @min 0
 * @max 3
 * @min 0
 * @max 3
 */
PARAM_DEFINE_INT32(IMU_GYRO_DNF_EN, 0);

/**
 * IMU gyro ESC notch filter bandwidth
 *
 * Bandwidth per notch filter when using dynamic notch filtering with ESC RPM.
 *
 * @group Sensors
 * @decimal 1
 * @increment 0.1
 * @min 5
 * @max 30
 * @unit Hz
 */
PARAM_DEFINE_FLOAT(IMU_GYRO_DNF_BW, 15.0);

/**
 * IMU gyro dynamic notch filter harmonics
 *
 * ESC RPM number of harmonics (multiples of RPM) for ESC RPM dynamic notch filtering.
 *
 * @group Sensors
 * @min 1
 * @max 7
 */
PARAM_DEFINE_INT32(IMU_GYRO_DNF_HMC, 3);

/**
 * IMU gyro dynamic notch filter minimum frequency
 *
 * Minimum notch filter frequency in Hz.
 *
 * @group Sensors
 * @decimal 1
 * @increment 0.1
 * @unit Hz
 */
PARAM_DEFINE_FLOAT(IMU_GYRO_DNF_MIN, 25.0);

/**
 * Accelerometer 0 calibration device ID
 *
 * Device ID of the accelerometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC0_ID, 0);

/**
 * Accelerometer 1 calibration device ID
 *
 * Device ID of the accelerometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC1_ID, 0);

/**
 * Accelerometer 2 calibration device ID
 *
 * Device ID of the accelerometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC2_ID, 0);

/**
 * Accelerometer 3 calibration device ID
 *
 * Device ID of the accelerometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC3_ID, 0);

/**
 * Accelerometer 0 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @decimal 3
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC0_PRIO, -1);

/**
 * Accelerometer 1 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @decimal 3
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC1_PRIO, -1);

/**
 * Accelerometer 2 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @decimal 3
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC2_PRIO, -1);

/**
 * Accelerometer 3 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @decimal 3
 * @category System
 */
PARAM_DEFINE_INT32(CAL_ACC3_PRIO, -1);

/**
 * Accelerometer 0 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_ACC0_ROT, -1);

/**
 * Accelerometer 1 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_ACC1_ROT, -1);

/**
 * Accelerometer 2 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_ACC2_ROT, -1);

/**
 * Accelerometer 3 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_ACC3_ROT, -1);

/**
 * Accelerometer 0 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(CAL_ACC0_XOFF, 0.0);

/**
 * Accelerometer 1 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(CAL_ACC1_XOFF, 0.0);

/**
 * Accelerometer 2 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(CAL_ACC2_XOFF, 0.0);

/**
 * Accelerometer 3 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(CAL_ACC3_XOFF, 0.0);

/**
 * Accelerometer 0 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(CAL_ACC0_YOFF, 0.0);

/**
 * Accelerometer 1 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(CAL_ACC1_YOFF, 0.0);

/**
 * Accelerometer 2 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(CAL_ACC2_YOFF, 0.0);

/**
 * Accelerometer 3 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(CAL_ACC3_YOFF, 0.0);

/**
 * Accelerometer 0 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(CAL_ACC0_ZOFF, 0.0);

/**
 * Accelerometer 1 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(CAL_ACC1_ZOFF, 0.0);

/**
 * Accelerometer 2 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(CAL_ACC2_ZOFF, 0.0);

/**
 * Accelerometer 3 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(CAL_ACC3_ZOFF, 0.0);

/**
 * Accelerometer 0 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC0_XSCALE, 1.0);

/**
 * Accelerometer 1 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC1_XSCALE, 1.0);

/**
 * Accelerometer 2 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC2_XSCALE, 1.0);

/**
 * Accelerometer 3 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC3_XSCALE, 1.0);

/**
 * Accelerometer 0 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC0_YSCALE, 1.0);

/**
 * Accelerometer 1 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC1_YSCALE, 1.0);

/**
 * Accelerometer 2 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC2_YSCALE, 1.0);

/**
 * Accelerometer 3 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC3_YSCALE, 1.0);

/**
 * Accelerometer 0 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC0_ZSCALE, 1.0);

/**
 * Accelerometer 1 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC1_ZSCALE, 1.0);

/**
 * Accelerometer 2 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC2_ZSCALE, 1.0);

/**
 * Accelerometer 3 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_ACC3_ZSCALE, 1.0);

/**
 * Barometer 0 calibration device ID
 *
 * Device ID of the barometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_BARO0_ID, 0);

/**
 * Barometer 1 calibration device ID
 *
 * Device ID of the barometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_BARO1_ID, 0);

/**
 * Barometer 2 calibration device ID
 *
 * Device ID of the barometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_BARO2_ID, 0);

/**
 * Barometer 3 calibration device ID
 *
 * Device ID of the barometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_BARO3_ID, 0);

/**
 * Barometer 0 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_BARO0_PRIO, -1);

/**
 * Barometer 1 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_BARO1_PRIO, -1);

/**
 * Barometer 2 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_BARO2_PRIO, -1);

/**
 * Barometer 3 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_BARO3_PRIO, -1);

/**
 * Barometer 0 offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_BARO0_OFF, 0.0);

/**
 * Barometer 1 offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_BARO1_OFF, 0.0);

/**
 * Barometer 2 offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_BARO2_OFF, 0.0);

/**
 * Barometer 3 offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_BARO3_OFF, 0.0);

/**
 * Gyroscope 0 calibration device ID
 *
 * Device ID of the gyroscope this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO0_ID, 0);

/**
 * Gyroscope 1 calibration device ID
 *
 * Device ID of the gyroscope this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO1_ID, 0);

/**
 * Gyroscope 2 calibration device ID
 *
 * Device ID of the gyroscope this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO2_ID, 0);

/**
 * Gyroscope 3 calibration device ID
 *
 * Device ID of the gyroscope this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO3_ID, 0);

/**
 * Gyroscope 0 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO0_PRIO, -1);

/**
 * Gyroscope 1 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO1_PRIO, -1);

/**
 * Gyroscope 2 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO2_PRIO, -1);

/**
 * Gyroscope 3 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_GYRO3_PRIO, -1);

/**
 * Gyroscope 0 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_GYRO0_ROT, -1);

/**
 * Gyroscope 1 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_GYRO1_ROT, -1);

/**
 * Gyroscope 2 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_GYRO2_ROT, -1);

/**
 * Gyroscope 3 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @category System
 * @min -1
 * @max 40
 */
PARAM_DEFINE_INT32(CAL_GYRO3_ROT, -1);

/**
 * Gyroscope 0 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(CAL_GYRO0_XOFF, 0.0);

/**
 * Gyroscope 1 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(CAL_GYRO1_XOFF, 0.0);

/**
 * Gyroscope 2 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(CAL_GYRO2_XOFF, 0.0);

/**
 * Gyroscope 3 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(CAL_GYRO3_XOFF, 0.0);

/**
 * Gyroscope 0 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(CAL_GYRO0_YOFF, 0.0);

/**
 * Gyroscope 1 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(CAL_GYRO1_YOFF, 0.0);

/**
 * Gyroscope 2 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(CAL_GYRO2_YOFF, 0.0);

/**
 * Gyroscope 3 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(CAL_GYRO3_YOFF, 0.0);

/**
 * Gyroscope 0 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(CAL_GYRO0_ZOFF, 0.0);

/**
 * Gyroscope 1 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(CAL_GYRO1_ZOFF, 0.0);

/**
 * Gyroscope 2 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(CAL_GYRO2_ZOFF, 0.0);

/**
 * Gyroscope 3 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(CAL_GYRO3_ZOFF, 0.0);

/**
 * Magnetometer 0 calibration device ID
 *
 * Device ID of the magnetometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG0_ID, 0);

/**
 * Magnetometer 1 calibration device ID
 *
 * Device ID of the magnetometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG1_ID, 0);

/**
 * Magnetometer 2 calibration device ID
 *
 * Device ID of the magnetometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG2_ID, 0);

/**
 * Magnetometer 3 calibration device ID
 *
 * Device ID of the magnetometer this calibration applies to.
 *
 * @group Sensor Calibration
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG3_ID, 0);

/**
 * Magnetometer 0 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG0_PRIO, -1);

/**
 * Magnetometer 1 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG1_PRIO, -1);

/**
 * Magnetometer 2 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG2_PRIO, -1);

/**
 * Magnetometer 3 priority
 *
 * 
 *
 * @group Sensor Calibration
 * @value -1 Uninitialized
 * @value 0 Disabled
 * @value 1 Min
 * @value 25 Low
 * @value 50 Medium (Default)
 * @value 75 High
 * @value 100 Max
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG3_PRIO, -1);

/**
 * Magnetometer 0 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * Set to "Custom Euler Angle" to define the rotation using CAL_MAG0_ROLL, CAL_MAG0_PITCH and CAL_MAG0_YAW.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @value 100 Custom Euler Angle
 * @category System
 * @min -1
 * @max 100
 */
PARAM_DEFINE_INT32(CAL_MAG0_ROT, -1);

/**
 * Magnetometer 1 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * Set to "Custom Euler Angle" to define the rotation using CAL_MAG1_ROLL, CAL_MAG1_PITCH and CAL_MAG1_YAW.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @value 100 Custom Euler Angle
 * @category System
 * @min -1
 * @max 100
 */
PARAM_DEFINE_INT32(CAL_MAG1_ROT, -1);

/**
 * Magnetometer 2 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * Set to "Custom Euler Angle" to define the rotation using CAL_MAG2_ROLL, CAL_MAG2_PITCH and CAL_MAG2_YAW.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @value 100 Custom Euler Angle
 * @category System
 * @min -1
 * @max 100
 */
PARAM_DEFINE_INT32(CAL_MAG2_ROT, -1);

/**
 * Magnetometer 3 rotation relative to airframe
 *
 * An internal sensor will force a value of -1, so a GCS should only attempt to configure the rotation if the value is greater than or equal to zero.
 * Set to "Custom Euler Angle" to define the rotation using CAL_MAG3_ROLL, CAL_MAG3_PITCH and CAL_MAG3_YAW.
 * 
 *
 * @group Sensor Calibration
 * @value -1 Internal
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @value 100 Custom Euler Angle
 * @category System
 * @min -1
 * @max 100
 */
PARAM_DEFINE_INT32(CAL_MAG3_ROT, -1);

/**
 * Magnetometer 0 Custom Euler Roll Angle
 *
 * Setting this parameter changes CAL_MAG0_ROT to "Custom Euler Angle"
 *
 * @group Sensor Calibration
 * @category System
 * @min -180
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_ROLL, 0.0);

/**
 * Magnetometer 1 Custom Euler Roll Angle
 *
 * Setting this parameter changes CAL_MAG1_ROT to "Custom Euler Angle"
 *
 * @group Sensor Calibration
 * @category System
 * @min -180
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_ROLL, 0.0);

/**
 * Magnetometer 2 Custom Euler Roll Angle
 *
 * Setting this parameter changes CAL_MAG2_ROT to "Custom Euler Angle"
 *
 * @group Sensor Calibration
 * @category System
 * @min -180
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_ROLL, 0.0);

/**
 * Magnetometer 3 Custom Euler Roll Angle
 *
 * Setting this parameter changes CAL_MAG3_ROT to "Custom Euler Angle"
 *
 * @group Sensor Calibration
 * @category System
 * @min -180
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_ROLL, 0.0);

/**
 * Magnetometer 0 Custom Euler Pitch Angle
 *
 * Setting this parameter changes CAL_MAG0_ROT to "Custom Euler Angle"
 *
 * @group Sensor Calibration
 * @category System
 * @min -180
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_PITCH, 0.0);

/**
 * Magnetometer 1 Custom Euler Pitch Angle
 *
 * Setting this parameter changes CAL_MAG1_ROT to "Custom Euler Angle"
 *
 * @group Sensor Calibration
 * @category System
 * @min -180
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_PITCH, 0.0);

/**
 * Magnetometer 2 Custom Euler Pitch Angle
 *
 * Setting this parameter changes CAL_MAG2_ROT to "Custom Euler Angle"
 *
 * @group Sensor Calibration
 * @category System
 * @min -180
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_PITCH, 0.0);

/**
 * Magnetometer 3 Custom Euler Pitch Angle
 *
 * Setting this parameter changes CAL_MAG3_ROT to "Custom Euler Angle"
 *
 * @group Sensor Calibration
 * @category System
 * @min -180
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_PITCH, 0.0);

/**
 * Magnetometer 0 Custom Euler Yaw Angle
 *
 * Setting this parameter changes CAL_MAG0_ROT to "Custom Euler Angle"
 *
 * @group Sensor Calibration
 * @category System
 * @min -180
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_YAW, 0.0);

/**
 * Magnetometer 1 Custom Euler Yaw Angle
 *
 * Setting this parameter changes CAL_MAG1_ROT to "Custom Euler Angle"
 *
 * @group Sensor Calibration
 * @category System
 * @min -180
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_YAW, 0.0);

/**
 * Magnetometer 2 Custom Euler Yaw Angle
 *
 * Setting this parameter changes CAL_MAG2_ROT to "Custom Euler Angle"
 *
 * @group Sensor Calibration
 * @category System
 * @min -180
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_YAW, 0.0);

/**
 * Magnetometer 3 Custom Euler Yaw Angle
 *
 * Setting this parameter changes CAL_MAG3_ROT to "Custom Euler Angle"
 *
 * @group Sensor Calibration
 * @category System
 * @min -180
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_YAW, 0.0);

/**
 * Magnetometer 0 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_XOFF, 0.0);

/**
 * Magnetometer 1 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_XOFF, 0.0);

/**
 * Magnetometer 2 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_XOFF, 0.0);

/**
 * Magnetometer 3 X-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_XOFF, 0.0);

/**
 * Magnetometer 0 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_YOFF, 0.0);

/**
 * Magnetometer 1 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_YOFF, 0.0);

/**
 * Magnetometer 2 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_YOFF, 0.0);

/**
 * Magnetometer 3 Y-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_YOFF, 0.0);

/**
 * Magnetometer 0 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_ZOFF, 0.0);

/**
 * Magnetometer 1 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_ZOFF, 0.0);

/**
 * Magnetometer 2 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_ZOFF, 0.0);

/**
 * Magnetometer 3 Z-axis offset
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_ZOFF, 0.0);

/**
 * Magnetometer 0 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_XSCALE, 1.0);

/**
 * Magnetometer 1 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_XSCALE, 1.0);

/**
 * Magnetometer 2 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_XSCALE, 1.0);

/**
 * Magnetometer 3 X-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_XSCALE, 1.0);

/**
 * Magnetometer 0 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_YSCALE, 1.0);

/**
 * Magnetometer 1 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_YSCALE, 1.0);

/**
 * Magnetometer 2 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_YSCALE, 1.0);

/**
 * Magnetometer 3 Y-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_YSCALE, 1.0);

/**
 * Magnetometer 0 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_ZSCALE, 1.0);

/**
 * Magnetometer 1 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_ZSCALE, 1.0);

/**
 * Magnetometer 2 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_ZSCALE, 1.0);

/**
 * Magnetometer 3 Z-axis scaling factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 * @min 0.1
 * @max 3.0
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_ZSCALE, 1.0);

/**
 * Magnetometer 0 X-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_XODIAG, 0.0);

/**
 * Magnetometer 1 X-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_XODIAG, 0.0);

/**
 * Magnetometer 2 X-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_XODIAG, 0.0);

/**
 * Magnetometer 3 X-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_XODIAG, 0.0);

/**
 * Magnetometer 0 Y-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_YODIAG, 0.0);

/**
 * Magnetometer 1 Y-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_YODIAG, 0.0);

/**
 * Magnetometer 2 Y-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_YODIAG, 0.0);

/**
 * Magnetometer 3 Y-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_YODIAG, 0.0);

/**
 * Magnetometer 0 Z-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_ZODIAG, 0.0);

/**
 * Magnetometer 1 Z-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_ZODIAG, 0.0);

/**
 * Magnetometer 2 Z-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_ZODIAG, 0.0);

/**
 * Magnetometer 3 Z-axis off diagonal scale factor
 *
 * 
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_ZODIAG, 0.0);

/**
 * Magnetometer 0 X Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * X component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_XCOMP, 0.0);

/**
 * Magnetometer 1 X Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * X component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_XCOMP, 0.0);

/**
 * Magnetometer 2 X Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * X component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_XCOMP, 0.0);

/**
 * Magnetometer 3 X Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * X component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_XCOMP, 0.0);

/**
 * Magnetometer 0 Y Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Y component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_YCOMP, 0.0);

/**
 * Magnetometer 1 Y Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Y component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_YCOMP, 0.0);

/**
 * Magnetometer 2 Y Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Y component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_YCOMP, 0.0);

/**
 * Magnetometer 3 Y Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Y component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_YCOMP, 0.0);

/**
 * Magnetometer 0 Z Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Z component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG0_ZCOMP, 0.0);

/**
 * Magnetometer 1 Z Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Z component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG1_ZCOMP, 0.0);

/**
 * Magnetometer 2 Z Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Z component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG2_ZCOMP, 0.0);

/**
 * Magnetometer 3 Z Axis throttle compensation
 *
 * Coefficient describing linear relationship between
 * Z component of magnetometer in body frame axis
 * and either current or throttle depending on value of CAL_MAG_COMP_TYP.
 * Unit for throttle-based compensation is [G] and
 * for current-based compensation [G/kA]
 * 
 *
 * @group Sensor Calibration
 * @decimal 3
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(CAL_MAG3_ZCOMP, 0.0);

/**
 * Multi GPS Blending Control Mask
 *
 * Set bits in the following positions to set which GPS accuracy metrics will
 * be used to calculate the blending weight. Set to zero to disable and always
 * used first GPS instance.
 * 
 *
 * @group Sensors
 * @bit 0 use speed accuracy
 * @bit 1 use hpos accuracy
 * @bit 2 use vpos accuracy
 * @min 0
 * @max 7
 * @min 0
 * @max 7
 */
PARAM_DEFINE_INT32(SENS_GPS_MASK, 7);

/**
 * Multi GPS Blending Time Constant
 *
 * Sets the longest time constant that will be applied to the calculation of GPS
 * position and height offsets used to correct data from multiple GPS data for
 * steady state position differences.
 * 
 *
 * @group Sensors
 * @decimal 1
 * @min 1.0
 * @max 100.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(SENS_GPS_TAU, 10.0);

/**
 * Multi GPS primary instance
 *
 * When no blending is active, this defines the preferred GPS receiver instance.
 * The GPS selection logic waits until the primary receiver is available to
 * send data to the EKF even if a secondary instance is already available.
 * The secondary instance is then only used if the primary one times out.
 * 
 * To select a DroneCAN GPS, set this to the node ID.
 * 
 * This parameter has no effect if blending is active.
 * 
 *
 * @group Sensors
 * @min -1
 * @max 127
 */
PARAM_DEFINE_INT32(SENS_GPS_PRIME, 0);

/**
 * GPS 0 device ID
 *
 * Device ID of the GPS receiver for antenna offset slot 0.
 * Set to 0 to disable this slot. When all slots are 0, offsets are
 * matched by uORB instance index (only reliable for serial GPS).
 * 
 *
 * @group Sensors
 * @category System
 */
PARAM_DEFINE_INT32(SENS_GPS0_ID, 0);

/**
 * GPS 1 device ID
 *
 * Device ID of the GPS receiver for antenna offset slot 1.
 * Set to 0 to disable this slot. When all slots are 0, offsets are
 * matched by uORB instance index (only reliable for serial GPS).
 * 
 *
 * @group Sensors
 * @category System
 */
PARAM_DEFINE_INT32(SENS_GPS1_ID, 0);

/**
 * GPS 0 antenna X position
 *
 * Forward axis relative to vehicle centre of gravity.
 * Matched to physical GPS receiver via SENS_GPS0_ID.
 * 
 *
 * @group Sensors
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(SENS_GPS0_OFFX, 0.0);

/**
 * GPS 1 antenna X position
 *
 * Forward axis relative to vehicle centre of gravity.
 * Matched to physical GPS receiver via SENS_GPS1_ID.
 * 
 *
 * @group Sensors
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(SENS_GPS1_OFFX, 0.0);

/**
 * GPS 0 antenna Y position
 *
 * Right axis relative to vehicle centre of gravity.
 * Matched to physical GPS receiver via SENS_GPS0_ID.
 * 
 *
 * @group Sensors
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(SENS_GPS0_OFFY, 0.0);

/**
 * GPS 1 antenna Y position
 *
 * Right axis relative to vehicle centre of gravity.
 * Matched to physical GPS receiver via SENS_GPS1_ID.
 * 
 *
 * @group Sensors
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(SENS_GPS1_OFFY, 0.0);

/**
 * GPS 0 antenna Z position
 *
 * Down axis relative to vehicle centre of gravity.
 * Matched to physical GPS receiver via SENS_GPS0_ID.
 * 
 *
 * @group Sensors
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(SENS_GPS0_OFFZ, 0.0);

/**
 * GPS 1 antenna Z position
 *
 * Down axis relative to vehicle centre of gravity.
 * Matched to physical GPS receiver via SENS_GPS1_ID.
 * 
 *
 * @group Sensors
 * @decimal 3
 * @unit m
 */
PARAM_DEFINE_FLOAT(SENS_GPS1_OFFZ, 0.0);

/**
 * GPS 0 measurement delay
 *
 * GPS measurement delay relative to IMU measurements.
 * Matched to physical GPS receiver via SENS_GPS0_ID.
 * Only applied when the GPS driver does not provide its own
 * timestamp_sample correction.
 * 
 *
 * @group Sensors
 * @min 0
 * @max 300
 * @unit ms
 */
PARAM_DEFINE_INT32(SENS_GPS0_DELAY, 110);

/**
 * GPS 1 measurement delay
 *
 * GPS measurement delay relative to IMU measurements.
 * Matched to physical GPS receiver via SENS_GPS1_ID.
 * Only applied when the GPS driver does not provide its own
 * timestamp_sample correction.
 * 
 *
 * @group Sensors
 * @min 0
 * @max 300
 * @unit ms
 */
PARAM_DEFINE_INT32(SENS_GPS1_DELAY, 110);

/**
 * Differential pressure sensor offset
 *
 * The offset (zero-reading) in Pascal
 *
 * @group Sensor Calibration
 * @category System
 * @volatile True
 */
PARAM_DEFINE_FLOAT(SENS_DPRES_OFF, 0.0);

/**
 * Reverse differential pressure sensor readings
 *
 * Reverse the raw measurements of all differential pressure sensors.
 * This can be enabled if the sensors have static and dynamic ports swapped.
 *
 * @group Sensor Calibration
 * @boolean
 * @category System
 */
PARAM_DEFINE_INT32(SENS_DPRES_REV, 0);

/**
 * Differential pressure sensor analog scaling
 *
 * Pick the appropriate scaling from the datasheet.
 * this number defines the (linear) conversion from voltage
 * to Pascal (pa). For the MPXV7002DP this is 1000.
 * 
 * NOTE: If the sensor always registers zero, try switching
 * the static and dynamic tubes.
 *
 * @group Sensor Calibration
 */
PARAM_DEFINE_FLOAT(SENS_DPRES_ANSC, 0);

/**
 * Airspeed sensor compensation model for the SDP3x
 *
 * Model with Pitot
 * CAL_AIR_TUBED_MM: Not used, 1.5 mm tubes assumed.
 * CAL_AIR_TUBELEN: Length of the tubes connecting the pitot to the sensor.
 * Model without Pitot (1.5 mm tubes)
 * CAL_AIR_TUBED_MM: Not used, 1.5 mm tubes assumed.
 * CAL_AIR_TUBELEN: Length of the tubes connecting the pitot to the sensor.
 * Tube Pressure Drop
 * CAL_AIR_TUBED_MM: Diameter in mm of the pitot and tubes, must have the same diameter.
 * CAL_AIR_TUBELEN: Length of the tubes connecting the pitot to the sensor and the static + dynamic port length of the pitot.
 *
 * @group Sensors
 * @value 0 Model with Pitot
 * @value 1 Model without Pitot (1.5 mm tubes)
 * @value 2 Tube Pressure Drop
 */
PARAM_DEFINE_INT32(CAL_AIR_CMODEL, 0);

/**
 * Airspeed sensor tube length
 *
 * See the CAL_AIR_CMODEL explanation on how this parameter should be set.
 *
 * @group Sensors
 * @min 0.01
 * @max 2.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(CAL_AIR_TUBELEN, 0.2);

/**
 * Airspeed sensor tube diameter
 *
 * Airspeed sensor tube diameter. Only used for the Tube Pressure Drop Compensation
 *
 * @group Sensors
 * @min 1.5
 * @max 100
 * @unit mm
 */
PARAM_DEFINE_FLOAT(CAL_AIR_TUBED_MM, 1.5);

/**
 * Board rotation
 *
 * This parameter defines the rotation of the FMU board relative to the platform.
 *
 * @group Sensors
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 * @value 8 Roll 180°
 * @value 9 Roll 180°, Yaw 45°
 * @value 10 Roll 180°, Yaw 90°
 * @value 11 Roll 180°, Yaw 135°
 * @value 12 Pitch 180°
 * @value 13 Roll 180°, Yaw 225°
 * @value 14 Roll 180°, Yaw 270°
 * @value 15 Roll 180°, Yaw 315°
 * @value 16 Roll 90°
 * @value 17 Roll 90°, Yaw 45°
 * @value 18 Roll 90°, Yaw 90°
 * @value 19 Roll 90°, Yaw 135°
 * @value 20 Roll 270°
 * @value 21 Roll 270°, Yaw 45°
 * @value 22 Roll 270°, Yaw 90°
 * @value 23 Roll 270°, Yaw 135°
 * @value 24 Pitch 90°
 * @value 25 Pitch 270°
 * @value 26 Pitch 180°, Yaw 90°
 * @value 27 Pitch 180°, Yaw 270°
 * @value 28 Roll 90°, Pitch 90°
 * @value 29 Roll 180°, Pitch 90°
 * @value 30 Roll 270°, Pitch 90°
 * @value 31 Roll 90°, Pitch 180°
 * @value 32 Roll 270°, Pitch 180°
 * @value 33 Roll 90°, Pitch 270°
 * @value 34 Roll 180°, Pitch 270°
 * @value 35 Roll 270°, Pitch 270°
 * @value 36 Roll 90°, Pitch 180°, Yaw 90°
 * @value 37 Roll 90°, Yaw 270°
 * @value 38 Roll 90°, Pitch 68°, Yaw 293°
 * @value 39 Pitch 315°
 * @value 40 Roll 90°, Pitch 315°
 * @min -1
 * @max 40
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SENS_BOARD_ROT, 0);

/**
 * Board rotation Y (pitch) offset
 *
 * Rotation from flight controller board to vehicle body frame.
 * This parameter gets set during the "level horizon" calibration or can be
 * set manually.
 *
 * @group Sensors
 * @decimal 1
 * @min -45.0
 * @max 45.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SENS_BOARD_Y_OFF, 0.0);

/**
 * Board rotation X (roll) offset
 *
 * Rotation from flight controller board to vehicle body frame.
 * This parameter gets set during the "level horizon" calibration or can be
 * set manually.
 *
 * @group Sensors
 * @decimal 1
 * @min -45.0
 * @max 45.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SENS_BOARD_X_OFF, 0.0);

/**
 * Board rotation Z (yaw) offset
 *
 * Rotation from flight controller board to vehicle body frame.
 * Has to be set manually (not set by any calibration).
 *
 * @group Sensors
 * @decimal 1
 * @min -45.0
 * @max 45.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SENS_BOARD_Z_OFF, 0.0);

/**
 * Thermal control of sensor temperature
 *
 * 
 *
 * @group Sensors
 * @value -1 Thermal control unavailable
 * @value 0 Thermal control off
 * @value 1 Thermal control enabled
 * @category System
 */
PARAM_DEFINE_INT32(SENS_EN_THERMAL, -1);

/**
 * External I2C probe
 *
 * Probe for optional external I2C devices.
 *
 * @group Sensors
 * @boolean
 * @category System
 */
PARAM_DEFINE_INT32(SENS_EXT_I2C_PRB, 1);

/**
 * Sensors hub IMU mode
 *
 * 
 *
 * @group Sensors
 * @value 0 Disabled
 * @value 1 Publish primary IMU selection
 * @category System
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SENS_IMU_MODE, 1);

/**
 * Enable internal barometers
 *
 * For systems with an external barometer, this should be set to false to make sure that the external is used.
 *
 * @group Sensors
 * @boolean
 * @category System
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SENS_INT_BARO_EN, 1);

/**
 * Minimum height above ground when reliant on optical flow
 *
 * This parameter defines the minimum distance from ground at which the optical flow sensor operates reliably.
 * The sensor may be usable below this height, but accuracy will progressively reduce to loss of focus.
 *
 * @group Sensor Calibration
 * @decimal 2
 * @increment 0.1
 * @min 0.0
 * @max 1.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(SENS_FLOW_MINHGT, 0.08);

/**
 * Maximum height above ground when reliant on optical flow
 *
 * This parameter defines the maximum distance from ground at which the optical flow sensor operates reliably.
 * The height setpoint will be limited to be no greater than this value when the navigation system
 * is completely reliant on optical flow data and the height above ground estimate is valid.
 * The sensor may be usable above this height, but accuracy will progressively degrade.
 *
 * @group Sensor Calibration
 * @decimal 2
 * @increment 0.1
 * @min 1.0
 * @max 100.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(SENS_FLOW_MAXHGT, 100.0);

/**
 * Max angular flow rate measurable by sensor
 *
 * Magnitude of maximum angular flow rate reliably measurable by the optical flow sensor
 * 
 * Optical flow data will not fused by the estimators if the magnitude of the flow rate exceeds this value and
 * control loops will be instructed to limit ground speed such that the flow rate produced by movement over ground
 * is less than 50% of this value.
 *
 * @group Sensor Calibration
 * @decimal 2
 * @min 1.0
 * @unit rad/s
 */
PARAM_DEFINE_FLOAT(SENS_FLOW_MAXR, 8.0);

/**
 * Optical flow rotation
 *
 * This parameter defines the yaw rotation of the optical flow relative to the vehicle body frame.
 * Zero rotation is defined as X on flow board pointing towards front of vehicle.
 *
 * @group Sensors
 * @value 0 No rotation
 * @value 1 Yaw 45°
 * @value 2 Yaw 90°
 * @value 3 Yaw 135°
 * @value 4 Yaw 180°
 * @value 5 Yaw 225°
 * @value 6 Yaw 270°
 * @value 7 Yaw 315°
 */
PARAM_DEFINE_INT32(SENS_FLOW_ROT, 0);

/**
 * Optical flow max rate
 *
 * Optical flow data maximum publication rate. This is an upper bound,
 * actual optical flow data rate is still dependent on the sensor.
 *
 * @group Sensors
 * @min 1
 * @max 200
 * @unit Hz
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(SENS_FLOW_RATE, 70.0);

/**
 * Optical flow scale factor
 *
 * 
 *
 * @group Sensors
 * @decimal 2
 * @min 0.5
 * @max 1.5
 */
PARAM_DEFINE_FLOAT(SENS_FLOW_SCALE, 1.0);

/**
 * Type of magnetometer compensation
 *
 * 
 *
 * @group Sensor Calibration
 * @value 0 Disabled
 * @value 1 Throttle-based compensation
 * @value 2 Current-based compensation (battery_status instance 0)
 * @value 3 Current-based compensation (battery_status instance 1)
 * @category System
 */
PARAM_DEFINE_INT32(CAL_MAG_COMP_TYP, 0);

/**
 * Bitfield selecting mag sides for calibration
 *
 * If set to two side calibration, only the offsets are estimated, the scale
 * calibration is left unchanged. Thus an initial six side calibration is
 * recommended.
 * 
 * Bits:
 * ORIENTATION_TAIL_DOWN = 1
 * ORIENTATION_NOSE_DOWN = 2
 * ORIENTATION_LEFT = 4
 * ORIENTATION_RIGHT = 8
 * ORIENTATION_UPSIDE_DOWN = 16
 * ORIENTATION_RIGHTSIDE_UP = 32
 *
 * @group Sensors
 * @value 34 Two side calibration
 * @value 38 Three side calibration
 * @value 63 Six side calibration
 * @min 34
 * @max 63
 */
PARAM_DEFINE_INT32(SENS_MAG_SIDES, 63);

/**
 * For legacy QGC support only
 *
 * Use SENS_MAG_SIDES instead
 *
 * @group Sensors
 * @category Developer
 */
PARAM_DEFINE_INT32(CAL_MAG_SIDES, 63);

/**
 * Automatically set external rotations
 *
 * During calibration attempt to automatically determine the rotation of external magnetometers.
 *
 * @group Sensors
 * @boolean
 */
PARAM_DEFINE_INT32(SENS_MAG_AUTOROT, 1);

/**
 * Magnetometer max rate
 *
 * Magnetometer data maximum publication rate. This is an upper bound,
 * actual magnetometer data rate is still dependent on the sensor.
 *
 * @group Sensors
 * @min 1
 * @max 200
 * @unit Hz
 * @reboot_required True
 */
PARAM_DEFINE_FLOAT(SENS_MAG_RATE, 15.0);

/**
 * Sensors hub mag mode
 *
 * 
 *
 * @group Sensors
 * @value 0 Publish all magnetometers
 * @value 1 Publish primary magnetometer
 * @category System
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SENS_MAG_MODE, 1);

/**
 * Magnetometer auto calibration
 *
 * Automatically initialize magnetometer calibration from bias estimate if available.
 *
 * @group Sensors
 * @boolean
 * @category System
 */
PARAM_DEFINE_INT32(SENS_MAG_AUTOCAL, 1);

/**
 * Simulator Battery enabled
 *
 * Enable or disable the internal battery simulation. This is useful
 * when the battery is simulated externally and interfaced with PX4
 * through MAVLink for example.
 *
 * @group SITL
 * @boolean
 */
PARAM_DEFINE_INT32(SIM_BAT_ENABLE, 1);

/**
 * Simulator Battery drain interval
 *
 * 
 *
 * @group SITL
 * @increment 1
 * @min 1
 * @max 86400
 * @unit s
 */
PARAM_DEFINE_FLOAT(SIM_BAT_DRAIN, 60);

/**
 * Simulator Battery minimal percentage
 *
 * Can be used to alter the battery level during SITL- or HITL-simulation on the fly.
 * Particularly useful for testing different low-battery behaviour.
 *
 * @group SITL
 * @increment 0.1
 * @min 0
 * @max 100
 * @unit %
 */
PARAM_DEFINE_FLOAT(SIM_BAT_MIN_PCT, 50.0);

/**
 * Servo 1 Angle at Maximum
 *
 * Defines the angle when the servo is at the maximum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MAXA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MAXA1, 45.0);

/**
 * Servo 2 Angle at Maximum
 *
 * Defines the angle when the servo is at the maximum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MAXA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MAXA2, 45.0);

/**
 * Servo 3 Angle at Maximum
 *
 * Defines the angle when the servo is at the maximum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MAXA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MAXA3, 45.0);

/**
 * Servo 4 Angle at Maximum
 *
 * Defines the angle when the servo is at the maximum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MAXA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MAXA4, 45.0);

/**
 * Servo 5 Angle at Maximum
 *
 * Defines the angle when the servo is at the maximum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MAXA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MAXA5, 45.0);

/**
 * Servo 6 Angle at Maximum
 *
 * Defines the angle when the servo is at the maximum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MAXA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MAXA6, 45.0);

/**
 * Servo 7 Angle at Maximum
 *
 * Defines the angle when the servo is at the maximum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MAXA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MAXA7, 45.0);

/**
 * Servo 8 Angle at Maximum
 *
 * Defines the angle when the servo is at the maximum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MAXA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MAXA8, 45.0);

/**
 * Servo 1 Angle at Minimum
 *
 * Defines the angle when the servo is at the minimum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MINA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MINA1, -45.0);

/**
 * Servo 2 Angle at Minimum
 *
 * Defines the angle when the servo is at the minimum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MINA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MINA2, -45.0);

/**
 * Servo 3 Angle at Minimum
 *
 * Defines the angle when the servo is at the minimum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MINA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MINA3, -45.0);

/**
 * Servo 4 Angle at Minimum
 *
 * Defines the angle when the servo is at the minimum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MINA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MINA4, -45.0);

/**
 * Servo 5 Angle at Minimum
 *
 * Defines the angle when the servo is at the minimum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MINA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MINA5, -45.0);

/**
 * Servo 6 Angle at Minimum
 *
 * Defines the angle when the servo is at the minimum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MINA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MINA6, -45.0);

/**
 * Servo 7 Angle at Minimum
 *
 * Defines the angle when the servo is at the minimum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MINA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MINA7, -45.0);

/**
 * Servo 8 Angle at Minimum
 *
 * Defines the angle when the servo is at the minimum.
 * Currently only supported in gz simulation and must be coherent with .sdf file and CA_SV_TL{n}_MINA.
 * 
 *
 * @group Geometry
 * @decimal 0
 * @min -180.0
 * @max 180.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIM_GZ_SV_MINA8, -45.0);

/**
 * SIM_GZ ESC 1 Output Function
 *
 * Select what should be output on SIM_GZ ESC 1.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC1, 0);

/**
 * SIM_GZ ESC 2 Output Function
 *
 * Select what should be output on SIM_GZ ESC 2.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC2, 0);

/**
 * SIM_GZ ESC 3 Output Function
 *
 * Select what should be output on SIM_GZ ESC 3.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC3, 0);

/**
 * SIM_GZ ESC 4 Output Function
 *
 * Select what should be output on SIM_GZ ESC 4.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC4, 0);

/**
 * SIM_GZ ESC 5 Output Function
 *
 * Select what should be output on SIM_GZ ESC 5.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC5, 0);

/**
 * SIM_GZ ESC 6 Output Function
 *
 * Select what should be output on SIM_GZ ESC 6.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC6, 0);

/**
 * SIM_GZ ESC 7 Output Function
 *
 * Select what should be output on SIM_GZ ESC 7.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC7, 0);

/**
 * SIM_GZ ESC 8 Output Function
 *
 * Select what should be output on SIM_GZ ESC 8.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC8, 0);

/**
 * SIM_GZ ESC 9 Output Function
 *
 * Select what should be output on SIM_GZ ESC 9.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC9, 0);

/**
 * SIM_GZ ESC 10 Output Function
 *
 * Select what should be output on SIM_GZ ESC 10.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC10, 0);

/**
 * SIM_GZ ESC 11 Output Function
 *
 * Select what should be output on SIM_GZ ESC 11.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC11, 0);

/**
 * SIM_GZ ESC 12 Output Function
 *
 * Select what should be output on SIM_GZ ESC 12.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC12, 0);

/**
 * SIM_GZ ESC 13 Output Function
 *
 * Select what should be output on SIM_GZ ESC 13.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC13, 0);

/**
 * SIM_GZ ESC 14 Output Function
 *
 * Select what should be output on SIM_GZ ESC 14.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC14, 0);

/**
 * SIM_GZ ESC 15 Output Function
 *
 * Select what should be output on SIM_GZ ESC 15.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC15, 0);

/**
 * SIM_GZ ESC 16 Output Function
 *
 * Select what should be output on SIM_GZ ESC 16.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FUNC16, 0);

/**
 * SIM_GZ ESC 1 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS1, 0);

/**
 * SIM_GZ ESC 2 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS2, 0);

/**
 * SIM_GZ ESC 3 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS3, 0);

/**
 * SIM_GZ ESC 4 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS4, 0);

/**
 * SIM_GZ ESC 5 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS5, 0);

/**
 * SIM_GZ ESC 6 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS6, 0);

/**
 * SIM_GZ ESC 7 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS7, 0);

/**
 * SIM_GZ ESC 8 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS8, 0);

/**
 * SIM_GZ ESC 9 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS9, 0);

/**
 * SIM_GZ ESC 10 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS10, 0);

/**
 * SIM_GZ ESC 11 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS11, 0);

/**
 * SIM_GZ ESC 12 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS12, 0);

/**
 * SIM_GZ ESC 13 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS13, 0);

/**
 * SIM_GZ ESC 14 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS14, 0);

/**
 * SIM_GZ ESC 15 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS15, 0);

/**
 * SIM_GZ ESC 16 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_DIS16, 0);

/**
 * SIM_GZ ESC 1 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN1, 0);

/**
 * SIM_GZ ESC 2 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN2, 0);

/**
 * SIM_GZ ESC 3 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN3, 0);

/**
 * SIM_GZ ESC 4 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN4, 0);

/**
 * SIM_GZ ESC 5 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN5, 0);

/**
 * SIM_GZ ESC 6 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN6, 0);

/**
 * SIM_GZ ESC 7 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN7, 0);

/**
 * SIM_GZ ESC 8 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN8, 0);

/**
 * SIM_GZ ESC 9 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN9, 0);

/**
 * SIM_GZ ESC 10 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN10, 0);

/**
 * SIM_GZ ESC 11 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN11, 0);

/**
 * SIM_GZ ESC 12 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN12, 0);

/**
 * SIM_GZ ESC 13 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN13, 0);

/**
 * SIM_GZ ESC 14 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN14, 0);

/**
 * SIM_GZ ESC 15 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN15, 0);

/**
 * SIM_GZ ESC 16 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MIN16, 0);

/**
 * SIM_GZ ESC 1 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX1, 1000);

/**
 * SIM_GZ ESC 2 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX2, 1000);

/**
 * SIM_GZ ESC 3 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX3, 1000);

/**
 * SIM_GZ ESC 4 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX4, 1000);

/**
 * SIM_GZ ESC 5 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX5, 1000);

/**
 * SIM_GZ ESC 6 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX6, 1000);

/**
 * SIM_GZ ESC 7 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX7, 1000);

/**
 * SIM_GZ ESC 8 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX8, 1000);

/**
 * SIM_GZ ESC 9 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX9, 1000);

/**
 * SIM_GZ ESC 10 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX10, 1000);

/**
 * SIM_GZ ESC 11 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX11, 1000);

/**
 * SIM_GZ ESC 12 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX12, 1000);

/**
 * SIM_GZ ESC 13 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX13, 1000);

/**
 * SIM_GZ ESC 14 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX14, 1000);

/**
 * SIM_GZ ESC 15 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX15, 1000);

/**
 * SIM_GZ ESC 16 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_MAX16, 1000);

/**
 * SIM_GZ ESC 1 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC1).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL1, -1);

/**
 * SIM_GZ ESC 2 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC2).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL2, -1);

/**
 * SIM_GZ ESC 3 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC3).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL3, -1);

/**
 * SIM_GZ ESC 4 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC4).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL4, -1);

/**
 * SIM_GZ ESC 5 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC5).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL5, -1);

/**
 * SIM_GZ ESC 6 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC6).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL6, -1);

/**
 * SIM_GZ ESC 7 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC7).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL7, -1);

/**
 * SIM_GZ ESC 8 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC8).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL8, -1);

/**
 * SIM_GZ ESC 9 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC9).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL9, -1);

/**
 * SIM_GZ ESC 10 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC10).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL10, -1);

/**
 * SIM_GZ ESC 11 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC11).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL11, -1);

/**
 * SIM_GZ ESC 12 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC12).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL12, -1);

/**
 * SIM_GZ ESC 13 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC13).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL13, -1);

/**
 * SIM_GZ ESC 14 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC14).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL14, -1);

/**
 * SIM_GZ ESC 15 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC15).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL15, -1);

/**
 * SIM_GZ ESC 16 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_EC_FUNC16).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_FAIL16, -1);

/**
 * SIM_GZ Servo 1 Output Function
 *
 * Select what should be output on SIM_GZ Servo 1.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FUNC1, 0);

/**
 * SIM_GZ Servo 2 Output Function
 *
 * Select what should be output on SIM_GZ Servo 2.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FUNC2, 0);

/**
 * SIM_GZ Servo 3 Output Function
 *
 * Select what should be output on SIM_GZ Servo 3.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FUNC3, 0);

/**
 * SIM_GZ Servo 4 Output Function
 *
 * Select what should be output on SIM_GZ Servo 4.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FUNC4, 0);

/**
 * SIM_GZ Servo 5 Output Function
 *
 * Select what should be output on SIM_GZ Servo 5.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FUNC5, 0);

/**
 * SIM_GZ Servo 6 Output Function
 *
 * Select what should be output on SIM_GZ Servo 6.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FUNC6, 0);

/**
 * SIM_GZ Servo 7 Output Function
 *
 * Select what should be output on SIM_GZ Servo 7.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FUNC7, 0);

/**
 * SIM_GZ Servo 8 Output Function
 *
 * Select what should be output on SIM_GZ Servo 8.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FUNC8, 0);

/**
 * SIM_GZ Servo 1 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_DIS1, 500);

/**
 * SIM_GZ Servo 2 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_DIS2, 500);

/**
 * SIM_GZ Servo 3 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_DIS3, 500);

/**
 * SIM_GZ Servo 4 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_DIS4, 500);

/**
 * SIM_GZ Servo 5 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_DIS5, 500);

/**
 * SIM_GZ Servo 6 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_DIS6, 500);

/**
 * SIM_GZ Servo 7 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_DIS7, 500);

/**
 * SIM_GZ Servo 8 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_DIS8, 500);

/**
 * SIM_GZ Servo 1 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MIN1, 0);

/**
 * SIM_GZ Servo 2 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MIN2, 0);

/**
 * SIM_GZ Servo 3 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MIN3, 0);

/**
 * SIM_GZ Servo 4 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MIN4, 0);

/**
 * SIM_GZ Servo 5 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MIN5, 0);

/**
 * SIM_GZ Servo 6 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MIN6, 0);

/**
 * SIM_GZ Servo 7 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MIN7, 0);

/**
 * SIM_GZ Servo 8 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MIN8, 0);

/**
 * SIM_GZ Servo 1 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MAX1, 1000);

/**
 * SIM_GZ Servo 2 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MAX2, 1000);

/**
 * SIM_GZ Servo 3 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MAX3, 1000);

/**
 * SIM_GZ Servo 4 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MAX4, 1000);

/**
 * SIM_GZ Servo 5 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MAX5, 1000);

/**
 * SIM_GZ Servo 6 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MAX6, 1000);

/**
 * SIM_GZ Servo 7 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MAX7, 1000);

/**
 * SIM_GZ Servo 8 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_MAX8, 1000);

/**
 * SIM_GZ Servo 1 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_SV_FUNC1).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FAIL1, -1);

/**
 * SIM_GZ Servo 2 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_SV_FUNC2).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FAIL2, -1);

/**
 * SIM_GZ Servo 3 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_SV_FUNC3).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FAIL3, -1);

/**
 * SIM_GZ Servo 4 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_SV_FUNC4).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FAIL4, -1);

/**
 * SIM_GZ Servo 5 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_SV_FUNC5).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FAIL5, -1);

/**
 * SIM_GZ Servo 6 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_SV_FUNC6).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FAIL6, -1);

/**
 * SIM_GZ Servo 7 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_SV_FUNC7).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FAIL7, -1);

/**
 * SIM_GZ Servo 8 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_SV_FUNC8).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 1000
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_FAIL8, -1);

/**
 * SIM_GZ Wheels 1 Output Function
 *
 * Select what should be output on SIM_GZ Wheels 1.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_FUNC1, 0);

/**
 * SIM_GZ Wheels 2 Output Function
 *
 * Select what should be output on SIM_GZ Wheels 2.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_FUNC2, 0);

/**
 * SIM_GZ Wheels 3 Output Function
 *
 * Select what should be output on SIM_GZ Wheels 3.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_FUNC3, 0);

/**
 * SIM_GZ Wheels 4 Output Function
 *
 * Select what should be output on SIM_GZ Wheels 4.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_FUNC4, 0);

/**
 * SIM_GZ Wheels 1 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_DIS1, 100);

/**
 * SIM_GZ Wheels 2 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_DIS2, 100);

/**
 * SIM_GZ Wheels 3 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_DIS3, 100);

/**
 * SIM_GZ Wheels 4 Disarmed Value
 *
 * This is the output value that is set when not armed.
 * 
 * Note that non-motor outputs might already be active in prearm state if COM_PREARM_MODE is set.
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_DIS4, 100);

/**
 * SIM_GZ Wheels 1 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_MIN1, 0);

/**
 * SIM_GZ Wheels 2 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_MIN2, 0);

/**
 * SIM_GZ Wheels 3 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_MIN3, 0);

/**
 * SIM_GZ Wheels 4 Minimum Value
 *
 * Minimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_MIN4, 0);

/**
 * SIM_GZ Wheels 1 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_MAX1, 200);

/**
 * SIM_GZ Wheels 2 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_MAX2, 200);

/**
 * SIM_GZ Wheels 3 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_MAX3, 200);

/**
 * SIM_GZ Wheels 4 Maximum Value
 *
 * Maxmimum output value (when not disarmed).
 * 
 *
 * @group Actuator Outputs
 * @min 0
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_MAX4, 200);

/**
 * SIM_GZ Wheels 1 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_WH_FUNC1).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_FAIL1, -1);

/**
 * SIM_GZ Wheels 2 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_WH_FUNC2).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_FAIL2, -1);

/**
 * SIM_GZ Wheels 3 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_WH_FUNC3).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_FAIL3, -1);

/**
 * SIM_GZ Wheels 4 Failsafe Value
 *
 * This is the output value that is set when in failsafe mode.
 * 
 * When set to -1 (default), the value depends on the function (see SIM_GZ_WH_FUNC4).
 * 
 *
 * @group Actuator Outputs
 * @min -1
 * @max 200
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_FAIL4, -1);

/**
 * Reverse Output Range for SIM_GZ
 *
 * Allows to reverse the output range for each channel.
 * Note: this is only useful for servos.
 * 
 *
 * @group Actuator Outputs
 * @bit 0 SIM_GZ ESC 1
 * @bit 1 SIM_GZ ESC 2
 * @bit 2 SIM_GZ ESC 3
 * @bit 3 SIM_GZ ESC 4
 * @bit 4 SIM_GZ ESC 5
 * @bit 5 SIM_GZ ESC 6
 * @bit 6 SIM_GZ ESC 7
 * @bit 7 SIM_GZ ESC 8
 * @bit 8 SIM_GZ ESC 9
 * @bit 9 SIM_GZ ESC 10
 * @bit 10 SIM_GZ ESC 11
 * @bit 11 SIM_GZ ESC 12
 * @bit 12 SIM_GZ ESC 13
 * @bit 13 SIM_GZ ESC 14
 * @bit 14 SIM_GZ ESC 15
 * @bit 15 SIM_GZ ESC 16
 * @min 0
 * @max 65535
 */
PARAM_DEFINE_INT32(SIM_GZ_EC_REV, 0);

/**
 * Reverse Output Range for SIM_GZ
 *
 * Allows to reverse the output range for each channel.
 * Note: this is only useful for servos.
 * 
 *
 * @group Actuator Outputs
 * @bit 0 SIM_GZ Servo 1
 * @bit 1 SIM_GZ Servo 2
 * @bit 2 SIM_GZ Servo 3
 * @bit 3 SIM_GZ Servo 4
 * @bit 4 SIM_GZ Servo 5
 * @bit 5 SIM_GZ Servo 6
 * @bit 6 SIM_GZ Servo 7
 * @bit 7 SIM_GZ Servo 8
 * @min 0
 * @max 255
 */
PARAM_DEFINE_INT32(SIM_GZ_SV_REV, 0);

/**
 * Reverse Output Range for SIM_GZ
 *
 * Allows to reverse the output range for each channel.
 * Note: this is only useful for servos.
 * 
 *
 * @group Actuator Outputs
 * @bit 0 SIM_GZ Wheels 1
 * @bit 1 SIM_GZ Wheels 2
 * @bit 2 SIM_GZ Wheels 3
 * @bit 3 SIM_GZ Wheels 4
 * @min 0
 * @max 15
 */
PARAM_DEFINE_INT32(SIM_GZ_WH_REV, 0);

/**
 * Enable laser/lidar sensors in Gazebo bridge
 *
 * 
 *
 * @group Simulation
 * @value 0 Disabled
 * @value 1 Enabled
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SIM_GZ_EN_LIDAR, 1);

/**
 * Enable optical flow sensor in Gazebo bridge
 *
 * 
 *
 * @group Simulation
 * @value 0 Disabled
 * @value 1 Enabled
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SIM_GZ_EN_FLOW, 1);

/**
 * Enable airspeed sensor in Gazebo bridge
 *
 * 
 *
 * @group Simulation
 * @value 0 Disabled
 * @value 1 Enabled
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SIM_GZ_EN_ASPD, 1);

/**
 * Enable barometer/air pressure sensor in Gazebo bridge
 *
 * 
 *
 * @group Simulation
 * @value 0 Disabled
 * @value 1 Enabled
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SIM_GZ_EN_BARO, 1);

/**
 * Enable odometry in Gazebo bridge
 *
 * 
 *
 * @group Simulation
 * @value 0 Disabled
 * @value 1 Enabled
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SIM_GZ_EN_ODOM, 1);

/**
 * Enable GPS/NavSat sensor in Gazebo bridge
 *
 * 
 *
 * @group Simulation
 * @value 0 Disabled
 * @value 1 Enabled
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SIM_GZ_EN_GPS, 1);

/**
 * Simulator Gazebo bridge enable
 *
 * 
 *
 * @group UAVCAN
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SIM_GZ_EN, 0);

/**
 * SIM Channel 1 Output Function
 *
 * Select what should be output on SIM Channel 1.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC1, 0);

/**
 * SIM Channel 2 Output Function
 *
 * Select what should be output on SIM Channel 2.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC2, 0);

/**
 * SIM Channel 3 Output Function
 *
 * Select what should be output on SIM Channel 3.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC3, 0);

/**
 * SIM Channel 4 Output Function
 *
 * Select what should be output on SIM Channel 4.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC4, 0);

/**
 * SIM Channel 5 Output Function
 *
 * Select what should be output on SIM Channel 5.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC5, 0);

/**
 * SIM Channel 6 Output Function
 *
 * Select what should be output on SIM Channel 6.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC6, 0);

/**
 * SIM Channel 7 Output Function
 *
 * Select what should be output on SIM Channel 7.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC7, 0);

/**
 * SIM Channel 8 Output Function
 *
 * Select what should be output on SIM Channel 8.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC8, 0);

/**
 * SIM Channel 9 Output Function
 *
 * Select what should be output on SIM Channel 9.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC9, 0);

/**
 * SIM Channel 10 Output Function
 *
 * Select what should be output on SIM Channel 10.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC10, 0);

/**
 * SIM Channel 11 Output Function
 *
 * Select what should be output on SIM Channel 11.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC11, 0);

/**
 * SIM Channel 12 Output Function
 *
 * Select what should be output on SIM Channel 12.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC12, 0);

/**
 * SIM Channel 13 Output Function
 *
 * Select what should be output on SIM Channel 13.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC13, 0);

/**
 * SIM Channel 14 Output Function
 *
 * Select what should be output on SIM Channel 14.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC14, 0);

/**
 * SIM Channel 15 Output Function
 *
 * Select what should be output on SIM Channel 15.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC15, 0);

/**
 * SIM Channel 16 Output Function
 *
 * Select what should be output on SIM Channel 16.
 * 
 * The default failsafe value is set according to the selected function:
 * - 'Min' for ConstantMin
 * - 'Max' for ConstantMax
 * - 'Max' for Parachute
 * - ('Max'+'Min')/2 for Servos
 * - 'Disarmed' for the rest
 * 
 *
 * @group Actuator Outputs
 * @value 0 Disabled
 * @value 1 Constant Min
 * @value 2 Constant Max
 * @value 101 Motor 1
 * @value 102 Motor 2
 * @value 103 Motor 3
 * @value 104 Motor 4
 * @value 105 Motor 5
 * @value 106 Motor 6
 * @value 107 Motor 7
 * @value 108 Motor 8
 * @value 109 Motor 9
 * @value 110 Motor 10
 * @value 111 Motor 11
 * @value 112 Motor 12
 * @value 201 Servo 1
 * @value 202 Servo 2
 * @value 203 Servo 3
 * @value 204 Servo 4
 * @value 205 Servo 5
 * @value 206 Servo 6
 * @value 207 Servo 7
 * @value 208 Servo 8
 * @value 301 Peripheral via Actuator Set 1
 * @value 302 Peripheral via Actuator Set 2
 * @value 303 Peripheral via Actuator Set 3
 * @value 304 Peripheral via Actuator Set 4
 * @value 305 Peripheral via Actuator Set 5
 * @value 306 Peripheral via Actuator Set 6
 * @value 400 Landing Gear
 * @value 401 Parachute
 * @value 402 RC Roll
 * @value 403 RC Pitch
 * @value 404 RC Throttle
 * @value 405 RC Yaw
 * @value 406 RC Flaps
 * @value 407 RC AUX 1
 * @value 408 RC AUX 2
 * @value 409 RC AUX 3
 * @value 410 RC AUX 4
 * @value 411 RC AUX 5
 * @value 412 RC AUX 6
 * @value 420 Gimbal Roll
 * @value 421 Gimbal Pitch
 * @value 422 Gimbal Yaw
 * @value 430 Gripper
 * @value 440 Landing Gear Wheel
 * @value 450 IC Engine Ignition
 * @value 451 IC Engine Throttle
 * @value 452 IC Engine Choke
 * @value 453 IC Engine Starter
 */
PARAM_DEFINE_INT32(PWM_MAIN_FUNC16, 0);

/**
 * Reverse Output Range for SIM
 *
 * Allows to reverse the output range for each channel.
 * Note: this is only useful for servos.
 * 
 *
 * @group Actuator Outputs
 * @bit 0 SIM Channel 1
 * @bit 1 SIM Channel 2
 * @bit 2 SIM Channel 3
 * @bit 3 SIM Channel 4
 * @bit 4 SIM Channel 5
 * @bit 5 SIM Channel 6
 * @bit 6 SIM Channel 7
 * @bit 7 SIM Channel 8
 * @bit 8 SIM Channel 9
 * @bit 9 SIM Channel 10
 * @bit 10 SIM Channel 11
 * @bit 11 SIM Channel 12
 * @bit 12 SIM Channel 13
 * @bit 13 SIM Channel 14
 * @bit 14 SIM Channel 15
 * @bit 15 SIM Channel 16
 * @min 0
 * @max 65535
 */
PARAM_DEFINE_INT32(PWM_MAIN_REV, 0);

/**
 * Simulate Aux Global Position (AGP)
 *
 * 
 *
 * @group Sensors
 * @value 0 Disabled
 * @value 1 Enabled
 * @min 0
 * @max 1
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SENS_EN_AGPSIM, 0);

/**
 * AGP failure mode
 *
 * Stuck: freeze the measurement to the current location
 * Drift: add a linearly growing bias to the sensor data
 *
 * @group Simulator
 * @bit 0 Stuck
 * @bit 1 Drift
 * @min 0
 * @max 3
 * @min 0
 * @max 3
 */
PARAM_DEFINE_INT32(SIM_AGP_FAIL, 0);

/**
 * Enable simulated airspeed sensor instance
 *
 * 
 *
 * @group Sensors
 * @value 0 Disabled
 * @value 1 Enabled
 * @min 0
 * @max 1
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SENS_EN_ARSPDSIM, 0);

/**
 * Dynamically simulate failure of airspeed sensor instance
 *
 * 
 *
 * @group Sensors
 * @value 0 Disabled
 * @value 1 Enabled
 * @min 0
 * @max 1
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SIM_ARSPD_FAIL, 0);

/**
 * Enable simulated barometer sensor instance
 *
 * 
 *
 * @group Sensors
 * @value 0 Disabled
 * @value 1 Enabled
 * @min 0
 * @max 1
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SENS_EN_BAROSIM, 0);

/**
 * simulated barometer pressure offset
 *
 * 
 *
 * @group Simulator
 */
PARAM_DEFINE_FLOAT(SIM_BARO_OFF_P, 0.0);

/**
 * simulated barometer temperature offset
 *
 * 
 *
 * @group Simulator
 * @unit celcius
 */
PARAM_DEFINE_FLOAT(SIM_BARO_OFF_T, 0.0);

/**
 * Enable simulated GPS sinstance
 *
 * 
 *
 * @group Sensors
 * @value 0 Disabled
 * @value 1 Enabled
 * @min 0
 * @max 1
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SENS_EN_GPSSIM, 0);

/**
 * simulated GPS number of satellites used
 *
 * 
 *
 * @group Simulator
 * @min 0
 * @max 50
 */
PARAM_DEFINE_INT32(SIM_GPS_USED, 10);

/**
 * Enable simulated magnetometer sensor instance
 *
 * 
 *
 * @group Sensors
 * @value 0 Disabled
 * @value 1 Enabled
 * @min 0
 * @max 1
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SENS_EN_MAGSIM, 0);

/**
 * simulated magnetometer X offset
 *
 * 
 *
 * @group Simulator
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(SIM_MAG_OFFSET_X, 0.0);

/**
 * simulated magnetometer Y offset
 *
 * 
 *
 * @group Simulator
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(SIM_MAG_OFFSET_Y, 0.0);

/**
 * simulated magnetometer Z offset
 *
 * 
 *
 * @group Simulator
 * @unit gauss
 */
PARAM_DEFINE_FLOAT(SIM_MAG_OFFSET_Z, 0.0);

/**
 * Vehicle mass
 *
 * This value can be measured by weighting the quad on a scale.
 *
 * @group Simulation In Hardware
 * @decimal 2
 * @increment 0.1
 * @min 0.0
 * @unit kg
 */
PARAM_DEFINE_FLOAT(SIH_MASS, 1.0);

/**
 * Vehicle inertia about X axis
 *
 * The inertia is a 3 by 3 symmetric matrix.
 * It represents the difficulty of the vehicle to modify its angular rate.
 *
 * @group Simulation In Hardware
 * @decimal 3
 * @increment 0.005
 * @min 0.0
 * @unit kg m^2
 */
PARAM_DEFINE_FLOAT(SIH_IXX, 0.025);

/**
 * Vehicle inertia about Y axis
 *
 * The inertia is a 3 by 3 symmetric matrix.
 * It represents the difficulty of the vehicle to modify its angular rate.
 *
 * @group Simulation In Hardware
 * @decimal 3
 * @increment 0.005
 * @min 0.0
 * @unit kg m^2
 */
PARAM_DEFINE_FLOAT(SIH_IYY, 0.025);

/**
 * Vehicle inertia about Z axis
 *
 * The inertia is a 3 by 3 symmetric matrix.
 * It represents the difficulty of the vehicle to modify its angular rate.
 *
 * @group Simulation In Hardware
 * @decimal 3
 * @increment 0.005
 * @min 0.0
 * @unit kg m^2
 */
PARAM_DEFINE_FLOAT(SIH_IZZ, 0.03);

/**
 * Vehicle cross term inertia xy
 *
 * The inertia is a 3 by 3 symmetric matrix.
 * This value can be set to 0 for a quad symmetric about its center of mass.
 *
 * @group Simulation In Hardware
 * @decimal 3
 * @increment 0.005
 * @unit kg m^2
 */
PARAM_DEFINE_FLOAT(SIH_IXY, 0.0);

/**
 * Vehicle cross term inertia xz
 *
 * The inertia is a 3 by 3 symmetric matrix.
 * This value can be set to 0 for a quad symmetric about its center of mass.
 *
 * @group Simulation In Hardware
 * @decimal 3
 * @increment 0.005
 * @unit kg m^2
 */
PARAM_DEFINE_FLOAT(SIH_IXZ, 0.0);

/**
 * Vehicle cross term inertia yz
 *
 * The inertia is a 3 by 3 symmetric matrix.
 * This value can be set to 0 for a quad symmetric about its center of mass.
 *
 * @group Simulation In Hardware
 * @decimal 3
 * @increment 0.005
 * @unit kg m^2
 */
PARAM_DEFINE_FLOAT(SIH_IYZ, 0.0);

/**
 * Max propeller thrust force
 *
 * This is the maximum force delivered by one propeller
 * when the motor is running at full speed.
 * 
 * This value is usually about 5 times the mass of the quadrotor.
 *
 * @group Simulation In Hardware
 * @decimal 2
 * @increment 0.5
 * @min 0.0
 * @unit N
 */
PARAM_DEFINE_FLOAT(SIH_T_MAX, 5.0);

/**
 * Max propeller torque
 *
 * This is the maximum torque delivered by one propeller
 * when the motor is running at full speed.
 * 
 * This value is usually about few percent of the maximum thrust force.
 *
 * @group Simulation In Hardware
 * @decimal 3
 * @increment 0.05
 * @min 0.0
 * @unit Nm
 */
PARAM_DEFINE_FLOAT(SIH_Q_MAX, 0.1);

/**
 * Roll arm length
 *
 * This is the arm length generating the rolling moment
 * 
 * This value can be measured with a ruler.
 * This corresponds to half the distance between the left and right motors.
 *
 * @group Simulation In Hardware
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(SIH_L_ROLL, 0.2);

/**
 * Pitch arm length
 *
 * This is the arm length generating the pitching moment
 * 
 * This value can be measured with a ruler.
 * This corresponds to half the distance between the front and rear motors.
 *
 * @group Simulation In Hardware
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(SIH_L_PITCH, 0.2);

/**
 * First order drag coefficient
 *
 * Physical coefficient representing the friction with air particules.
 * The greater this value, the slower the quad will move.
 * 
 * Drag force function of velocity: D=-KDV*V.
 * The maximum freefall velocity can be computed as V=10*MASS/KDV [m/s]
 *
 * @group Simulation In Hardware
 * @decimal 2
 * @increment 0.05
 * @min 0.0
 * @unit N/(m/s)
 */
PARAM_DEFINE_FLOAT(SIH_KDV, 1.0);

/**
 * First order angular damper coefficient
 *
 * Physical coefficient representing the friction with air particules during rotations.
 * The greater this value, the slower the quad will rotate.
 * 
 * Aerodynamic moment function of body rate: Ma=-KDW*W_B.
 * This value can be set to 0 if unknown.
 *
 * @group Simulation In Hardware
 * @decimal 3
 * @increment 0.005
 * @min 0.0
 * @unit Nm/(rad/s)
 */
PARAM_DEFINE_FLOAT(SIH_KDW, 0.025);

/**
 * Initial geodetic latitude
 *
 * This value represents the North-South location on Earth where the simulation begins.
 * 
 * LAT0, LON0, H0, MU_X, MU_Y, and MU_Z should ideally be consistent among each others
 * to represent a physical ground location on Earth.
 *
 * @group Simulation In Hardware
 * @min -90
 * @max 90
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIH_LOC_LAT0, 47.397742);

/**
 * Initial geodetic longitude
 *
 * This value represents the East-West location on Earth where the simulation begins.
 * 
 * LAT0, LON0, H0, MU_X, MU_Y, and MU_Z should ideally be consistent among each others
 * to represent a physical ground location on Earth.
 *
 * @group Simulation In Hardware
 * @min -180
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_FLOAT(SIH_LOC_LON0, 8.545594);

/**
 * Initial AMSL ground altitude
 *
 * This value represents the Above Mean Sea Level (AMSL) altitude where the simulation begins.
 * 
 * If using FlightGear as a visual animation,
 * this value can be tweaked such that the vehicle lies on the ground at takeoff.
 * 
 * LAT0, LON0, H0, MU_X, MU_Y, and MU_Z should ideally be consistent among each others
 * to represent a physical ground location on Earth.
 *
 * @group Simulation In Hardware
 * @decimal 2
 * @increment 0.01
 * @min -420.0
 * @max 8848.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(SIH_LOC_H0, 489.4);

/**
 * distance sensor minimum range
 *
 * 
 *
 * @group Simulation In Hardware
 * @decimal 4
 * @increment 0.01
 * @min 0.0
 * @max 10.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(SIH_DISTSNSR_MIN, 0.0);

/**
 * distance sensor maximum range
 *
 * 
 *
 * @group Simulation In Hardware
 * @decimal 4
 * @increment 0.01
 * @min 0.0
 * @max 1000.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(SIH_DISTSNSR_MAX, 100.0);

/**
 * if >= 0 the distance sensor measures will be overridden by this value
 *
 * Absolute value superior to 10000 will disable distance sensor
 *
 * @group Simulation In Hardware
 * @unit m
 */
PARAM_DEFINE_FLOAT(SIH_DISTSNSR_OVR, -1.0);

/**
 * thruster time constant tau
 *
 * the time taken for the thruster to step from 0 to 100% should be about 4 times tau
 *
 * @group Simulation In Hardware
 * @unit s
 */
PARAM_DEFINE_FLOAT(SIH_T_TAU, 0.05);

/**
 * Vehicle type
 *
 * 
 *
 * @group Simulation In Hardware
 * @value 0 Quadcopter
 * @value 1 Fixed-Wing
 * @value 2 Tailsitter
 * @value 3 Standard VTOL
 * @value 4 Hexacopter
 * @value 5 Rover Ackermann
 * @reboot_required True
 */
PARAM_DEFINE_INT32(SIH_VEHICLE_TYPE, 0);

/**
 * Wind velocity from north direction
 *
 * 
 *
 * @group Simulation In Hardware
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(SIH_WIND_N, 0.0);

/**
 * Wind velocity from east direction
 *
 * 
 *
 * @group Simulation In Hardware
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(SIH_WIND_E, 0.0);

/**
 * Ranging beacon measurement noise standard deviation
 *
 * Gaussian noise added to simulated ranging beacon measurements. Set to 0 to disable noise.
 *
 * @group Simulation In Hardware
 * @decimal 1
 * @min 0.0
 * @max 100.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(SIH_RNGBC_NOISE, 30.0);

/**
 * Thermal compensation for accelerometer sensors
 *
 * 
 *
 * @group Thermal Compensation
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(TC_A_ENABLE, 0);

/**
 * ID of Accelerometer that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_A0_ID, 0);

/**
 * Accelerometer offset temperature ^3 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_X3_0, 0.0);

/**
 * Accelerometer offset temperature ^3 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_X3_1, 0.0);

/**
 * Accelerometer offset temperature ^3 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_X3_2, 0.0);

/**
 * Accelerometer offset temperature ^2 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_X2_0, 0.0);

/**
 * Accelerometer offset temperature ^2 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_X2_1, 0.0);

/**
 * Accelerometer offset temperature ^2 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_X2_2, 0.0);

/**
 * Accelerometer offset temperature ^1 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_X1_0, 0.0);

/**
 * Accelerometer offset temperature ^1 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_X1_1, 0.0);

/**
 * Accelerometer offset temperature ^1 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_X1_2, 0.0);

/**
 * Accelerometer offset temperature ^0 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_X0_0, 0.0);

/**
 * Accelerometer offset temperature ^0 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_X0_1, 0.0);

/**
 * Accelerometer offset temperature ^0 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_X0_2, 0.0);

/**
 * Accelerometer calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_TREF, 25.0);

/**
 * Accelerometer calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_TMIN, 0.0);

/**
 * Accelerometer calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A0_TMAX, 100.0);

/**
 * ID of Accelerometer that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_A1_ID, 0);

/**
 * Accelerometer offset temperature ^3 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_X3_0, 0.0);

/**
 * Accelerometer offset temperature ^3 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_X3_1, 0.0);

/**
 * Accelerometer offset temperature ^3 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_X3_2, 0.0);

/**
 * Accelerometer offset temperature ^2 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_X2_0, 0.0);

/**
 * Accelerometer offset temperature ^2 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_X2_1, 0.0);

/**
 * Accelerometer offset temperature ^2 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_X2_2, 0.0);

/**
 * Accelerometer offset temperature ^1 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_X1_0, 0.0);

/**
 * Accelerometer offset temperature ^1 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_X1_1, 0.0);

/**
 * Accelerometer offset temperature ^1 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_X1_2, 0.0);

/**
 * Accelerometer offset temperature ^0 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_X0_0, 0.0);

/**
 * Accelerometer offset temperature ^0 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_X0_1, 0.0);

/**
 * Accelerometer offset temperature ^0 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_X0_2, 0.0);

/**
 * Accelerometer calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_TREF, 25.0);

/**
 * Accelerometer calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_TMIN, 0.0);

/**
 * Accelerometer calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A1_TMAX, 100.0);

/**
 * ID of Accelerometer that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_A2_ID, 0);

/**
 * Accelerometer offset temperature ^3 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_X3_0, 0.0);

/**
 * Accelerometer offset temperature ^3 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_X3_1, 0.0);

/**
 * Accelerometer offset temperature ^3 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_X3_2, 0.0);

/**
 * Accelerometer offset temperature ^2 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_X2_0, 0.0);

/**
 * Accelerometer offset temperature ^2 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_X2_1, 0.0);

/**
 * Accelerometer offset temperature ^2 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_X2_2, 0.0);

/**
 * Accelerometer offset temperature ^1 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_X1_0, 0.0);

/**
 * Accelerometer offset temperature ^1 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_X1_1, 0.0);

/**
 * Accelerometer offset temperature ^1 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_X1_2, 0.0);

/**
 * Accelerometer offset temperature ^0 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_X0_0, 0.0);

/**
 * Accelerometer offset temperature ^0 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_X0_1, 0.0);

/**
 * Accelerometer offset temperature ^0 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_X0_2, 0.0);

/**
 * Accelerometer calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_TREF, 25.0);

/**
 * Accelerometer calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_TMIN, 0.0);

/**
 * Accelerometer calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A2_TMAX, 100.0);

/**
 * ID of Accelerometer that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_A3_ID, 0);

/**
 * Accelerometer offset temperature ^3 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_X3_0, 0.0);

/**
 * Accelerometer offset temperature ^3 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_X3_1, 0.0);

/**
 * Accelerometer offset temperature ^3 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_X3_2, 0.0);

/**
 * Accelerometer offset temperature ^2 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_X2_0, 0.0);

/**
 * Accelerometer offset temperature ^2 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_X2_1, 0.0);

/**
 * Accelerometer offset temperature ^2 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_X2_2, 0.0);

/**
 * Accelerometer offset temperature ^1 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_X1_0, 0.0);

/**
 * Accelerometer offset temperature ^1 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_X1_1, 0.0);

/**
 * Accelerometer offset temperature ^1 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_X1_2, 0.0);

/**
 * Accelerometer offset temperature ^0 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_X0_0, 0.0);

/**
 * Accelerometer offset temperature ^0 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_X0_1, 0.0);

/**
 * Accelerometer offset temperature ^0 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_X0_2, 0.0);

/**
 * Accelerometer calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_TREF, 25.0);

/**
 * Accelerometer calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_TMIN, 0.0);

/**
 * Accelerometer calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_A3_TMAX, 100.0);

/**
 * Thermal compensation for barometric pressure sensors
 *
 * 
 *
 * @group Thermal Compensation
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(TC_B_ENABLE, 0);

/**
 * ID of Barometer that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_B0_ID, 0);

/**
 * Barometer offset temperature ^5 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B0_X5, 0.0);

/**
 * Barometer offset temperature ^4 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B0_X4, 0.0);

/**
 * Barometer offset temperature ^3 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B0_X3, 0.0);

/**
 * Barometer offset temperature ^2 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B0_X2, 0.0);

/**
 * Barometer offset temperature ^1 polynomial coefficients
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B0_X1, 0.0);

/**
 * Barometer offset temperature ^0 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B0_X0, 0.0);

/**
 * Barometer calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B0_TREF, 40.0);

/**
 * Barometer calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B0_TMIN, 5.0);

/**
 * Barometer calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B0_TMAX, 75.0);

/**
 * ID of Barometer that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_B1_ID, 0);

/**
 * Barometer offset temperature ^5 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B1_X5, 0.0);

/**
 * Barometer offset temperature ^4 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B1_X4, 0.0);

/**
 * Barometer offset temperature ^3 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B1_X3, 0.0);

/**
 * Barometer offset temperature ^2 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B1_X2, 0.0);

/**
 * Barometer offset temperature ^1 polynomial coefficients
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B1_X1, 0.0);

/**
 * Barometer offset temperature ^0 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B1_X0, 0.0);

/**
 * Barometer calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B1_TREF, 40.0);

/**
 * Barometer calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B1_TMIN, 5.0);

/**
 * Barometer calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B1_TMAX, 75.0);

/**
 * ID of Barometer that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_B2_ID, 0);

/**
 * Barometer offset temperature ^5 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B2_X5, 0.0);

/**
 * Barometer offset temperature ^4 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B2_X4, 0.0);

/**
 * Barometer offset temperature ^3 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B2_X3, 0.0);

/**
 * Barometer offset temperature ^2 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B2_X2, 0.0);

/**
 * Barometer offset temperature ^1 polynomial coefficients
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B2_X1, 0.0);

/**
 * Barometer offset temperature ^0 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B2_X0, 0.0);

/**
 * Barometer calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B2_TREF, 40.0);

/**
 * Barometer calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B2_TMIN, 5.0);

/**
 * Barometer calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B2_TMAX, 75.0);

/**
 * ID of Barometer that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_B3_ID, 0);

/**
 * Barometer offset temperature ^5 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B3_X5, 0.0);

/**
 * Barometer offset temperature ^4 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B3_X4, 0.0);

/**
 * Barometer offset temperature ^3 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B3_X3, 0.0);

/**
 * Barometer offset temperature ^2 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B3_X2, 0.0);

/**
 * Barometer offset temperature ^1 polynomial coefficients
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B3_X1, 0.0);

/**
 * Barometer offset temperature ^0 polynomial coefficient
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B3_X0, 0.0);

/**
 * Barometer calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B3_TREF, 40.0);

/**
 * Barometer calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B3_TMIN, 5.0);

/**
 * Barometer calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_B3_TMAX, 75.0);

/**
 * Thermal compensation for rate gyro sensors
 *
 * 
 *
 * @group Thermal Compensation
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(TC_G_ENABLE, 0);

/**
 * ID of Gyro that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_G0_ID, 0);

/**
 * Gyro rate offset temperature ^3 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_X3_0, 0.0);

/**
 * Gyro rate offset temperature ^3 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_X3_1, 0.0);

/**
 * Gyro rate offset temperature ^3 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_X3_2, 0.0);

/**
 * Gyro rate offset temperature ^2 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_X2_0, 0.0);

/**
 * Gyro rate offset temperature ^2 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_X2_1, 0.0);

/**
 * Gyro rate offset temperature ^2 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_X2_2, 0.0);

/**
 * Gyro rate offset temperature ^1 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_X1_0, 0.0);

/**
 * Gyro rate offset temperature ^1 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_X1_1, 0.0);

/**
 * Gyro rate offset temperature ^1 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_X1_2, 0.0);

/**
 * Gyro rate offset temperature ^0 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_X0_0, 0.0);

/**
 * Gyro rate offset temperature ^0 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_X0_1, 0.0);

/**
 * Gyro rate offset temperature ^0 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_X0_2, 0.0);

/**
 * Gyro calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_TREF, 25.0);

/**
 * Gyro calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_TMIN, 0.0);

/**
 * Gyro calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G0_TMAX, 100.0);

/**
 * ID of Gyro that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_G1_ID, 0);

/**
 * Gyro rate offset temperature ^3 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_X3_0, 0.0);

/**
 * Gyro rate offset temperature ^3 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_X3_1, 0.0);

/**
 * Gyro rate offset temperature ^3 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_X3_2, 0.0);

/**
 * Gyro rate offset temperature ^2 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_X2_0, 0.0);

/**
 * Gyro rate offset temperature ^2 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_X2_1, 0.0);

/**
 * Gyro rate offset temperature ^2 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_X2_2, 0.0);

/**
 * Gyro rate offset temperature ^1 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_X1_0, 0.0);

/**
 * Gyro rate offset temperature ^1 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_X1_1, 0.0);

/**
 * Gyro rate offset temperature ^1 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_X1_2, 0.0);

/**
 * Gyro rate offset temperature ^0 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_X0_0, 0.0);

/**
 * Gyro rate offset temperature ^0 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_X0_1, 0.0);

/**
 * Gyro rate offset temperature ^0 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_X0_2, 0.0);

/**
 * Gyro calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_TREF, 25.0);

/**
 * Gyro calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_TMIN, 0.0);

/**
 * Gyro calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G1_TMAX, 100.0);

/**
 * ID of Gyro that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_G2_ID, 0);

/**
 * Gyro rate offset temperature ^3 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_X3_0, 0.0);

/**
 * Gyro rate offset temperature ^3 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_X3_1, 0.0);

/**
 * Gyro rate offset temperature ^3 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_X3_2, 0.0);

/**
 * Gyro rate offset temperature ^2 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_X2_0, 0.0);

/**
 * Gyro rate offset temperature ^2 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_X2_1, 0.0);

/**
 * Gyro rate offset temperature ^2 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_X2_2, 0.0);

/**
 * Gyro rate offset temperature ^1 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_X1_0, 0.0);

/**
 * Gyro rate offset temperature ^1 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_X1_1, 0.0);

/**
 * Gyro rate offset temperature ^1 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_X1_2, 0.0);

/**
 * Gyro rate offset temperature ^0 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_X0_0, 0.0);

/**
 * Gyro rate offset temperature ^0 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_X0_1, 0.0);

/**
 * Gyro rate offset temperature ^0 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_X0_2, 0.0);

/**
 * Gyro calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_TREF, 25.0);

/**
 * Gyro calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_TMIN, 0.0);

/**
 * Gyro calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G2_TMAX, 100.0);

/**
 * ID of Gyro that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_G3_ID, 0);

/**
 * Gyro rate offset temperature ^3 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_X3_0, 0.0);

/**
 * Gyro rate offset temperature ^3 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_X3_1, 0.0);

/**
 * Gyro rate offset temperature ^3 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_X3_2, 0.0);

/**
 * Gyro rate offset temperature ^2 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_X2_0, 0.0);

/**
 * Gyro rate offset temperature ^2 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_X2_1, 0.0);

/**
 * Gyro rate offset temperature ^2 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_X2_2, 0.0);

/**
 * Gyro rate offset temperature ^1 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_X1_0, 0.0);

/**
 * Gyro rate offset temperature ^1 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_X1_1, 0.0);

/**
 * Gyro rate offset temperature ^1 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_X1_2, 0.0);

/**
 * Gyro rate offset temperature ^0 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_X0_0, 0.0);

/**
 * Gyro rate offset temperature ^0 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_X0_1, 0.0);

/**
 * Gyro rate offset temperature ^0 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_X0_2, 0.0);

/**
 * Gyro calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_TREF, 25.0);

/**
 * Gyro calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_TMIN, 0.0);

/**
 * Gyro calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_G3_TMAX, 100.0);

/**
 * Thermal compensation for magnetometer sensors
 *
 * 
 *
 * @group Thermal Compensation
 * @boolean
 * @reboot_required True
 */
PARAM_DEFINE_INT32(TC_M_ENABLE, 0);

/**
 * ID of Magnetometer that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_M0_ID, 0);

/**
 * Magnetometer offset temperature ^3 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_X3_0, 0.0);

/**
 * Magnetometer offset temperature ^3 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_X3_1, 0.0);

/**
 * Magnetometer offset temperature ^3 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_X3_2, 0.0);

/**
 * Magnetometer offset temperature ^2 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_X2_0, 0.0);

/**
 * Magnetometer offset temperature ^2 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_X2_1, 0.0);

/**
 * Magnetometer offset temperature ^2 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_X2_2, 0.0);

/**
 * Magnetometer offset temperature ^1 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_X1_0, 0.0);

/**
 * Magnetometer offset temperature ^1 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_X1_1, 0.0);

/**
 * Magnetometer offset temperature ^1 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_X1_2, 0.0);

/**
 * Magnetometer offset temperature ^0 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_X0_0, 0.0);

/**
 * Magnetometer offset temperature ^0 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_X0_1, 0.0);

/**
 * Magnetometer offset temperature ^0 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_X0_2, 0.0);

/**
 * Magnetometer calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_TREF, 25.0);

/**
 * Magnetometer calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_TMIN, 0.0);

/**
 * Magnetometer calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M0_TMAX, 100.0);

/**
 * ID of Magnetometer that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_M1_ID, 0);

/**
 * Magnetometer offset temperature ^3 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_X3_0, 0.0);

/**
 * Magnetometer offset temperature ^3 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_X3_1, 0.0);

/**
 * Magnetometer offset temperature ^3 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_X3_2, 0.0);

/**
 * Magnetometer offset temperature ^2 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_X2_0, 0.0);

/**
 * Magnetometer offset temperature ^2 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_X2_1, 0.0);

/**
 * Magnetometer offset temperature ^2 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_X2_2, 0.0);

/**
 * Magnetometer offset temperature ^1 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_X1_0, 0.0);

/**
 * Magnetometer offset temperature ^1 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_X1_1, 0.0);

/**
 * Magnetometer offset temperature ^1 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_X1_2, 0.0);

/**
 * Magnetometer offset temperature ^0 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_X0_0, 0.0);

/**
 * Magnetometer offset temperature ^0 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_X0_1, 0.0);

/**
 * Magnetometer offset temperature ^0 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_X0_2, 0.0);

/**
 * Magnetometer calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_TREF, 25.0);

/**
 * Magnetometer calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_TMIN, 0.0);

/**
 * Magnetometer calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M1_TMAX, 100.0);

/**
 * ID of Magnetometer that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_M2_ID, 0);

/**
 * Magnetometer offset temperature ^3 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_X3_0, 0.0);

/**
 * Magnetometer offset temperature ^3 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_X3_1, 0.0);

/**
 * Magnetometer offset temperature ^3 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_X3_2, 0.0);

/**
 * Magnetometer offset temperature ^2 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_X2_0, 0.0);

/**
 * Magnetometer offset temperature ^2 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_X2_1, 0.0);

/**
 * Magnetometer offset temperature ^2 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_X2_2, 0.0);

/**
 * Magnetometer offset temperature ^1 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_X1_0, 0.0);

/**
 * Magnetometer offset temperature ^1 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_X1_1, 0.0);

/**
 * Magnetometer offset temperature ^1 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_X1_2, 0.0);

/**
 * Magnetometer offset temperature ^0 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_X0_0, 0.0);

/**
 * Magnetometer offset temperature ^0 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_X0_1, 0.0);

/**
 * Magnetometer offset temperature ^0 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_X0_2, 0.0);

/**
 * Magnetometer calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_TREF, 25.0);

/**
 * Magnetometer calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_TMIN, 0.0);

/**
 * Magnetometer calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M2_TMAX, 100.0);

/**
 * ID of Magnetometer that the calibration is for
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_INT32(TC_M3_ID, 0);

/**
 * Magnetometer offset temperature ^3 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_X3_0, 0.0);

/**
 * Magnetometer offset temperature ^3 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_X3_1, 0.0);

/**
 * Magnetometer offset temperature ^3 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_X3_2, 0.0);

/**
 * Magnetometer offset temperature ^2 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_X2_0, 0.0);

/**
 * Magnetometer offset temperature ^2 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_X2_1, 0.0);

/**
 * Magnetometer offset temperature ^2 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_X2_2, 0.0);

/**
 * Magnetometer offset temperature ^1 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_X1_0, 0.0);

/**
 * Magnetometer offset temperature ^1 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_X1_1, 0.0);

/**
 * Magnetometer offset temperature ^1 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_X1_2, 0.0);

/**
 * Magnetometer offset temperature ^0 polynomial coefficient - X axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_X0_0, 0.0);

/**
 * Magnetometer offset temperature ^0 polynomial coefficient - Y axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_X0_1, 0.0);

/**
 * Magnetometer offset temperature ^0 polynomial coefficient - Z axis
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_X0_2, 0.0);

/**
 * Magnetometer calibration reference temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_TREF, 25.0);

/**
 * Magnetometer calibration minimum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_TMIN, 0.0);

/**
 * Magnetometer calibration maximum temperature
 *
 * 
 *
 * @group Thermal Compensation
 * @category System
 */
PARAM_DEFINE_FLOAT(TC_M3_TMAX, 100.0);

/**
 * Roll proportional gain
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(UUV_ROLL_P, 4.0);

/**
 * Roll differential gain
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(UUV_ROLL_D, 1.5);

/**
 * Pitch proportional gain
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(UUV_PITCH_P, 4.0);

/**
 * Pitch differential gain
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(UUV_PITCH_D, 2.0);

/**
 * Yawh proportional gain
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(UUV_YAW_P, 4.0);

/**
 * Yaw differential gain
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(UUV_YAW_D, 2.0);

/**
 * Roll gain for manual inputs in attitude control mode
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(UUV_SGM_ROLL, 0.5);

/**
 * Pitch gain for manual inputs in attitude control mode
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(UUV_SGM_PITCH, 0.5);

/**
 * Yaw gain for manual inputs in attitude control mode
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(UUV_SGM_YAW, 0.5);

/**
 * Throttle gain for manual inputs in attitude control mode
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(UUV_SGM_THRTL, 0.1);

/**
 * Roll gain for manual inputs in rate control mode
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(UUV_RGM_ROLL, 100.0);

/**
 * Pitch gain for manual inputs in rate control mode
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(UUV_RGM_PITCH, 100.0);

/**
 * Yaw gain for manual inputs in rate control mode
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(UUV_RGM_YAW, 100.0);

/**
 * Throttle gain for manual inputs in rate control mode
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(UUV_RGM_THRTL, 10.0);

/**
 * Roll gain for manual inputs in manual control mode
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(UUV_MGM_ROLL, 0.05);

/**
 * Pitch gain for manual inputs in manual control mode
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(UUV_MGM_PITCH, 0.05);

/**
 * Yaw gain for manual inputs in manual control mode
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(UUV_MGM_YAW, 0.05);

/**
 * Throttle gain for manual inputs in manual control mode
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 * @min 0.0
 */
PARAM_DEFINE_FLOAT(UUV_MGM_THRTL, 0.1);

/**
 * UUV Torque setpoint Saturation
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(UUV_TORQUE_SAT, 0.3);

/**
 * UUV Thrust setpoint Saturation
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(UUV_THRUST_SAT, 0.1);

/**
 * Maximum time (in seconds) before resetting setpoint
 *
 * 
 *
 * @group UUV Attitude Control
 */
PARAM_DEFINE_FLOAT(UUV_SP_MAX_AGE, 2.0);

/**
 * UUV stick input mode
 *
 * Stick mode selector (0=Heave/sway control, roll/pitch leveled; 1=Pitch/roll control)
 *
 * @group UUV Attitude Control
 * @min 0
 * @max 1
 */
PARAM_DEFINE_INT32(UUV_STICK_MODE, 0);

/**
 * Height proportional gain
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(UUV_HGT_P, 1.0);

/**
 * Height differential gain
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(UUV_HGT_D, 1.0);

/**
 * Height integrational gain
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(UUV_HGT_I, 0.2);

/**
 * sum speed of error for integrational gain
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(UUV_HGT_I_SPD, 1.0);

/**
 * Height change strength from manual input
 *
 * 
 *
 * @group UUV Attitude Control
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(UUV_HGT_STR, 1.0);

/**
 * Max height error from manual input
 *
 * maximum Height distance controlled by manual input. Diff between actual and desired Height cannot be higher than that
 *
 * @group UUV Attitude Control
 * @decimal 2
 */
PARAM_DEFINE_FLOAT(UUV_HGT_MAX_DIFF, 0.3);

/**
 * Height rc-button up
 *
 * 
 *
 * @group UUV Attitude Control
 * @min 0
 * @max 16
 */
PARAM_DEFINE_INT32(UUV_HGT_B_UP, 11);

/**
 * Height rc-button down
 *
 * 
 *
 * @group UUV Attitude Control
 * @min 0
 * @max 16
 */
PARAM_DEFINE_INT32(UUV_HGT_B_DOWN, 12);

/**
 * Gain of P controller X
 *
 * 
 *
 * @group UUV Position Control
 */
PARAM_DEFINE_FLOAT(UUV_GAIN_X_P, 1.0);

/**
 * Gain of P controller Y
 *
 * 
 *
 * @group UUV Position Control
 */
PARAM_DEFINE_FLOAT(UUV_GAIN_Y_P, 1.0);

/**
 * Gain of P controller Z
 *
 * 
 *
 * @group UUV Position Control
 */
PARAM_DEFINE_FLOAT(UUV_GAIN_Z_P, 1.0);

/**
 * Gain of D controller X
 *
 * 
 *
 * @group UUV Position Control
 */
PARAM_DEFINE_FLOAT(UUV_GAIN_X_D, 0.2);

/**
 * Gain of D controller Y
 *
 * 
 *
 * @group UUV Position Control
 */
PARAM_DEFINE_FLOAT(UUV_GAIN_Y_D, 0.2);

/**
 * Gain of D controller Z
 *
 * 
 *
 * @group UUV Position Control
 */
PARAM_DEFINE_FLOAT(UUV_GAIN_Z_D, 0.2);

/**
 * Stabilization mode(1) or Position Control(0)
 *
 * 
 *
 * @group UUV Position Control
 * @value 0 Tracks previous attitude setpoint
 * @value 1 Tracks horizontal attitude (allows yaw change)
 */
PARAM_DEFINE_INT32(UUV_STAB_MODE, 1);

/**
 * Deadband for changing position setpoint
 *
 * 
 *
 * @group UUV Position Control
 */
PARAM_DEFINE_FLOAT(UUV_POS_STICK_DB, 0.1);

/**
 * Gain for position control velocity setpoint update
 *
 * 
 *
 * @group UUV Position Control
 */
PARAM_DEFINE_FLOAT(UUV_PGM_VEL, 0.5);

/**
 * Stabilization mode(1) or Position Control(0)
 *
 * 
 *
 * @group UUV Position Control
 * @value 0 Moves position setpoint in world frame
 * @value 1 Moves position setpoint in body frame
 */
PARAM_DEFINE_INT32(UUV_POS_MODE, 1);

/**
 * uXRCE-DDS domain ID
 *
 * uXRCE-DDS domain ID
 *
 * @group UXRCE-DDS Client
 * @category System
 * @reboot_required True
 */
PARAM_DEFINE_INT32(UXRCE_DDS_DOM_ID, 0);

/**
 * uXRCE-DDS session key
 *
 * uXRCE-DDS key, must be different from zero.
 * In a single agent - multi client configuration, each client
 * must have a unique session key.
 * 
 *
 * @group UXRCE-DDS Client
 * @category System
 * @reboot_required True
 */
PARAM_DEFINE_INT32(UXRCE_DDS_KEY, 1);

/**
 * uXRCE-DDS UDP port
 *
 * If ethernet is enabled and is the selected configuration for uXRCE-DDS,
 * the selected UDP port will be set and used.
 * 
 *
 * @group UXRCE-DDS Client
 * @min 0
 * @max 65535
 * @reboot_required True
 */
PARAM_DEFINE_INT32(UXRCE_DDS_PRT, 8888);

/**
 * uXRCE-DDS Agent IP address
 *
 * If ethernet is enabled and is the selected configuration for uXRCE-DDS,
 * the selected Agent IP address will be set and used.
 * Decimal dot notation is not supported. IP address must be provided
 * in int32 format. For example, 192.168.1.2 is mapped to -1062731518;
 * 127.0.0.1 is mapped to 2130706433.
 * 
 *
 * @group UXRCE-DDS Client
 * @reboot_required True
 */
PARAM_DEFINE_INT32(UXRCE_DDS_AG_IP, 2130706433);

/**
 * uXRCE-DDS participant configuration
 *
 * Set the participant configuration on the Agent's system.
 * 0: Use the default configuration.
 * 1: Restrict messages to localhost
 *    (use in combination with ROS_LOCALHOST_ONLY=1).
 * 2: Use a custom participant with the profile name "px4_participant".
 * 
 *
 * @group UXRCE-DDS Client
 * @value 0 Default
 * @value 1 Localhost-only
 * @value 2 Custom participant
 * @category System
 * @min 0
 * @max 2
 * @reboot_required True
 */
PARAM_DEFINE_INT32(UXRCE_DDS_PTCFG, 0);

/**
 * Enable uXRCE-DDS timestamp synchronization
 *
 * When enabled, uxrce_dds_client will synchronize the timestamps of the incoming and outgoing messages measuring the offset between the Agent OS time and the PX4 time.
 *
 * @group UXRCE-DDS Client
 * @boolean
 * @category System
 * @reboot_required True
 */
PARAM_DEFINE_INT32(UXRCE_DDS_SYNCT, 1);

/**
 * Enable uXRCE-DDS system clock synchronization
 *
 * When enabled along with UXRCE_DDS_SYNCT, uxrce_dds_client will set the system clock using the agents UTC timestamp.
 *
 * @group UXRCE-DDS Client
 * @boolean
 * @category System
 * @reboot_required True
 */
PARAM_DEFINE_INT32(UXRCE_DDS_SYNCC, 0);

/**
 * TX rate timeout configuration
 *
 * Specifies after how many seconds without sending data the DDS connection is reestablished.
 * A value less than one disables the TX rate timeout.
 * 
 *
 * @group UXRCE-DDS Client
 * @category System
 * @unit s
 * @reboot_required True
 */
PARAM_DEFINE_INT32(UXRCE_DDS_TX_TO, 3);

/**
 * RX rate timeout configuration
 *
 * Specifies after how many seconds without receiving data the DDS connection is reestablished.
 * A value less than one disables the RX rate timeout.
 * 
 *
 * @group UXRCE-DDS Client
 * @category System
 * @unit s
 * @reboot_required True
 */
PARAM_DEFINE_INT32(UXRCE_DDS_RX_TO, -1);

/**
 * Define an index-based message namespace
 *
 * Defines an index-based namespace for DDS messages, e.g, uav_0, uav_1, up to uav_9999
 * A value less than zero leaves the namespace empty
 * 
 *
 * @group UXRCE-DDS Client
 * @category System
 * @min -1
 * @max 9999
 * @reboot_required True
 */
PARAM_DEFINE_INT32(UXRCE_DDS_NS_IDX, -1);

/**
 * Enable serial flow control for UXRCE interface
 *
 * This is used to enable flow control for the serial uXRCE instance.
 * Used for reliable high bandwidth communication.
 * 
 *
 * @group UXRCE-DDS Client
 * @boolean
 * @category System
 * @reboot_required True
 */
PARAM_DEFINE_INT32(UXRCE_DDS_FLCTRL, 0);

/**
 * Use fixed-wing actuation in hover to accelerate forward
 *
 * Prevents downforce from pitching the body down when facing wind.
 * Uses puller/pusher (standard VTOL), or forward-tilt (tiltrotor VTOL) to accelerate forward instead.
 * Only active if demanded pitch  is below VT_PITCH_MIN.
 * Use VT_FWD_THRUST_SC to tune it.
 * Descend mode is treated as Landing too.
 * 
 * Only active (if enabled) in height-rate controlled modes.
 *
 * @group VTOL Attitude Control
 * @value 0 Disabled
 * @value 1 Enabled (except LANDING)
 * @value 2 Enabled if above MPC_LAND_ALT1
 * @value 3 Enabled if above MPC_LAND_ALT2
 * @value 4 Enabled constantly
 * @value 5 Enabled if above MPC_LAND_ALT1 (except LANDING)
 * @value 6 Enabled if above MPC_LAND_ALT2 (except LANDING)
 */
PARAM_DEFINE_INT32(VT_FWD_THRUST_EN, 0);

/**
 * Fixed-wing actuation thrust scale in hover
 *
 * Scale applied to the demanded pitch (below VT_PITCH_MIN) to get the fixed-wing forward actuation in hover mode.
 * Enabled via VT_FWD_THRUST_EN.
 *
 * @group VTOL Attitude Control
 * @decimal 2
 * @increment 0.01
 * @min 0.0
 * @max 5.0
 */
PARAM_DEFINE_FLOAT(VT_FWD_THRUST_SC, 0.7);

/**
 * Back transition MC motor ramp up time
 *
 * This sets the duration during which the MC motors ramp up to the commanded thrust during the back transition stage.
 *
 * @group VTOL Attitude Control
 * @decimal 1
 * @increment 0.1
 * @min 0.0
 * @max 20.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(VT_B_TRANS_RAMP, 3.0);

/**
 * Pusher throttle ramp up slew rate
 *
 * Defines the slew rate of the puller/pusher throttle during transitions.
 * Zero will deactivate the slew rate limiting and thus produce an instant throttle
 * rise to the transition throttle VT_F_TRANS_THR.
 *
 * @group VTOL Attitude Control
 * @decimal 2
 * @increment 0.01
 * @min 0
 * @unit 1/s
 */
PARAM_DEFINE_FLOAT(VT_PSHER_SLEW, 0.33);

/**
 * Normalized tilt in Hover
 *
 * 
 *
 * @group VTOL Attitude Control
 * @decimal 3
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(VT_TILT_MC, 0.0);

/**
 * Normalized tilt in transition to FW
 *
 * 
 *
 * @group VTOL Attitude Control
 * @decimal 3
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(VT_TILT_TRANS, 0.4);

/**
 * Normalized tilt in FW
 *
 * 
 *
 * @group VTOL Attitude Control
 * @decimal 3
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(VT_TILT_FW, 1.0);

/**
 * Duration of front transition phase 2
 *
 * Time in seconds it takes to tilt form VT_TILT_TRANS to VT_TILT_FW.
 *
 * @group VTOL Attitude Control
 * @decimal 3
 * @increment 0.01
 * @min 0.1
 * @max 5.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(VT_TRANS_P2_DUR, 0.5);

/**
 * Duration motor tilt up in backtransition
 *
 * Time in seconds it takes to tilt form VT_TILT_FW to VT_TILT_MC.
 *
 * @group VTOL Attitude Control
 * @decimal 1
 * @increment 0.1
 * @min 0.1
 * @max 10
 * @unit s
 */
PARAM_DEFINE_FLOAT(VT_BT_TILT_DUR, 1.0);

/**
 * VTOL Type (Tailsitter=0, Tiltrotor=1, Standard=2)
 *
 * 
 *
 * @group VTOL Attitude Control
 * @value 0 Tailsitter
 * @value 1 Tiltrotor
 * @value 2 Standard
 * @min 0
 * @max 2
 * @reboot_required True
 */
PARAM_DEFINE_INT32(VT_TYPE, 0);

/**
 * Lock control surfaces in hover
 *
 * If set to 1 the control surfaces are locked at the disarmed value in multicopter mode.
 *
 * @group VTOL Attitude Control
 * @boolean
 */
PARAM_DEFINE_INT32(VT_ELEV_MC_LOCK, 1);

/**
 * Duration of a front transition
 *
 * Time in seconds used for a transition
 *
 * @group VTOL Attitude Control
 * @decimal 2
 * @increment 1
 * @min 0.1
 * @max 20.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(VT_F_TRANS_DUR, 5.0);

/**
 * Maximum duration of a back transition
 *
 * Transition is also declared over if the groundspeed drops below MPC_XY_CRUISE.
 *
 * @group VTOL Attitude Control
 * @decimal 2
 * @increment 1
 * @min 0.1
 * @max 20.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(VT_B_TRANS_DUR, 10.0);

/**
 * Target throttle value for the transition to fixed-wing flight
 *
 * 
 *
 * @group VTOL Attitude Control
 * @decimal 3
 * @increment 0.01
 * @min 0.0
 * @max 1.0
 */
PARAM_DEFINE_FLOAT(VT_F_TRANS_THR, 1.0);

/**
 * Approximate deceleration during back transition
 *
 * Used to calculate back transition distance in an auto mode.
 * For standard vtol and tiltrotors a controller is used to track this value during the transition.
 *
 * @group VTOL Attitude Control
 * @decimal 2
 * @increment 0.1
 * @min 0.5
 * @max 10
 * @unit m/s^2
 */
PARAM_DEFINE_FLOAT(VT_B_DEC_MSS, 2.0);

/**
 * Transition blending airspeed
 *
 * Airspeed at which we can start blending both fw and mc controls. Set to 0 to disable.
 *
 * @group VTOL Attitude Control
 * @decimal 2
 * @increment 1
 * @min 0.0
 * @max 30.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(VT_ARSP_BLEND, 8.0);

/**
 * Transition airspeed
 *
 * Airspeed at which we can switch to fw mode
 *
 * @group VTOL Attitude Control
 * @decimal 2
 * @increment 1
 * @min 0.0
 * @max 30.0
 * @unit m/s
 */
PARAM_DEFINE_FLOAT(VT_ARSP_TRANS, 10.0);

/**
 * Front transition timeout
 *
 * Time in seconds after which transition will be cancelled.
 *
 * @group VTOL Attitude Control
 * @decimal 2
 * @increment 1
 * @min 0.1
 * @max 30.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(VT_TRANS_TIMEOUT, 15.0);

/**
 * Front transition minimum time
 *
 * Minimum time in seconds for front transition.
 *
 * @group VTOL Attitude Control
 * @decimal 1
 * @increment 0.1
 * @min 0.0
 * @max 20.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(VT_TRANS_MIN_TM, 2.0);

/**
 * Quad-chute altitude
 *
 * Minimum altitude for fixed-wing flight. When the vehicle is in fixed-wing mode
 * and the altitude drops below this altitude (relative altitude above local origin),
 * it will instantly switch back to MC mode and execute behavior defined in COM_QC_ACT.
 *
 * @group VTOL Attitude Control
 * @decimal 1
 * @increment 1
 * @min 0.0
 * @max 200.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(VT_FW_MIN_ALT, 0.0);

/**
 * Quad-chute uncommanded descent threshold
 *
 * Altitude error threshold for quad-chute triggering during fixed-wing flight.
 * The check is only active if altitude is controlled and the vehicle is below the current altitude reference.
 * The altitude error is relative to the highest altitude the vehicle has achieved since it has flown below the current
 * altitude reference.
 * 
 * Set to 0 do disable.
 *
 * @group VTOL Attitude Control
 * @decimal 1
 * @increment 1
 * @min 0.0
 * @max 200.0
 * @unit m
 */
PARAM_DEFINE_FLOAT(VT_QC_ALT_LOSS, 0.0);

/**
 * Quad-chute transition altitude loss threshold
 *
 * Altitude loss threshold for quad-chute triggering during VTOL transition to fixed-wing flight
 * in altitude-controlled flight modes.
 * Active until 5s after completing transition to fixed-wing.
 * If the current altitude is more than this value below the altitude at the beginning of the
 * transition, it will instantly switch back to MC mode and execute behavior defined in COM_QC_ACT.
 * 
 * Set to 0 do disable this threshold.
 *
 * @group VTOL Attitude Control
 * @decimal 1
 * @increment 1
 * @min 0
 * @max 50
 * @unit m
 */
PARAM_DEFINE_FLOAT(VT_QC_T_ALT_LOSS, 20.0);

/**
 * Quad-chute max pitch threshold
 *
 * Absolute pitch threshold for quad-chute triggering in FW mode.
 * Above this the vehicle will transition back to MC mode and execute behavior defined in COM_QC_ACT.
 * Set to 0 do disable this threshold.
 *
 * @group VTOL Attitude Control
 * @min 0
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_INT32(VT_FW_QC_P, 0);

/**
 * Quad-chute max roll threshold
 *
 * Absolute roll threshold for quad-chute triggering in FW mode.
 * Above this the vehicle will transition back to MC mode and execute behavior defined in COM_QC_ACT.
 * Set to 0 do disable this threshold.
 *
 * @group VTOL Attitude Control
 * @min 0
 * @max 180
 * @unit deg
 */
PARAM_DEFINE_INT32(VT_FW_QC_R, 0);

/**
 * Quad-chute maximum height
 *
 * Maximum height above the ground (if available, otherwise above
 * Home if available, otherwise above the local origin) where triggering a quad-chute is possible.
 * At high altitudes there is a big risk to deplete the battery and therefore crash if quad-chuting there.
 *
 * @group VTOL Attitude Control
 * @increment 1
 * @min 0
 * @unit m
 */
PARAM_DEFINE_INT32(VT_FW_QC_HMAX, 0);

/**
 * Airspeed-less front transition time (open loop)
 *
 * The duration of the front transition when there is no airspeed feedback available.
 * When airspeed is used, transition timeout is declared if airspeed does not
 * reach VT_ARSP_BLEND after this time.
 *
 * @group VTOL Attitude Control
 * @decimal 1
 * @increment 0.5
 * @min 1.0
 * @max 30.0
 * @unit s
 */
PARAM_DEFINE_FLOAT(VT_F_TR_OL_TM, 6.0);

/**
 * Differential thrust in forwards flight
 *
 * Enable differential thrust separately for roll, pitch, yaw in forward (fixed-wing) mode.
 * The effectiveness of differential thrust around the corresponding axis can be
 * tuned by setting VT_FW_DIFTHR_S_R / VT_FW_DIFTHR_S_P / VT_FW_DIFTHR_S_Y.
 *
 * @group VTOL Attitude Control
 * @bit 0 Yaw
 * @bit 1 Roll
 * @bit 2 Pitch
 * @min 0
 * @max 7
 * @min 0
 * @max 7
 */
PARAM_DEFINE_INT32(VT_FW_DIFTHR_EN, 0);

/**
 * Roll differential thrust factor in forward flight
 *
 * Differential thrust in forward flight is enabled via VT_FW_DIFTHR_EN.
 *
 * @group VTOL Attitude Control
 * @decimal 2
 * @increment 0.1
 * @min 0.0
 * @max 2.0
 */
PARAM_DEFINE_FLOAT(VT_FW_DIFTHR_S_R, 1.0);

/**
 * Pitch differential thrust factor in forward flight
 *
 * Differential thrust in forward flight is enabled via VT_FW_DIFTHR_EN.
 *
 * @group VTOL Attitude Control
 * @decimal 2
 * @increment 0.1
 * @min 0.0
 * @max 2.0
 */
PARAM_DEFINE_FLOAT(VT_FW_DIFTHR_S_P, 1.0);

/**
 * Yaw differential thrust factor in forward flight
 *
 * Differential thrust in forward flight is enabled via VT_FW_DIFTHR_EN.
 *
 * @group VTOL Attitude Control
 * @decimal 2
 * @increment 0.1
 * @min 0.0
 * @max 2.0
 */
PARAM_DEFINE_FLOAT(VT_FW_DIFTHR_S_Y, 0.1);

/**
 * Backtransition deceleration setpoint to tilt I gain
 *
 * 
 *
 * @group VTOL Attitude Control
 * @decimal 2
 * @increment 0.05
 * @min 0
 * @max 0.3
 * @unit rad s/m
 */
PARAM_DEFINE_FLOAT(VT_B_DEC_I, 0.1);

/**
 * Minimum pitch angle during hover
 *
 * Any pitch setpoint below this value is translated to a forward force by the fixed-wing forward actuation if
 * VT_FWD_TRHUST_EN is set.
 *
 * @group VTOL Attitude Control
 * @decimal 1
 * @increment 0.1
 * @min -10.0
 * @max 45.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(VT_PITCH_MIN, 0.0);

/**
 * Minimum pitch angle during hover landing
 *
 * Overrides VT_PITCH_MIN when the vehicle is in LAND mode (hovering).
 * During landing it can be beneficial to reduce the pitch angle to reduce the generated lift in head wind.
 *
 * @group VTOL Attitude Control
 * @decimal 1
 * @increment 0.1
 * @min -10.0
 * @max 45.0
 * @unit deg
 */
PARAM_DEFINE_FLOAT(VT_LND_PITCH_MIN, 0.0);

/**
 * Spoiler setting while landing (hover)
 *
 * 
 *
 * @group VTOL Attitude Control
 * @decimal 1
 * @increment 0.1
 * @min -1
 * @max 1
 * @unit norm
 */
PARAM_DEFINE_FLOAT(VT_SPOILER_MC_LD, 0.0);

/**
 * TEST_1
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_INT32(TEST_1, 2);

/**
 * TEST_2
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_INT32(TEST_2, 4);

/**
 * TEST_3
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_FLOAT(TEST_3, 5.0);

/**
 * TEST_RC_X
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_INT32(TEST_RC_X, 8);

/**
 * TEST_RC2_X
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_INT32(TEST_RC2_X, 16);

/**
 * TEST_PARAMS
 *
 * 
 *
 * @group Testing
 */
PARAM_DEFINE_INT32(TEST_PARAMS, 12345678);
