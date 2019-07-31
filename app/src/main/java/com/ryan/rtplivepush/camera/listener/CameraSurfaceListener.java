package com.ryan.rtplivepush.camera.listener;

public interface CameraSurfaceListener {

    void startAutoFocus(float x, float y);

    void openCamera();

    void releaseCamera();

    int changeCamera();
}
