//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, ObjCReplica;

__attribute__((visibility("hidden")))
@interface ObjCFinalizedTimestamp : NSObject
{
    MISSING_TYPE *timestamp;	// 4573708 = 0x45ca0c
}

- (void).cxx_destruct;	// IMP=0x000000000034c560
- (id)init;	// IMP=0x000000000034c500
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000034c300
- (_Bool)isGreaterThanTimestamp:(id)arg1;	// IMP=0x000000000034bee0
- (id)initWithReplica:(id)arg1 counter:(long long)arg2;	// IMP=0x000000000034bd50
@property(nonatomic, readonly) long long counter;
@property(nonatomic, readonly) ObjCReplica *replica;

@end

