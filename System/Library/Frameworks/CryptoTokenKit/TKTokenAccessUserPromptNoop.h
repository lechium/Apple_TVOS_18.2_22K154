//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TKTokenAccessUserPromptNoop : NSObject
{
    long long _preflightStatus;	// 8 = 0x8
}

@property(nonatomic) long long preflightStatus; // @synthesize preflightStatus=_preflightStatus;
- (long long)promptUserToEvaluateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026e8f
- (id)initWithPreflightStatus:(long long)arg1;	// IMP=0x0000000000026e52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

