//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSSet, NSString;

@protocol HKComparisonFilter <NSObject>
+ (id)filterForKeyPath:(NSString *)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(NSSet *)arg4;
+ (id)filterForKeyPath:(NSString *)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(NSSet *)arg4 isSubpredicate:(_Bool)arg5;
@end

