//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIObjectCompat;

@interface DedupeElementCompat : NSObject
{
    MISSING_TYPE *uiObject;	// 8 = 0x8
    MISSING_TYPE *isDuplicate;	// 16 = 0x10
    MISSING_TYPE *screenID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002dde0
- (id)init;	// IMP=0x000000000002dd90
- (id)initWithUiObject:(id)arg1 isDuplicate:(_Bool)arg2 screenID:(id)arg3;	// IMP=0x000000000002dca0
@property(nonatomic) _Bool isDuplicate; // @synthesize isDuplicate;
@property(nonatomic, readonly) UIObjectCompat *uiObject; // @synthesize uiObject;

@end

