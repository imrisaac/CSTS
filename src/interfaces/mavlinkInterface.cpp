//
//  interfaceMavlink.cpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#include "mavlinkInterface.hpp"

void MavlinkInterface::processMessage(mavlink_message_t message){

    // Store message sysid and compid.
    // Note this doesn't handle multiple message sources.
    current_messages.sysid = message.sysid;
    current_messages.compid = message.compid;


}