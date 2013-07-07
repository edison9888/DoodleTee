//
//  XDShareMethods.h
//  DoodleTee
//
//  Created by xie yajie on 13-7-7.
//  Copyright (c) 2013年 XD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XDShareMethods : NSObject

+ (id)defaultShare;


- (CGRect)effectViewFrameWithSuperView:(UIView *)view;

- (UIImage *)composeImage:(UIImage *)subImage toImage:(UIImage *)superImage finishToView:(UIView *)view;

@end
