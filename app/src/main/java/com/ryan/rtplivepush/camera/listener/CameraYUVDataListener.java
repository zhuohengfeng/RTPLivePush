package com.ryan.rtplivepush.camera.listener;

public interface CameraYUVDataListener {

    void onYUVDataReceiver(byte[] data, int width, int height);
}
