#include "EventLoop.h"

void android_main(android_app* pApplication) {
    packt::EventLoop lEventLoop(pApplication);
    lEventLoop.run();
}