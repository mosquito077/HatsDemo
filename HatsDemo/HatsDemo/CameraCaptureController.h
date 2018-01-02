//
//  CameraCaptureController.h
//  HatsDemo
//
//  Created by mosquito on 2018/1/2.
//  Copyright © 2018年 mosquito. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface CameraCaptureController : UIViewController
{
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_videoDevice;
    AVCaptureDeviceInput *_videoInput;
    AVCaptureVideoDataOutput *_dataOutput;
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;
}

- (instancetype)initWithDetectionType:(DSDetectionType)type;

@end
