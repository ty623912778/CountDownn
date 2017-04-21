//
//  CountDownCell.h
//  CountDowN
//
//  Created by mac on 2017/4/21.
//  Copyright © 2017年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CountDownCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *titleIV;
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (weak, nonatomic) IBOutlet UILabel *countDownLabel;
@end
