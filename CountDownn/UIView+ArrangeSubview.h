//
//  UIView+ArrangeSubview.h
//  CountDowN
//
//  Created by mac on 2017/4/21.
//  Copyright © 2017年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Masonry.h"

@interface UIView (ArrangeSubview)
-(void)arrangeSubviewWithSpacingHorizontally:(NSArray*)views;
- (void)arrangeSubviewWithSpacingVertically:(NSArray*)views;
@end
