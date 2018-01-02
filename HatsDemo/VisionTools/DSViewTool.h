//
//  DSViewTool.h
//  HatsDemo
//
//  Created by mosquito on 2018/1/2.
//  Copyright © 2018年 mosquito. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DSDetectData.h"

@interface DSViewTool : NSObject

+ (UIImage *)drawImage:(UIImage *)source observation:(VNFaceObservation *)observation pointArray:(NSArray *)pointArray;

+ (UIView *)getRectViewWithFrame:(CGRect)frame;

@end
