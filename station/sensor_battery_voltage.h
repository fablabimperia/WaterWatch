/*//////////////////////////////////////////////////////////////////////////////
                    __      __         __
                   /  \    /  \_____ _/  |_  ___________
                   \   \/\/   /\__  \\   __\/ __ \_  __ \
                    \        /  / __ \|  | \  ___/|  | \/
                     \__/\  /  (____  /__|  \___  >__|
                          \/        \/          \/
             __      __         __         .__
            /  \    /  \_____ _/  |_  ____ |  |__   ___________
            \   \/\/   /\__  \\   __\/ ___\|  |  \_/ __ \_  __ \
             \        /  / __ \|  | \  \___|   Y  \  ___/|  | \/
              \__/\  /  (____  /__|  \___  >___|  /\___  >__|
                   \/        \/          \/     \/     \/
                      _______________  ____ .________
                      \_____  \   _  \/_   ||   ____/
                       /  ____/  /_\  \|   ||____  \
                      /       \  \_/   \   |/       \
                      \_______ \_____  /___/______  /
                              \/     \/           \/

  project: WaterWatcher
  author: Andrea Cazzadori (mrwolf.fablabimperia.org)
  license: WTFPL
  file: station/sensor_battery_voltage.h
  modified: 2015/06/02 - 15:51:59
  header created: 2015/06/02 - 16:17:07
________________________________________________________________________________

              DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                    Version 2, December 2004

 Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>

 Everyone is permitted to copy and distribute verbatim or modified
 copies of this license document, and changing it is allowed as long
 as the name is changed.

            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. You just DO WHAT THE FUCK YOU WANT TO.
________________________________________________________________________________

THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESSED OR IMPLIED WARRANTIES,
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE REGENTS
OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; BUSINESS
INTERRUPTION; OR INJURIES, DEATHS OR DAMAGE TO PROPERTIES) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//////////////////////////////////////////////////////////////////////////////*/

#ifndef _B3C895FBD9B4733234E2AF517ED7F71A_AC_SENSOR_BATTERY_VOL_INCLUDED
#define _B3C895FBD9B4733234E2AF517ED7F71A_AC_SENSOR_BATTERY_VOL_INCLUDED

#include "cfg.h"
#include "type.h"

/*
========================================
monostate representing battery voltage "sensor"
battery voltage, conditioned to 5V with a voltage divider
is measured through an analog input
battery voltage is computed against the actual and fixed vcc value
========================================
*/

struct SensorBatteryVoltage
{
    // returns battery id
    static uint32 id( );

    // returns battery type
    static uint32 type( );

    // update
    static void  update( );

    // returns min voltage
    static float vMin( );

    // returns max voltage
    static float vMax( );

    // returns avg voltage
    static float vAvg( );

    // returns charge left
    static int   chargeLeft( );

    // returns time left (recompute charge left)
    static int   timeLeft( );

    // returns time left (given charge left)
    static int   timeLeft( int charge_left_percentage );

    // reset the serie
    static void reset( );

};

#endif // end of #ifndef _B3C895FBD9B4733234E2AF517ED7F71A_AC_SENSOR_BATTER...
