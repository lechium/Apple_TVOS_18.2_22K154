//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSpeechController, NSString;

@interface ADAudioPowerCoreSpeechProvider : NSObject
{
    unsigned long long _channel;	// 8 = 0x8
    CSSpeechController *_speechController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001aae73
- (void)didEndAccessPower;	// IMP=0x00100000001aae6d
- (_Bool)getAveragePower:(float *)arg1 andPeakPower:(float *)arg2;	// IMP=0x00100000001aade9
- (void)willBeginAccessPower;	// IMP=0x00100000001aadce
- (id)initWithChannel:(unsigned long long)arg1 speechController:(id)arg2;	// IMP=0x00100000001aad57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

