//
// Created by Jörg Polakowski on 14/12/13.
// Copyright (c) 2013 kevinzhow. All rights reserved.
//

#import "PNLineChartDataItem.h"

@interface PNLineChartDataItem ()

- (id)initWithY:(CGFloat)y andRawY:(CGFloat)rawY;

@property (readwrite) CGFloat y;    // should be within the y range
@property (readwrite) CGFloat rawY; // this is the raw value, used for point label.

@property (readwrite) CGFloat x;

@end

@implementation PNLineChartDataItem

+ (PNLineChartDataItem *)dataItemWithX:(CGFloat)x
{
    return [[PNLineChartDataItem alloc] initWithX:x];
}

+ (PNLineChartDataItem *)dataItemWithY:(CGFloat)y
{
    return [[PNLineChartDataItem alloc] initWithY:y andRawY:y];
}

+ (PNLineChartDataItem *)dataItemWithY:(CGFloat)y andRawY:(CGFloat)rawY {
    return [[PNLineChartDataItem alloc] initWithY:y andRawY:rawY];
}

+ (PNLineChartDataItem *)dateItemWithMinY:(CGFloat)minY
                                  andMaxY:(CGFloat)maxY
                                     andX:(CGFloat)x
{
    return [[PNLineChartDataItem alloc] initWithMinY:minY andMaxY:maxY andX:x];
}

- (id)initWithY:(CGFloat)y andRawY:(CGFloat)rawY
{
    if ((self = [super init])) {
        self.y = y;
        self.rawY = rawY;
    }

    return self;
}

- (instancetype)initWithMinY:(CGFloat)minY andMaxY:(CGFloat)maxY andX:(CGFloat)x
{
    self = [super init];
    
    if (self) {
        self.minY = minY;
        self.maxY = maxY;
        self.rangeX = x;
    }
    
    return self;
}

- (id)initWithX:(CGFloat)x
{
    if ((self = [super init])) {
        self.x = x;
    }
    
    return self;
}


@end
