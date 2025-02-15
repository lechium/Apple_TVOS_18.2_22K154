//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSAccountController, NSString;
@protocol GKIDSConnectionManagerDelegate, OS_dispatch_queue;

@interface GKIDSConnectionManager : NSObject
{
    id <GKIDSConnectionManagerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_idsDelegateQueue;	// 16 = 0x10
    IDSAccountController *_gcArcadeAccountController;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00200000000d847a
- (void).cxx_destruct;	// IMP=0x00200000000d8af0
@property(retain, nonatomic) IDSAccountController *gcArcadeAccountController; // @synthesize gcArcadeAccountController=_gcArcadeAccountController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *idsDelegateQueue; // @synthesize idsDelegateQueue=_idsDelegateQueue;
@property(nonatomic) __weak id <GKIDSConnectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;	// IMP=0x00100000000d893f
- (void)fetchIDSDataForHandles:(id)arg1 service:(id)arg2 infoTypes:(unsigned long long)arg3 performingBlockPerBatch:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d8636
- (_Bool)isReady;	// IMP=0x00100000000d85eb
- (void)dealloc;	// IMP=0x00100000000d85a6
- (id)init;	// IMP=0x00100000000d84cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

