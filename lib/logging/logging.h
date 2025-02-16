// ######################################################################################
// ### MuMo node : https://github.com/Strooom/MuMo-v2-Node-SW                         ###
// ### Author : Pascal Roobrouck - https://github.com/Strooom                         ###
// ### License : CC 4.0 BY-NC-SA - https://creativecommons.org/licenses/by-nc-sa/4.0/ ###
// ######################################################################################

#pragma once
#include <stdint.h>
#include <stdarg.h>        // required so we can define functions with variable number of arguments

class logging {
  public:
    static void detectDebugProbe();                      // check if a debug probe is connected by reading the DBGMCU_CR register
    static bool isDebugProbePresent();                   // return true if a debug probe is connected
    static constexpr uint32_t bufferLength{1024};        //
    static void snprintf(const char *format, ...);

  private:
    static char buffer[bufferLength];        // Transmit buffer
    static bool debugProbePresent;           // remembers if we detected a debug probe present or not.
};
