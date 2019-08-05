# README

## Outline

At 30fps we have 33.333ms  between frames to run stabilization before frames will be discarded and output framerate will fall

The stabilization framerate is unrestricted and will run as fast as the input framerate

1000 / 29.9999 = 33.33ms

Tracking framerate needs to be restricted to up to the input framerate otherwise it will run faster wasting cp/gpu.

As latency is one of the primary concerns buffering frams and parallelizing the stabilization tasks is not an option
This method would improve framerate but again signifiganlty increase latency

State estimator method
This methond involves a state estimator that is used to stabilize the realtime video feed while the estimator is updated in a seperate thread at a much loer framerate

another method is to apply the same warp to 2 fsequential frames

    // Here is som inline code
    void stuff(){
    
    printf("Hello World");
    }

## Tricks Done to Reduce Computational load

In the name of processing speed corner detection in not performed on the entire frame because corners detected near the edge of the frame are most likely to not exist in the next frame.

## Stabilization Params

### smoothing_window_size

### fast_threshold

### cnum_pyramid_levels

### opt_flow_win_size

### opt_flow_epsilon;opt_flow_num_iterations

### opt_flow_use_initial_estimate

### homography_ransac_threshold

### homography_method

## Random to dos that donet enven have aplace in the code yet

TODO: allow vision core to fall back to straging cstreamer pipeline without opencv in the middle for minimal latency

This now gives us another operation mode:

1. Full, Capture, Stabilization, color corrections, tracking, writing

2. Stab only, Capture, Stabilization, color corrections, writing.

3. Color only, Capture, color corrections, writing.

4. Writer only, Capture, writer.

5. Pass through, Video feed is kep in gstreamer no processing performed, straight to udp gstreamer pipeline.
