//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSUTunTimingEventKernelTest : NSObject
{
    double _timestamp;	// 8 = 0x8
    double _kernelTime;	// 16 = 0x10
    long long _bytes;	// 24 = 0x18
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)appendToString:(id)arg1;	// IMP=0x00100000003ca9bb
- (id)initWithTimestamp:(double)arg1 kernelTime:(double)arg2 bytes:(long long)arg3;	// IMP=0x00100000003ca960

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

