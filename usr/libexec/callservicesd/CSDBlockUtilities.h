//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDBlockUtilities : NSObject
{
    MISSING_TYPE *blocklistUtilities;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0040000000222641
- (id)init;	// IMP=0x00100000002225fd
- (void)reportFailureForReason:(long long)arg1 provider:(id)arg2 callUUID:(id)arg3 actionToFail:(id)arg4;	// IMP=0x00100000002224c0
- (long long)blockCallReasonForHandles:(id)arg1 providerIdentifier:(id)arg2 callDataSource:(id)arg3;	// IMP=0x0010000000222268
- (_Bool)blockListContainsMembers:(id)arg1 providerIdentifier:(id)arg2;	// IMP=0x0010000000222171

@end

