//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagementModel/RMModelManagementTestCommandCommand.h>

@class NSString;

@interface RMModelManagementTestCommandCommand (RMAdditions)
- (_Bool)rm_requestExecutesWithoutReturning;	// IMP=0x0020000000067456
- (void)rm_executeRequestOnBehalfOfManagementChannel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006724d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

