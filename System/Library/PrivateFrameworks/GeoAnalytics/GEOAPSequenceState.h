//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOAPSequenceState : NSObject
{
    _Bool _finished;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    double _timeout;	// 24 = 0x18
    int _emitType;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSMutableArray *_admissionPairs;	// 48 = 0x30
    NSMutableArray *_rejectionPairs;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000cee28

@end

