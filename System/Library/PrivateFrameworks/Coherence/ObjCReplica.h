//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSUUID;

__attribute__((visibility("hidden")))
@interface ObjCReplica : NSObject
{
    MISSING_TYPE *uuid;	// 0 = 0x0
    MISSING_TYPE *index;	// 4491304 = 0x448828
}

- (void).cxx_destruct;	// IMP=0x0000000000162d50
- (id)init;	// IMP=0x0000000000162d00
- (id)initWithUuid:(id)arg1 index:(long long)arg2;	// IMP=0x0000000000162c50
@property(nonatomic) long long index; // @synthesize index;
@property(nonatomic, copy) NSUUID *uuid;

@end

