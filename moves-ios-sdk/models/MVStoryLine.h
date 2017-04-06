//
//  MVStoryLine.h
//  Move-iOS-SDK
//
//  Created by Vito on 13-7-14.
//  Copyright (c) 2013年 vito. All rights reserved.
//

#import "MVBaseDataModel.h"
#import "MVSegment.h"

@interface MVStoryLine : MVBaseDataModel

@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) NSArray<MVSegment *> *segments;
@property (nonatomic, strong) NSArray<MVSummary *> *summaries;
@property (nonatomic) NSInteger caloriesIdle;
@property (nonatomic, readonly) NSInteger dailyCalories;

@end
