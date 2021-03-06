//
//  OAHistoryHelper.h
//  OsmAnd
//
//  Created by Alexey Kulish on 05/08/15.
//  Copyright (c) 2015 OsmAnd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OAHistoryItem.h"
#import "OAObservable.h"

@interface OAHistoryHelper : NSObject

@property (readonly) OAObservable* historyPointAddObservable;
@property (readonly) OAObservable* historyPointRemoveObservable;
@property (readonly) OAObservable* historyPointsRemoveObservable;

+ (OAHistoryHelper*)sharedInstance;

- (void)addPoint:(OAHistoryItem *)item;
- (void)removePoint:(OAHistoryItem *)item;
- (void)removePoints:(NSArray *)items;

- (NSArray *)getAllPoints;
- (NSArray *)getLastPointsWithLimit:(int)count;
- (NSArray *)getSearchHistoryPoints:(int)count;
- (NSArray *)getPointsHavingKnownType:(int)count;

@end
