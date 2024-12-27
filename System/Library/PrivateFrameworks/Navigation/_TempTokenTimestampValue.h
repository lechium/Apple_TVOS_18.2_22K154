//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface _TempTokenTimestampValue : NSObject
{
    double _timeStamp;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
    NSString *_formatPattern;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000024b2e
@property(retain, nonatomic) NSString *formatPattern; // @synthesize formatPattern=_formatPattern;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000024a53
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002495b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

