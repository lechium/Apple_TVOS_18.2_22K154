//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPRemoteCommandStatus.h>

@class NSString;

@interface MPRemoteCommandStatus (MPCPlaybackEngineEventPayload)
+ (id)payloadValueFromJSONValue:(id)arg1;	// IMP=0x00100000002ec72f
- (id)mpc_jsonValue;	// IMP=0x00100000002e9905

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

