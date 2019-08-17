# TAC(Tegra Application Code) Change Log

## 0.1.0.0 / 17 Aug 2019

- First release of VPU application code.
- Glass to glass latency has increased to approx 300ms unfortunatly
  - h265 seems to be responsible for this
  - all else equal changing to 
- Contains basic ISP color corrections for EO camera
  - mostly fixes hazieness color reproduction is still incorrect
- Initial Mavlink Library integration
  - Camera Output switching enabled
  - Basic Zoom functionality
  - Currently no state feedback to system is done by the VPU
  -  Mavlink Hearbeat monitoring, displayed in IR camera overlay for debug 
- Flight unit serial number displayed in IR camera overlay for debug.
- EO is the default boot output mode
- Still utilizing single camera mode for reliability reasons.  

## 0.0.0.0 / 17 Aug 2019

- added a changelog
