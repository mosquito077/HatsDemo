//
//  UIImage+ImageColor.h
//  HatsDemo
//
//  Created by mosquito on 2018/1/2.
//  Copyright © 2018年 mosquito. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageColor)

+ (UIImage*)imageWithColor:(UIColor*)color size:(CGSize)size;
+ (UIImage *)imageFromColor:(UIColor *)color;
- (UIImage *)scaleImage:(CGFloat)width;

@end
