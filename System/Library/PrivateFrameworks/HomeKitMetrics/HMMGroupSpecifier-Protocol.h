//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/NSCopying-Protocol.h>
#import <HomeKitMetrics/NSObject-Protocol.h>

@class HMMCoreDataNamedGroup, NSDictionary, NSManagedObjectContext, NSString;

@protocol HMMGroupSpecifier <NSObject, NSCopying>
+ (NSString *)type;
@property(readonly, nonatomic) NSDictionary *descriptor;
- (HMMCoreDataNamedGroup *)coreDataGroupUsingContext:(NSManagedObjectContext *)arg1;
@end

