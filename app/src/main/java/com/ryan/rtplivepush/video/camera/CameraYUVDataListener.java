package com.ryan.rtplivepush.video.camera;

public interface CameraYUVDataListener {

    void onYUVDataReceiver(byte[] data, int width, int height);
}
