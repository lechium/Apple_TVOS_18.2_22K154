//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAudioSessionCoordinationMessageBeginAudioSessionResponse, NSString;

@interface _ADAudioSessionCoordinationMessageBeginAudioSessionResponseMutation : NSObject
{
    ADAudioSessionCoordinationMessageBeginAudioSessionResponse *_base;	// 8 = 0x8
    _mutationFlags_7a087e8a _mutationFlags;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000e245f
- (_Bool)isDirty;	// IMP=0x00100000000e2454
- (id)initWithBase:(id)arg1;	// IMP=0x00100000000e23e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

