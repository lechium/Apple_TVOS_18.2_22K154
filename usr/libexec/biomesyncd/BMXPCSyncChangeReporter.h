//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GDXPCCoordinationService;

@interface BMXPCSyncChangeReporter : NSObject
{
    GDXPCCoordinationService *_coordinationService;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000007441
- (_Bool)userDeletesForStreamName:(id)arg1 deviceIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000007364
- (_Bool)streamUpdatedForStreamName:(id)arg1 deviceIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000728a
- (id)streamRemoteIdentifierForStreamName:(id)arg1 deviceIdentifier:(id)arg2;	// IMP=0x001000000000720f
- (id)initWithAccount:(id)arg1;	// IMP=0x001000000000718d
- (id)init;	// IMP=0x0010000000007137

@end

