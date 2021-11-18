#include <stdio.h>
int main() {

    int the_sky_is_blue = 1;
    int the_sun_is_shining = 1;
    int is_today_a_nice_day = the_sky_is_blue && the_sun_is_shining;
    printf("Is today a nice day? %i\n", is_today_a_nice_day);

    the_sky_is_blue = 0;
    the_sun_is_shining = 1;
    is_today_a_nice_day = the_sky_is_blue && the_sun_is_shining;
    int is_today_a_ok_day = the_sky_is_blue || the_sun_is_shining;
    printf("Is today a nice day? %i\n", is_today_a_nice_day);
    printf("Is today a ok day? %i\n", is_today_a_ok_day);

    return 0;
}
