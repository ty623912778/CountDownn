//
//  CountDown.h
//  CountDowN
//
//  Created by mac on 2017/4/21.
//  Copyright © 2017年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface CountDown : NSObject
///用NSDate日期倒计时
-(void)countDownWithStratDate:(NSDate *)startDate finishDate:(NSDate *)finishDate completeBlock:(void (^)(NSInteger day,NSInteger hour,NSInteger minute,NSInteger second))completeBlock;
///用时间戳倒计时
-(void)countDownWithStratTimeStamp:(long long)starTimeStamp finishTimeStamp:(long long)finishTimeStamp completeBlock:(void (^)(NSInteger day,NSInteger hour,NSInteger minute,NSInteger second))completeBlock;
///每秒走一次，回调block
-(void)countDownWithPER_SECBlock:(void (^)())PER_SECBlock;
-(void)destoryTimer;
-(NSDate *)dateWithLongLong:(long long)longlongValue;
@end
