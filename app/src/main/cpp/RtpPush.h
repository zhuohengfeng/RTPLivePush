//
// Created by hengfeng zhuo on 2019-08-01.
//

#ifndef RTPLIVEPUSH_RTPPUSH_H
#define RTPLIVEPUSH_RTPPUSH_H


class RtpPush {

public:
    RtpPush();
    virtual ~RtpPush();

public:
    void initRtp();
    void sendRtpPackage();

};


#endif //RTPLIVEPUSH_RTPPUSH_H
