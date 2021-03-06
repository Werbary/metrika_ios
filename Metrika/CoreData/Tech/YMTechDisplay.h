//
// Created by Dmitry Korotchenkov on 25/02/14.
// Copyright (c) 2014 Progress Engine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMAbstractChildEntity.h"
#import "YMStandardStatDataSource.h"


@interface YMTechDisplay : YMAbstractChildEntity <YMStandardStatObject>

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSNumber *visits;
@property (nonatomic, strong) NSNumber *pageViews;

@property (nonatomic, strong) NSNumber *denial;
@property (nonatomic, strong) NSNumber *depth;
@property (nonatomic, strong) NSNumber *visitTime;

@end