//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MISharedAppNotificationManager : NSObject
{
}

+ (id)instanceForCurrentUser;	// IMP=0x00400000000304ba
- (_Bool)clearPendingUpdates:(id)arg1 error:(id *)arg2;	// IMP=0x004000000003064c
- (id)updatedAppsWithError:(id *)arg1;	// IMP=0x00100000000305e1
- (_Bool)markAppAsUpdatedForOtherUsers:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000030576
- (id)init;	// IMP=0x0010000000030547

@end

