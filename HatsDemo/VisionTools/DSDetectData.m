//
//  DSDetectData.m
//  HatsDemo
//
//  Created by mosquito on 2018/1/2.
//  Copyright © 2018年 mosquito. All rights reserved.
//

#import "DSDetectData.h"

@implementation DSDetectFaceData
- (NSMutableArray *)allPoints
{
    if (!_allPoints) {
        _allPoints = @[].mutableCopy;
    }
    return _allPoints;
}
@end

@implementation DSDetectData

- (NSMutableArray *)textAllRect{
    if (!_textAllRect) {
        _textAllRect = @[].mutableCopy;
    }
    return _textAllRect;
}
- (NSMutableArray *)faceAllRect
{
    if (!_faceAllRect) {
        _faceAllRect = @[].mutableCopy;
    }
    return _faceAllRect;
}

- (NSMutableArray *)facePoints{
    if (!_facePoints) {
        _facePoints = @[].mutableCopy;
    }
    return _facePoints;
}

@end
