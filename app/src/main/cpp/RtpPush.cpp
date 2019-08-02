//
// Created by hengfeng zhuo on 2019-08-01.
//

#include "RtpPush.h"

#include <string.h>
#include "jrtplib3/rtpsession.h"
#include "jrtplib3/rtppacket.h"
#include "jrtplib3/rtpudpv4transmitter.h"
#include "jrtplib3/rtpipv4address.h"
#include "jrtplib3/rtpsessionparams.h"
#include "jrtplib3/rtperrors.h"
#include <netinet/in.h>
#include <arpa/inet.h>
#include "jrtplib3/rtpsourcedata.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

#include <stdlib.h>
#include <unistd.h>
#include <android/log.h>

using namespace jrtplib;

RtpPush::RtpPush() {

}

RtpPush::~RtpPush() {

}

void RtpPush::initRtp() {

    RTPSession session;
    RTPSessionParams sessionparams;
    RTPUDPv4TransmissionParams transparams;
    RTPIPv4Address addr;


}

void RtpPush::sendRtpPackage() {

}
