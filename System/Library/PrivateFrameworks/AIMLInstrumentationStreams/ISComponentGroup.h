//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISComponentIdentifier, MISSING_TYPE, NSArray;

@interface ISComponentGroup : NSObject
{
    MISSING_TYPE *eventsInternal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007bad0
- (id)init;	// IMP=0x000000000007ba70
@property(nonatomic, readonly) ISComponentIdentifier *componentIdentifier;
@property(nonatomic, readonly) NSArray *events;
- (id)initWithEventsBridge:(id)arg1;	// IMP=0x000000000007b7d0

@end

