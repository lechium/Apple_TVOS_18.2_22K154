//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TVSSNetworkController;

@interface TVSSVPNMenuItemProvider
{
    TVSSNetworkController *_networkController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003a950
- (id)log;	// IMP=0x001000000003a890
- (id)newMenuItem;	// IMP=0x001000000003a720
- (_Bool)shouldShowMenuItem;	// IMP=0x001000000003a6b0
- (void)networkController:(id)arg1 didChangeNetworkState:(id)arg2;	// IMP=0x001000000003a630
- (void)dealloc;	// IMP=0x001000000003a5b0
- (id)initWithNetworkController:(id)arg1;	// IMP=0x0010000000039fb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

