//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CCSerializedSetMessage, NSArray;

__attribute__((visibility("hidden")))
@interface CCSerializedSetChangeEnumerator : NSObject
{
    CCSerializedSetMessage *_setMessage;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    unsigned long long _index;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000034df
- (_Bool)isBookmarkUpToDate:(id)arg1;	// IMP=0x0000000000003428
- (id)itemInstanceCount:(id *)arg1;	// IMP=0x00000000000033f0
- (id)sharedItemCount:(id *)arg1;	// IMP=0x00000000000033b8
- (id)nextBookmark;	// IMP=0x0000000000003398
- (id)next;	// IMP=0x0000000000003300
- (id)_nextWithError:(id *)arg1;	// IMP=0x0000000000002bbc
- (_Bool)hasNext;	// IMP=0x0000000000002b91
- (_Bool)reset:(id *)arg1;	// IMP=0x0000000000002b81
- (_Bool)beginWithBookmark:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000029b1
- (id)initWithSetMessage:(id)arg1;	// IMP=0x000000000000291f

@end

