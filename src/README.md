# README

## Outline

At 30fps we have 33.333ms  between frames to run stabilization before frames will be discarded and output framerate will fall

The stabilization framerate is unrestricted and will run as fast as the input framerate

1000 / 29.9999 = 33.33ms

As latency is one of the primary concerns buffering frams and parallelizing the stabilization tasks is not an option
This method would improve framerate but again signifiganlty increase latency

State estimator method
This methond involves a state estimator that is used to stabilize the realtime video feed while the estimator is updated in a seperate thread at a much loer framerate

another method is to apply the same warp to 2 fsequential frames

    // Here is som inline code
    void stuff(){
    
    printf("Hello World");
    }

# vision_core_4
