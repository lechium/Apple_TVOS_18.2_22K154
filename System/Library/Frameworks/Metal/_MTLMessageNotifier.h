//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLMessageFilter;

__attribute__((visibility("hidden")))
@interface _MTLMessageNotifier : NSObject
{
    MTLMessageFilter *_filter;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
}

@property(readonly) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, retain) MTLMessageFilter *filter; // @synthesize filter=_filter;
- (void)dealloc;	// IMP=0x0000000000152991
- (id)init:(CDUnknownBlockType)arg1 filter:(id)arg2;	// IMP=0x0000000000152927

@end

