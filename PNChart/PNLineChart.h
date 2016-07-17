//
//  PNLineChart.h
//  PNChartDemo
//
//  Created by kevin on 11/7/13.
//  Copyright (c) 2013年 kevinzhow. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "PNChartDelegate.h"
#import "PNGenericChart.h"

@interface PNLineChart : PNGenericChart

/**
 * Draws the chart in an animated fashion.
 */
- (void)strokeChart;

@property (nonatomic, weak) id<PNChartDelegate> delegate;

@property (nonatomic) NSArray *xLabels;
@property (nonatomic) NSArray *yLabels;

/**
 * Array of `LineChartData` objects, one for each line.
 */
@property (nonatomic) NSArray *chartData;

@property (nonatomic) NSMutableArray *pathPoints;
@property (nonatomic) NSMutableArray *xChartLabels;
@property (nonatomic) NSMutableArray *yChartLabels;

@property (nonatomic) CGFloat xLabelWidth;
@property (nonatomic) UIFont *xLabelFont;
@property (nonatomic) UIColor *xLabelColor;
// 是否显示x轴的箭头
@property (nonatomic) BOOL showXAxisArrow;
// 是否显示x轴的刻度点
@property (nonatomic) BOOL showXAxisSeparator;

@property (nonatomic) CGFloat yValueMax;
@property (nonatomic) CGFloat yFixedValueMax;
@property (nonatomic) CGFloat yFixedValueMin;
@property (nonatomic) CGFloat yValueMin;
@property (nonatomic) NSInteger yLabelNum;
@property (nonatomic) CGFloat yLabelHeight;
@property (nonatomic) UIFont *yLabelFont;
@property (nonatomic) UIColor *yLabelColor;
// 是否显示y轴的箭头
@property (nonatomic) BOOL showYAxisArrow;
// 是否显示y轴的刻度点
@property (nonatomic) BOOL showYAxisSeparator;
// 图表本身高，即y轴的高度
@property (nonatomic) CGFloat chartCavanHeight;
// 图表本身宽，即x轴的宽度
@property (nonatomic) CGFloat chartCavanWidth;
// 是否显示y轴的值
@property (nonatomic) BOOL showLabel;
@property (nonatomic) BOOL showGenYLabels;
// 是否显示y轴上的分割线
@property (nonatomic) BOOL showYGridLines;
// y轴分割线是否是虚线
@property (nonatomic) BOOL isYGridLinesDash;
@property (nonatomic) UIColor *yGridLinesColor;
@property (nonatomic) BOOL thousandsSeparator;

// 是否显示x轴的分割线即竖直分割线
@property (nonatomic) BOOL showXGridLines;
@property (nonatomic, strong) UIColor *xGridLinesColor;
@property (nonatomic) CGFloat fixedXIndicatorLine;

@property (nonatomic) CGFloat chartMarginLeft;
@property (nonatomic) CGFloat chartMarginRight;
//@property (nonatomic) CGFloat chartMarginTop;
@property (nonatomic) CGFloat chartMarginBottom;

/**
 * Controls whether to show the coordinate axis. Default is NO.
 */
@property (nonatomic, getter = isShowCoordinateAxis) BOOL showCoordinateAxis;
@property (nonatomic) UIColor *axisColor;
@property (nonatomic) CGFloat axisWidth;

@property (nonatomic, strong) NSString *xUnit;
@property (nonatomic, strong) NSString *yUnit;

/**
 * String formatter for float values in y-axis labels. If not set, defaults to @"%1.f"
 */
@property (nonatomic, strong) NSString *yLabelFormat;

/**
 * Block formatter for custom string in y-axis labels. If not set, defaults to yLabelFormat
 */
@property (nonatomic, copy) NSString* (^yLabelBlockFormatter)(CGFloat);


/**
 * Controls whether to curve the line chart or not
 */
@property (nonatomic) BOOL showSmoothLines;

- (void)setXLabels:(NSArray *)xLabels withWidth:(CGFloat)width;

/**
 * Update Chart Value
 */

- (void)updateChartData:(NSArray *)data;


/**
 *  returns the Legend View, or nil if no chart data is present. 
 *  The origin of the legend frame is 0,0 but you can set it with setFrame:(CGRect)
 *
 *  @param mWidth Maximum width of legend. Height will depend on this and font size
 *
 *  @return UIView of Legend
 */
- (UIView*) getLegendWithMaxWidth:(CGFloat)mWidth;


+ (CGSize)sizeOfString:(NSString *)text withWidth:(float)width font:(UIFont *)font;

+ (CGPoint)midPointBetweenPoint1:(CGPoint)point1 andPoint2:(CGPoint)point2;
+ (CGPoint)controlPointBetweenPoint1:(CGPoint)point1 andPoint2:(CGPoint)point2;

@end
