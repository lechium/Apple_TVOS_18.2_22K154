//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MRJSONTransportExternalDevice
{
}

- (_Bool)isPaired;	// IMP=0x00200000000bc952
- (void)_handleSetStateMessage:(id)arg1;	// IMP=0x00100000000bc94c
- (id)_onWorkerQueue_createClientConnectionWithTransport:(id)arg1;	// IMP=0x00100000000bc888

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

