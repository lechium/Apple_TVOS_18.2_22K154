//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObservationTransformer.h"

__attribute__((visibility("hidden")))
@interface NSMapObservationTransformer : NSObservationTransformer
{
    id _block;	// 40 = 0x28
    int _tag;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x000000000080060f
- (void)_receiveBox:(id)arg1;	// IMP=0x0000000000800504
- (id)initWithBlock:(id)arg1 tag:(int)arg2;	// IMP=0x0000000000800472

@end

