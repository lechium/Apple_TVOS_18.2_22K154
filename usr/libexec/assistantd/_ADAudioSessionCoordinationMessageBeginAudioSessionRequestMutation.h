//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAudioSessionCoordinationMessageBeginAudioSessionRequest, NSDate, NSString;

@interface _ADAudioSessionCoordinationMessageBeginAudioSessionRequestMutation : NSObject
{
    ADAudioSessionCoordinationMessageBeginAudioSessionRequest *_base;	// 8 = 0x8
    NSDate *_effectiveDate;	// 16 = 0x10
    double _expirationDuration;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasEffectiveDate:1;
        unsigned int hasExpirationDuration:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000025d1a4
- (void)setExpirationDuration:(double)arg1;	// IMP=0x001000000025d195
- (double)getExpirationDuration;	// IMP=0x001000000025d172
- (void)setEffectiveDate:(id)arg1;	// IMP=0x001000000025d152
- (id)getEffectiveDate;	// IMP=0x001000000025d11a
- (_Bool)isDirty;	// IMP=0x001000000025d10f
- (id)initWithBase:(id)arg1;	// IMP=0x001000000025d0a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

