//
// Created by Jörg Polakowski on 14/12/13.
// Copyright (c) 2013 kevinzhow. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PNLineChartDataItem : NSObject

+ (PNLineChartDataItem *)dataItemWithY:(CGFloat)y;
+ (PNLineChartDataItem *)dataItemWithY:(CGFloat)y andRawY:(CGFloat)rawY;

+ (PNLineChartDataItem *)dateItemWithMinY:(CGFloat)minY
                                  andMaxY:(CGFloat)maxY;

@property (readonly) CGFloat y; // should be within the y range
@property (readonly) CGFloat rawY; // this is the raw value, used for point label.

// 表示取值范围的最小和最大值
@property (nonatomic) CGFloat minY;
@property (nonatomic) CGFloat maxY;

@end
