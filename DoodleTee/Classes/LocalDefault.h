//
//  LocalDefault.h
//  DoodleTee
//
//  Created by xieyajie on 13-6-27.
//  Copyright (c) 2013年 XD. All rights reserved.
//

#ifndef DoodleTee_LocalDefault_h
#define DoodleTee_LocalDefault_h

#if !defined __IPHONE_OS_VERSION_MIN_REQUIRED >= __IPHONE_5_0
# define KTextAlignmentLeft UITextAlignmentLeft
# define KTextAlignmentCenter UITextAlignmentCenter
# define KTextAlignmentRight UITextAlignmentRight

#else
# define KTextAlignmentLeft NSTextAlignmentLeft
# define KTextAlignmentCenter NSTextAlignmentCenter
# define KTextAlignmentRight NSTextAlignmentRight
#endif

#define kScreenHeight [[UIScreen mainScreen] bounds].size.height

#define kNotificationFinishName @"finishedEffect"

#define KSETTINGPLIST @"setting.plist"
#define kSETTINGBRAND @"品牌"
#define kSETTINGMATERIAL @"材料"
#define kSETTINGCOLOR @"颜色"
#define kSETTINGSIZE @"尺寸"
#define kSETTINGCOUNT @"数量"
#define kSETTINGMONEY @"价格"

#endif
