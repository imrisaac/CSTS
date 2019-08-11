
#ifndef common_h
#define common_h

// workaround for no add_compile_definitions before cmake 3.12
#ifndef MAC
    #define JETSON
    #define WITH_CUDA
    //#define HAVE_DISPLAY		// remove this before deployment
#endif

#endif /* common.h  */
