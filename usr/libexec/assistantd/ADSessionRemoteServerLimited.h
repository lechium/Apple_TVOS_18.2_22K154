//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ADSessionRemoteServerLimited
{
}

- (_Bool)_sessionRequiresConnection;	// IMP=0x004000000023c0c9
- (void)_siriConnection:(id)arg1 didEncounterIntermediateError:(id)arg2;	// IMP=0x001000000023bf3a
- (void)_saCommandFailed:(id)arg1;	// IMP=0x001000000023bdcd
- (void)_siriConnection:(id)arg1 siriNetworkConnection:(id)arg2 didEncounterError:(id)arg3 siriCoreAnalysisInfo:(id)arg4 siriNetworkAnalysisInfo:(id)arg5;	// IMP=0x001000000023bb21
- (id)initOnQueue:(id)arg1 withAccount:(id)arg2 languageCode:(id)arg3 connectionMode:(id)arg4 sharedUserIdentifier:(id)arg5 loggingSharedUserIdentifier:(id)arg6 instanceContext:(id)arg7;	// IMP=0x001000000023ba30

@end

