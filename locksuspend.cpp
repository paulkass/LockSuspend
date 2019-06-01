#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int system(const char *command);
int setuid(uid_t uid);

/**
 * Written by Paul Kassianik
 *
 * Utility to lock screen on kde and then suspend the system. Requires the setuid bit set on this executable to permit root execution.
 */
int main() {
    system("qdbus org.freedesktop.ScreenSaver /ScreenSaver Lock");
    setuid(0);
    system("pm-suspend");
    return 0;
}
