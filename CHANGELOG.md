# TAC(Tegra Application Code) Change Log

## 0.1.0.1 / 18 Aug 2019

- fix serialnum file path
- reverted isp_overrides file however this may have been unnecessary

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
