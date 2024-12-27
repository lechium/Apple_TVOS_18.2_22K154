//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PBMRSupportedCommandsTransaction
{
    NSArray *_supportedCommands;	// 8 = 0x8
    void *_playerPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000794e1
@property(readonly, nonatomic) void *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) NSArray *supportedCommands; // @synthesize supportedCommands=_supportedCommands;
- (void)_receiveSupportedCommands:(id)arg1 error:(id)arg2;	// IMP=0x0010000000079426
- (_Bool)shouldWatchdog:(id *)arg1;	// IMP=0x001000000007941e
- (void)_begin;	// IMP=0x001000000007927d
- (_Bool)_canBeInterrupted;	// IMP=0x0010000000079275
- (void)dealloc;	// IMP=0x0010000000079234
- (id)initWithPlayerPath:(void *)arg1;	// IMP=0x00100000000791d4
- (id)initWithClient:(id)arg1 playerPath:(void *)arg2;	// IMP=0x001000000007914d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

