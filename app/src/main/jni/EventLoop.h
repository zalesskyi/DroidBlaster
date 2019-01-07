//
// Created by Алексей on 07.01.2019.
//

#ifndef DROIDBLASTER_EVENTLOOP_H
#define DROIDBLASTER_EVENTLOOP_H

#include <android_native_app_glue.h>

namespace packt {
    class EventLoop {
    private:
        android_app* mApplication;
    public:
        EventLoop(android_app* pApplication);

        void run();
    };
}

#endif //DROIDBLASTER_EVENTLOOP_H
