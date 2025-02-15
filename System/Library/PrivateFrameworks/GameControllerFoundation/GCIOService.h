//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface GCIOService
{
}

+ (id)addMatchingNotification:(id)arg1 type:(const char *)arg2 matching:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002117d
- (struct IOCFPlugInInterfaceStruct **)createCFPlugInInterface:(struct __CFUUID *)arg1 score:(int *)arg2 error:(id *)arg3;	// IMP=0x00000000000219ac
- (id)addInterestNotification:(id)arg1 type:(const char *)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000216ee
- (id)initWithPort:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x000000000002100f

// Remaining properties
@property(readonly) NSString *className;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long registryEntryID;
@property(readonly) Class superclass;

@end

