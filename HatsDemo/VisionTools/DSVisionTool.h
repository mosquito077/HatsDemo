//
//  DSVisionTool.h
//  HatsDemo
//
//  Created by mosquito on 2018/1/2.
//  Copyright © 2018年 mosquito. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "DSDetectData.h"
#import "DSViewTool.h"

typedef void(^detectImageHandler)(DSDetectData * __nullable detectData);

typedef NS_ENUM(NSUInteger,DSDetectionType) {
    DSDetectionTypeFace,            // 人脸识别
    DSDetectionTypeLandmark,        // 特征识别
    DSDetectionTypeTextRectangles,  // 文字识别
    DSDetectionTypeFaceHat,
    DSDetectionTypeFaceRectangles
};

@interface DSVisionTool : NSObject

// 转换坐标与大小
+ (CGRect)convertRect:(CGRect)oldRect imageSize:(CGSize)imageSize;

// 识别图片
+ (void)detectImageWithType:(DSDetectionType)type image:(UIImage *_Nullable)image complete:(detectImageHandler _Nullable )complete;

@end
