//
//  ViewController.m
//  HatsDemo
//
//  Created by mosquito on 2018/1/2.
//  Copyright © 2018年 mosquito. All rights reserved.
//

#import "ViewController.h"
#import "CameraCaptureController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

//将后面页面的横屏转换为竖屏
- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    // 强制竖屏
    if([[UIDevice currentDevice]respondsToSelector:@selector(setOrientation:)]) {
        SEL selector = NSSelectorFromString(@"setOrientation:");
        NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:[UIDevice instanceMethodSignatureForSelector:selector]];
        [invocation setSelector:selector];
        [invocation setTarget:[UIDevice currentDevice]];
        int val = UIInterfaceOrientationPortrait;
        [invocation setArgument:&val atIndex:2];  //前两个参数已被target和selector占用
        [invocation invoke];
    }
}

- (IBAction)faceCaptured:(id)sender {
    CameraCaptureController *captureVC = [[CameraCaptureController alloc] initWithDetectionType:DSDetectionTypeFaceRectangles];
    [self.navigationController pushViewController:captureVC animated:YES];
}


- (IBAction)enterCapture:(id)sender {
    CameraCaptureController *captureVC = [[CameraCaptureController alloc] initWithDetectionType:DSDetectionTypeFaceHat];
    [self.navigationController pushViewController:captureVC animated:YES];
}

@end
