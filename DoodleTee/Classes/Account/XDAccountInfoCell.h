//
//  XDAccountInfoCell.h
//  DoodleTee
//
//  Created by xie yajie on 13-7-4.
//  Copyright (c) 2013年 XD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XDAccountInfoCell : UITableViewCell
{
    //for basic info
    UILabel *_nameLabel;
    UILabel *_achieveLabel;
    UILabel *_balanceLabel;
}

@property (nonatomic, strong) UILabel *nameLabel;
@property (nonatomic, strong) UILabel *achieveLabel;
@property (nonatomic, strong) UILabel *balanceLabel;

- (void)cellForBasicInfo;

- (void)cellForLineChart;

@end
