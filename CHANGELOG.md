# VCSTS(Video Capture Stabilization and Streaming) Change Log

## 0.1.2.0 / 24 Aug 2019

- Added temp monitiring of BCPU, MCPU and GPU
    - these are averaged and reported in video overlay
    - Vales are from on-die temp sensors near each cpu cluster and near the gpu
- Fix bug causing serial read to block thread close
- Moved ISP and VI clock up into system init.

## 0.1.1.2 / 23 Aug 2019

- reverted clock change

## 0.1.1.1 / 23 Aug 2019

- special version for Steve
- does not bump clocks of ISP or VI

## 0.1.1.0 / 22 Aug 2019

- fix serialnum file path
- isp adnd vi clocks set to max, 
    - this seems to improve csi stability and reduce isp errors. 
- changes to gstreamer writer pipeline: 
    - appsrc ! timeoverlay halign=left valign=bottom ! videoconvert n-threads=3 ! omxh265enc bitrate=1200000 control_rate=2 low-latency=true EnableTwopassCBR=true ! mpegtsmux alignment=7 ! udpsink host=192.168.0.255 port=49410 sync=false async=false 
- new runtime counter calculated internally, now runs at correct speed with matching font
- tx rate over eth0 is displayed in overlay in Kbits/sec 
- added basic Doxygen config file for auto docs
- added backend for internal handeling of kernel module insert, not yet implemented
- added backend for writing i2c internally, not yet implemented
- added tcp handler to interfaces


## 0.1.0.0 / 17 Aug 2019

- First release of VPU application code.
- Contains basic ISP color corrections for EO camera
  - mostly fixes hazieness color reproduction is still incorrect
- Initial Mavlink Library integration
  - Camera Output switching enabled
  - Basic Zoom messaging implemented
  - Currently no state feedback is done by the vpu, some feedback is done by the dsam but this is tmeporary, no feedback is sent for zoomlevels
- Flight unit serial number displayed in IR camera overlay for debug.
- EO is always the output mode at boot
- Still utilizing single camera mode for reliability reasons.
- Current zoom implmentation will most likely result in unusable ISR video due to the extremly high zoom levels.  

## 0.0.0.0 / 17 Aug 2019

- added a changelog
