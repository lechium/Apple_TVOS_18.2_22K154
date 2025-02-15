//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSError, NSOperation, TVHKMediaLibraryRequestSession, TVHKMediaLibrarySessionState, TVHKMediaServerIdentifier;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryConnectOperation : TVHKAsynchronousOperation
{
    TVHKMediaLibrarySessionState *_sessionState;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    TVHKMediaServerIdentifier *_mediaServerIdentifier;	// 24 = 0x18
    TVHKMediaLibraryRequestSession *_requestSession;	// 32 = 0x20
    NSOperation *_currentSubOperation;	// 40 = 0x28
    TVHKMediaLibrarySessionState *_sessionStateInternal;	// 48 = 0x30
}

+ (id)new;	// IMP=0x006000000004b469
- (void).cxx_destruct;	// IMP=0x000000000004d736
@property(retain, nonatomic) TVHKMediaLibrarySessionState *sessionStateInternal; // @synthesize sessionStateInternal=_sessionStateInternal;
@property(retain, nonatomic) NSOperation *currentSubOperation; // @synthesize currentSubOperation=_currentSubOperation;
@property(retain, nonatomic) TVHKMediaLibraryRequestSession *requestSession; // @synthesize requestSession=_requestSession;
@property(retain, nonatomic) TVHKMediaServerIdentifier *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TVHKMediaLibrarySessionState *sessionState; // @synthesize sessionState=_sessionState;
- (void)_finishConnectAttemptWithSuccess:(_Bool)arg1;	// IMP=0x000000000004d5eb
- (void)_startSubOperation:(id)arg1;	// IMP=0x000000000004d599
- (void)_startDPAPRevisionOperation;	// IMP=0x000000000004d2f5
- (void)_startDPAPBasePlaylistOperation;	// IMP=0x000000000004d07f
- (void)_startDPAPDatabasesOperation;	// IMP=0x000000000004cdd7
- (void)_startDAAPRevisionOperation;	// IMP=0x000000000004cad9
- (void)_startDAAPBasePlaylistOperation;	// IMP=0x000000000004c824
- (void)_startDAAPDatabasesOperation;	// IMP=0x000000000004c52f
- (void)_startMachineVerifyOperation;	// IMP=0x000000000004c2a7
- (void)_startHomeShareVerifyOperation;	// IMP=0x000000000004c00e
- (void)_startFairPlaySAPSetupOperation;	// IMP=0x000000000004bd0f
- (void)_startLoginOperation;	// IMP=0x000000000004ba7b
- (void)_startServerInfoOperation;	// IMP=0x000000000004b6bc
- (void)cancel;	// IMP=0x000000000004b63e
- (void)executionDidBegin;	// IMP=0x000000000004b62c
- (id)initWithMediaServerIdentifier:(id)arg1 accessMode:(unsigned long long)arg2 homeSharingGroupIdentifier:(id)arg3 requestSession:(id)arg4;	// IMP=0x000000000004b507
- (id)init;	// IMP=0x000000000004b498

@end

