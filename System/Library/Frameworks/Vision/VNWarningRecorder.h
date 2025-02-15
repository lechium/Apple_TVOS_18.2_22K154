//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VNWarningRecorder : NSObject
{
    NSMutableDictionary *_warnings;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002590ee
- (void)recordWarnings:(id)arg1;	// IMP=0x0000000000259094
- (void)setWarnings:(id)arg1;	// IMP=0x0000000000259033
- (_Bool)hasWarnings;	// IMP=0x0000000000259016
- (id)warnings;	// IMP=0x0000000000258ff8
- (id)valueForWarning:(id)arg1;	// IMP=0x0000000000258fd2
- (void)recordWarning:(id)arg1 value:(id)arg2;	// IMP=0x0000000000258b88
- (id)init;	// IMP=0x0000000000258b02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

