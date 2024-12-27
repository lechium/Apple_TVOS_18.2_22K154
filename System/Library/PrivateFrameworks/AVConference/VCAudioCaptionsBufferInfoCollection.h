//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioCaptionsBufferInfoCollection : NSObject
{
    NSMutableArray *_bufferInfos;	// 8 = 0x8
    double _bufferLength;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateQueue;	// 24 = 0x18
}

@property(readonly, nonatomic) NSArray *streamTokens;
- (id)description;	// IMP=0x00000000002ccdda
- (void)dealloc;	// IMP=0x00000000002ccd6e
- (id)initWithBufferLength:(double)arg1;	// IMP=0x00000000002ccae0

@end

