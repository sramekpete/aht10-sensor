#pragma once

#include <cstdint>

namespace Aht10 {
    /// <summary>
    /// Status flags representing the current state of the AHT10 sensor.
    /// </summary>
    enum Status : uint8_t
    {
        /// <summary>
        /// No status or default state.
        /// </summary>
        None = 0x00,

        /// <summary>
        /// Sensor is calibrated and ready for operation.
        /// </summary>
        Calibrated = 0x08,

        /// <summary>
        /// Sensor is ready to perform measurements.
        /// </summary>
        Ready = 0x30,

        /// <summary>
        /// Sensor is busy processing a command or measurement.
        /// </summary>
        Busy = 0x80,
    };
}